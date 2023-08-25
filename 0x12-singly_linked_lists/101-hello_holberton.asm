section		.txt
	extern	printf
	global	main

main:
	mov		edi, req
	mov		eax, 0
	call	printf


section		.data
	req db 'Hello, Holberton', 0xa, 0
