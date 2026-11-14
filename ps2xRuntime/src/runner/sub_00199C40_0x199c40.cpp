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

// Function: sub_00199C40
// Address: 0x199c40 - 0x199c70
void sub_00199C40_0x199c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199C40_0x199c40");
#endif

    ctx->pc = 0x199c40u;

    // 0x199c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199c44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x199c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x199c48: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x199c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x199c4c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x199c4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199c50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x199c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199c54: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x199c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x199c58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x199c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x199c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x199C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199C64u;
    // 0x199c64: 0x0  nop
    ctx->pc = 0x199c64u;
    // NOP
    // 0x199c68: 0x0  nop
    ctx->pc = 0x199c68u;
    // NOP
    // 0x199c6c: 0x0  nop
    ctx->pc = 0x199c6cu;
    // NOP
    ctx->pc = 0x199c70u;
}
