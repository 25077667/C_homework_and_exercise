merge(ELE*, ELE*):
        push    {r11, lr}
        mov     r11, sp
        sub     sp, sp, #16
        str     r0, [sp, #8]
        str     r1, [sp, #4]
        ldr     r0, [sp, #8]
        movw    r1, #0
        cmp     r0, r1
        bne     .LBB0_2
        ldr     r0, [sp, #4]
        str     r0, [r11, #-4]
        b       .LBB0_7
.LBB0_2:
        ldr     r0, [sp, #4]
        movw    r1, #0
        cmp     r0, r1
        bne     .LBB0_4
        ldr     r0, [sp, #8]
        str     r0, [r11, #-4]
        b       .LBB0_7
.LBB0_4:
        ldr     r0, [sp, #8]
        ldr     r0, [r0]
        ldr     r1, [sp, #4]
        ldr     r1, [r1]
        bl      strcmp
        cmp     r0, #0
        bge     .LBB0_6
        ldr     r0, [sp, #8]
        ldr     r0, [r0, #4]
        ldr     r1, [sp, #4]
        bl      merge(ELE*, ELE*)
        ldr     r1, [sp, #8]
        str     r0, [r1, #4]
        ldr     r0, [sp, #8]
        str     r0, [r11, #-4]
        b       .LBB0_7
.LBB0_6:
        ldr     r0, [sp, #8]
        ldr     r1, [sp, #4]
        ldr     r1, [r1, #4]
        bl      merge(ELE*, ELE*)
        ldr     r1, [sp, #4]
        str     r0, [r1, #4]
        ldr     r0, [sp, #4]
        str     r0, [r11, #-4]
.LBB0_7:
        ldr     r0, [r11, #-4]
        mov     sp, r11
        pop     {r11, pc}
mergeSort(ELE*):
        push    {r11, lr}
        mov     r11, sp
        sub     sp, sp, #32
        str     r0, [r11, #-8]
        ldr     r0, [r11, #-8]
        movw    r1, #0
        cmp     r0, r1
        beq     .LBB1_2
        ldr     r0, [r11, #-8]
        ldr     r0, [r0, #4]
        movw    r1, #0
        cmp     r0, r1
        bne     .LBB1_3
.LBB1_2:
        ldr     r0, [r11, #-8]
        str     r0, [r11, #-4]
        b       .LBB1_9
.LBB1_3:
        ldr     r0, [r11, #-8]
        ldr     r0, [r0, #4]
        str     r0, [r11, #-12]
        ldr     r0, [r11, #-8]
        str     r0, [sp, #16]
.LBB1_4:                                @ =>This Inner Loop Header: Depth=1
        ldr     r0, [r11, #-12]
        movw    r1, #0
        cmp     r0, r1
        movw    r0, #0
        str     r0, [sp, #4]            @ 4-byte Spill
        beq     .LBB1_6
        ldr     r0, [r11, #-12]
        ldr     r0, [r0, #4]
        movw    r1, #0
        cmp     r0, r1
        movw    r0, #0
        movne   r0, #1
        str     r0, [sp, #4]            @ 4-byte Spill
.LBB1_6:                                @   in Loop: Header=BB1_4 Depth=1
        ldr     r0, [sp, #4]            @ 4-byte Reload
        tst     r0, #1
        beq     .LBB1_8
        ldr     r0, [sp, #16]
        ldr     r0, [r0, #4]
        str     r0, [sp, #16]
        ldr     r0, [r11, #-12]
        ldr     r0, [r0, #4]
        ldr     r0, [r0, #4]
        str     r0, [r11, #-12]
        b       .LBB1_4
.LBB1_8:
        ldr     r0, [sp, #16]
        ldr     r0, [r0, #4]
        str     r0, [r11, #-12]
        ldr     r0, [sp, #16]
        movw    r1, #0
        str     r1, [r0, #4]
        ldr     r0, [r11, #-8]
        bl      mergeSort(ELE*)
        str     r0, [sp, #12]
        ldr     r0, [r11, #-12]
        bl      mergeSort(ELE*)
        str     r0, [sp, #8]
        ldr     r0, [sp, #12]
        ldr     r1, [sp, #8]
        bl      merge(ELE*, ELE*)
        str     r0, [r11, #-4]
.LBB1_9:
        ldr     r0, [r11, #-4]
        mov     sp, r11
        pop     {r11, pc}
q_sort(queue_t*):
        push    {r11, lr}
        mov     r11, sp
        sub     sp, sp, #8
        str     r0, [sp, #4]
        ldr     r0, [sp, #4]
        movw    r1, #0
        cmp     r0, r1
        beq     .LBB2_2
        ldr     r0, [sp, #4]
        ldr     r0, [r0, #8]
        cmp     r0, #2
        bge     .LBB2_3
.LBB2_2:
        b       .LBB2_7
.LBB2_3:
        ldr     r0, [sp, #4]
        ldr     r0, [r0]
        bl      mergeSort(ELE*)
        ldr     r1, [sp, #4]
        str     r0, [r1]
        ldr     r0, [sp, #4]
        ldr     r0, [r0]
        str     r0, [sp]
.LBB2_4:                                @ =>This Inner Loop Header: Depth=1
        ldr     r0, [sp]
        ldr     r0, [r0, #4]
        movw    r1, #0
        cmp     r0, r1
        beq     .LBB2_6
        ldr     r0, [sp]
        ldr     r0, [r0, #4]
        str     r0, [sp]
        b       .LBB2_4
.LBB2_6:
        ldr     r0, [sp]
        ldr     r1, [sp, #4]
        str     r0, [r1, #4]
.LBB2_7:
        mov     sp, r11
        pop     {r11, pc}
main:
        sub     sp, sp, #4
        movw    r0, #0
        str     r0, [sp]
        add     sp, sp, #4
        bx      lr
