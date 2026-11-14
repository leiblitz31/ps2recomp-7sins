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

// Function: sub_00214D40
// Address: 0x214d40 - 0x214d70
void sub_00214D40_0x214d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214D40_0x214d40");
#endif

    ctx->pc = 0x214d40u;

    // 0x214d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214d44: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x214d48: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x214d48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x214d4c: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x214d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x214d50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214d54: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x214d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214d58: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x214d58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x214d5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x214d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x214d60: 0x3e00008  jr          $ra
    ctx->pc = 0x214D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214D68u;
    // 0x214d68: 0x0  nop
    ctx->pc = 0x214d68u;
    // NOP
    // 0x214d6c: 0x0  nop
    ctx->pc = 0x214d6cu;
    // NOP
    ctx->pc = 0x214d70u;
}
