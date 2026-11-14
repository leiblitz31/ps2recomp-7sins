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

// Function: sub_0022F770
// Address: 0x22f770 - 0x22f7c0
void sub_0022F770_0x22f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F770_0x22f770");
#endif

    ctx->pc = 0x22f770u;

    // 0x22f770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f774: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22f774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22f778: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x22f778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x22f77c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x22f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x22f780: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x22f780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x22f784: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22f784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f788: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22f788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f78c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x22f790: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f794: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22f794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f798: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x22f798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x22f79c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f7a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f7a4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x22f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x22f7a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22f7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x22F7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F7B4u;
    // 0x22f7b4: 0x0  nop
    ctx->pc = 0x22f7b4u;
    // NOP
    // 0x22f7b8: 0x0  nop
    ctx->pc = 0x22f7b8u;
    // NOP
    // 0x22f7bc: 0x0  nop
    ctx->pc = 0x22f7bcu;
    // NOP
    ctx->pc = 0x22f7c0u;
}
