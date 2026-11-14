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

// Function: sub_00129D90
// Address: 0x129d90 - 0x129de0
void sub_00129D90_0x129d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129D90_0x129d90");
#endif

    ctx->pc = 0x129d90u;

    // 0x129d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x129d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x129d94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x129d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x129d98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x129d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x129d9c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x129d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x129da0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x129da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x129da4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x129da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129da8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129dac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x129dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x129db0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x129db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129db4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129db8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x129db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x129dbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x129dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129dc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129dc4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x129dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x129dc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x129dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x129DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129DD4u;
    // 0x129dd4: 0x0  nop
    ctx->pc = 0x129dd4u;
    // NOP
    // 0x129dd8: 0x0  nop
    ctx->pc = 0x129dd8u;
    // NOP
    // 0x129ddc: 0x0  nop
    ctx->pc = 0x129ddcu;
    // NOP
    ctx->pc = 0x129de0u;
}
