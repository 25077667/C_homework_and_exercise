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
	subq	$224, %rsp
	movl	$0, -148(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	__ZNSt3__13cinE@GOTPCREL(%rip), %rdi
	leaq	-152(%rbp), %rsi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	leaq	-156(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	leaq	-160(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	leaq	-164(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	movq	(%rax), %rsi
	movq	-24(%rsi), %rsi
	addq	%rsi, %rax
	movq	%rax, -136(%rbp)
	movq	-136(%rbp), %rax
	movq	%rax, -128(%rbp)
	movq	-128(%rbp), %rax
	movq	%rax, -120(%rbp)
	movq	-120(%rbp), %rax
	movl	32(%rax), %ecx
	andl	$5, %ecx
	cmpl	$0, %ecx
	jne	LBB0_3
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	__ZNSt3__112__cxx03_bool12__true_valueEv@GOTPCREL(%rip), %rax
	xorl	%ecx, %ecx
	movl	%ecx, %edx
	movq	%rax, -176(%rbp)        ## 8-byte Spill
	movq	%rdx, -184(%rbp)        ## 8-byte Spill
	jmp	LBB0_4
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	leaq	-104(%rbp), %rax
	movq	%rax, -88(%rbp)
	movq	$-1, -96(%rbp)
	movq	-88(%rbp), %rax
	movq	-96(%rbp), %rcx
	movq	%rax, -72(%rbp)
	movq	%rcx, -80(%rbp)
	movq	-72(%rbp), %rax
	movq	$0, (%rax)
	movq	-104(%rbp), %rax
	movq	%rax, -144(%rbp)
	leaq	-144(%rbp), %rax
	movq	%rax, -112(%rbp)
	xorl	%edx, %edx
	movl	%edx, %eax
	movq	%rax, %rcx
	movq	%rcx, -176(%rbp)        ## 8-byte Spill
	movq	%rax, -184(%rbp)        ## 8-byte Spill
	jmp	LBB0_4
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	-176(%rbp), %rcx        ## 8-byte Reload
	cmpq	$0, %rcx
	movq	%rax, -192(%rbp)        ## 8-byte Spill
	je	LBB0_6
## %bb.5:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	leaq	L_.str(%rip), %rsi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	movl	-152(%rbp), %esi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rdi
	movq	%rax, -40(%rbp)
	movq	%rdi, -48(%rbp)
	movq	-40(%rbp), %rdi
	callq	*-48(%rbp)
	leaq	L_.str.1(%rip), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	movl	-156(%rbp), %esi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rdi
	movq	%rax, -24(%rbp)
	movq	%rdi, -32(%rbp)
	movq	-24(%rbp), %rdi
	callq	*-32(%rbp)
	leaq	L_.str.2(%rip), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	movl	-160(%rbp), %esi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rdi
	movq	%rax, -8(%rbp)
	movq	%rdi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	*-16(%rbp)
	leaq	L_.str.3(%rip), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	movl	-164(%rbp), %esi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rdi
	movq	%rax, -56(%rbp)
	movq	%rdi, -64(%rbp)
	movq	-56(%rbp), %rdi
	callq	*-64(%rbp)
	leaq	L_.str.4(%rip), %rdi
	movl	-152(%rbp), %esi
	movl	-156(%rbp), %edx
	movl	-160(%rbp), %ecx
	movl	-164(%rbp), %r8d
	movl	-152(%rbp), %r9d
	addl	-156(%rbp), %r9d
	movl	-160(%rbp), %r10d
	imull	-164(%rbp), %r10d
	subl	%r10d, %r9d
	movq	%rax, -200(%rbp)        ## 8-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.5(%rip), %rdi
	movl	-152(%rbp), %esi
	movl	-156(%rbp), %edx
	movl	-160(%rbp), %ecx
	movl	-164(%rbp), %r8d
	movl	-152(%rbp), %r9d
	movl	-156(%rbp), %r10d
	imull	-160(%rbp), %r10d
	addl	%r10d, %r9d
	subl	-164(%rbp), %r9d
	movl	%eax, -204(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.6(%rip), %rdi
	movl	-152(%rbp), %esi
	movl	-156(%rbp), %edx
	movl	-160(%rbp), %ecx
	movl	-164(%rbp), %r8d
	movl	-152(%rbp), %r9d
	subl	-156(%rbp), %r9d
	movl	-160(%rbp), %r10d
	imull	-164(%rbp), %r10d
	addl	%r10d, %r9d
	movl	%eax, -208(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.7(%rip), %rdi
	movl	-152(%rbp), %esi
	movl	-156(%rbp), %edx
	movl	-160(%rbp), %ecx
	movl	-164(%rbp), %r8d
	movl	-152(%rbp), %r9d
	movl	-156(%rbp), %r10d
	imull	-160(%rbp), %r10d
	subl	%r10d, %r9d
	addl	-164(%rbp), %r9d
	movl	%eax, -212(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.8(%rip), %rdi
	movl	-152(%rbp), %esi
	movl	-156(%rbp), %edx
	movl	-160(%rbp), %ecx
	movl	-164(%rbp), %r8d
	movl	-152(%rbp), %r9d
	imull	-156(%rbp), %r9d
	addl	-160(%rbp), %r9d
	subl	-164(%rbp), %r9d
	movl	%eax, -216(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.9(%rip), %rdi
	movl	-152(%rbp), %esi
	movl	-156(%rbp), %edx
	movl	-160(%rbp), %ecx
	movl	-164(%rbp), %r8d
	movl	-152(%rbp), %r9d
	imull	-156(%rbp), %r9d
	subl	-160(%rbp), %r9d
	addl	-164(%rbp), %r9d
	movl	%eax, -220(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movl	%eax, -224(%rbp)        ## 4-byte Spill
	jmp	LBB0_1
LBB0_6:
	xorl	%eax, %eax
	addq	$224, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc ## -- Begin function _ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.weak_definition	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.p2align	4, 0x90
__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc: ## @_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-16(%rbp), %rax
	movq	%rdi, -24(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movq	%rsi, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__111char_traitsIcE6lengthEPKc
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	-32(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.private_extern	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_ ## -- Begin function _ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.globl	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.weak_definition	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.p2align	4, 0x90
__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_: ## @_ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$144, %rsp
	movq	%rdi, -72(%rbp)
	movq	-72(%rbp), %rdi
	movq	(%rdi), %rax
	movq	-24(%rax), %rax
	movq	%rdi, %rcx
	addq	%rax, %rcx
	movq	%rcx, -32(%rbp)
	movb	$10, -33(%rbp)
	movq	-32(%rbp), %rsi
	leaq	-48(%rbp), %rax
	movq	%rdi, -80(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movq	%rax, -88(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__18ios_base6getlocEv
	movq	-88(%rbp), %rax         ## 8-byte Reload
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rdi
Ltmp0:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp1:
	movq	%rax, -96(%rbp)         ## 8-byte Spill
	jmp	LBB2_1
LBB2_1:
	movb	-33(%rbp), %al
	movq	-96(%rbp), %rcx         ## 8-byte Reload
	movq	%rcx, -8(%rbp)
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	56(%rsi), %rsi
	movsbl	-9(%rbp), %edi
Ltmp2:
	movl	%edi, -100(%rbp)        ## 4-byte Spill
	movq	%rdx, %rdi
	movl	-100(%rbp), %r8d        ## 4-byte Reload
	movq	%rsi, -112(%rbp)        ## 8-byte Spill
	movl	%r8d, %esi
	movq	-112(%rbp), %rdx        ## 8-byte Reload
	callq	*%rdx
Ltmp3:
	movb	%al, -113(%rbp)         ## 1-byte Spill
	jmp	LBB2_5
LBB2_2:
Ltmp4:
	movl	%edx, %ecx
	movq	%rax, -56(%rbp)
	movl	%ecx, -60(%rbp)
Ltmp5:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp6:
	jmp	LBB2_3
LBB2_3:
	movq	-56(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB2_4:
Ltmp7:
	movq	%rax, %rdi
	movq	%rdx, -128(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
LBB2_5:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movq	-80(%rbp), %rdi         ## 8-byte Reload
	movb	-113(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %esi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	movq	-72(%rbp), %rdi
	movq	%rax, -136(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	movq	-72(%rbp), %rdi
	movq	%rax, -144(%rbp)        ## 8-byte Spill
	movq	%rdi, %rax
	addq	$144, %rsp
	popq	%rbp
	retq
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table2:
Lexception0:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\274"                  ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	52                      ## Call site table length
Lset0 = Lfunc_begin0-Lfunc_begin0       ## >> Call Site 1 <<
	.long	Lset0
Lset1 = Ltmp0-Lfunc_begin0              ##   Call between Lfunc_begin0 and Ltmp0
	.long	Lset1
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset2 = Ltmp0-Lfunc_begin0              ## >> Call Site 2 <<
	.long	Lset2
Lset3 = Ltmp3-Ltmp0                     ##   Call between Ltmp0 and Ltmp3
	.long	Lset3
Lset4 = Ltmp4-Lfunc_begin0              ##     jumps to Ltmp4
	.long	Lset4
	.byte	0                       ##   On action: cleanup
Lset5 = Ltmp5-Lfunc_begin0              ## >> Call Site 3 <<
	.long	Lset5
Lset6 = Ltmp6-Ltmp5                     ##   Call between Ltmp5 and Ltmp6
	.long	Lset6
Lset7 = Ltmp7-Lfunc_begin0              ##     jumps to Ltmp7
	.long	Lset7
	.byte	1                       ##   On action: 1
Lset8 = Ltmp6-Lfunc_begin0              ## >> Call Site 4 <<
	.long	Lset8
Lset9 = Lfunc_end0-Ltmp6                ##   Call between Ltmp6 and Lfunc_end0
	.long	Lset9
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
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
	.globl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m ## -- Begin function _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.weak_definition	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.p2align	4, 0x90
__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m: ## @_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$416, %rsp              ## imm = 0x1A0
	movq	%rdi, -200(%rbp)
	movq	%rsi, -208(%rbp)
	movq	%rdx, -216(%rbp)
	movq	-200(%rbp), %rsi
Ltmp8:
	leaq	-232(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp9:
	jmp	LBB4_1
LBB4_1:
	leaq	-232(%rbp), %rax
	movq	%rax, -192(%rbp)
	movq	-192(%rbp), %rax
	movb	(%rax), %cl
	movb	%cl, -265(%rbp)         ## 1-byte Spill
## %bb.2:
	movb	-265(%rbp), %al         ## 1-byte Reload
	testb	$1, %al
	jne	LBB4_3
	jmp	LBB4_26
LBB4_3:
	leaq	-256(%rbp), %rax
	movq	-200(%rbp), %rcx
	movq	%rax, -176(%rbp)
	movq	%rcx, -184(%rbp)
	movq	-176(%rbp), %rax
	movq	-184(%rbp), %rcx
	movq	%rax, -144(%rbp)
	movq	%rcx, -152(%rbp)
	movq	-144(%rbp), %rax
	movq	-152(%rbp), %rcx
	movq	(%rcx), %rdx
	movq	-24(%rdx), %rdx
	addq	%rdx, %rcx
	movq	%rcx, -136(%rbp)
	movq	-136(%rbp), %rcx
	movq	%rcx, -128(%rbp)
	movq	-128(%rbp), %rcx
	movq	40(%rcx), %rcx
	movq	%rcx, (%rax)
	movq	-208(%rbp), %rsi
	movq	-200(%rbp), %rax
	movq	(%rax), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rax
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	movl	8(%rax), %edi
	movq	%rsi, -280(%rbp)        ## 8-byte Spill
	movl	%edi, -284(%rbp)        ## 4-byte Spill
## %bb.4:
	movl	-284(%rbp), %eax        ## 4-byte Reload
	andl	$176, %eax
	cmpl	$32, %eax
	jne	LBB4_6
## %bb.5:
	movq	-208(%rbp), %rax
	addq	-216(%rbp), %rax
	movq	%rax, -296(%rbp)        ## 8-byte Spill
	jmp	LBB4_7
LBB4_6:
	movq	-208(%rbp), %rax
	movq	%rax, -296(%rbp)        ## 8-byte Spill
LBB4_7:
	movq	-296(%rbp), %rax        ## 8-byte Reload
	movq	-208(%rbp), %rcx
	addq	-216(%rbp), %rcx
	movq	-200(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-24(%rsi), %rsi
	addq	%rsi, %rdx
	movq	-200(%rbp), %rsi
	movq	(%rsi), %rdi
	movq	-24(%rdi), %rdi
	addq	%rdi, %rsi
	movq	%rsi, -72(%rbp)
	movq	-72(%rbp), %rsi
	movq	%rax, -304(%rbp)        ## 8-byte Spill
	movq	%rcx, -312(%rbp)        ## 8-byte Spill
	movq	%rdx, -320(%rbp)        ## 8-byte Spill
	movq	%rsi, -328(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__111char_traitsIcE3eofEv
	movq	-328(%rbp), %rcx        ## 8-byte Reload
	movl	144(%rcx), %esi
	movl	%eax, %edi
	callq	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	testb	$1, %al
	jne	LBB4_8
	jmp	LBB4_16
LBB4_8:
	movq	-328(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -32(%rbp)
	movb	$32, -33(%rbp)
	movq	-32(%rbp), %rsi
Ltmp10:
	leaq	-48(%rbp), %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp11:
	jmp	LBB4_9
LBB4_9:
	leaq	-48(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rdi
Ltmp12:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp13:
	movq	%rax, -336(%rbp)        ## 8-byte Spill
	jmp	LBB4_10
LBB4_10:
	movb	-33(%rbp), %al
	movq	-336(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -8(%rbp)
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	56(%rsi), %rsi
	movsbl	-9(%rbp), %edi
Ltmp14:
	movl	%edi, -340(%rbp)        ## 4-byte Spill
	movq	%rdx, %rdi
	movl	-340(%rbp), %r8d        ## 4-byte Reload
	movq	%rsi, -352(%rbp)        ## 8-byte Spill
	movl	%r8d, %esi
	movq	-352(%rbp), %rdx        ## 8-byte Reload
	callq	*%rdx
Ltmp15:
	movb	%al, -353(%rbp)         ## 1-byte Spill
	jmp	LBB4_14
LBB4_11:
Ltmp16:
	movl	%edx, %ecx
	movq	%rax, -56(%rbp)
	movl	%ecx, -60(%rbp)
Ltmp17:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp18:
	jmp	LBB4_12
LBB4_12:
	movq	-56(%rbp), %rax
	movl	-60(%rbp), %ecx
	movq	%rax, -368(%rbp)        ## 8-byte Spill
	movl	%ecx, -372(%rbp)        ## 4-byte Spill
	jmp	LBB4_24
LBB4_13:
Ltmp19:
	movq	%rax, %rdi
	movq	%rdx, -384(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
LBB4_14:
Ltmp20:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp21:
	jmp	LBB4_15
LBB4_15:
	movb	-353(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %ecx
	movq	-328(%rbp), %rdx        ## 8-byte Reload
	movl	%ecx, 144(%rdx)
LBB4_16:
	movq	-328(%rbp), %rax        ## 8-byte Reload
	movl	144(%rax), %ecx
	movb	%cl, %dl
	movb	%dl, -385(%rbp)         ## 1-byte Spill
## %bb.17:
	movq	-256(%rbp), %rdi
Ltmp22:
	movb	-385(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %r9d
	movq	-280(%rbp), %rsi        ## 8-byte Reload
	movq	-304(%rbp), %rdx        ## 8-byte Reload
	movq	-312(%rbp), %rcx        ## 8-byte Reload
	movq	-320(%rbp), %r8         ## 8-byte Reload
	callq	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp23:
	movq	%rax, -400(%rbp)        ## 8-byte Spill
	jmp	LBB4_18
LBB4_18:
	leaq	-264(%rbp), %rax
	movq	-400(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -264(%rbp)
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	cmpq	$0, (%rax)
	jne	LBB4_25
## %bb.19:
	movq	-200(%rbp), %rax
	movq	(%rax), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rax
	movq	%rax, -112(%rbp)
	movl	$5, -116(%rbp)
	movq	-112(%rbp), %rax
	movl	-116(%rbp), %edx
	movq	%rax, -96(%rbp)
	movl	%edx, -100(%rbp)
	movq	-96(%rbp), %rax
	movl	32(%rax), %edx
	movl	-100(%rbp), %esi
	orl	%esi, %edx
Ltmp24:
	movq	%rax, %rdi
	movl	%edx, %esi
	callq	__ZNSt3__18ios_base5clearEj
Ltmp25:
	jmp	LBB4_20
LBB4_20:
	jmp	LBB4_21
LBB4_21:
	jmp	LBB4_25
LBB4_22:
Ltmp31:
	movl	%edx, %ecx
	movq	%rax, -240(%rbp)
	movl	%ecx, -244(%rbp)
	jmp	LBB4_29
LBB4_23:
Ltmp26:
	movl	%edx, %ecx
	movq	%rax, -368(%rbp)        ## 8-byte Spill
	movl	%ecx, -372(%rbp)        ## 4-byte Spill
	jmp	LBB4_24
LBB4_24:
	movl	-372(%rbp), %eax        ## 4-byte Reload
	movq	-368(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -240(%rbp)
	movl	%eax, -244(%rbp)
Ltmp27:
	leaq	-232(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp28:
	jmp	LBB4_28
LBB4_25:
	jmp	LBB4_26
LBB4_26:
Ltmp29:
	leaq	-232(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp30:
	jmp	LBB4_27
LBB4_27:
	jmp	LBB4_31
LBB4_28:
	jmp	LBB4_29
LBB4_29:
	movq	-240(%rbp), %rdi
	callq	___cxa_begin_catch
	movq	-200(%rbp), %rdi
	movq	(%rdi), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rdi
Ltmp32:
	movq	%rax, -408(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp33:
	jmp	LBB4_30
LBB4_30:
	callq	___cxa_end_catch
LBB4_31:
	movq	-200(%rbp), %rax
	addq	$416, %rsp              ## imm = 0x1A0
	popq	%rbp
	retq
LBB4_32:
Ltmp34:
	movl	%edx, %ecx
	movq	%rax, -240(%rbp)
	movl	%ecx, -244(%rbp)
Ltmp35:
	callq	___cxa_end_catch
Ltmp36:
	jmp	LBB4_33
LBB4_33:
	jmp	LBB4_34
LBB4_34:
	movq	-240(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB4_35:
Ltmp37:
	movq	%rax, %rdi
	movq	%rdx, -416(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table4:
Lexception1:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\253\201"              ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.ascii	"\234\001"              ## Call site table length
Lset10 = Ltmp8-Lfunc_begin1             ## >> Call Site 1 <<
	.long	Lset10
Lset11 = Ltmp9-Ltmp8                    ##   Call between Ltmp8 and Ltmp9
	.long	Lset11
Lset12 = Ltmp31-Lfunc_begin1            ##     jumps to Ltmp31
	.long	Lset12
	.byte	5                       ##   On action: 3
Lset13 = Ltmp10-Lfunc_begin1            ## >> Call Site 2 <<
	.long	Lset13
Lset14 = Ltmp11-Ltmp10                  ##   Call between Ltmp10 and Ltmp11
	.long	Lset14
Lset15 = Ltmp26-Lfunc_begin1            ##     jumps to Ltmp26
	.long	Lset15
	.byte	5                       ##   On action: 3
Lset16 = Ltmp12-Lfunc_begin1            ## >> Call Site 3 <<
	.long	Lset16
Lset17 = Ltmp15-Ltmp12                  ##   Call between Ltmp12 and Ltmp15
	.long	Lset17
Lset18 = Ltmp16-Lfunc_begin1            ##     jumps to Ltmp16
	.long	Lset18
	.byte	3                       ##   On action: 2
Lset19 = Ltmp17-Lfunc_begin1            ## >> Call Site 4 <<
	.long	Lset19
Lset20 = Ltmp18-Ltmp17                  ##   Call between Ltmp17 and Ltmp18
	.long	Lset20
Lset21 = Ltmp19-Lfunc_begin1            ##     jumps to Ltmp19
	.long	Lset21
	.byte	7                       ##   On action: 4
Lset22 = Ltmp20-Lfunc_begin1            ## >> Call Site 5 <<
	.long	Lset22
Lset23 = Ltmp25-Ltmp20                  ##   Call between Ltmp20 and Ltmp25
	.long	Lset23
Lset24 = Ltmp26-Lfunc_begin1            ##     jumps to Ltmp26
	.long	Lset24
	.byte	5                       ##   On action: 3
Lset25 = Ltmp27-Lfunc_begin1            ## >> Call Site 6 <<
	.long	Lset25
Lset26 = Ltmp28-Ltmp27                  ##   Call between Ltmp27 and Ltmp28
	.long	Lset26
Lset27 = Ltmp37-Lfunc_begin1            ##     jumps to Ltmp37
	.long	Lset27
	.byte	5                       ##   On action: 3
Lset28 = Ltmp29-Lfunc_begin1            ## >> Call Site 7 <<
	.long	Lset28
Lset29 = Ltmp30-Ltmp29                  ##   Call between Ltmp29 and Ltmp30
	.long	Lset29
Lset30 = Ltmp31-Lfunc_begin1            ##     jumps to Ltmp31
	.long	Lset30
	.byte	5                       ##   On action: 3
Lset31 = Ltmp30-Lfunc_begin1            ## >> Call Site 8 <<
	.long	Lset31
Lset32 = Ltmp32-Ltmp30                  ##   Call between Ltmp30 and Ltmp32
	.long	Lset32
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset33 = Ltmp32-Lfunc_begin1            ## >> Call Site 9 <<
	.long	Lset33
Lset34 = Ltmp33-Ltmp32                  ##   Call between Ltmp32 and Ltmp33
	.long	Lset34
Lset35 = Ltmp34-Lfunc_begin1            ##     jumps to Ltmp34
	.long	Lset35
	.byte	0                       ##   On action: cleanup
Lset36 = Ltmp33-Lfunc_begin1            ## >> Call Site 10 <<
	.long	Lset36
Lset37 = Ltmp35-Ltmp33                  ##   Call between Ltmp33 and Ltmp35
	.long	Lset37
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset38 = Ltmp35-Lfunc_begin1            ## >> Call Site 11 <<
	.long	Lset38
Lset39 = Ltmp36-Ltmp35                  ##   Call between Ltmp35 and Ltmp36
	.long	Lset39
Lset40 = Ltmp37-Lfunc_begin1            ##     jumps to Ltmp37
	.long	Lset40
	.byte	5                       ##   On action: 3
Lset41 = Ltmp36-Lfunc_begin1            ## >> Call Site 12 <<
	.long	Lset41
Lset42 = Lfunc_end1-Ltmp36              ##   Call between Ltmp36 and Lfunc_end1
	.long	Lset42
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	0                       ## >> Action Record 1 <<
                                        ##   Cleanup
	.byte	0                       ##   No further actions
	.byte	1                       ## >> Action Record 2 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 1
	.byte	1                       ## >> Action Record 3 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.byte	1                       ## >> Action Record 4 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 3
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__111char_traitsIcE6lengthEPKc ## -- Begin function _ZNSt3__111char_traitsIcE6lengthEPKc
	.weak_definition	__ZNSt3__111char_traitsIcE6lengthEPKc
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE6lengthEPKc:  ## @_ZNSt3__111char_traitsIcE6lengthEPKc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_strlen
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.private_extern	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_ ## -- Begin function _ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_definition	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.p2align	4, 0x90
__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ## @_ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$736, %rsp              ## imm = 0x2E0
	movb	%r9b, %al
	leaq	-560(%rbp), %r10
	leaq	-496(%rbp), %r11
	movq	%rdi, -512(%rbp)
	movq	%rsi, -520(%rbp)
	movq	%rdx, -528(%rbp)
	movq	%rcx, -536(%rbp)
	movq	%r8, -544(%rbp)
	movb	%al, -545(%rbp)
	movq	-512(%rbp), %rcx
	movq	%r11, -480(%rbp)
	movq	$-1, -488(%rbp)
	movq	-480(%rbp), %rdx
	movq	-488(%rbp), %rsi
	movq	%rdx, -464(%rbp)
	movq	%rsi, -472(%rbp)
	movq	-464(%rbp), %rdx
	movq	$0, (%rdx)
	movq	-496(%rbp), %rdx
	movq	%rdx, -560(%rbp)
	movq	%r10, -456(%rbp)
	cmpq	$0, %rcx
	jne	LBB6_2
## %bb.1:
	movq	-512(%rbp), %rax
	movq	%rax, -504(%rbp)
	jmp	LBB6_29
LBB6_2:
	movq	-536(%rbp), %rax
	movq	-520(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -568(%rbp)
	movq	-544(%rbp), %rax
	movq	%rax, -352(%rbp)
	movq	-352(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -576(%rbp)
	movq	-576(%rbp), %rax
	cmpq	-568(%rbp), %rax
	jle	LBB6_4
## %bb.3:
	movq	-568(%rbp), %rax
	movq	-576(%rbp), %rcx
	subq	%rax, %rcx
	movq	%rcx, -576(%rbp)
	jmp	LBB6_5
LBB6_4:
	movq	$0, -576(%rbp)
LBB6_5:
	movq	-528(%rbp), %rax
	movq	-520(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -584(%rbp)
	cmpq	$0, -584(%rbp)
	jle	LBB6_9
## %bb.6:
	movq	-512(%rbp), %rax
	movq	-520(%rbp), %rcx
	movq	-584(%rbp), %rdx
	movq	%rax, -256(%rbp)
	movq	%rcx, -264(%rbp)
	movq	%rdx, -272(%rbp)
	movq	-256(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-264(%rbp), %rsi
	movq	-272(%rbp), %rdx
	movq	%rax, %rdi
	callq	*%rcx
	cmpq	-584(%rbp), %rax
	je	LBB6_8
## %bb.7:
	leaq	-592(%rbp), %rax
	leaq	-248(%rbp), %rcx
	movq	%rcx, -232(%rbp)
	movq	$-1, -240(%rbp)
	movq	-232(%rbp), %rcx
	movq	-240(%rbp), %rdx
	movq	%rcx, -216(%rbp)
	movq	%rdx, -224(%rbp)
	movq	-216(%rbp), %rcx
	movq	$0, (%rcx)
	movq	-248(%rbp), %rcx
	movq	%rcx, -592(%rbp)
	movq	%rax, -8(%rbp)
	movq	$0, -512(%rbp)
	movq	-512(%rbp), %rax
	movq	%rax, -504(%rbp)
	jmp	LBB6_29
LBB6_8:
	jmp	LBB6_9
LBB6_9:
	cmpq	$0, -576(%rbp)
	jle	LBB6_24
## %bb.10:
	xorl	%esi, %esi
	movl	$24, %eax
	movl	%eax, %edx
	leaq	-616(%rbp), %rcx
	movq	-576(%rbp), %rdi
	movb	-545(%rbp), %r8b
	movq	%rcx, -80(%rbp)
	movq	%rdi, -88(%rbp)
	movb	%r8b, -89(%rbp)
	movq	-80(%rbp), %rcx
	movq	-88(%rbp), %rdi
	movb	-89(%rbp), %r8b
	movq	%rcx, -56(%rbp)
	movq	%rdi, -64(%rbp)
	movb	%r8b, -65(%rbp)
	movq	-56(%rbp), %rcx
	movq	%rcx, -48(%rbp)
	movq	-48(%rbp), %rdi
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rdi
	movq	%rdi, %r9
	movq	%r9, -32(%rbp)
	movq	-32(%rbp), %r9
	movq	%rdi, -664(%rbp)        ## 8-byte Spill
	movq	%r9, %rdi
	movq	%rcx, -672(%rbp)        ## 8-byte Spill
	callq	_memset
	movq	-664(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -24(%rbp)
	movq	-24(%rbp), %rcx
	movq	%rcx, -16(%rbp)
	movq	-64(%rbp), %rsi
	movq	-672(%rbp), %rdi        ## 8-byte Reload
	movsbl	-65(%rbp), %edx
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
	leaq	-616(%rbp), %rcx
	movq	-512(%rbp), %rsi
	movq	%rcx, -208(%rbp)
	movq	-208(%rbp), %rcx
	movq	%rcx, -200(%rbp)
	movq	-200(%rbp), %rcx
	movq	%rcx, -192(%rbp)
	movq	-192(%rbp), %rdi
	movq	%rdi, -184(%rbp)
	movq	-184(%rbp), %rdi
	movq	%rdi, -176(%rbp)
	movq	-176(%rbp), %rdi
	movzbl	(%rdi), %eax
	movl	%eax, %edi
	andq	$1, %rdi
	cmpq	$0, %rdi
	movq	%rsi, -680(%rbp)        ## 8-byte Spill
	movq	%rcx, -688(%rbp)        ## 8-byte Spill
	je	LBB6_12
## %bb.11:
	movq	-688(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -128(%rbp)
	movq	-128(%rbp), %rcx
	movq	%rcx, -120(%rbp)
	movq	-120(%rbp), %rcx
	movq	%rcx, -112(%rbp)
	movq	-112(%rbp), %rcx
	movq	16(%rcx), %rcx
	movq	%rcx, -696(%rbp)        ## 8-byte Spill
	jmp	LBB6_13
LBB6_12:
	movq	-688(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -168(%rbp)
	movq	-168(%rbp), %rcx
	movq	%rcx, -160(%rbp)
	movq	-160(%rbp), %rcx
	movq	%rcx, -152(%rbp)
	movq	-152(%rbp), %rcx
	addq	$1, %rcx
	movq	%rcx, -144(%rbp)
	movq	-144(%rbp), %rcx
	movq	%rcx, -136(%rbp)
	movq	-136(%rbp), %rcx
	movq	%rcx, -696(%rbp)        ## 8-byte Spill
LBB6_13:
	movq	-696(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -104(%rbp)
	movq	-104(%rbp), %rax
	movq	-576(%rbp), %rcx
	movq	-680(%rbp), %rdx        ## 8-byte Reload
	movq	%rdx, -280(%rbp)
	movq	%rax, -288(%rbp)
	movq	%rcx, -296(%rbp)
	movq	-280(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-288(%rbp), %rsi
	movq	-296(%rbp), %rdx
Ltmp38:
	movq	%rax, %rdi
	callq	*%rcx
Ltmp39:
	movq	%rax, -704(%rbp)        ## 8-byte Spill
	jmp	LBB6_14
LBB6_14:
	jmp	LBB6_15
LBB6_15:
	movq	-704(%rbp), %rax        ## 8-byte Reload
	cmpq	-576(%rbp), %rax
	je	LBB6_20
## %bb.16:
	leaq	-336(%rbp), %rax
	movq	%rax, -320(%rbp)
	movq	$-1, -328(%rbp)
	movq	-320(%rbp), %rax
	movq	-328(%rbp), %rcx
	movq	%rax, -304(%rbp)
	movq	%rcx, -312(%rbp)
	movq	-304(%rbp), %rax
	movq	$0, (%rax)
	movq	-336(%rbp), %rax
	movq	%rax, -712(%rbp)        ## 8-byte Spill
## %bb.17:
	leaq	-640(%rbp), %rax
	movq	-712(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -640(%rbp)
	movq	%rax, -344(%rbp)
## %bb.18:
	movq	$0, -512(%rbp)
	movq	-512(%rbp), %rax
	movq	%rax, -504(%rbp)
	movl	$1, -644(%rbp)
	jmp	LBB6_21
LBB6_19:
Ltmp40:
	movl	%edx, %ecx
	movq	%rax, -624(%rbp)
	movl	%ecx, -628(%rbp)
Ltmp41:
	leaq	-616(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
Ltmp42:
	jmp	LBB6_23
LBB6_20:
	movl	$0, -644(%rbp)
LBB6_21:
	leaq	-616(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	movl	-644(%rbp), %eax
	testl	%eax, %eax
	movl	%eax, -716(%rbp)        ## 4-byte Spill
	je	LBB6_22
	jmp	LBB6_33
LBB6_33:
	movl	-716(%rbp), %eax        ## 4-byte Reload
	subl	$1, %eax
	movl	%eax, -720(%rbp)        ## 4-byte Spill
	je	LBB6_29
	jmp	LBB6_32
LBB6_22:
	jmp	LBB6_24
LBB6_23:
	jmp	LBB6_30
LBB6_24:
	movq	-536(%rbp), %rax
	movq	-528(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -584(%rbp)
	cmpq	$0, -584(%rbp)
	jle	LBB6_28
## %bb.25:
	movq	-512(%rbp), %rax
	movq	-528(%rbp), %rcx
	movq	-584(%rbp), %rdx
	movq	%rax, -360(%rbp)
	movq	%rcx, -368(%rbp)
	movq	%rdx, -376(%rbp)
	movq	-360(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-368(%rbp), %rsi
	movq	-376(%rbp), %rdx
	movq	%rax, %rdi
	callq	*%rcx
	cmpq	-584(%rbp), %rax
	je	LBB6_27
## %bb.26:
	leaq	-656(%rbp), %rax
	leaq	-416(%rbp), %rcx
	movq	%rcx, -400(%rbp)
	movq	$-1, -408(%rbp)
	movq	-400(%rbp), %rcx
	movq	-408(%rbp), %rdx
	movq	%rcx, -384(%rbp)
	movq	%rdx, -392(%rbp)
	movq	-384(%rbp), %rcx
	movq	$0, (%rcx)
	movq	-416(%rbp), %rcx
	movq	%rcx, -656(%rbp)
	movq	%rax, -424(%rbp)
	movq	$0, -512(%rbp)
	movq	-512(%rbp), %rax
	movq	%rax, -504(%rbp)
	jmp	LBB6_29
LBB6_27:
	jmp	LBB6_28
LBB6_28:
	movq	-544(%rbp), %rax
	movq	%rax, -432(%rbp)
	movq	$0, -440(%rbp)
	movq	-432(%rbp), %rax
	movq	24(%rax), %rcx
	movq	%rcx, -448(%rbp)
	movq	-440(%rbp), %rcx
	movq	%rcx, 24(%rax)
	movq	-512(%rbp), %rax
	movq	%rax, -504(%rbp)
LBB6_29:
	movq	-504(%rbp), %rax
	addq	$736, %rsp              ## imm = 0x2E0
	popq	%rbp
	retq
LBB6_30:
	movq	-624(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB6_31:
Ltmp43:
	movq	%rax, %rdi
	movq	%rdx, -728(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
LBB6_32:
	ud2
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table6:
Lexception2:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\274"                  ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	52                      ## Call site table length
Lset43 = Lfunc_begin2-Lfunc_begin2      ## >> Call Site 1 <<
	.long	Lset43
Lset44 = Ltmp38-Lfunc_begin2            ##   Call between Lfunc_begin2 and Ltmp38
	.long	Lset44
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset45 = Ltmp38-Lfunc_begin2            ## >> Call Site 2 <<
	.long	Lset45
Lset46 = Ltmp39-Ltmp38                  ##   Call between Ltmp38 and Ltmp39
	.long	Lset46
Lset47 = Ltmp40-Lfunc_begin2            ##     jumps to Ltmp40
	.long	Lset47
	.byte	0                       ##   On action: cleanup
Lset48 = Ltmp41-Lfunc_begin2            ## >> Call Site 3 <<
	.long	Lset48
Lset49 = Ltmp42-Ltmp41                  ##   Call between Ltmp41 and Ltmp42
	.long	Lset49
Lset50 = Ltmp43-Lfunc_begin2            ##     jumps to Ltmp43
	.long	Lset50
	.byte	1                       ##   On action: 1
Lset51 = Ltmp42-Lfunc_begin2            ## >> Call Site 4 <<
	.long	Lset51
Lset52 = Lfunc_end2-Ltmp42              ##   Call between Ltmp42 and Lfunc_end2
	.long	Lset52
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	___clang_call_terminate ## -- Begin function __clang_call_terminate
	.globl	___clang_call_terminate
	.weak_definition	___clang_call_terminate
	.p2align	4, 0x90
___clang_call_terminate:                ## @__clang_call_terminate
## %bb.0:
	pushq	%rax
	callq	___cxa_begin_catch
	movq	%rax, (%rsp)            ## 8-byte Spill
	callq	__ZSt9terminatev
                                        ## -- End function
	.globl	__ZNSt3__111char_traitsIcE11eq_int_typeEii ## -- Begin function _ZNSt3__111char_traitsIcE11eq_int_typeEii
	.weak_definition	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE11eq_int_typeEii: ## @_ZNSt3__111char_traitsIcE11eq_int_typeEii
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %esi
	cmpl	-8(%rbp), %esi
	sete	%al
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__111char_traitsIcE3eofEv ## -- Begin function _ZNSt3__111char_traitsIcE3eofEv
	.weak_definition	__ZNSt3__111char_traitsIcE3eofEv
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE3eofEv:       ## @_ZNSt3__111char_traitsIcE3eofEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$4294967295, %eax       ## imm = 0xFFFFFFFF
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Num1: "

L_.str.1:                               ## @.str.1
	.asciz	"Num2: "

L_.str.2:                               ## @.str.2
	.asciz	"Num3: "

L_.str.3:                               ## @.str.3
	.asciz	"Num4: "

L_.str.4:                               ## @.str.4
	.asciz	"%d + %d - %d * %d = %d\n"

L_.str.5:                               ## @.str.5
	.asciz	"%d + %d * %d - %d = %d\n"

L_.str.6:                               ## @.str.6
	.asciz	"%d - %d + %d * %d = %d\n"

L_.str.7:                               ## @.str.7
	.asciz	"%d - %d * %d + %d = %d\n"

L_.str.8:                               ## @.str.8
	.asciz	"%d * %d + %d - %d = %d\n"

L_.str.9:                               ## @.str.9
	.asciz	"%d * %d - %d + %d = %d\n"


.subsections_via_symbols
