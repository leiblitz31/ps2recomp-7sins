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

// Function: sub_00499460
// Address: 0x499460 - 0x499588
void sub_00499460_0x499460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499460_0x499460");
#endif

    switch (ctx->pc) {
        case 0x4994c8u: goto label_4994c8;
        case 0x4994d4u: goto label_4994d4;
        case 0x499520u: goto label_499520;
        case 0x49952cu: goto label_49952c;
        default: break;
    }

    ctx->pc = 0x499460u;

    // 0x499460: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x499460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x499464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x499464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x499468: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x499468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x49946c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x49946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x499470: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x499470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499474: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x499474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x499478: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x499478u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49947c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x49947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x499480: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x499480u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499484: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x499484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x499488: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x499488u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49948c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x49948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x499490: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x499490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499494: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x499494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x499498: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x499498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x49949c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x49949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x4994a0: 0x12e20015  beq         $s7, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4994A0u;
    {
        const bool branch_taken_0x4994a0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x4994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4994A0u;
        // 0x4994a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4994a0) {
            ctx->pc = 0x4994F8u;
            goto label_4994f8;
        }
    }
    ctx->pc = 0x4994A8u;
    // 0x4994a8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4994a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4994ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4994acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4994b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4994b4: 0x94520014  lhu         $s2, 0x14($v0)
    ctx->pc = 0x4994b4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4994b8: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x4994B8u;
    {
        const bool branch_taken_0x4994b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4994BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4994B8u;
        // 0x4994bc: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4994b8) {
            ctx->pc = 0x4994F8u;
            goto label_4994f8;
        }
    }
    ctx->pc = 0x4994C0u;
    // 0x4994c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4994c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994c4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x4994c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4994c8:
    // 0x4994c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4994c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4994cc: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4994CCu;
    SET_GPR_U32(ctx, 31, 0x4994D4u);
    ctx->pc = 0x4994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4994CCu;
    // 0x4994d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4994CCu, 0x4994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4994D4u;
label_4994d4:
    // 0x4994d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4994D4u;
    {
        const bool branch_taken_0x4994d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4994d4) {
            ctx->pc = 0x4994D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4994D4u;
            // 0x4994d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4994ECu;
            goto label_4994ec;
        }
    }
    ctx->pc = 0x4994DCu;
    // 0x4994dc: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x4994dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x4994e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4994e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4994E4u;
    {
        const bool branch_taken_0x4994e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4994E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4994E4u;
        // 0x4994e8: 0xaede0000  sw          $fp, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4994e4) {
            ctx->pc = 0x499554u;
            goto label_499554;
        }
    }
    ctx->pc = 0x4994ECu;
label_4994ec:
    // 0x4994ec: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x4994ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4994f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4994F0u;
    {
        const bool branch_taken_0x4994f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4994F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4994F0u;
        // 0x4994f4: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4994f0) {
            ctx->pc = 0x4994C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4994c8;
        }
    }
    ctx->pc = 0x4994F8u;
label_4994f8:
    // 0x4994f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4994f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4994fc: 0x12e20014  beq         $s7, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4994FCu;
    {
        const bool branch_taken_0x4994fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x499500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4994FCu;
        // 0x499500: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4994fc) {
            ctx->pc = 0x499550u;
            goto label_499550;
        }
    }
    ctx->pc = 0x499504u;
    // 0x499504: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x499504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x499508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x499508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49950c: 0x94520016  lhu         $s2, 0x16($v0)
    ctx->pc = 0x49950cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x499510: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x499510u;
    {
        const bool branch_taken_0x499510 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x499514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499510u;
        // 0x499514: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499510) {
            ctx->pc = 0x499550u;
            goto label_499550;
        }
    }
    ctx->pc = 0x499518u;
    // 0x499518: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x499518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49951c: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x49951cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_499520:
    // 0x499520: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x499520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x499524: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x499524u;
    SET_GPR_U32(ctx, 31, 0x49952Cu);
    ctx->pc = 0x499528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499524u;
    // 0x499528: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x499524u, 0x49952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49952Cu;
label_49952c:
    // 0x49952c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49952Cu;
    {
        const bool branch_taken_0x49952c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49952c) {
            ctx->pc = 0x499530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49952Cu;
            // 0x499530: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499544u;
            goto label_499544;
        }
    }
    ctx->pc = 0x499534u;
    // 0x499534: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x499534u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x499538: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x499538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49953c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49953Cu;
    {
        const bool branch_taken_0x49953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49953Cu;
        // 0x499540: 0xaed70000  sw          $s7, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49953c) {
            ctx->pc = 0x499554u;
            goto label_499554;
        }
    }
    ctx->pc = 0x499544u;
label_499544:
    // 0x499544: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x499544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x499548: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x499548u;
    {
        const bool branch_taken_0x499548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499548u;
        // 0x49954c: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499548) {
            ctx->pc = 0x499520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499520;
        }
    }
    ctx->pc = 0x499550u;
label_499550:
    // 0x499550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x499550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499554:
    // 0x499554: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x499554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x499558: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x499558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49955c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x49955cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x499560: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x499560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x499564: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x499564u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x499568: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x499568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49956c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x49956cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499570: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x499570u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499574: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x499574u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49957c: 0x3e00008  jr          $ra
    ctx->pc = 0x49957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49957Cu;
        // 0x499580: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49957Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499584u;
    // 0x499584: 0x0  nop
    ctx->pc = 0x499584u;
    // NOP
    ctx->pc = 0x499588u;
}
