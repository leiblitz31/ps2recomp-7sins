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

// Function: sub_00480120
// Address: 0x480120 - 0x480180
void sub_00480120_0x480120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480120_0x480120");
#endif

    switch (ctx->pc) {
        case 0x480158u: goto label_480158;
        case 0x480164u: goto label_480164;
        default: break;
    }

    ctx->pc = 0x480120u;

    // 0x480120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x480120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x480124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x480124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x480128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48012c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x480130: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x480130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x480134: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x480134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x480138: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x480138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x48013c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x48013cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x480140: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x480140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x480144: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x480144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x480148: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x480148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48014c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x48014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x480150: 0xc09e15c  jal         func_278570
    ctx->pc = 0x480150u;
    SET_GPR_U32(ctx, 31, 0x480158u);
    ctx->pc = 0x278570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278570u, 0x480150u, 0x480158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480158u;
label_480158:
    // 0x480158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48015c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x48015Cu;
    SET_GPR_U32(ctx, 31, 0x480164u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x48015Cu, 0x480164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480164u;
label_480164:
    // 0x480164: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x480164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x480168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48016c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48016cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x480170: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x480170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x480174: 0x3e00008  jr          $ra
    ctx->pc = 0x480174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48017Cu;
    // 0x48017c: 0x0  nop
    ctx->pc = 0x48017cu;
    // NOP
    ctx->pc = 0x480180u;
}
