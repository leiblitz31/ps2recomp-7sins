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

// Function: sub_00281B20
// Address: 0x281b20 - 0x281b50
void sub_00281B20_0x281b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281B20_0x281b20");
#endif

    ctx->pc = 0x281b20u;

    // 0x281b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281b24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x281b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x281b28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x281b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281b2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x281b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281b30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x281b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281b34: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x281b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x281b38: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x281b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x281b3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x281b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x281b40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x281b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281b44: 0x3e00008  jr          $ra
    ctx->pc = 0x281B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281B4Cu;
    // 0x281b4c: 0x0  nop
    ctx->pc = 0x281b4cu;
    // NOP
    ctx->pc = 0x281b50u;
}
