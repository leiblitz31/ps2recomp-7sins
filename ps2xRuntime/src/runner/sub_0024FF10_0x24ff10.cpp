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

// Function: sub_0024FF10
// Address: 0x24ff10 - 0x24ff90
void sub_0024FF10_0x24ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FF10_0x24ff10");
#endif

    ctx->pc = 0x24ff10u;

    // 0x24ff10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24ff14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24ff18: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x24ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24ff1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ff20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ff24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ff28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24ff2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ff30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24ff34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ff38: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x24ff3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ff40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24ff44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ff48: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x24ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x24ff4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ff50: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24ff54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ff58: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24ff5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ff60: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x24ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24ff64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ff68: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x24ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x24ff6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ff70: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x24ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24ff74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ff78: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x24ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x24ff7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ff80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24ff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ff84: 0x3e00008  jr          $ra
    ctx->pc = 0x24FF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FF8Cu;
    // 0x24ff8c: 0x0  nop
    ctx->pc = 0x24ff8cu;
    // NOP
    ctx->pc = 0x24ff90u;
}
