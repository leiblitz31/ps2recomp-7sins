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

// Function: sub_003C23F0
// Address: 0x3c23f0 - 0x3c24c0
void sub_003C23F0_0x3c23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C23F0_0x3c23f0");
#endif

    switch (ctx->pc) {
        case 0x3c23f0u: goto label_3c23f0;
        case 0x3c23f4u: goto label_3c23f4;
        case 0x3c23f8u: goto label_3c23f8;
        case 0x3c23fcu: goto label_3c23fc;
        case 0x3c2400u: goto label_3c2400;
        case 0x3c2404u: goto label_3c2404;
        case 0x3c2408u: goto label_3c2408;
        case 0x3c240cu: goto label_3c240c;
        case 0x3c2410u: goto label_3c2410;
        case 0x3c2414u: goto label_3c2414;
        case 0x3c2418u: goto label_3c2418;
        case 0x3c241cu: goto label_3c241c;
        case 0x3c2420u: goto label_3c2420;
        case 0x3c2424u: goto label_3c2424;
        case 0x3c2428u: goto label_3c2428;
        case 0x3c242cu: goto label_3c242c;
        case 0x3c2430u: goto label_3c2430;
        case 0x3c2434u: goto label_3c2434;
        case 0x3c2438u: goto label_3c2438;
        case 0x3c243cu: goto label_3c243c;
        case 0x3c2440u: goto label_3c2440;
        case 0x3c2444u: goto label_3c2444;
        case 0x3c2448u: goto label_3c2448;
        case 0x3c244cu: goto label_3c244c;
        case 0x3c2450u: goto label_3c2450;
        case 0x3c2454u: goto label_3c2454;
        case 0x3c2458u: goto label_3c2458;
        case 0x3c245cu: goto label_3c245c;
        case 0x3c2460u: goto label_3c2460;
        case 0x3c2464u: goto label_3c2464;
        case 0x3c2468u: goto label_3c2468;
        case 0x3c246cu: goto label_3c246c;
        case 0x3c2470u: goto label_3c2470;
        case 0x3c2474u: goto label_3c2474;
        case 0x3c2478u: goto label_3c2478;
        case 0x3c247cu: goto label_3c247c;
        case 0x3c2480u: goto label_3c2480;
        case 0x3c2484u: goto label_3c2484;
        case 0x3c2488u: goto label_3c2488;
        case 0x3c248cu: goto label_3c248c;
        case 0x3c2490u: goto label_3c2490;
        case 0x3c2494u: goto label_3c2494;
        case 0x3c2498u: goto label_3c2498;
        case 0x3c249cu: goto label_3c249c;
        case 0x3c24a0u: goto label_3c24a0;
        case 0x3c24a4u: goto label_3c24a4;
        case 0x3c24a8u: goto label_3c24a8;
        case 0x3c24acu: goto label_3c24ac;
        case 0x3c24b0u: goto label_3c24b0;
        case 0x3c24b4u: goto label_3c24b4;
        case 0x3c24b8u: goto label_3c24b8;
        case 0x3c24bcu: goto label_3c24bc;
        default: break;
    }

    ctx->pc = 0x3c23f0u;

label_3c23f0:
    // 0x3c23f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c23f4:
    // 0x3c23f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c23f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c23f8:
    // 0x3c23f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c23f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c23fc:
    // 0x3c23fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c23fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c2400:
    // 0x3c2400: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c2400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2404:
    // 0x3c2404: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c2404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c2408:
    // 0x3c2408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c240c:
    // 0x3c240c: 0xc0f0cec  jal         func_3C33B0
label_3c2410:
    if (ctx->pc == 0x3C2410u) {
        ctx->pc = 0x3C2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C240Cu;
        // 0x3c2410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2414u;
        goto label_3c2414;
    }
    ctx->pc = 0x3C240Cu;
    SET_GPR_U32(ctx, 31, 0x3C2414u);
    ctx->pc = 0x3C2410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C240Cu;
    // 0x3c2410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C33B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C33B0u, 0x3C240Cu, 0x3C2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2414u;
label_3c2414:
    // 0x3c2414: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_3c2418:
    if (ctx->pc == 0x3C2418u) {
        ctx->pc = 0x3C2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2414u;
        // 0x3c2418: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C241Cu;
        goto label_3c241c;
    }
    ctx->pc = 0x3C2414u;
    {
        const bool branch_taken_0x3c2414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2414) {
            ctx->pc = 0x3C2418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2414u;
            // 0x3c2418: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2474u;
            goto label_3c2474;
        }
    }
    ctx->pc = 0x3C241Cu;
label_3c241c:
    // 0x3c241c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3c241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3c2420:
    // 0x3c2420: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3c2424:
    if (ctx->pc == 0x3C2424u) {
        ctx->pc = 0x3C2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2420u;
        // 0x3c2424: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2428u;
        goto label_3c2428;
    }
    ctx->pc = 0x3C2420u;
    {
        const bool branch_taken_0x3c2420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2420u;
        // 0x3c2424: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2420) {
            ctx->pc = 0x3C2438u;
            goto label_3c2438;
        }
    }
    ctx->pc = 0x3C2428u;
