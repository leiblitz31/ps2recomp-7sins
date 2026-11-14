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

// Function: sub_00181C70
// Address: 0x181c70 - 0x181cd0
void sub_00181C70_0x181c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181C70_0x181c70");
#endif

    switch (ctx->pc) {
        case 0x181c94u: goto label_181c94;
        case 0x181cb0u: goto label_181cb0;
        default: break;
    }

    ctx->pc = 0x181c70u;

    // 0x181c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181c7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x181c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x181c80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x181c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x181c84: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x181c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x181c88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x181c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181c8c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x181C8Cu;
    SET_GPR_U32(ctx, 31, 0x181C94u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x181C8Cu, 0x181C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C94u;
label_181c94:
    // 0x181c94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c98: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181C98u;
    {
        const bool branch_taken_0x181c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c98) {
            ctx->pc = 0x181CB4u;
            goto label_181cb4;
        }
    }
    ctx->pc = 0x181CA0u;
    // 0x181ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ca4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x181ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181ca8: 0xc0607ac  jal         func_181EB0
    ctx->pc = 0x181CA8u;
    SET_GPR_U32(ctx, 31, 0x181CB0u);
    ctx->pc = 0x181EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EB0u, 0x181CA8u, 0x181CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CB0u;
label_181cb0:
    // 0x181cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181cb4:
    // 0x181cb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181cbc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x181cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x181cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x181CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181CC8u;
    // 0x181cc8: 0x0  nop
    ctx->pc = 0x181cc8u;
    // NOP
    // 0x181ccc: 0x0  nop
    ctx->pc = 0x181cccu;
    // NOP
    ctx->pc = 0x181cd0u;
}
