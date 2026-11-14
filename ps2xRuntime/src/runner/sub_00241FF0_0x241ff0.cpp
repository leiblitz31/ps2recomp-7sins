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

// Function: sub_00241FF0
// Address: 0x241ff0 - 0x242050
void sub_00241FF0_0x241ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241FF0_0x241ff0");
#endif

    switch (ctx->pc) {
        case 0x242024u: goto label_242024;
        case 0x242030u: goto label_242030;
        default: break;
    }

    ctx->pc = 0x241ff0u;

    // 0x241ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x241ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x241ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x241ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x241ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x241ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x241ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x241ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x242000: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x242000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x242004: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x242004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242008: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x242008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x24200c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x24200cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242010: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x242010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242014: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x242014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x242018: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x242018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24201c: 0xc04cbfc  jal         func_132FF0
    ctx->pc = 0x24201Cu;
    SET_GPR_U32(ctx, 31, 0x242024u);
    ctx->pc = 0x132FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132FF0u, 0x24201Cu, 0x242024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242024u;
label_242024:
    // 0x242024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242028: 0xc119c5c  jal         func_467170
    ctx->pc = 0x242028u;
    SET_GPR_U32(ctx, 31, 0x242030u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x242028u, 0x242030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242030u;
label_242030:
    // 0x242030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x242030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24203c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24203cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x242040: 0x3e00008  jr          $ra
    ctx->pc = 0x242040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242048u;
    // 0x242048: 0x0  nop
    ctx->pc = 0x242048u;
    // NOP
    // 0x24204c: 0x0  nop
    ctx->pc = 0x24204cu;
    // NOP
    ctx->pc = 0x242050u;
}
