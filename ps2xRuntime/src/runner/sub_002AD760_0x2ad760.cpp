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

// Function: sub_002AD760
// Address: 0x2ad760 - 0x2ad7c0
void sub_002AD760_0x2ad760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD760_0x2ad760");
#endif

    switch (ctx->pc) {
        case 0x2ad798u: goto label_2ad798;
        case 0x2ad7a4u: goto label_2ad7a4;
        default: break;
    }

    ctx->pc = 0x2ad760u;

    // 0x2ad760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ad764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ad768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad770: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2ad770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2ad774: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ad774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad778: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x2ad778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2ad77c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2ad77cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad780: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ad780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ad784: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ad784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad788: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2ad788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad78c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2ad78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad790: 0xc0ab5f0  jal         func_2AD7C0
    ctx->pc = 0x2AD790u;
    SET_GPR_U32(ctx, 31, 0x2AD798u);
    ctx->pc = 0x2AD7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD7C0u, 0x2AD790u, 0x2AD798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD798u;
label_2ad798:
    // 0x2ad798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad79c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2AD79Cu;
    SET_GPR_U32(ctx, 31, 0x2AD7A4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2AD79Cu, 0x2AD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7A4u;
label_2ad7a4:
    // 0x2ad7a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ad7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad7a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad7ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad7b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ad7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ad7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD7BCu;
    // 0x2ad7bc: 0x0  nop
    ctx->pc = 0x2ad7bcu;
    // NOP
    ctx->pc = 0x2ad7c0u;
}
