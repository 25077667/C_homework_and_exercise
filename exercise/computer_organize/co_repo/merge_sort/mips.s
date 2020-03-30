	.file	1 ""
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	fp=32
	.module	nooddspreg
	.abicalls
	.text
	.align	2
	.globl	merge
	.set	nomips16
	.set	nomicromips
	.ent	merge
	.type	merge, @function
merge:
	.frame	$fp,32,$31		# vars= 0, regs= 2/0, args= 16, gp= 8
	.mask	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	nomacro
	addiu	$sp,$sp,-32
	sw	$31,28($sp)
	sw	$fp,24($sp)
	move	$fp,$sp
	.cprestore	16
	movz	$31,$31,$0
	sw	$4,32($fp)
	sw	$5,36($fp)
	lw	$2,32($fp)
	nop
	bne	$2,$0,$L2
	nop

	lw	$2,36($fp)
	b	$L3
	nop

$L2:
	lw	$2,36($fp)
	nop
	bne	$2,$0,$L4
	nop

	lw	$2,32($fp)
	b	$L3
	nop

$L4:
	lw	$2,32($fp)
	nop
	lw	$3,0($2)
	lw	$2,36($fp)
	nop
	lw	$2,0($2)
	nop
	move	$5,$2
	move	$4,$3
	lw	$2,%call16(strcmp)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,strcmp
1:	jalr	$25
	nop

	lw	$28,16($fp)
	bgez	$2,$L5
	nop

	lw	$2,32($fp)
	nop
	lw	$2,4($2)
	lw	$5,36($fp)
	move	$4,$2
	lw	$2,%got(merge)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,merge
1:	jalr	$25
	nop

	lw	$28,16($fp)
	move	$3,$2
	lw	$2,32($fp)
	nop
	sw	$3,4($2)
	lw	$2,32($fp)
	b	$L3
	nop

$L5:
	lw	$2,36($fp)
	nop
	lw	$2,4($2)
	nop
	move	$5,$2
	lw	$4,32($fp)
	lw	$2,%got(merge)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,merge
1:	jalr	$25
	nop

	lw	$28,16($fp)
	move	$3,$2
	lw	$2,36($fp)
	nop
	sw	$3,4($2)
	lw	$2,36($fp)
$L3:
	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,32
	j	$31
	nop

	.set	macro
	.set	reorder
	.end	merge
	.size	merge, .-merge
	.align	2
	.globl	mergeSort
	.set	nomips16
	.set	nomicromips
	.ent	mergeSort
	.type	mergeSort, @function
mergeSort:
	.frame	$fp,48,$31		# vars= 16, regs= 2/0, args= 16, gp= 8
	.mask	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	nomacro
	addiu	$sp,$sp,-48
	sw	$31,44($sp)
	sw	$fp,40($sp)
	move	$fp,$sp
	.cprestore	16
	movz	$31,$31,$0
	sw	$4,48($fp)
	lw	$2,48($fp)
	nop
	beq	$2,$0,$L7
	nop

	lw	$2,48($fp)
	nop
	lw	$2,4($2)
	nop
	bne	$2,$0,$L8
	nop

$L7:
	lw	$2,48($fp)
	b	$L9
	nop

$L8:
	lw	$2,48($fp)
	nop
	lw	$2,4($2)
	nop
	sw	$2,24($fp)
	lw	$2,48($fp)
	nop
	sw	$2,28($fp)
	b	$L10
	nop

$L12:
	lw	$2,28($fp)
	nop
	lw	$2,4($2)
	nop
	sw	$2,28($fp)
	lw	$2,24($fp)
	nop
	lw	$2,4($2)
	nop
	lw	$2,4($2)
	nop
	sw	$2,24($fp)
$L10:
	lw	$2,24($fp)
	nop
	beq	$2,$0,$L11
	nop

	lw	$2,24($fp)
	nop
	lw	$2,4($2)
	nop
	bne	$2,$0,$L12
	nop

$L11:
	lw	$2,28($fp)
	nop
	lw	$2,4($2)
	nop
	sw	$2,24($fp)
	lw	$2,28($fp)
	nop
	sw	$0,4($2)
	lw	$4,48($fp)
	lw	$2,%got(mergeSort)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,mergeSort
1:	jalr	$25
	nop

	lw	$28,16($fp)
	sw	$2,32($fp)
	lw	$4,24($fp)
	lw	$2,%got(mergeSort)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,mergeSort
1:	jalr	$25
	nop

	lw	$28,16($fp)
	sw	$2,36($fp)
	lw	$5,36($fp)
	lw	$4,32($fp)
	lw	$2,%got(merge)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,merge
1:	jalr	$25
	nop

	lw	$28,16($fp)
$L9:
	move	$sp,$fp
	lw	$31,44($sp)
	lw	$fp,40($sp)
	addiu	$sp,$sp,48
	j	$31
	nop

	.set	macro
	.set	reorder
	.end	mergeSort
	.size	mergeSort, .-mergeSort
	.align	2
	.globl	q_sort
	.set	nomips16
	.set	nomicromips
	.ent	q_sort
	.type	q_sort, @function
q_sort:
	.frame	$fp,40,$31		# vars= 8, regs= 2/0, args= 16, gp= 8
	.mask	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	nomacro
	addiu	$sp,$sp,-40
	sw	$31,36($sp)
	sw	$fp,32($sp)
	move	$fp,$sp
	.cprestore	16
	movz	$31,$31,$0
	sw	$4,40($fp)
	lw	$2,40($fp)
	nop
	beq	$2,$0,$L19
	nop

	lw	$2,40($fp)
	nop
	lw	$2,8($2)
	nop
	slt	$2,$2,2
	bne	$2,$0,$L19
	nop

	lw	$2,40($fp)
	nop
	lw	$2,0($2)
	nop
	move	$4,$2
	lw	$2,%got(mergeSort)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,mergeSort
1:	jalr	$25
	nop

	lw	$28,16($fp)
	move	$3,$2
	lw	$2,40($fp)
	nop
	sw	$3,0($2)
	lw	$2,40($fp)
	nop
	lw	$2,0($2)
	nop
	sw	$2,24($fp)
	b	$L17
	nop

$L18:
	lw	$2,24($fp)
	nop
	lw	$2,4($2)
	nop
	sw	$2,24($fp)
$L17:
	lw	$2,24($fp)
	nop
	lw	$2,4($2)
	nop
	bne	$2,$0,$L18
	nop

	lw	$2,40($fp)
	lw	$3,24($fp)
	nop
	sw	$3,4($2)
	b	$L13
	nop

$L19:
	nop
$L13:
	move	$sp,$fp
	lw	$31,36($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,40
	j	$31
	nop

	.set	macro
	.set	reorder
	.end	q_sort
	.size	q_sort, .-q_sort
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$fp,8,$31		# vars= 0, regs= 1/0, args= 0, gp= 0
	.mask	0x40000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-8
	sw	$fp,4($sp)
	move	$fp,$sp
	move	$2,$0
	move	$sp,$fp
	movz	$31,$31,$0
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	j	$31
	nop

	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
