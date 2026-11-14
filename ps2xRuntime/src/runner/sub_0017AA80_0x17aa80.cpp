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

// Function: sub_0017AA80
// Address: 0x17aa80 - 0x17aae0
void sub_0017AA80_0x17aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AA80_0x17aa80");
#endif

    switch (ctx->pc) {
        case 0x17aab8u: goto label_17aab8;
        case 0x17aac4u: goto label_17aac4;
        default: break;
    }

    ctx->pc = 0x17aa80u;

    // 0x17aa80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17aa84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17aa88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17aa8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17aa90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x17aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17aa94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17aa98: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x17aa98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x17aa9c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x17aa9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17aaa0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17aaa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17aaa8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x17aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17aaac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x17aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17aab0: 0xc05eab8  jal         func_17AAE0
    ctx->pc = 0x17AAB0u;
    SET_GPR_U32(ctx, 31, 0x17AAB8u);
    ctx->pc = 0x17AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AAE0u, 0x17AAB0u, 0x17AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AAB8u;
label_17aab8:
    // 0x17aab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17aab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aabc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x17AABCu;
    SET_GPR_U32(ctx, 31, 0x17AAC4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x17AABCu, 0x17AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AAC4u;
label_17aac4:
    // 0x17aac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17aac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17aac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aacc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17aaccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aad0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17aad4: 0x3e00008  jr          $ra
    ctx->pc = 0x17AAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AADCu;
    // 0x17aadc: 0x0  nop
    ctx->pc = 0x17aadcu;
    // NOP
    ctx->pc = 0x17aae0u;
}
