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

// Function: sub_0013F0F0
// Address: 0x13f0f0 - 0x13f150
void sub_0013F0F0_0x13f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F0F0_0x13f0f0");
#endif

    ctx->pc = 0x13f0f0u;

    // 0x13f0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f0f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f0f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13f0fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f100: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x13f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13f104: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13f108: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F108u;
    {
        const bool branch_taken_0x13f108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f108) {
            ctx->pc = 0x13F130u;
            goto label_13f130;
        }
    }
    ctx->pc = 0x13F110u;
    // 0x13f110: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f114: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x13f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13f118: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13f118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f11c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f124: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x13f124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13f128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F128u;
    {
        const bool branch_taken_0x13f128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f128) {
            ctx->pc = 0x13F134u;
            goto label_13f134;
        }
    }
    ctx->pc = 0x13F130u;
label_13f130:
    // 0x13f130: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13f130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f134:
    // 0x13f134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f13c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13f140: 0x3e00008  jr          $ra
    ctx->pc = 0x13F140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F148u;
    // 0x13f148: 0x0  nop
    ctx->pc = 0x13f148u;
    // NOP
    // 0x13f14c: 0x0  nop
    ctx->pc = 0x13f14cu;
    // NOP
    ctx->pc = 0x13f150u;
}
