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

// Function: sub_00340828
// Address: 0x340828 - 0x340900
void sub_00340828_0x340828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340828_0x340828");
#endif

    switch (ctx->pc) {
        case 0x34085cu: goto label_34085c;
        case 0x340874u: goto label_340874;
        case 0x3408b8u: goto label_3408b8;
        case 0x3408e0u: goto label_3408e0;
        default: break;
    }

    ctx->pc = 0x340828u;

    // 0x340828: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x340828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34082c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x34082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x340830: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x340830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x340834: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x340838: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x340838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34083c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x34083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x340840: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x340840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x340844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x340848: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x340848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34084c: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x34084cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x340850: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x340850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x340854: 0xc0d120c  jal         func_344830
    ctx->pc = 0x340854u;
    SET_GPR_U32(ctx, 31, 0x34085Cu);
    ctx->pc = 0x340858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340854u;
    // 0x340858: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x340854u, 0x34085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34085Cu;
label_34085c:
    // 0x34085c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34085cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340860: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x340860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x340864: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x340864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x340868: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x340868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x34086c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x34086Cu;
    SET_GPR_U32(ctx, 31, 0x340874u);
    ctx->pc = 0x340870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34086Cu;
    // 0x340870: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34086Cu, 0x340874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340874u;
label_340874:
    // 0x340874: 0x602001b  bltzl       $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x340874u;
    {
        const bool branch_taken_0x340874 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x340874) {
            ctx->pc = 0x340878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340874u;
            // 0x340878: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3408E4u;
            goto label_3408e4;
        }
    }
    ctx->pc = 0x34087Cu;
    // 0x34087c: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x34087Cu;
    {
        const bool branch_taken_0x34087c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x340880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34087Cu;
        // 0x340880: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34087c) {
            ctx->pc = 0x3408E0u;
            goto label_3408e0;
        }
    }
    ctx->pc = 0x340884u;
    // 0x340884: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x340884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x340888: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x340888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34088c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x34088cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x340890: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x340890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340894: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x340894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x340898: 0xd30018  mult        $zero, $a2, $s3
    ctx->pc = 0x340898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34089c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x34089cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3408a0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3408a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3408a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3408a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3408a8: 0x3012  mflo        $a2
    ctx->pc = 0x3408a8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3408ac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3408acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3408b0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3408B0u;
    SET_GPR_U32(ctx, 31, 0x3408B8u);
    ctx->pc = 0x3408B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3408B0u;
    // 0x3408b4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3408B0u, 0x3408B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3408B8u;
label_3408b8:
    // 0x3408b8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3408b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3408bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3408bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3408c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3408C0u;
    {
        const bool branch_taken_0x3408c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3408C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408C0u;
        // 0x3408c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3408c0) {
            ctx->pc = 0x3408E4u;
            goto label_3408e4;
        }
    }
    ctx->pc = 0x3408C8u;
    // 0x3408c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3408c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3408cc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3408ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3408d0: 0xd30018  mult        $zero, $a2, $s3
    ctx->pc = 0x3408d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3408d4: 0x3012  mflo        $a2
    ctx->pc = 0x3408d4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3408d8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3408D8u;
    SET_GPR_U32(ctx, 31, 0x3408E0u);
    ctx->pc = 0x3408DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3408D8u;
    // 0x3408dc: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3408D8u, 0x3408E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3408E0u;
label_3408e0:
    // 0x3408e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3408e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3408e4:
    // 0x3408e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3408e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3408e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3408e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3408ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3408ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3408f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3408f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3408f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3408f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3408f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3408F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3408FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408F8u;
        // 0x3408fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3408F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340900u;
}
