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

// Function: sub_00107610
// Address: 0x107610 - 0x107680
void sub_00107610_0x107610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107610_0x107610");
#endif

    switch (ctx->pc) {
        case 0x107648u: goto label_107648;
        case 0x107660u: goto label_107660;
        default: break;
    }

    ctx->pc = 0x107610u;

    // 0x107610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x107610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x107614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x107614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x107618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10761c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x10761cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x107620: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x107620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x107624: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x107624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x107628: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x107628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10762c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x10762cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x107630: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x107630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107634: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x107634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x107638: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x107638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10763c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x10763cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x107640: 0xc041da0  jal         func_107680
    ctx->pc = 0x107640u;
    SET_GPR_U32(ctx, 31, 0x107648u);
    ctx->pc = 0x107680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107680u, 0x107640u, 0x107648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107648u;
label_107648:
    // 0x107648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10764c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107654: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x107654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x107658: 0xc040b48  jal         func_102D20
    ctx->pc = 0x107658u;
    SET_GPR_U32(ctx, 31, 0x107660u);
    ctx->pc = 0x102D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102D20u, 0x107658u, 0x107660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107660u;
label_107660:
    // 0x107660: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x107660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107664: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x107664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x107668: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x107668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10766c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x107670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107674: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x107674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x107678: 0x3e00008  jr          $ra
    ctx->pc = 0x107678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107680u;
}
