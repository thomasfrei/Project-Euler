SECTION .text		; Code section

global _start			; Starting Hook

_start:

	mov rcx, 1		; Term 1
	mov rdx, 0		; Term 2

	xor rbx, rbx		; The Sum

; Main loop
_loop:

	test rcx ,1		; Tests the LSB of the term. If it is set, the number is uneven
	jne _odd		; Jump to odd

; When the Term is even
_even:
	add rbx, rcx		; If the Number is even, add it to the sum

; When the Term is odd
_odd:
	xadd rcx, rdx		; Exchange and Add (XADD) Exchanges the first operand with the second,
				; then loads the sum of the two in the destination operand
	cmp rcx, 4000000	; Check if we have reached the max
	jl _loop		; If not, jump back to loop

; Exit the Programm gracefully
exit:
	mov rax, 60		; Systemcall exit
	mov rdi, 0		; return value 0
	syscall 			; Make the syscall