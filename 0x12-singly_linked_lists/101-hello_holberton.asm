section .data
msg:
	db "Hello, Holberton", 10, 0
fmt:
	db "%s", 10, 0
section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 17
	syscall
	;return (0)
	mov rax, 60
	syscall