label_3c2428:
    // 0x3c2428: 0x2602e880  addiu       $v0, $s0, -0x1780
    ctx->pc = 0x3c2428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3c242c:
    // 0x3c242c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3c242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3c2430:
    // 0x3c2430: 0x60f809  jalr        $v1
label_3c2434:
    if (ctx->pc == 0x3C2434u) {
        ctx->pc = 0x3C2438u;
        goto label_3c2438;
    }
    ctx->pc = 0x3C2430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C2438u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2430u, 0x3C2438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2438u;
label_3c2438:
    // 0x3c2438: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3c2438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3c243c:
    // 0x3c243c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x3c243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_3c2440:
    // 0x3c2440: 0x40f809  jalr        $v0
label_3c2444:
    if (ctx->pc == 0x3C2444u) {
        ctx->pc = 0x3C2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2440u;
        // 0x3c2444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2448u;
        goto label_3c2448;
    }
    ctx->pc = 0x3C2440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2448u);
        ctx->pc = 0x3C2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2440u;
        // 0x3c2444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2440u, 0x3C2448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2448u;
label_3c2448:
    // 0x3c2448: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x3c2448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3c244c:
    // 0x3c244c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x3c244cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_3c2450:
    // 0x3c2450: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3c2450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c2454:
    // 0x3c2454: 0x60f809  jalr        $v1
label_3c2458:
    if (ctx->pc == 0x3C2458u) {
        ctx->pc = 0x3C2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2454u;
        // 0x3c2458: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C245Cu;
        goto label_3c245c;
    }
    ctx->pc = 0x3C2454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C245Cu);
        ctx->pc = 0x3C2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2454u;
        // 0x3c2458: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2454u, 0x3C245Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C245Cu;
label_3c245c:
    // 0x3c245c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x3c245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_3c2460:
    // 0x3c2460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2464:
    // 0x3c2464: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3c2464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3c2468:
    // 0x3c2468: 0x60f809  jalr        $v1
label_3c246c:
    if (ctx->pc == 0x3C246Cu) {
        ctx->pc = 0x3C246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2468u;
        // 0x3c246c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2470u;
        goto label_3c2470;
    }
    ctx->pc = 0x3C2468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C2470u);
        ctx->pc = 0x3C246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2468u;
        // 0x3c246c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2468u, 0x3C2470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2470u;
label_3c2470:
    // 0x3c2470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2474:
    // 0x3c2474: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c2474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2478:
    // 0x3c2478: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c2478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c247c:
    // 0x3c247c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c247cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2480:
    // 0x3c2480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2484:
    // 0x3c2484: 0x3e00008  jr          $ra
label_3c2488:
    if (ctx->pc == 0x3C2488u) {
        ctx->pc = 0x3C2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2484u;
        // 0x3c2488: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C248Cu;
        goto label_3c248c;
    }
    ctx->pc = 0x3C2484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2484u;
        // 0x3c2488: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C248Cu;
label_3c248c:
    // 0x3c248c: 0x0  nop
    ctx->pc = 0x3c248cu;
    // NOP
label_3c2490:
    // 0x3c2490: 0x3e00008  jr          $ra
label_3c2494:
    if (ctx->pc == 0x3C2494u) {
        ctx->pc = 0x3C2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2490u;
        // 0x3c2494: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2498u;
        goto label_3c2498;
    }
    ctx->pc = 0x3C2490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2490u;
        // 0x3c2494: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2498u;
label_3c2498:
    // 0x3c2498: 0x3e00008  jr          $ra
label_3c249c:
    if (ctx->pc == 0x3C249Cu) {
        ctx->pc = 0x3C249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2498u;
        // 0x3c249c: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24A0u;
        goto label_3c24a0;
    }
    ctx->pc = 0x3C2498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2498u;
        // 0x3c249c: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C24A0u;
label_3c24a0:
    // 0x3c24a0: 0x3e00008  jr          $ra
label_3c24a4:
    if (ctx->pc == 0x3C24A4u) {
        ctx->pc = 0x3C24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24A0u;
        // 0x3c24a4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24A8u;
        goto label_3c24a8;
    }
    ctx->pc = 0x3C24A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24A0u;
        // 0x3c24a4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C24A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C24A8u;
label_3c24a8:
    // 0x3c24a8: 0x3e00008  jr          $ra
label_3c24ac:
    if (ctx->pc == 0x3C24ACu) {
        ctx->pc = 0x3C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24A8u;
        // 0x3c24ac: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24B0u;
        goto label_3c24b0;
    }
    ctx->pc = 0x3C24A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24A8u;
        // 0x3c24ac: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C24A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C24B0u;
label_3c24b0:
    // 0x3c24b0: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x3c24b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
label_3c24b4:
    // 0x3c24b4: 0x3e00008  jr          $ra
label_3c24b8:
    if (ctx->pc == 0x3C24B8u) {
        ctx->pc = 0x3C24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24B4u;
        // 0x3c24b8: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24BCu;
        goto label_3c24bc;
    }
    ctx->pc = 0x3C24B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24B4u;
        // 0x3c24b8: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C24B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C24BCu;
label_3c24bc:
    // 0x3c24bc: 0x0  nop
    ctx->pc = 0x3c24bcu;
    // NOP
    ctx->pc = 0x3c24c0u;
}
