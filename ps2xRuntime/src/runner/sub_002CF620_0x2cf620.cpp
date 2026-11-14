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

// Function: sub_002CF620
// Address: 0x2cf620 - 0x2cf670
void sub_002CF620_0x2cf620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF620_0x2cf620");
#endif

    switch (ctx->pc) {
        case 0x2cf640u: goto label_2cf640;
        case 0x2cf650u: goto label_2cf650;
        default: break;
    }

    ctx->pc = 0x2cf620u;

    // 0x2cf620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cf624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf62c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cf62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cf630: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2cf630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2cf634: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cf634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf638: 0xc0b3d9c  jal         func_2CF670
    ctx->pc = 0x2CF638u;
    SET_GPR_U32(ctx, 31, 0x2CF640u);
    ctx->pc = 0x2CF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF670u, 0x2CF638u, 0x2CF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF640u;
label_2cf640:
    // 0x2cf640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf644: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2cf644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf648: 0xc0b3d9c  jal         func_2CF670
    ctx->pc = 0x2CF648u;
    SET_GPR_U32(ctx, 31, 0x2CF650u);
    ctx->pc = 0x2CF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF670u, 0x2CF648u, 0x2CF650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF650u;
label_2cf650:
    // 0x2cf650: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2cf650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2cf654: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cf654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2cf658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf65c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf660: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cf660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cf664: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF66Cu;
    // 0x2cf66c: 0x0  nop
    ctx->pc = 0x2cf66cu;
    // NOP
    ctx->pc = 0x2cf670u;
}
