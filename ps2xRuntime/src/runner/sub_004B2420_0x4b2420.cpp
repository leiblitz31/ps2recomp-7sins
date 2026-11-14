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

// Function: sub_004B2420
// Address: 0x4b2420 - 0x4b2508
void sub_004B2420_0x4b2420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2420_0x4b2420");
#endif

    switch (ctx->pc) {
        case 0x4b2420u: goto label_4b2420;
        case 0x4b2424u: goto label_4b2424;
        case 0x4b2428u: goto label_4b2428;
        case 0x4b242cu: goto label_4b242c;
        case 0x4b2430u: goto label_4b2430;
        case 0x4b2434u: goto label_4b2434;
        case 0x4b2438u: goto label_4b2438;
        case 0x4b243cu: goto label_4b243c;
        case 0x4b2440u: goto label_4b2440;
        case 0x4b2444u: goto label_4b2444;
        case 0x4b2448u: goto label_4b2448;
        case 0x4b244cu: goto label_4b244c;
        case 0x4b2450u: goto label_4b2450;
        case 0x4b2454u: goto label_4b2454;
        case 0x4b2458u: goto label_4b2458;
        case 0x4b245cu: goto label_4b245c;
        case 0x4b2460u: goto label_4b2460;
        case 0x4b2464u: goto label_4b2464;
        case 0x4b2468u: goto label_4b2468;
        case 0x4b246cu: goto label_4b246c;
        case 0x4b2470u: goto label_4b2470;
        case 0x4b2474u: goto label_4b2474;
        case 0x4b2478u: goto label_4b2478;
        case 0x4b247cu: goto label_4b247c;
        case 0x4b2480u: goto label_4b2480;
        case 0x4b2484u: goto label_4b2484;
        case 0x4b2488u: goto label_4b2488;
        case 0x4b248cu: goto label_4b248c;
        case 0x4b2490u: goto label_4b2490;
        case 0x4b2494u: goto label_4b2494;
        case 0x4b2498u: goto label_4b2498;
        case 0x4b249cu: goto label_4b249c;
        case 0x4b24a0u: goto label_4b24a0;
        case 0x4b24a4u: goto label_4b24a4;
        case 0x4b24a8u: goto label_4b24a8;
        case 0x4b24acu: goto label_4b24ac;
        case 0x4b24b0u: goto label_4b24b0;
        case 0x4b24b4u: goto label_4b24b4;
        case 0x4b24b8u: goto label_4b24b8;
        case 0x4b24bcu: goto label_4b24bc;
        case 0x4b24c0u: goto label_4b24c0;
        case 0x4b24c4u: goto label_4b24c4;
        case 0x4b24c8u: goto label_4b24c8;
        case 0x4b24ccu: goto label_4b24cc;
        case 0x4b24d0u: goto label_4b24d0;
        case 0x4b24d4u: goto label_4b24d4;
        case 0x4b24d8u: goto label_4b24d8;
        case 0x4b24dcu: goto label_4b24dc;
        case 0x4b24e0u: goto label_4b24e0;
        case 0x4b24e4u: goto label_4b24e4;
        case 0x4b24e8u: goto label_4b24e8;
        case 0x4b24ecu: goto label_4b24ec;
        case 0x4b24f0u: goto label_4b24f0;
        case 0x4b24f4u: goto label_4b24f4;
        case 0x4b24f8u: goto label_4b24f8;
        case 0x4b24fcu: goto label_4b24fc;
        case 0x4b2500u: goto label_4b2500;
        case 0x4b2504u: goto label_4b2504;
        default: break;
    }

    ctx->pc = 0x4b2420u;

label_4b2420:
    // 0x4b2420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b2420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4b2424:
    // 0x4b2424: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b2424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b2428:
    // 0x4b2428: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4b2428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4b242c:
    // 0x4b242c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4b242cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b2430:
    // 0x4b2430: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4b2430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4b2434:
    // 0x4b2434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4b2434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b2438:
    // 0x4b2438: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_4b243c:
    if (ctx->pc == 0x4B243Cu) {
        ctx->pc = 0x4B243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2438u;
        // 0x4b243c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2440u;
        goto label_4b2440;
    }
    ctx->pc = 0x4B2438u;
    {
        const bool branch_taken_0x4b2438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2438u;
        // 0x4b243c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2438) {
            ctx->pc = 0x4B24F0u;
            goto label_4b24f0;
        }
    }
    ctx->pc = 0x4B2440u;
