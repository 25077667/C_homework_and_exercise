	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%r14
	pushq	%rbx
	subq	$16, %rsp
	.cfi_offset %rbx, -32
	.cfi_offset %r14, -24
	leaq	L_.str(%rip), %rdi
	leaq	-17(%rbp), %rsi
	xorl	%eax, %eax
	callq	_scanf
	movsbl	-17(%rbp), %esi
	leaq	L_.str.1(%rip), %rdi
	xorl	%eax, %eax
	callq	_printf
	movsbl	-17(%rbp), %esi
	leaq	L_.str.2(%rip), %rdi
	xorl	%eax, %eax
	movl	%esi, %edx
	movl	%esi, %ecx
	callq	_printf
	movsbl	-17(%rbp), %esi
	leaq	L_.str.3(%rip), %rbx
	movl	$0, %eax
	movq	%rbx, %rdi
	movl	%esi, %edx
	movl	%esi, %ecx
	movl	%esi, %r8d
	movl	%esi, %r9d
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	callq	_printf
	addq	$32, %rsp
	movsbl	-17(%rbp), %esi
	leaq	L_.str.4(%rip), %r14
	xorl	%eax, %eax
	movq	%r14, %rdi
	movl	%esi, %edx
	movl	%esi, %ecx
	movl	%esi, %r8d
	movl	%esi, %r9d
	callq	_printf
	movsbl	-17(%rbp), %esi
	movl	$0, %eax
	movq	%rbx, %rdi
	movl	%esi, %edx
	movl	%esi, %ecx
	movl	%esi, %r8d
	movl	%esi, %r9d
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	callq	_printf
	addq	$32, %rsp
	movsbl	-17(%rbp), %esi
	leaq	L_.str.5(%rip), %rdi
	movl	$0, %eax
	movl	%esi, %edx
	movl	%esi, %ecx
	movl	%esi, %r8d
	movl	%esi, %r9d
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	pushq	%rsi
	callq	_printf
	addq	$64, %rsp
	movsbl	-17(%rbp), %esi
	xorl	%eax, %eax
	movq	%r14, %rdi
	movl	%esi, %edx
	movl	%esi, %ecx
	movl	%esi, %r8d
	movl	%esi, %r9d
	callq	_printf
	movsbl	-17(%rbp), %esi
	xorl	%eax, %eax
	movq	%r14, %rdi
	movl	%esi, %edx
	movl	%esi, %ecx
	movl	%esi, %r8d
	movl	%esi, %r9d
	callq	_printf
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbx
	popq	%r14
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%c"

L_.str.1:                               ## @.str.1
	.asciz	"      %c\n"

L_.str.2:                               ## @.str.2
	.asciz	"     %c%c%c\n"

L_.str.3:                               ## @.str.3
	.asciz	"  %c%c%c%c%c%c%c%c%c\n"

L_.str.4:                               ## @.str.4
	.asciz	"    %c%c%c%c%c\n"

L_.str.5:                               ## @.str.5
	.asciz	"%c%c%c%c%c%c%c%c%c%c%c%c%c\n"


.subsections_via_symbols
