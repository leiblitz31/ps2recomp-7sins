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

// Function: sub_00220E60
// Address: 0x220e60 - 0x220ea0
void sub_00220E60_0x220e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220E60_0x220e60");
#endif

    switch (ctx->pc) {
        case 0x220e7cu: goto label_220e7c;
        default: break;
    }

    ctx->pc = 0x220e60u;

    // 0x220e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220e68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x220e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x220e6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x220e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220e70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x220e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220e74: 0xc042734  jal         func_109CD0
    ctx->pc = 0x220E74u;
    SET_GPR_U32(ctx, 31, 0x220E7Cu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x220E74u, 0x220E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E7Cu;
label_220e7c:
    // 0x220e7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x220e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220e80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x220e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x220e84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x220e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220e8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x220e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x220e90: 0x3e00008  jr          $ra
    ctx->pc = 0x220E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220E98u;
    // 0x220e98: 0x0  nop
    ctx->pc = 0x220e98u;
    // NOP
    // 0x220e9c: 0x0  nop
    ctx->pc = 0x220e9cu;
    // NOP
    ctx->pc = 0x220ea0u;
}
