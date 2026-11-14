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

// Function: sub_00274450
// Address: 0x274450 - 0x2744c0
void sub_00274450_0x274450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274450_0x274450");
#endif

    ctx->pc = 0x274450u;

    // 0x274450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274454: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x274454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x274458: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x274458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x27445c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274460: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x274460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x274464: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274468: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x274468u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x27446c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274470: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274474: 0xa0430006  sb          $v1, 0x6($v0)
    ctx->pc = 0x274474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x274478: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27447c: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x27447cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x274480: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274484: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x274484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x274488: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27448c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x27448cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x274490: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274494: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x274494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x274498: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27449c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x27449cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2744a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2744a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2744a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2744a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2744a8: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x2744a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2744ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2744acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2744b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2744b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2744b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2744B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2744B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2744BCu;
    // 0x2744bc: 0x0  nop
    ctx->pc = 0x2744bcu;
    // NOP
    ctx->pc = 0x2744c0u;
}
