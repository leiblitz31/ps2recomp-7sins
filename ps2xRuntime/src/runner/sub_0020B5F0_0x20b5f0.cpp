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

// Function: sub_0020B5F0
// Address: 0x20b5f0 - 0x20b660
void sub_0020B5F0_0x20b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B5F0_0x20b5f0");
#endif

    switch (ctx->pc) {
        case 0x20b628u: goto label_20b628;
        case 0x20b640u: goto label_20b640;
        default: break;
    }

    ctx->pc = 0x20b5f0u;

    // 0x20b5f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20b5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20b5f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b5f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b5fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x20b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x20b600: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20b600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x20b604: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x20b604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x20b608: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b60c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x20b60cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b610: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20b610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b614: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b618: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x20b618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b61c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x20b61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x20b620: 0xc082d98  jal         func_20B660
    ctx->pc = 0x20B620u;
    SET_GPR_U32(ctx, 31, 0x20B628u);
    ctx->pc = 0x20B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B660u, 0x20B620u, 0x20B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B628u;
label_20b628:
    // 0x20b628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b62c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b634: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20b634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b638: 0xc081fac  jal         func_207EB0
    ctx->pc = 0x20B638u;
    SET_GPR_U32(ctx, 31, 0x20B640u);
    ctx->pc = 0x207EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207EB0u, 0x20B638u, 0x20B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B640u;
label_20b640:
    // 0x20b640: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b644: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x20b644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x20b648: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b64c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b654: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x20b654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20b658: 0x3e00008  jr          $ra
    ctx->pc = 0x20B658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B660u;
}