label_4b2440:
    // 0x4b2440: 0x8c821398  lw          $v0, 0x1398($a0)
    ctx->pc = 0x4b2440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5016)));
label_4b2444:
    // 0x4b2444: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_4b2448:
    if (ctx->pc == 0x4B2448u) {
        ctx->pc = 0x4B2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2444u;
        // 0x4b2448: 0x8c831384  lw          $v1, 0x1384($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B244Cu;
        goto label_4b244c;
    }
    ctx->pc = 0x4B2444u;
    {
        const bool branch_taken_0x4b2444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2444) {
            ctx->pc = 0x4B2448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2444u;
            // 0x4b2448: 0x8c831384  lw          $v1, 0x1384($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B248Cu;
            goto label_4b248c;
        }
    }
    ctx->pc = 0x4B244Cu;
label_4b244c:
    // 0x4b244c: 0x8c85139c  lw          $a1, 0x139C($a0)
    ctx->pc = 0x4b244cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5020)));
label_4b2450:
    // 0x4b2450: 0x40f809  jalr        $v0
label_4b2454:
    if (ctx->pc == 0x4B2454u) {
        ctx->pc = 0x4B2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2450u;
        // 0x4b2454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2458u;
        goto label_4b2458;
    }
    ctx->pc = 0x4B2450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B2458u);
        ctx->pc = 0x4B2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2450u;
        // 0x4b2454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2450u, 0x4B2458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B2458u;
label_4b2458:
    // 0x4b2458: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4b2458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b245c:
    // 0x4b245c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4b245cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b2460:
    // 0x4b2460: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_4b2464:
    if (ctx->pc == 0x4B2464u) {
        ctx->pc = 0x4B2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2460u;
        // 0x4b2464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2468u;
        goto label_4b2468;
    }
    ctx->pc = 0x4B2460u;
    {
        const bool branch_taken_0x4b2460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2460u;
        // 0x4b2464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2460) {
            ctx->pc = 0x4B24F0u;
            goto label_4b24f0;
        }
    }
    ctx->pc = 0x4B2468u;
label_4b2468:
    // 0x4b2468: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b2468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b246c:
    // 0x4b246c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4b246cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b2470:
    // 0x4b2470: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b2470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2474:
    // 0x4b2474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b2474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2478:
    // 0x4b2478: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b2478u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b247c:
    // 0x4b247c: 0xc12baca  jal         func_4AEB28
label_4b2480:
    if (ctx->pc == 0x4B2480u) {
        ctx->pc = 0x4B2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B247Cu;
        // 0x4b2480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2484u;
        goto label_4b2484;
    }
    ctx->pc = 0x4B247Cu;
    SET_GPR_U32(ctx, 31, 0x4B2484u);
    ctx->pc = 0x4B2480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B247Cu;
    // 0x4b2480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B247Cu, 0x4B2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2484u;
label_4b2484:
    // 0x4b2484: 0x1000001b  b           . + 4 + (0x1B << 2)
label_4b2488:
    if (ctx->pc == 0x4B2488u) {
        ctx->pc = 0x4B2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2484u;
        // 0x4b2488: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B248Cu;
        goto label_4b248c;
    }
    ctx->pc = 0x4B2484u;
    {
        const bool branch_taken_0x4b2484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2484u;
        // 0x4b2488: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2484) {
            ctx->pc = 0x4B24F4u;
            goto label_4b24f4;
        }
    }
    ctx->pc = 0x4B248Cu;
label_4b248c:
    // 0x4b248c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_4b2490:
    if (ctx->pc == 0x4B2490u) {
        ctx->pc = 0x4B2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B248Cu;
        // 0x4b2490: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2494u;
        goto label_4b2494;
    }
    ctx->pc = 0x4B248Cu;
    {
        const bool branch_taken_0x4b248c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B248Cu;
        // 0x4b2490: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b248c) {
            ctx->pc = 0x4B24F4u;
            goto label_4b24f4;
        }
    }
    ctx->pc = 0x4B2494u;
label_4b2494:
    // 0x4b2494: 0x8c821390  lw          $v0, 0x1390($a0)
    ctx->pc = 0x4b2494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5008)));
