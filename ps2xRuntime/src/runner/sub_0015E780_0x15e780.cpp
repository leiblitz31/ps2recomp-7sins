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

// Function: sub_0015E780
// Address: 0x15e780 - 0x15e7d0
void sub_0015E780_0x15e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E780_0x15e780");
#endif

    ctx->pc = 0x15e780u;

    // 0x15e780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e784: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15e784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15e788: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x15e788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x15e78c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x15e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x15e790: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x15e790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x15e794: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15e794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e798: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e79c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x15e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x15e7a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e7a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e7a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x15e7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x15e7ac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x15e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e7b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e7b4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x15e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x15e7b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15e7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15E7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E7C4u;
    // 0x15e7c4: 0x0  nop
    ctx->pc = 0x15e7c4u;
    // NOP
    // 0x15e7c8: 0x0  nop
    ctx->pc = 0x15e7c8u;
    // NOP
    // 0x15e7cc: 0x0  nop
    ctx->pc = 0x15e7ccu;
    // NOP
    ctx->pc = 0x15e7d0u;
}
