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

// Function: sub_002DF770
// Address: 0x2df770 - 0x2df7f0
void sub_002DF770_0x2df770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF770_0x2df770");
#endif

    ctx->pc = 0x2df770u;

    // 0x2df770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df774: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2df774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2df778: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2df778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2df77c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2df780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2df784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df788: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2df788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2df78c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df790: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2df790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2df794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2df794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df798: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2df798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2df79c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df7a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2df7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2df7a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2df7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df7a8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2df7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2df7ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df7b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2df7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2df7b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2df7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df7b8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2df7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2df7bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df7c0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2df7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2df7c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2df7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df7c8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2df7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2df7cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df7d0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2df7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2df7d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2df7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df7d8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2df7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2df7dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2df7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df7e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2df7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2df7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF7ECu;
    // 0x2df7ec: 0x0  nop
    ctx->pc = 0x2df7ecu;
    // NOP
    ctx->pc = 0x2df7f0u;
}
