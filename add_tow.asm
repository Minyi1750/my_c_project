; Name: add_two.asm
; Purpose: 两数相加
; Author: Kip Irvine
; Create Time: 2020.11.15 11.16
; Book Name: Assemble Language for x86 processors
; Page: 65

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode: DWORD

.data
sum DWORD 0
.code

main PROC
	mov eax, 5
	add eax, 6
	mov sum, eax


	INVOKE ExitProcess, 0
main ENDP
END main