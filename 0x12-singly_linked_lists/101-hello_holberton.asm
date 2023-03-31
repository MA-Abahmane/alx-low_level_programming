section .data

   section .text
   global main
   extern printf

main:
   push rbp
   mov rbp, rsp

   mov rsi, db "Hello, Holberton",10,0
   mov rdi, db "%s",0
   call printf

   pop rbp
   mov rax, 0
   ret
