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

// Function: sub_002A72E0
// Address: 0x2a72e0 - 0x2a7320
void sub_002A72E0_0x2a72e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A72E0_0x2a72e0");
#endif

    ctx->pc = 0x2a72e0u;

    // 0x2a72e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a72e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a72e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a72e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a72e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a72e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a72ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a72ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a72f0: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x2a72f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a72f4: 0x92020189  lbu         $v0, 0x189($s0)
    ctx->pc = 0x2a72f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 393)));
    // 0x2a72f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A72F8u;
    {
        const bool branch_taken_0x2a72f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a72f8) {
            ctx->pc = 0x2A7308u;
            goto label_2a7308;
        }
    }
    ctx->pc = 0x2A7300u;
    // 0x2a7300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7304: 0xa2020189  sb          $v0, 0x189($s0)
    ctx->pc = 0x2a7304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 393), (uint8_t)GPR_U32(ctx, 2));
label_2a7308:
    // 0x2a7308: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a730c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a730cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7310: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a7310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a7314: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A731Cu;
    // 0x2a731c: 0x0  nop
    ctx->pc = 0x2a731cu;
    // NOP
    ctx->pc = 0x2a7320u;
}
