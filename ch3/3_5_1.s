	.file	"3_5_1.c"
	.text
	.globl	scale
	.def	scale;	.scl	2;	.type	32;	.endef
	.seh_proc	scale
scale:
	.seh_endprologue
	leaq	(%rcx,%rdx,4), %rax
	leaq	(%r8,%r8,2), %rdx
	leaq	(%rax,%rdx,4), %rax
	ret
	.seh_endproc
	.ident	"GCC: (Rev8, Built by MSYS2 project) 15.2.0"
