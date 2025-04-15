	.file	"test.c"
	.text
	.globl	global
	.data
	.align 4
global:
	.long	2025
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$100, -4(%rbp)
	movl	$1, %edx
	movl	$1, %ecx
	call	add
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	global(%rip), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	add;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
