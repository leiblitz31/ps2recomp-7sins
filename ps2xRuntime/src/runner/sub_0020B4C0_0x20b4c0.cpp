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

// Function: sub_0020B4C0
// Address: 0x20b4c0 - 0x20b520
void sub_0020B4C0_0x20b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B4C0_0x20b4c0");
#endif

    switch (ctx->pc) {
        case 0x20b4f8u: goto label_20b4f8;
        case 0x20b504u: goto label_20b504;
        default: break;
    }

    ctx->pc = 0x20b4c0u;

    // 0x20b4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b4c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20b4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20b4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20b4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b4d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x20b4d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b4d8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x20b4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x20b4dc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x20b4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20b4e0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x20b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x20b4e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b4e8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x20b4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b4ec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x20b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b4f0: 0xc05ee94  jal         func_17BA50
    ctx->pc = 0x20B4F0u;
    SET_GPR_U32(ctx, 31, 0x20B4F8u);
    ctx->pc = 0x17BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA50u, 0x20B4F0u, 0x20B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4F8u;
label_20b4f8:
    // 0x20b4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4fc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x20B4FCu;
    SET_GPR_U32(ctx, 31, 0x20B504u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x20B4FCu, 0x20B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B504u;
label_20b504:
    // 0x20b504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b510: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20b514: 0x3e00008  jr          $ra
    ctx->pc = 0x20B514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B51Cu;
    // 0x20b51c: 0x0  nop
    ctx->pc = 0x20b51cu;
    // NOP
    ctx->pc = 0x20b520u;
}
