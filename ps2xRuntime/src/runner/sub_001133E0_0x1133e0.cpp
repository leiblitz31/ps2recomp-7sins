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

// Function: sub_001133E0
// Address: 0x1133e0 - 0x113440
void sub_001133E0_0x1133e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001133E0_0x1133e0");
#endif

    switch (ctx->pc) {
        case 0x113404u: goto label_113404;
        case 0x11342cu: goto label_11342c;
        default: break;
    }

    ctx->pc = 0x1133e0u;

    // 0x1133e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1133e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1133e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1133e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1133e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1133e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1133ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1133ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1133f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1133f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1133f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1133f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1133f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1133f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1133fc: 0xc044d38  jal         func_1134E0
    ctx->pc = 0x1133FCu;
    SET_GPR_U32(ctx, 31, 0x113404u);
    ctx->pc = 0x1134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1134E0u, 0x1133FCu, 0x113404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113404u;
label_113404:
    // 0x113404: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113408: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x113408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x11340c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113410: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x113410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113414: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x113414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x113418: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x113418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11341c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x11341cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x113420: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113424: 0xc044d10  jal         func_113440
    ctx->pc = 0x113424u;
    SET_GPR_U32(ctx, 31, 0x11342Cu);
    ctx->pc = 0x113440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113440u, 0x113424u, 0x11342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11342Cu;
label_11342c:
    // 0x11342c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113434: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x113434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x113438: 0x3e00008  jr          $ra
    ctx->pc = 0x113438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113440u;
}
