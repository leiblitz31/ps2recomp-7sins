#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B2428
// Address: 0x3b2428 - 0x3b24e8
void sub_003B2428_0x3b2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2428_0x3b2428");
#endif

    switch (ctx->pc) {
        case 0x3b2428u: goto label_3b2428;
        case 0x3b242cu: goto label_3b242c;
        case 0x3b2430u: goto label_3b2430;
        case 0x3b2434u: goto label_3b2434;
        case 0x3b2438u: goto label_3b2438;
        case 0x3b243cu: goto label_3b243c;
        case 0x3b2440u: goto label_3b2440;
        case 0x3b2444u: goto label_3b2444;
        case 0x3b2448u: goto label_3b2448;
        case 0x3b244cu: goto label_3b244c;
        case 0x3b2450u: goto label_3b2450;
        case 0x3b2454u: goto label_3b2454;
        case 0x3b2458u: goto label_3b2458;
        case 0x3b245cu: goto label_3b245c;
        case 0x3b2460u: goto label_3b2460;
        case 0x3b2464u: goto label_3b2464;
        case 0x3b2468u: goto label_3b2468;
        case 0x3b246cu: goto label_3b246c;
        case 0x3b2470u: goto label_3b2470;
        case 0x3b2474u: goto label_3b2474;
        case 0x3b2478u: goto label_3b2478;
        case 0x3b247cu: goto label_3b247c;
        case 0x3b2480u: goto label_3b2480;
        case 0x3b2484u: goto label_3b2484;
        case 0x3b2488u: goto label_3b2488;
        case 0x3b248cu: goto label_3b248c;
        case 0x3b2490u: goto label_3b2490;
        case 0x3b2494u: goto label_3b2494;
        case 0x3b2498u: goto label_3b2498;
        case 0x3b249cu: goto label_3b249c;
        case 0x3b24a0u: goto label_3b24a0;
        case 0x3b24a4u: goto label_3b24a4;
        case 0x3b24a8u: goto label_3b24a8;
        case 0x3b24acu: goto label_3b24ac;
        case 0x3b24b0u: goto label_3b24b0;
        case 0x3b24b4u: goto label_3b24b4;
        case 0x3b24b8u: goto label_3b24b8;
        case 0x3b24bcu: goto label_3b24bc;
        case 0x3b24c0u: goto label_3b24c0;
        case 0x3b24c4u: goto label_3b24c4;
        case 0x3b24c8u: goto label_3b24c8;
        case 0x3b24ccu: goto label_3b24cc;
        case 0x3b24d0u: goto label_3b24d0;
        case 0x3b24d4u: goto label_3b24d4;
        case 0x3b24d8u: goto label_3b24d8;
        case 0x3b24dcu: goto label_3b24dc;
        case 0x3b24e0u: goto label_3b24e0;
        case 0x3b24e4u: goto label_3b24e4;
        default: break;
    }

    ctx->pc = 0x3b2428u;

label_3b2428:
    // 0x3b2428: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b2428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b242c:
    // 0x3b242c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b242cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b2430:
    // 0x3b2430: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3b2430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3b2434:
    // 0x3b2434: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b2434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3b2438:
    // 0x3b2438: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b2438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b243c:
    // 0x3b243c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b2440:
    // 0x3b2440: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3b2440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3b2444:
    // 0x3b2444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b2444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b2448:
    // 0x3b2448: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b2448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3b244c:
    // 0x3b244c: 0x8c500528  lw          $s0, 0x528($v0)
    ctx->pc = 0x3b244cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1320)));
label_3b2450:
    // 0x3b2450: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_3b2454:
    if (ctx->pc == 0x3B2454u) {
        ctx->pc = 0x3B2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2450u;
        // 0x3b2454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2458u;
        goto label_3b2458;
    }
    ctx->pc = 0x3B2450u;
    {
        const bool branch_taken_0x3b2450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2450u;
        // 0x3b2454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2450) {
            ctx->pc = 0x3B24B8u;
            goto label_3b24b8;
        }
    }
    ctx->pc = 0x3B2458u;
label_3b2458:
    // 0x3b2458: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x3b2458u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_3b245c:
    // 0x3b245c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b2460:
    // 0x3b2460: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3b2464:
    if (ctx->pc == 0x3B2464u) {
        ctx->pc = 0x3B2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2460u;
        // 0x3b2464: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2468u;
        goto label_3b2468;
    }
    ctx->pc = 0x3B2460u;
    {
        const bool branch_taken_0x3b2460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2460u;
        // 0x3b2464: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2460) {
            ctx->pc = 0x3B2494u;
            goto label_3b2494;
        }
    }
    ctx->pc = 0x3B2468u;
label_3b2468:
    // 0x3b2468: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b2468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b246c:
    // 0x3b246c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b2470:
    // 0x3b2470: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3b2474:
    if (ctx->pc == 0x3B2474u) {
        ctx->pc = 0x3B2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2470u;
        // 0x3b2474: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2478u;
        goto label_3b2478;
    }
    ctx->pc = 0x3B2470u;
    {
        const bool branch_taken_0x3b2470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2470u;
        // 0x3b2474: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2470) {
            ctx->pc = 0x3B2488u;
            goto label_3b2488;
        }
    }
    ctx->pc = 0x3B2478u;
