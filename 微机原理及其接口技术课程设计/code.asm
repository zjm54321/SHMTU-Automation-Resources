DATA SEGMENT
    ADDR55 EQU 0276H     ; 8255A地址
    PA8255 EQU 0270H     ; 8255PA口地址
    PB8255 EQU 0272H     ; 8255PB口地址

    ADDR53 EQU 0266H     ; 8253地址
    ADD532 EQU 0264H     ; 8253计数器2地址
    
    CLCK53 EQU 10D     ; 8253 计数器2时钟频率
DATA ENDS

key MACRO keycode, freq
    MOV DI, (CLCK53/freq)
    CMP AL, keycode
    JZ EXEC
ENDM

CODE SEGMENT 
    ASSUME CS:CODE, DS:DATA

START:   
    MOV [bx],[1200h]
    MOV AX, DATA
    MOV DS, AX

    ; 配置8255A模式，向控制端口写入控制字
    MOV DX, ADDR55
    MOV AL, 10000010B ; 设置8255A为模式0，PA口为输出，PB口为输入
    OUT DX, AL

PROG:
    ; 将所有PA输出置高电平
    MOV DX,PA8255
    MOV AL,0FFH
    OUT DX,AL

    KEYTEST:
        ; PB口键盘读取
        MOV DX, PB8255
        IN  AL, DX

        key 0FEH, 262   ; 检测键1，设置音调频率262Hz
        key 0FDH, 294   ; 检测键2，设置音调频率294Hz
        key 0FBH, 330   ; 检测键3，设置音调频率330Hz
        key 0F7H, 349   ; 检测键4，设置音调频率349Hz
        key 0EFH, 392   ; 检测键5，设置音调频率392Hz
        key 0DFH, 440   ; 检测键6，设置音调频率440Hz
        key 0BFH, 492   ; 检测键7，设置音调频率492Hz
    JMP KEYTEST ; 如果没有按下任何键，继续检测

    EXEC:
        ; 让PA口显示按下的按键
        MOV DX, PA8255
        OUT DX, AL
        ; 设置8253 控制器
        MOV DX, ADDR53
        MOV AL, 10110110B   ; 设置8253A的控制字，模式3（方波生成）
        OUT DX, AL
        ; 设置计数器2的值（频率）

        MOV DX, ADD532
        MOV AX, DI
        AND AX,0FFFFH       
        OUT DX, AX

        ; 等待按键松开
        MOV DX, PB8255
        WAITING:
            IN AL, DX
            CMP AL, 0FFH
        JNZ WAITING

        ; 如果按键松开，停止音调输出

        ; 停止8253音调输出
        MOV DX, ADDR53
        MOV AL, 10110001B   ; 设置8253A的控制字，模式0（计数器停止）
        OUT DX, AL
        ; 将停止值写入计数器2
        MOV AX, 0FFH  
        MOV DX, ADD532
        OUT DX, AL
        OUT DX, AL

    JMP PROG         ; 返回键盘检测循环
CODE ENDS
    END START
