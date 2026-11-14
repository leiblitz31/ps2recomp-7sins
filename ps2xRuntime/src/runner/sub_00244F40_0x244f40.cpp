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

// Function: sub_00244F40
// Address: 0x244f40 - 0x244f70
void sub_00244F40_0x244f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244F40_0x244f40");
#endif

    ctx->pc = 0x244f40u;

    // 0x244f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244f44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x244f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x244f48: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x244f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x244f4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x244f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244f50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x244f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244f54: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x244f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    // 0x244f58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x244f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x244F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244F64u;
    // 0x244f64: 0x0  nop
    ctx->pc = 0x244f64u;
    // NOP
    // 0x244f68: 0x0  nop
    ctx->pc = 0x244f68u;
    // NOP
    // 0x244f6c: 0x0  nop
    ctx->pc = 0x244f6cu;
    // NOP
    ctx->pc = 0x244f70u;
}
