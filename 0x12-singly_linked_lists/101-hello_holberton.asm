; Declare needed C functions
extern printf ; the C function printf
section .data ; Declare needed data
msg: db "Hello, Holberton", 0; the string to be printed
fmt: db "%s", 10, 0; the format string for printf
section .text ; Declare the code section
global main ; Declare the main function
main: ; our main function
push rbp ; save the frame pointer
mov rdi,fmt
mov rsi,msg
mov rax,0
call printf ; call the C function printf
pop rbp ; restore the frame pointer
mov rax,0 ; set the return value to 0
ret ; return to caller
end main
