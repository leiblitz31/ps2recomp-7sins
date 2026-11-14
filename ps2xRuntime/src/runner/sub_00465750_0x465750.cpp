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

// Function: sub_00465750
// Address: 0x465750 - 0x465800
void sub_00465750_0x465750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465750_0x465750");
#endif

    switch (ctx->pc) {
        case 0x465778u: goto label_465778;
        case 0x465784u: goto label_465784;
        case 0x465790u: goto label_465790;
        case 0x4657a4u: goto label_4657a4;
        case 0x4657b8u: goto label_4657b8;
        case 0x4657c4u: goto label_4657c4;
        case 0x4657d8u: goto label_4657d8;
        default: break;
    }

    ctx->pc = 0x465750u;

    // 0x465750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x465750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x465754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x465754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x465758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46575c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x465760: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x465760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x465764: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x465764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x465768: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x465768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46576c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46576cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465770: 0xc11966c  jal         func_4659B0
    ctx->pc = 0x465770u;
    SET_GPR_U32(ctx, 31, 0x465778u);
    ctx->pc = 0x4659B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4659B0u, 0x465770u, 0x465778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465778u;
label_465778:
    // 0x465778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x465778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46577c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x46577Cu;
    {
        const bool branch_taken_0x46577c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46577c) {
            ctx->pc = 0x4657DCu;
            goto label_4657dc;
        }
    }
    ctx->pc = 0x465784u;
label_465784:
    // 0x465784: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x465784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465788: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x465788u;
    SET_GPR_U32(ctx, 31, 0x465790u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x465788u, 0x465790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465790u;
label_465790:
    // 0x465790: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x465790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x465794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465798: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x465798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46579c: 0xc059668  jal         func_1659A0
    ctx->pc = 0x46579Cu;
    SET_GPR_U32(ctx, 31, 0x4657A4u);
    ctx->pc = 0x1659A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659A0u, 0x46579Cu, 0x4657A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4657A4u;
label_4657a4:
    // 0x4657a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4657a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4657a8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4657a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4657ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4657acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4657b0: 0xc059698  jal         func_165A60
    ctx->pc = 0x4657B0u;
    SET_GPR_U32(ctx, 31, 0x4657B8u);
    ctx->pc = 0x165A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A60u, 0x4657B0u, 0x4657B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4657B8u;
label_4657b8:
    // 0x4657b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4657b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4657bc: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x4657BCu;
    SET_GPR_U32(ctx, 31, 0x4657C4u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x4657BCu, 0x4657C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4657C4u;
label_4657c4:
    // 0x4657c4: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x4657c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4657c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4657c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4657cc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4657ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4657d0: 0xc065198  jal         func_194660
    ctx->pc = 0x4657D0u;
    SET_GPR_U32(ctx, 31, 0x4657D8u);
    ctx->pc = 0x194660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194660u, 0x4657D0u, 0x4657D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4657D8u;
label_4657d8:
    // 0x4657d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4657d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4657dc:
    // 0x4657dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4657dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4657e0: 0x1603ffe8  bne         $s0, $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4657E0u;
    {
        const bool branch_taken_0x4657e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4657e0) {
            ctx->pc = 0x465784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465784;
        }
    }
    ctx->pc = 0x4657E8u;
    // 0x4657e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4657e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4657ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4657ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4657f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4657f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4657f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4657F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4657F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4657FCu;
    // 0x4657fc: 0x0  nop
    ctx->pc = 0x4657fcu;
    // NOP
    ctx->pc = 0x465800u;
}
