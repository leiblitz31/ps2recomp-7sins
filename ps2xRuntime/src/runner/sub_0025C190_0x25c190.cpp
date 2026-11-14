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

// Function: sub_0025C190
// Address: 0x25c190 - 0x25c1c0
void sub_0025C190_0x25c190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C190_0x25c190");
#endif

    ctx->pc = 0x25c190u;

    // 0x25c190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c194: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25c198: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25c198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25c19c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c1a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c1a4: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x25c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x25c1a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25c1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25c1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x25C1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C1B4u;
    // 0x25c1b4: 0x0  nop
    ctx->pc = 0x25c1b4u;
    // NOP
    // 0x25c1b8: 0x0  nop
    ctx->pc = 0x25c1b8u;
    // NOP
    // 0x25c1bc: 0x0  nop
    ctx->pc = 0x25c1bcu;
    // NOP
    ctx->pc = 0x25c1c0u;
}
