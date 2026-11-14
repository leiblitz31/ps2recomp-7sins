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

// Function: sub_00465D60
// Address: 0x465d60 - 0x465db0
void sub_00465D60_0x465d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465D60_0x465d60");
#endif

    ctx->pc = 0x465d60u;

    // 0x465d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x465d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x465d64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x465d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x465d68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x465d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465d6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x465D6Cu;
    {
        const bool branch_taken_0x465d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465d6c) {
            ctx->pc = 0x465D98u;
            goto label_465d98;
        }
    }
    ctx->pc = 0x465D74u;
    // 0x465d74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x465d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465d78: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x465d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x465d7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x465d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465d80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x465d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x465d84: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x465d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x465d88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x465d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x465d8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x465d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465d90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x465D90u;
    {
        const bool branch_taken_0x465d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465d90) {
            ctx->pc = 0x465D9Cu;
            goto label_465d9c;
        }
    }
    ctx->pc = 0x465D98u;
label_465d98:
    // 0x465d98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x465d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465d9c:
    // 0x465d9c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x465d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x465da0: 0x3e00008  jr          $ra
    ctx->pc = 0x465DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465DA8u;
    // 0x465da8: 0x0  nop
    ctx->pc = 0x465da8u;
    // NOP
    // 0x465dac: 0x0  nop
    ctx->pc = 0x465dacu;
    // NOP
    ctx->pc = 0x465db0u;
}
