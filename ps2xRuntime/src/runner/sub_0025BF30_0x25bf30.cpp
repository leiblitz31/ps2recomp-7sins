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

// Function: sub_0025BF30
// Address: 0x25bf30 - 0x25bf60
void sub_0025BF30_0x25bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BF30_0x25bf30");
#endif

    ctx->pc = 0x25bf30u;

    // 0x25bf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25bf34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25bf38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25bf3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bf40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bf44: 0xac64011c  sw          $a0, 0x11C($v1)
    ctx->pc = 0x25bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 4));
    // 0x25bf48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25bf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25bf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x25BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BF54u;
    // 0x25bf54: 0x0  nop
    ctx->pc = 0x25bf54u;
    // NOP
    // 0x25bf58: 0x0  nop
    ctx->pc = 0x25bf58u;
    // NOP
    // 0x25bf5c: 0x0  nop
    ctx->pc = 0x25bf5cu;
    // NOP
    ctx->pc = 0x25bf60u;
}