label_3b2478:
    // 0x3b2478: 0xc103684  jal         func_40DA10
label_3b247c:
    if (ctx->pc == 0x3B247Cu) {
        ctx->pc = 0x3B2480u;
        goto label_3b2480;
    }
    ctx->pc = 0x3B2478u;
    SET_GPR_U32(ctx, 31, 0x3B2480u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B2478u, 0x3B2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2480u;
label_3b2480:
    // 0x3b2480: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b2484:
    if (ctx->pc == 0x3B2484u) {
        ctx->pc = 0x3B2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2480u;
        // 0x3b2484: 0x2662ce80  addiu       $v0, $s3, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2488u;
        goto label_3b2488;
    }
    ctx->pc = 0x3B2480u;
    {
        const bool branch_taken_0x3b2480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2480u;
        // 0x3b2484: 0x2662ce80  addiu       $v0, $s3, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2480) {
            ctx->pc = 0x3B2498u;
            goto label_3b2498;
        }
    }
    ctx->pc = 0x3B2488u;
label_3b2488:
    // 0x3b2488: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b2488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b248c:
    // 0x3b248c: 0x60f809  jalr        $v1
label_3b2490:
    if (ctx->pc == 0x3B2490u) {
        ctx->pc = 0x3B2494u;
        goto label_3b2494;
    }
    ctx->pc = 0x3B248Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B2494u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B248Cu, 0x3B2494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2494u;
label_3b2494:
    // 0x3b2494: 0x2662ce80  addiu       $v0, $s3, -0x3180
    ctx->pc = 0x3b2494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
label_3b2498:
    // 0x3b2498: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x3b2498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_3b249c:
    // 0x3b249c: 0x8c440524  lw          $a0, 0x524($v0)
    ctx->pc = 0x3b249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1316)));
label_3b24a0:
    // 0x3b24a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b24a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b24a4:
    // 0x3b24a4: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b24a8:
    // 0x3b24a8: 0x40f809  jalr        $v0
label_3b24ac:
    if (ctx->pc == 0x3B24ACu) {
        ctx->pc = 0x3B24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24A8u;
        // 0x3b24ac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B24B0u;
        goto label_3b24b0;
    }
    ctx->pc = 0x3B24A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B24B0u);
        ctx->pc = 0x3B24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24A8u;
        // 0x3b24ac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B24A8u, 0x3B24B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B24B0u;
label_3b24b0:
    // 0x3b24b0: 0xc0ec620  jal         func_3B1880
label_3b24b4:
    if (ctx->pc == 0x3B24B4u) {
        ctx->pc = 0x3B24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24B0u;
        // 0x3b24b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B24B8u;
        goto label_3b24b8;
    }
    ctx->pc = 0x3B24B0u;
    SET_GPR_U32(ctx, 31, 0x3B24B8u);
    ctx->pc = 0x3B24B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B24B0u;
    // 0x3b24b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B24B0u, 0x3B24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B24B8u;
label_3b24b8:
    // 0x3b24b8: 0x2670ce80  addiu       $s0, $s3, -0x3180
    ctx->pc = 0x3b24b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
label_3b24bc:
    // 0x3b24bc: 0xc104284  jal         func_410A10
label_3b24c0:
    if (ctx->pc == 0x3B24C0u) {
        ctx->pc = 0x3B24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24BCu;
        // 0x3b24c0: 0x8e040524  lw          $a0, 0x524($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B24C4u;
        goto label_3b24c4;
    }
    ctx->pc = 0x3B24BCu;
    SET_GPR_U32(ctx, 31, 0x3B24C4u);
    ctx->pc = 0x3B24C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B24BCu;
    // 0x3b24c0: 0x8e040524  lw          $a0, 0x524($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3B24BCu, 0x3B24C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B24C4u;
label_3b24c4:
    // 0x3b24c4: 0xae000524  sw          $zero, 0x524($s0)
    ctx->pc = 0x3b24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 0));
label_3b24c8:
    // 0x3b24c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b24c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b24cc:
    // 0x3b24cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b24ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b24d0:
    // 0x3b24d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b24d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b24d4:
    // 0x3b24d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3b24d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b24d8:
    // 0x3b24d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b24d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b24dc:
    // 0x3b24dc: 0x3e00008  jr          $ra
label_3b24e0:
    if (ctx->pc == 0x3B24E0u) {
        ctx->pc = 0x3B24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24DCu;
        // 0x3b24e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B24E4u;
        goto label_3b24e4;
    }
    ctx->pc = 0x3B24DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24DCu;
        // 0x3b24e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B24DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B24E4u;
label_3b24e4:
    // 0x3b24e4: 0x0  nop
    ctx->pc = 0x3b24e4u;
    // NOP
    ctx->pc = 0x3b24e8u;
}
