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

// Function: sub_002602F0
// Address: 0x2602f0 - 0x260340
void sub_002602F0_0x2602f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002602F0_0x2602f0");
#endif

    switch (ctx->pc) {
        case 0x260320u: goto label_260320;
        case 0x260330u: goto label_260330;
        default: break;
    }

    ctx->pc = 0x2602f0u;

    // 0x2602f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2602f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2602f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2602f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2602f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2602f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2602fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2602fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x260300: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x260300u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x260304: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x260304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260308: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x260308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26030c: 0x2446fff9  addiu       $a2, $v0, -0x7
    ctx->pc = 0x26030cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x260310: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x260310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x260314: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x260314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x260318: 0xc078840  jal         func_1E2100
    ctx->pc = 0x260318u;
    SET_GPR_U32(ctx, 31, 0x260320u);
    ctx->pc = 0x1E2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2100u, 0x260318u, 0x260320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260320u;
label_260320:
    // 0x260320: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x260320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x260324: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x260324u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260328: 0xc078820  jal         func_1E2080
    ctx->pc = 0x260328u;
    SET_GPR_U32(ctx, 31, 0x260330u);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x260328u, 0x260330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260330u;
label_260330:
    // 0x260330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260334: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x260334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x260338: 0x3e00008  jr          $ra
    ctx->pc = 0x260338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260340u;
}
