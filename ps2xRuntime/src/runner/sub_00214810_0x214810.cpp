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

// Function: sub_00214810
// Address: 0x214810 - 0x214900
void sub_00214810_0x214810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214810_0x214810");
#endif

    switch (ctx->pc) {
        case 0x214834u: goto label_214834;
        case 0x214850u: goto label_214850;
        case 0x214860u: goto label_214860;
        case 0x214874u: goto label_214874;
        case 0x214884u: goto label_214884;
        case 0x21489cu: goto label_21489c;
        case 0x2148a8u: goto label_2148a8;
        case 0x2148d0u: goto label_2148d0;
        case 0x2148dcu: goto label_2148dc;
        default: break;
    }

    ctx->pc = 0x214810u;

    // 0x214810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x214814: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x214814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x214818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x214818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21481c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21481cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x214820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x214824: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x214824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x214828: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x214828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21482c: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x21482Cu;
    SET_GPR_U32(ctx, 31, 0x214834u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x21482Cu, 0x214834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214834u;
label_214834:
    // 0x214834: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x214834u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x214838: 0x8f82bb6c  lw          $v0, -0x4494($gp)
    ctx->pc = 0x214838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x21483c: 0x10020028  beq         $zero, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x21483Cu;
    {
        const bool branch_taken_0x21483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x21483c) {
            ctx->pc = 0x2148E0u;
            goto label_2148e0;
        }
    }
    ctx->pc = 0x214844u;
    // 0x214844: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x214844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x214848: 0xc041008  jal         func_104020
    ctx->pc = 0x214848u;
    SET_GPR_U32(ctx, 31, 0x214850u);
    ctx->pc = 0x104020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104020u, 0x214848u, 0x214850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214850u;
label_214850:
    // 0x214850: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x214850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214854: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x214854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x214858: 0xc041000  jal         func_104000
    ctx->pc = 0x214858u;
    SET_GPR_U32(ctx, 31, 0x214860u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x214858u, 0x214860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214860u;
label_214860:
    // 0x214860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x214864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214868: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x214868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21486c: 0xc08535c  jal         func_214D70
    ctx->pc = 0x21486Cu;
    SET_GPR_U32(ctx, 31, 0x214874u);
    ctx->pc = 0x214D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D70u, 0x21486Cu, 0x214874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214874u;
label_214874:
    // 0x214874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x214874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214878: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x214878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x21487c: 0xc041000  jal         func_104000
    ctx->pc = 0x21487Cu;
    SET_GPR_U32(ctx, 31, 0x214884u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x21487Cu, 0x214884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214884u;
label_214884:
    // 0x214884: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214884u;
    {
        const bool branch_taken_0x214884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x214884) {
            ctx->pc = 0x21489Cu;
            goto label_21489c;
        }
    }
    ctx->pc = 0x21488Cu;
    // 0x21488c: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x21488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x214890: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214894: 0xc085270  jal         func_2149C0
    ctx->pc = 0x214894u;
    SET_GPR_U32(ctx, 31, 0x21489Cu);
    ctx->pc = 0x2149C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2149C0u, 0x214894u, 0x21489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21489Cu;
label_21489c:
    // 0x21489c: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x21489cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x2148a0: 0xc085264  jal         func_214990
    ctx->pc = 0x2148A0u;
    SET_GPR_U32(ctx, 31, 0x2148A8u);
    ctx->pc = 0x214990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214990u, 0x2148A0u, 0x2148A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148A8u;
label_2148a8:
    // 0x2148a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2148a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2148ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2148acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2148b0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2148B0u;
    {
        const bool branch_taken_0x2148b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2148b0) {
            ctx->pc = 0x2148E0u;
            goto label_2148e0;
        }
    }
    ctx->pc = 0x2148B8u;
    // 0x2148b8: 0x8f82bb6c  lw          $v0, -0x4494($gp)
    ctx->pc = 0x2148b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x2148bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2148BCu;
    {
        const bool branch_taken_0x2148bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2148bc) {
            ctx->pc = 0x2148E0u;
            goto label_2148e0;
        }
    }
    ctx->pc = 0x2148C4u;
    // 0x2148c4: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x2148c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x2148c8: 0xc085240  jal         func_214900
    ctx->pc = 0x2148C8u;
    SET_GPR_U32(ctx, 31, 0x2148D0u);
    ctx->pc = 0x214900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214900u, 0x2148C8u, 0x2148D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148D0u;
label_2148d0:
    // 0x2148d0: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x2148d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
    // 0x2148d4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2148D4u;
    SET_GPR_U32(ctx, 31, 0x2148DCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2148D4u, 0x2148DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148DCu;
label_2148dc:
    // 0x2148dc: 0xaf80bb6c  sw          $zero, -0x4494($gp)
    ctx->pc = 0x2148dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949740), GPR_U32(ctx, 0));
label_2148e0:
    // 0x2148e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2148e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2148e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2148e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2148e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2148ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2148ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2148f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2148f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2148f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2148f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2148f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2148F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2148F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214900u;
}
