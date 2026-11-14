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

// Function: sub_004823A0
// Address: 0x4823a0 - 0x4823f0
void sub_004823A0_0x4823a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004823A0_0x4823a0");
#endif

    switch (ctx->pc) {
        case 0x4823c0u: goto label_4823c0;
        case 0x4823d0u: goto label_4823d0;
        default: break;
    }

    ctx->pc = 0x4823a0u;

    // 0x4823a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4823a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4823a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4823a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4823a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4823a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4823ac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4823acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4823b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4823b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4823b4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4823b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4823b8: 0xc0f0314  jal         func_3C0C50
    ctx->pc = 0x4823B8u;
    SET_GPR_U32(ctx, 31, 0x4823C0u);
    ctx->pc = 0x3C0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0C50u, 0x4823B8u, 0x4823C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4823C0u;
label_4823c0:
    // 0x4823c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4823c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4823c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4823c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4823c8: 0xc0ef2dc  jal         func_3BCB70
    ctx->pc = 0x4823C8u;
    SET_GPR_U32(ctx, 31, 0x4823D0u);
    ctx->pc = 0x3BCB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB70u, 0x4823C8u, 0x4823D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4823D0u;
label_4823d0:
    // 0x4823d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4823d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4823d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4823d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4823d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4823d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4823dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4823dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4823e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4823E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4823E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4823E8u;
    // 0x4823e8: 0x0  nop
    ctx->pc = 0x4823e8u;
    // NOP
    // 0x4823ec: 0x0  nop
    ctx->pc = 0x4823ecu;
    // NOP
    ctx->pc = 0x4823f0u;
}
