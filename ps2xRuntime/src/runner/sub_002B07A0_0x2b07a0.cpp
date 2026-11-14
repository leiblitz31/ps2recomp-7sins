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

// Function: sub_002B07A0
// Address: 0x2b07a0 - 0x2b0850
void sub_002B07A0_0x2b07a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B07A0_0x2b07a0");
#endif

    switch (ctx->pc) {
        case 0x2b07ecu: goto label_2b07ec;
        case 0x2b07f8u: goto label_2b07f8;
        case 0x2b0808u: goto label_2b0808;
        case 0x2b0828u: goto label_2b0828;
        default: break;
    }

    ctx->pc = 0x2b07a0u;

    // 0x2b07a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b07a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b07a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b07a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b07a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b07a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b07ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b07acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b07b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b07b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b07b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b07b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b07b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b07bc: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x2b07bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
    // 0x2b07c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b07c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b07c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B07C4u;
    {
        const bool branch_taken_0x2b07c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b07c4) {
            ctx->pc = 0x2B07D8u;
            goto label_2b07d8;
        }
    }
    ctx->pc = 0x2B07CCu;
    // 0x2b07cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b07ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b07d0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B07D0u;
    {
        const bool branch_taken_0x2b07d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b07d0) {
            ctx->pc = 0x2B0834u;
            goto label_2b0834;
        }
    }
    ctx->pc = 0x2B07D8u;
label_2b07d8:
    // 0x2b07d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b07d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b07dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b07e0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2b07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2b07e4: 0xc0ab594  jal         func_2AD650
    ctx->pc = 0x2B07E4u;
    SET_GPR_U32(ctx, 31, 0x2B07ECu);
    ctx->pc = 0x2AD650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD650u, 0x2B07E4u, 0x2B07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B07ECu;
label_2b07ec:
    // 0x2b07ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b07ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b07f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B07F0u;
    {
        const bool branch_taken_0x2b07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b07f0) {
            ctx->pc = 0x2B0818u;
            goto label_2b0818;
        }
    }
    ctx->pc = 0x2B07F8u;
label_2b07f8:
    // 0x2b07f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b07fc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b07fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0800: 0xc1282cc  jal         func_4A0B30
    ctx->pc = 0x2B0800u;
    SET_GPR_U32(ctx, 31, 0x2B0808u);
    ctx->pc = 0x4A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0B30u, 0x2B0800u, 0x2B0808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0808u;
label_2b0808:
    // 0x2b0808: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b0808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b080c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B080Cu;
    {
        const bool branch_taken_0x2b080c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b080c) {
            ctx->pc = 0x2B0830u;
            goto label_2b0830;
        }
    }
    ctx->pc = 0x2B0814u;
    // 0x2b0814: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b0814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b0818:
    // 0x2b0818: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b081c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2b081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2b0820: 0xc0ab550  jal         func_2AD540
    ctx->pc = 0x2B0820u;
    SET_GPR_U32(ctx, 31, 0x2B0828u);
    ctx->pc = 0x2AD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD540u, 0x2B0820u, 0x2B0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0828u;
label_2b0828:
    // 0x2b0828: 0x1602fff3  bne         $s0, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B0828u;
    {
        const bool branch_taken_0x2b0828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0828) {
            ctx->pc = 0x2B07F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b07f8;
        }
    }
    ctx->pc = 0x2B0830u;
label_2b0830:
    // 0x2b0830: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b0830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b0834:
    // 0x2b0834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b0834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b083c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b083cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0840: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b0840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b0844: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B084Cu;
    // 0x2b084c: 0x0  nop
    ctx->pc = 0x2b084cu;
    // NOP
    ctx->pc = 0x2b0850u;
}
