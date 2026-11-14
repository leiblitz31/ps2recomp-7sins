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

// Function: sub_004879A0
// Address: 0x4879a0 - 0x487a10
void sub_004879A0_0x4879a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004879A0_0x4879a0");
#endif

    switch (ctx->pc) {
        case 0x4879ccu: goto label_4879cc;
        case 0x4879ecu: goto label_4879ec;
        default: break;
    }

    ctx->pc = 0x4879a0u;

    // 0x4879a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4879a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4879a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4879a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4879a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4879a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4879ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4879acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4879b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4879b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x4879b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4879b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x4879b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4879b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4879bc: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x4879bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4879c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4879c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4879c4: 0xc0de61a  jal         func_379868
    ctx->pc = 0x4879C4u;
    SET_GPR_U32(ctx, 31, 0x4879CCu);
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x4879C4u, 0x4879CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4879CCu;
label_4879cc:
    // 0x4879cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4879ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4879d0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4879D0u;
    {
        const bool branch_taken_0x4879d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4879d0) {
            ctx->pc = 0x4879ECu;
            goto label_4879ec;
        }
    }
    ctx->pc = 0x4879D8u;
    // 0x4879d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4879d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4879dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4879dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4879e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4879e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4879e4: 0xc102cfc  jal         func_40B3F0
    ctx->pc = 0x4879E4u;
    SET_GPR_U32(ctx, 31, 0x4879ECu);
    ctx->pc = 0x40B3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40B3F0u, 0x4879E4u, 0x4879ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4879ECu;
label_4879ec:
    // 0x4879ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4879ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4879f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4879f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4879f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4879f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4879f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4879f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4879fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4879fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x487a00: 0x3e00008  jr          $ra
    ctx->pc = 0x487A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487A08u;
    // 0x487a08: 0x0  nop
    ctx->pc = 0x487a08u;
    // NOP
    // 0x487a0c: 0x0  nop
    ctx->pc = 0x487a0cu;
    // NOP
    ctx->pc = 0x487a10u;
}
