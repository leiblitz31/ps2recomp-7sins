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

// Function: sub_0025ACC0
// Address: 0x25acc0 - 0x25ad30
void sub_0025ACC0_0x25acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ACC0_0x25acc0");
#endif

    switch (ctx->pc) {
        case 0x25ace0u: goto label_25ace0;
        case 0x25ad00u: goto label_25ad00;
        default: break;
    }

    ctx->pc = 0x25acc0u;

    // 0x25acc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25acc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25acc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25accc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25acccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25acd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25acd4: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25acd8: 0xc0964c8  jal         func_259320
    ctx->pc = 0x25ACD8u;
    SET_GPR_U32(ctx, 31, 0x25ACE0u);
    ctx->pc = 0x259320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259320u, 0x25ACD8u, 0x25ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACE0u;
label_25ace0:
    // 0x25ace0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ace4: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x25ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x25ace8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25acec: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x25acecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25acf0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25acf4: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25acf8: 0xc0964c8  jal         func_259320
    ctx->pc = 0x25ACF8u;
    SET_GPR_U32(ctx, 31, 0x25AD00u);
    ctx->pc = 0x259320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259320u, 0x25ACF8u, 0x25AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD00u;
label_25ad00:
    // 0x25ad00: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x25ad00u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x25ad04: 0x2010  mfhi        $a0
    ctx->pc = 0x25ad04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x25ad08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ad0c: 0xac64010c  sw          $a0, 0x10C($v1)
    ctx->pc = 0x25ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 4));
    // 0x25ad10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ad10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ad14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ad14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ad18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25ad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ad1c: 0x3e00008  jr          $ra
    ctx->pc = 0x25AD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AD24u;
    // 0x25ad24: 0x0  nop
    ctx->pc = 0x25ad24u;
    // NOP
    // 0x25ad28: 0x0  nop
    ctx->pc = 0x25ad28u;
    // NOP
    // 0x25ad2c: 0x0  nop
    ctx->pc = 0x25ad2cu;
    // NOP
    ctx->pc = 0x25ad30u;
}
