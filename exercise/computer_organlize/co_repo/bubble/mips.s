swap(int*, int):
        addiu   $sp,$sp,-24
        sw      $fp,20($sp)
        move    $fp,$sp
        sw      $4,24($fp)
        sw      $5,28($fp)
        lw      $2,28($fp)
        nop
        sll     $2,$2,2
        lw      $3,24($fp)
        nop
        addu    $2,$3,$2
        lw      $2,0($2)
        nop
        sw      $2,8($fp)
        lw      $2,28($fp)
        nop
        sll     $2,$2,2
        lw      $3,24($fp)
        nop
        addu    $2,$3,$2
        lw      $3,28($fp)
        nop
        addiu   $3,$3,1
        sll     $3,$3,2
        lw      $4,24($fp)
        nop
        addu    $3,$4,$3
        lw      $3,0($3)
        nop
        sw      $3,0($2)
        lw      $2,28($fp)
        nop
        addiu   $2,$2,1
        sll     $2,$2,2
        lw      $3,24($fp)
        nop
        addu    $2,$3,$2
        lw      $3,8($fp)
        nop
        sw      $3,0($2)
        nop
        move    $sp,$fp
        lw      $fp,20($sp)
        addiu   $sp,$sp,24
        j       $31
        nop

sort(int*, int):
        addiu   $sp,$sp,-40
        sw      $31,36($sp)
        sw      $fp,32($sp)
        move    $fp,$sp
        sw      $4,40($fp)
        sw      $5,44($fp)
        sw      $0,24($fp)
$L7:
        lw      $2,44($fp)
        nop
        addiu   $3,$2,-1
        lw      $2,24($fp)
        nop
        slt     $2,$2,$3
        beq     $2,$0,$L8
        nop

        sw      $0,28($fp)
$L6:
        lw      $2,44($fp)
        nop
        addiu   $3,$2,-1
        lw      $2,24($fp)
        nop
        subu    $3,$3,$2
        lw      $2,28($fp)
        nop
        slt     $2,$2,$3
        beq     $2,$0,$L4
        nop

        lw      $2,28($fp)
        nop
        sll     $2,$2,2
        lw      $3,40($fp)
        nop
        addu    $2,$3,$2
        lw      $3,0($2)
        lw      $2,28($fp)
        nop
        addiu   $2,$2,1
        sll     $2,$2,2
        lw      $4,40($fp)
        nop
        addu    $2,$4,$2
        lw      $2,0($2)
        nop
        slt     $2,$2,$3
        beq     $2,$0,$L5
        nop

        lw      $5,28($fp)
        lw      $4,40($fp)
        jal     swap(int*, int)
        nop

$L5:
        lw      $2,28($fp)
        nop
        addiu   $2,$2,1
        sw      $2,28($fp)
        b       $L6
        nop

$L4:
        lw      $2,24($fp)
        nop
        addiu   $2,$2,1
        sw      $2,24($fp)
        b       $L7
        nop

$L8:
        nop
        move    $sp,$fp
        lw      $31,36($sp)
        lw      $fp,32($sp)
        addiu   $sp,$sp,40
        j       $31
        nop

$LC0:
        .word   61
        .word   17
        .word   29
        .word   22
        .word   34
        .word   60
        .word   72
        .word   21
        .word   50
        .word   1
main:
        addiu   $sp,$sp,-72
        sw      $31,68($sp)
        sw      $fp,64($sp)
        move    $fp,$sp
        lui     $2,%hi($LC0)
        addiu   $3,$fp,24
        addiu   $2,$2,%lo($LC0)
        li      $4,40                 # 0x28
        move    $6,$4
        move    $5,$2
        move    $4,$3
        jal     memcpy
        nop

        li      $5,10                 # 0xa
        addiu   $2,$fp,24
        move    $4,$2
        jal     sort(int*, int)
        nop

        move    $2,$0
        move    $sp,$fp
        lw      $31,68($sp)
        lw      $fp,64($sp)
        addiu   $sp,$sp,72
        j       $31
        nop
