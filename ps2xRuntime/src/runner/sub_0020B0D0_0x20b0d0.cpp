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

// Function: sub_0020B0D0
// Address: 0x20b0d0 - 0x20b140
void sub_0020B0D0_0x20b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B0D0_0x20b0d0");
#endif

    switch (ctx->pc) {
        case 0x20b0ecu: goto label_20b0ec;
        default: break;
    }

    ctx->pc = 0x20b0d0u;

    // 0x20b0d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20b0d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b0d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20b0dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x20b0e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x20b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x20b0e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20B0E4u;
    {
        const bool branch_taken_0x20b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b0e4) {
            ctx->pc = 0x20B114u;
            goto label_20b114;
        }
    }
    ctx->pc = 0x20B0ECu;
label_20b0ec:
    // 0x20b0ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b0f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b0f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b0f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20b0fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b100: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20b104: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x20b104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20b108: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20b108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b10c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x20b10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20b110: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x20b110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_20b114:
    // 0x20b114: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20b114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b118: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20B118u;
    {
        const bool branch_taken_0x20b118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b118) {
            ctx->pc = 0x20B0ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b0ec;
        }
    }
    ctx->pc = 0x20B120u;
    // 0x20b120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b128: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20b128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20b12c: 0x3e00008  jr          $ra
    ctx->pc = 0x20B12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B134u;
    // 0x20b134: 0x0  nop
    ctx->pc = 0x20b134u;
    // NOP
    // 0x20b138: 0x0  nop
    ctx->pc = 0x20b138u;
    // NOP
    // 0x20b13c: 0x0  nop
    ctx->pc = 0x20b13cu;
    // NOP
    ctx->pc = 0x20b140u;
}
