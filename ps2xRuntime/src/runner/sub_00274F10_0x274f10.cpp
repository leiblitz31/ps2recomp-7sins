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

// Function: sub_00274F10
// Address: 0x274f10 - 0x274f40
void sub_00274F10_0x274f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274F10_0x274f10");
#endif

    ctx->pc = 0x274f10u;

    // 0x274f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274f14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x274f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x274f18: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x274f18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x274f1c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x274f1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274f20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x274f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274f24: 0xa06401f0  sb          $a0, 0x1F0($v1)
    ctx->pc = 0x274f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 496), (uint8_t)GPR_U32(ctx, 4));
    // 0x274f28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x274f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x274F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274F34u;
    // 0x274f34: 0x0  nop
    ctx->pc = 0x274f34u;
    // NOP
    // 0x274f38: 0x0  nop
    ctx->pc = 0x274f38u;
    // NOP
    // 0x274f3c: 0x0  nop
    ctx->pc = 0x274f3cu;
    // NOP
    ctx->pc = 0x274f40u;
}
