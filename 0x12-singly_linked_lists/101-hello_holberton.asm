
section .text
  global main

main:
  mov	edx, len
	mov	ecx, msg
	mov 	ebx, 1
	mov	eax, 4
	int	0x80

	mov	eax, 1 
	int	0x80		    

section .data
msg db 'Hello, Coding', 0xa	    ;message to print
len equ $ - msg			          ;length of the string
