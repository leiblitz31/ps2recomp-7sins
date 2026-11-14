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

// Function: sub_0020DF90
// Address: 0x20df90 - 0x20dfe0
void sub_0020DF90_0x20df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DF90_0x20df90");
#endif

    ctx->pc = 0x20df90u;

    // 0x20df90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20df94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20df94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x20df98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x20df98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x20df9c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x20df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x20dfa0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x20dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x20dfa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dfa8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dfac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x20dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x20dfb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dfb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dfb8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20dfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x20dfbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x20dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20dfc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dfc4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x20dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x20dfc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20dfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20dfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x20DFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DFD4u;
    // 0x20dfd4: 0x0  nop
    ctx->pc = 0x20dfd4u;
    // NOP
    // 0x20dfd8: 0x0  nop
    ctx->pc = 0x20dfd8u;
    // NOP
    // 0x20dfdc: 0x0  nop
    ctx->pc = 0x20dfdcu;
    // NOP
    ctx->pc = 0x20dfe0u;
}
