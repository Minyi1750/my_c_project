; Name: mymovsd.asm
; Purpose: ≤‚ ‘movsd÷∏¡Ó
; Author: Kip Irvine
; Create Time: 2020.11.15 11.16
; Book Name: Assemble Language for x86 processors
; Page: 353

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode: DWORD

.data
; word 2 byte, double word 4 byte,
source DWORD 2 DUP(0FFFFFFFFh)
target DWORD 2 DUP(?)
.code

main PROC
	mov ecx, LENGTHOF source
	mov esi, OFFSET source
	mov edi, OFFSET target
	rep movsd


	INVOKE ExitProcess, 0
main ENDP
END main