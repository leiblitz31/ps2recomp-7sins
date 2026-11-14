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

// Function: sub_00132100
// Address: 0x132100 - 0x132130
void sub_00132100_0x132100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132100_0x132100");
#endif

    ctx->pc = 0x132100u;

    // 0x132100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132104: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x132104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x132108: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x132108u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x13210c: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x13210cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x132110: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x132110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132114: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x132114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132118: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x132118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13211c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13211cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x132120: 0x3e00008  jr          $ra
    ctx->pc = 0x132120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132128u;
    // 0x132128: 0x0  nop
    ctx->pc = 0x132128u;
    // NOP
    // 0x13212c: 0x0  nop
    ctx->pc = 0x13212cu;
    // NOP
    ctx->pc = 0x132130u;
}
