merge(ELE*, ELE*):                       // @merge(ELE*, ELE*)
        sub     sp, sp, #48             // =48
        stp     x29, x30, [sp, #32]     // 16-byte Folded Spill
        add     x29, sp, #32            // =32
        str     x0, [sp, #16]
        str     x1, [sp, #8]
        ldr     x8, [sp, #16]
        cbnz    x8, .LBB0_2
        ldr     x8, [sp, #8]
        stur    x8, [x29, #-8]
        b       .LBB0_7
.LBB0_2:
        ldr     x8, [sp, #8]
        cbnz    x8, .LBB0_4
        ldr     x8, [sp, #16]
        stur    x8, [x29, #-8]
        b       .LBB0_7
.LBB0_4:
        ldr     x8, [sp, #16]
        ldr     x0, [x8]
        ldr     x8, [sp, #8]
        ldr     x1, [x8]
        bl      strcmp
        cmp     w0, #0                  // =0
        cset    w9, ge
        tbnz    w9, #0, .LBB0_6
        ldr     x8, [sp, #16]
        ldr     x0, [x8, #8]
        ldr     x1, [sp, #8]
        bl      merge(ELE*, ELE*)
        ldr     x8, [sp, #16]
        str     x0, [x8, #8]
        ldr     x8, [sp, #16]
        stur    x8, [x29, #-8]
        b       .LBB0_7
.LBB0_6:
        ldr     x0, [sp, #16]
        ldr     x8, [sp, #8]
        ldr     x1, [x8, #8]
        bl      merge(ELE*, ELE*)
        ldr     x8, [sp, #8]
        str     x0, [x8, #8]
        ldr     x8, [sp, #8]
        stur    x8, [x29, #-8]
.LBB0_7:
        ldur    x0, [x29, #-8]
        ldp     x29, x30, [sp, #32]     // 16-byte Folded Reload
        add     sp, sp, #48             // =48
        ret
mergeSort(ELE*):                      // @mergeSort(ELE*)
        sub     sp, sp, #80             // =80
        stp     x29, x30, [sp, #64]     // 16-byte Folded Spill
        add     x29, sp, #64            // =64
        stur    x0, [x29, #-16]
        ldur    x8, [x29, #-16]
        cbz     x8, .LBB1_2
        ldur    x8, [x29, #-16]
        ldr     x8, [x8, #8]
        cbnz    x8, .LBB1_3
.LBB1_2:
        ldur    x8, [x29, #-16]
        stur    x8, [x29, #-8]
        b       .LBB1_9
.LBB1_3:
        ldur    x8, [x29, #-16]
        ldr     x8, [x8, #8]
        stur    x8, [x29, #-24]
        ldur    x8, [x29, #-16]
        str     x8, [sp, #32]
.LBB1_4:                                // =>This Inner Loop Header: Depth=1
        ldur    x8, [x29, #-24]
        mov     w9, #0
        str     w9, [sp, #12]           // 4-byte Folded Spill
        cbz     x8, .LBB1_6
        ldur    x8, [x29, #-24]
        ldr     x8, [x8, #8]
        cmp     x8, #0                  // =0
        cset    w9, ne
        str     w9, [sp, #12]           // 4-byte Folded Spill
.LBB1_6:                                //   in Loop: Header=BB1_4 Depth=1
        ldr     w8, [sp, #12]           // 4-byte Folded Reload
        tbnz    w8, #0, .LBB1_7
        b       .LBB1_8
.LBB1_7:                                //   in Loop: Header=BB1_4 Depth=1
        ldr     x8, [sp, #32]
        ldr     x8, [x8, #8]
        str     x8, [sp, #32]
        ldur    x8, [x29, #-24]
        ldr     x8, [x8, #8]
        ldr     x8, [x8, #8]
        stur    x8, [x29, #-24]
        b       .LBB1_4
.LBB1_8:
        ldr     x8, [sp, #32]
        ldr     x8, [x8, #8]
        stur    x8, [x29, #-24]
        ldr     x8, [sp, #32]
        mov     x9, xzr
        str     x9, [x8, #8]
        ldur    x0, [x29, #-16]
        bl      mergeSort(ELE*)
        str     x0, [sp, #24]
        ldur    x0, [x29, #-24]
        bl      mergeSort(ELE*)
        str     x0, [sp, #16]
        ldr     x0, [sp, #24]
        ldr     x1, [sp, #16]
        bl      merge(ELE*, ELE*)
        stur    x0, [x29, #-8]
.LBB1_9:
        ldur    x0, [x29, #-8]
        ldp     x29, x30, [sp, #64]     // 16-byte Folded Reload
        add     sp, sp, #80             // =80
        ret
q_sort(queue_t*):                     // @q_sort(queue_t*)
        sub     sp, sp, #32             // =32
        stp     x29, x30, [sp, #16]     // 16-byte Folded Spill
        add     x29, sp, #16            // =16
        str     x0, [sp, #8]
        ldr     x8, [sp, #8]
        cbz     x8, .LBB2_2
        ldr     x8, [sp, #8]
        ldr     w9, [x8, #16]
        cmp     w9, #2                  // =2
        b.ge    .LBB2_3
.LBB2_2:
        b       .LBB2_7
.LBB2_3:
        ldr     x8, [sp, #8]
        ldr     x0, [x8]
        bl      mergeSort(ELE*)
        ldr     x8, [sp, #8]
        str     x0, [x8]
        ldr     x8, [sp, #8]
        ldr     x8, [x8]
        str     x8, [sp]
.LBB2_4:                                // =>This Inner Loop Header: Depth=1
        ldr     x8, [sp]
        ldr     x8, [x8, #8]
        cbz     x8, .LBB2_6
        ldr     x8, [sp]
        ldr     x8, [x8, #8]
        str     x8, [sp]
        b       .LBB2_4
.LBB2_6:
        ldr     x8, [sp]
        ldr     x9, [sp, #8]
        str     x8, [x9, #8]
.LBB2_7:
        ldp     x29, x30, [sp, #16]     // 16-byte Folded Reload
        add     sp, sp, #32             // =32
        ret
main:                                   // @main
        sub     sp, sp, #16             // =16
        mov     w8, wzr
        str     wzr, [sp, #12]
        mov     w0, w8
        add     sp, sp, #16             // =16
        ret
