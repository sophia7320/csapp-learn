	.file	"3_5_1.c"
	.text
	.globl	scale
	.type	scale, @function
scale:
.LFB22:
	.cfi_startproc
	leaq	(%rdi,%rsi,4), %rax
	leaq	(%rdx,%rdx,2), %rdx
	leaq	(%rax,%rdx,4), %rax
	ret
	.cfi_endproc
.LFE22:
	.size	scale, .-scale
	.ident	"GCC: (GNU) 16.1.1 20260625"
	.section	.note.GNU-stack,"",@progbits
