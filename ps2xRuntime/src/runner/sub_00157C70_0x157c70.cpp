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

// Function: sub_00157C70
// Address: 0x157c70 - 0x157cd0
void sub_00157C70_0x157c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157C70_0x157c70");
#endif

    switch (ctx->pc) {
        case 0x157ca4u: goto label_157ca4;
        case 0x157cb0u: goto label_157cb0;
        default: break;
    }

    ctx->pc = 0x157c70u;

    // 0x157c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x157c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x157c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x157c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x157c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157c80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x157c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x157c84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x157c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157c88: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x157c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x157c8c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x157c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x157c90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x157c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157c94: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x157c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x157c98: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x157c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157c9c: 0xc04cbfc  jal         func_132FF0
    ctx->pc = 0x157C9Cu;
    SET_GPR_U32(ctx, 31, 0x157CA4u);
    ctx->pc = 0x132FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132FF0u, 0x157C9Cu, 0x157CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CA4u;
label_157ca4:
    // 0x157ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ca8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x157CA8u;
    SET_GPR_U32(ctx, 31, 0x157CB0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x157CA8u, 0x157CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CB0u;
label_157cb0:
    // 0x157cb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x157cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157cbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x157cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x157cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x157CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157CC8u;
    // 0x157cc8: 0x0  nop
    ctx->pc = 0x157cc8u;
    // NOP
    // 0x157ccc: 0x0  nop
    ctx->pc = 0x157cccu;
    // NOP
    ctx->pc = 0x157cd0u;
}
