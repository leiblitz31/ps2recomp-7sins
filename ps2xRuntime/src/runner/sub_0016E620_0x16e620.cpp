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

// Function: sub_0016E620
// Address: 0x16e620 - 0x16e690
void sub_0016E620_0x16e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E620_0x16e620");
#endif

    switch (ctx->pc) {
        case 0x16e658u: goto label_16e658;
        case 0x16e670u: goto label_16e670;
        default: break;
    }

    ctx->pc = 0x16e620u;

    // 0x16e620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16e624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16e628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16e62c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x16e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x16e630: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x16e630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x16e634: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x16e634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x16e638: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e63c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x16e63cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x16e640: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16e640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16e644: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16e644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16e648: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x16e648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e64c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x16e64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x16e650: 0xc05b9a4  jal         func_16E690
    ctx->pc = 0x16E650u;
    SET_GPR_U32(ctx, 31, 0x16E658u);
    ctx->pc = 0x16E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E690u, 0x16E650u, 0x16E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E658u;
label_16e658:
    // 0x16e658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e65c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e664: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16e664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16e668: 0xc05b864  jal         func_16E190
    ctx->pc = 0x16E668u;
    SET_GPR_U32(ctx, 31, 0x16E670u);
    ctx->pc = 0x16E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E190u, 0x16E668u, 0x16E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E670u;
label_16e670:
    // 0x16e670: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e674: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x16e674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x16e678: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e67c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e684: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x16e684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16e688: 0x3e00008  jr          $ra
    ctx->pc = 0x16E688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E690u;
}
