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

// Function: sub_001C35B0
// Address: 0x1c35b0 - 0x1c35e0
void sub_001C35B0_0x1c35b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C35B0_0x1c35b0");
#endif

    ctx->pc = 0x1c35b0u;

    // 0x1c35b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c35b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c35b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c35b8: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x1c35b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c35bc: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x1c35bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c35c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c35c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c35c4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c35c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c35c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c35c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c35cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C35CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C35CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C35D4u;
    // 0x1c35d4: 0x0  nop
    ctx->pc = 0x1c35d4u;
    // NOP
    // 0x1c35d8: 0x0  nop
    ctx->pc = 0x1c35d8u;
    // NOP
    // 0x1c35dc: 0x0  nop
    ctx->pc = 0x1c35dcu;
    // NOP
    ctx->pc = 0x1c35e0u;
}
