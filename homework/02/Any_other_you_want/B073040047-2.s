	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI0_0:
	.quad	4611686018427387904     ## double 2
LCPI0_1:
	.quad	4616189618054758400     ## double 4
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$160, %rsp
	movl	$0, -84(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	__ZNSt3__13cinE@GOTPCREL(%rip), %rdi
	leaq	-96(%rbp), %rsi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd
	leaq	-104(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd
	leaq	-112(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd
	movq	(%rax), %rsi
	movq	-24(%rsi), %rsi
	addq	%rsi, %rax
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movl	32(%rax), %ecx
	andl	$5, %ecx
	cmpl	$0, %ecx
	jne	LBB0_3
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	__ZNSt3__112__cxx03_bool12__true_valueEv@GOTPCREL(%rip), %rax
	xorl	%ecx, %ecx
	movl	%ecx, %edx
	movq	%rax, -120(%rbp)        ## 8-byte Spill
	movq	%rdx, -128(%rbp)        ## 8-byte Spill
	jmp	LBB0_4
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	leaq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	$-1, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rcx
	movq	%rax, -8(%rbp)
	movq	%rcx, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	movq	-40(%rbp), %rax
	movq	%rax, -80(%rbp)
	leaq	-80(%rbp), %rax
	movq	%rax, -48(%rbp)
	xorl	%edx, %edx
	movl	%edx, %eax
	movq	%rax, %rcx
	movq	%rcx, -120(%rbp)        ## 8-byte Spill
	movq	%rax, -128(%rbp)        ## 8-byte Spill
	jmp	LBB0_4
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	-120(%rbp), %rcx        ## 8-byte Reload
	cmpq	$0, %rcx
	movq	%rax, -136(%rbp)        ## 8-byte Spill
	je	LBB0_6
## %bb.5:                               ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str(%rip), %rdi
	movsd	-96(%rbp), %xmm0        ## xmm0 = mem[0],zero
	movsd	-104(%rbp), %xmm1       ## xmm1 = mem[0],zero
	movsd	-112(%rbp), %xmm2       ## xmm2 = mem[0],zero
	movb	$3, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	movsd	LCPI0_1(%rip), %xmm0    ## xmm0 = mem[0],zero
	movsd	-96(%rbp), %xmm1        ## xmm1 = mem[0],zero
	addsd	-104(%rbp), %xmm1
	addsd	-112(%rbp), %xmm1
	mulsd	%xmm0, %xmm1
	movaps	%xmm1, %xmm0
	movl	%eax, -140(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	leaq	L_.str.2(%rip), %rdi
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movsd	-96(%rbp), %xmm1        ## xmm1 = mem[0],zero
	mulsd	-104(%rbp), %xmm1
	movsd	-104(%rbp), %xmm2       ## xmm2 = mem[0],zero
	mulsd	-112(%rbp), %xmm2
	addsd	%xmm2, %xmm1
	movsd	-112(%rbp), %xmm2       ## xmm2 = mem[0],zero
	mulsd	-96(%rbp), %xmm2
	addsd	%xmm2, %xmm1
	mulsd	%xmm0, %xmm1
	movaps	%xmm1, %xmm0
	movl	%eax, -144(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	movsd	-96(%rbp), %xmm0        ## xmm0 = mem[0],zero
	mulsd	-104(%rbp), %xmm0
	mulsd	-112(%rbp), %xmm0
	movl	%eax, -148(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	%eax, -152(%rbp)        ## 4-byte Spill
	jmp	LBB0_1
LBB0_6:
	xorl	%eax, %eax
	addq	$160, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__112__cxx03_bool12__true_valueEv ## -- Begin function _ZNSt3__112__cxx03_bool12__true_valueEv
	.weak_definition	__ZNSt3__112__cxx03_bool12__true_valueEv
	.p2align	4, 0x90
__ZNSt3__112__cxx03_bool12__true_valueEv: ## @_ZNSt3__112__cxx03_bool12__true_valueEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\351\225\267: %f\n\345\257\254: %f\n\351\253\230: %f\n"

L_.str.1:                               ## @.str.1
	.asciz	"\345\221\250\351\225\267: %6f\n"

L_.str.2:                               ## @.str.2
	.asciz	"\350\241\250\351\235\242\347\251\215: %6f\n"

L_.str.3:                               ## @.str.3
	.asciz	"\351\253\224\347\251\215: %6f\n"


.subsections_via_symbols
