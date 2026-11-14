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

// Function: sub_0012B8E0
// Address: 0x12b8e0 - 0x12b970
void sub_0012B8E0_0x12b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B8E0_0x12b8e0");
#endif

    ctx->pc = 0x12b8e0u;

    // 0x12b8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b8e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12b8e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b8ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12b8f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b8f4: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x12b8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b8f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b8fc: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x12b8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b900: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12b900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12b904: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b908: 0xac430114  sw          $v1, 0x114($v0)
    ctx->pc = 0x12b908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
    // 0x12b90c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b910: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b914: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x12b914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x12b918: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x12b918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12b91c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b920: 0xac43011c  sw          $v1, 0x11C($v0)
    ctx->pc = 0x12b920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 3));
    // 0x12b924: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b928: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b92c: 0xac430120  sw          $v1, 0x120($v0)
    ctx->pc = 0x12b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 3));
    // 0x12b930: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x12b930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12b934: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b938: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x12b938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x12b93c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b940: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x12b940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x12b944: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b948: 0xac40012c  sw          $zero, 0x12C($v0)
    ctx->pc = 0x12b948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 0));
    // 0x12b94c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b950: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x12b950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x12b954: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b958: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12b958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12b95c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B964u;
    // 0x12b964: 0x0  nop
    ctx->pc = 0x12b964u;
    // NOP
    // 0x12b968: 0x0  nop
    ctx->pc = 0x12b968u;
    // NOP
    // 0x12b96c: 0x0  nop
    ctx->pc = 0x12b96cu;
    // NOP
    ctx->pc = 0x12b970u;
}