label_4b2498:
    // 0x4b2498: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_4b249c:
    if (ctx->pc == 0x4B249Cu) {
        ctx->pc = 0x4B249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2498u;
        // 0x4b249c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24A0u;
        goto label_4b24a0;
    }
    ctx->pc = 0x4B2498u;
    {
        const bool branch_taken_0x4b2498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2498) {
            ctx->pc = 0x4B249Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2498u;
            // 0x4b249c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B24F8u;
            goto label_4b24f8;
        }
    }
    ctx->pc = 0x4B24A0u;
label_4b24a0:
    // 0x4b24a0: 0x8c851388  lw          $a1, 0x1388($a0)
    ctx->pc = 0x4b24a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5000)));
label_4b24a4:
    // 0x4b24a4: 0x60f809  jalr        $v1
label_4b24a8:
    if (ctx->pc == 0x4B24A8u) {
        ctx->pc = 0x4B24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24A4u;
        // 0x4b24a8: 0x112082  srl         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24ACu;
        goto label_4b24ac;
    }
    ctx->pc = 0x4B24A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4B24ACu);
        ctx->pc = 0x4B24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24A4u;
        // 0x4b24a8: 0x112082  srl         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B24A4u, 0x4B24ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B24ACu;
label_4b24ac:
    // 0x4b24ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4b24acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b24b0:
    // 0x4b24b0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x4b24b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b24b4:
    // 0x4b24b4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4b24b8:
    if (ctx->pc == 0x4B24B8u) {
        ctx->pc = 0x4B24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24B4u;
        // 0x4b24b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24BCu;
        goto label_4b24bc;
    }
    ctx->pc = 0x4B24B4u;
    {
        const bool branch_taken_0x4b24b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b24b4) {
            ctx->pc = 0x4B24B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B24B4u;
            // 0x4b24b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B24F4u;
            goto label_4b24f4;
        }
    }
    ctx->pc = 0x4B24BCu;
label_4b24bc:
    // 0x4b24bc: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
label_4b24c0:
    if (ctx->pc == 0x4B24C0u) {
        ctx->pc = 0x4B24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24BCu;
        // 0x4b24c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24C4u;
        goto label_4b24c4;
    }
    ctx->pc = 0x4B24BCu;
    {
        const bool branch_taken_0x4b24bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b24bc) {
            ctx->pc = 0x4B24C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B24BCu;
            // 0x4b24c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B24F4u;
            goto label_4b24f4;
        }
    }
    ctx->pc = 0x4B24C4u;
label_4b24c4:
    // 0x4b24c4: 0xc0bf778  jal         func_2FDDE0
label_4b24c8:
    if (ctx->pc == 0x4B24C8u) {
        ctx->pc = 0x4B24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24C4u;
        // 0x4b24c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24CCu;
        goto label_4b24cc;
    }
    ctx->pc = 0x4B24C4u;
    SET_GPR_U32(ctx, 31, 0x4B24CCu);
    ctx->pc = 0x4B24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B24C4u;
    // 0x4b24c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x4B24C4u, 0x4B24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B24CCu;
label_4b24cc:
    // 0x4b24cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b24ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b24d0:
    // 0x4b24d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b24d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b24d4:
    // 0x4b24d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b24d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b24d8:
    // 0x4b24d8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4b24d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b24dc:
    // 0x4b24dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b24dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b24e0:
    // 0x4b24e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b24e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b24e4:
    // 0x4b24e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b24e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b24e8:
    // 0x4b24e8: 0xc12baca  jal         func_4AEB28
label_4b24ec:
    if (ctx->pc == 0x4B24ECu) {
        ctx->pc = 0x4B24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B24E8u;
        // 0x4b24ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B24F0u;
        goto label_4b24f0;
    }
    ctx->pc = 0x4B24E8u;
    SET_GPR_U32(ctx, 31, 0x4B24F0u);
    ctx->pc = 0x4B24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B24E8u;
    // 0x4b24ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B24E8u, 0x4B24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B24F0u;
label_4b24f0:
    // 0x4b24f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4b24f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b24f4:
    // 0x4b24f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b24f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b24f8:
    // 0x4b24f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4b24f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b24fc:
    // 0x4b24fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b24fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b2500:
    // 0x4b2500: 0x3e00008  jr          $ra
label_4b2504:
    if (ctx->pc == 0x4B2504u) {
        ctx->pc = 0x4B2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2500u;
        // 0x4b2504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2508u;
        goto label_fallthrough_0x4b2500;
    }
    ctx->pc = 0x4B2500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2500u;
        // 0x4b2504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b2500:
    ctx->pc = 0x4B2508u;
}
