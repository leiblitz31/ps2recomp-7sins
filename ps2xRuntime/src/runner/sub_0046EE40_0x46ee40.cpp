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

// Function: sub_0046EE40
// Address: 0x46ee40 - 0x46ee70
void sub_0046EE40_0x46ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EE40_0x46ee40");
#endif

    switch (ctx->pc) {
        case 0x46ee5cu: goto label_46ee5c;
        default: break;
    }

    ctx->pc = 0x46ee40u;

    // 0x46ee40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46ee44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46ee48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46ee48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46ee4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ee50: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46ee54: 0xc11bb9c  jal         func_46EE70
    ctx->pc = 0x46EE54u;
    SET_GPR_U32(ctx, 31, 0x46EE5Cu);
    ctx->pc = 0x46EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46EE70u, 0x46EE54u, 0x46EE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EE5Cu;
label_46ee5c:
    // 0x46ee5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46ee5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ee60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46ee64: 0x3e00008  jr          $ra
    ctx->pc = 0x46EE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46EE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46EE6Cu;
    // 0x46ee6c: 0x0  nop
    ctx->pc = 0x46ee6cu;
    // NOP
    ctx->pc = 0x46ee70u;
}
