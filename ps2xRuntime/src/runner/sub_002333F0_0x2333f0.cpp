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

// Function: sub_002333F0
// Address: 0x2333f0 - 0x233430
void sub_002333F0_0x2333f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002333F0_0x2333f0");
#endif

    switch (ctx->pc) {
        case 0x233408u: goto label_233408;
        default: break;
    }

    ctx->pc = 0x2333f0u;

    // 0x2333f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2333f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2333f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2333f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2333f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2333f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2333fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2333fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233400: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x233400u;
    SET_GPR_U32(ctx, 31, 0x233408u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x233400u, 0x233408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233408u;
label_233408:
    // 0x233408: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x233408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23340c: 0x246353b0  addiu       $v1, $v1, 0x53B0
    ctx->pc = 0x23340cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21424));
    // 0x233410: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233414: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x233418: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23341c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23341cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233420: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x233420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x233424: 0x3e00008  jr          $ra
    ctx->pc = 0x233424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23342Cu;
    // 0x23342c: 0x0  nop
    ctx->pc = 0x23342cu;
    // NOP
    ctx->pc = 0x233430u;
}
