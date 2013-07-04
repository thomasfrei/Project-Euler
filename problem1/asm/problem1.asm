; Problem 1
; http://projecteuler.net/problem=1
; 
; If we list all the natural numbers below 10 that are multiples of 3 or 5, 
; we get 3, 5, 6 and 9. The sum of these multiples is 23.
; Find the sum of all the multiples of 3 or 5 below 1000.

SECTION .text				; Code

global _start				; Linker Entry Point 

_start:

	xor rdx, rdx			; The Register where the result is stored

	mov rax, 3			; Start with multiples of 3
add3:
	add rdx, rax			; Add 3 to the total
	add rax, 3			; Increment by 3
	cmp rax, 1000			; Check that we are still under a 1000
	jl add3				; If not, repeat

	mov rax, 5			; Continue with multiples of 5

add5:
	add rdx, rax			; Add 5 to the total
	add rax, 5			; Increment by 5
	cmp rax, 1000			; Check that we are still under a 1000
	jl add5				; If not, repeat

	mov rax, 15			; Now Substract Multiples 15 

sub15:
	sub rdx, rax			; Subtract 15 from the total
	add rax, 15			; Increment by 15
	cmp rax, 1000			; Check that we are still under a 1000
	jl sub15			; If not, repeat

	
; Exit the programm
Exit:
	mov rax, 60			; Specify Exit syscall
	xor rdi, rdi			; Return value of 0
	syscall				; Make the syscall
