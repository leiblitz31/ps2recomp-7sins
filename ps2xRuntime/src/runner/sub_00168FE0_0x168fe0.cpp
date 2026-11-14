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

// Function: sub_00168FE0
// Address: 0x168fe0 - 0x169050
void sub_00168FE0_0x168fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168FE0_0x168fe0");
#endif

    switch (ctx->pc) {
        case 0x169020u: goto label_169020;
        case 0x16902cu: goto label_16902c;
        default: break;
    }

    ctx->pc = 0x168fe0u;

    // 0x168fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168ff0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x168ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x168ff4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x168ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168ff8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x168ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x168ffc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x168ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169000: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x169000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x169004: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x169004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x169008: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x169008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16900c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169010: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x169010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169014: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x169014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169018: 0xc05a414  jal         func_169050
    ctx->pc = 0x169018u;
    SET_GPR_U32(ctx, 31, 0x169020u);
    ctx->pc = 0x169050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169050u, 0x169018u, 0x169020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169020u;
label_169020:
    // 0x169020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169024: 0xc119c5c  jal         func_467170
    ctx->pc = 0x169024u;
    SET_GPR_U32(ctx, 31, 0x16902Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x169024u, 0x16902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16902Cu;
label_16902c:
    // 0x16902c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16902cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169038: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x169038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16903c: 0x3e00008  jr          $ra
    ctx->pc = 0x16903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16903Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169044u;
    // 0x169044: 0x0  nop
    ctx->pc = 0x169044u;
    // NOP
    // 0x169048: 0x0  nop
    ctx->pc = 0x169048u;
    // NOP
    // 0x16904c: 0x0  nop
    ctx->pc = 0x16904cu;
    // NOP
    ctx->pc = 0x169050u;
}
