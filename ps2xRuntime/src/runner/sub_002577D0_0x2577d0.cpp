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

// Function: sub_002577D0
// Address: 0x2577d0 - 0x257810
void sub_002577D0_0x2577d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002577D0_0x2577d0");
#endif

    switch (ctx->pc) {
        case 0x2577ecu: goto label_2577ec;
        default: break;
    }

    ctx->pc = 0x2577d0u;

    // 0x2577d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2577d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2577d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2577d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2577d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2577d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2577dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2577dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2577e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2577e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2577e4: 0xc042734  jal         func_109CD0
    ctx->pc = 0x2577E4u;
    SET_GPR_U32(ctx, 31, 0x2577ECu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x2577E4u, 0x2577ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2577ECu;
label_2577ec:
    // 0x2577ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2577ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2577f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2577f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2577f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2577f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2577f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2577f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2577fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2577fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257800: 0x3e00008  jr          $ra
    ctx->pc = 0x257800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257808u;
    // 0x257808: 0x0  nop
    ctx->pc = 0x257808u;
    // NOP
    // 0x25780c: 0x0  nop
    ctx->pc = 0x25780cu;
    // NOP
    ctx->pc = 0x257810u;
}
