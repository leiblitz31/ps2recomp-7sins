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

// Function: sub_00234360
// Address: 0x234360 - 0x2343c0
void sub_00234360_0x234360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234360_0x234360");
#endif

    switch (ctx->pc) {
        case 0x234398u: goto label_234398;
        case 0x2343a4u: goto label_2343a4;
        default: break;
    }

    ctx->pc = 0x234360u;

    // 0x234360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23436c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23436cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x234370: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x234370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x234374: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x234374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234378: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x234378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x23437c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x23437cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234380: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x234380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x234384: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x234384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234388: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x234388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23438c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234390: 0xc08d0f0  jal         func_2343C0
    ctx->pc = 0x234390u;
    SET_GPR_U32(ctx, 31, 0x234398u);
    ctx->pc = 0x2343C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2343C0u, 0x234390u, 0x234398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234398u;
label_234398:
    // 0x234398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23439c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x23439Cu;
    SET_GPR_U32(ctx, 31, 0x2343A4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x23439Cu, 0x2343A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343A4u;
label_2343a4:
    // 0x2343a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2343a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2343a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2343a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2343ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2343acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2343b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2343b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2343b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2343B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2343B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2343BCu;
    // 0x2343bc: 0x0  nop
    ctx->pc = 0x2343bcu;
    // NOP
    ctx->pc = 0x2343c0u;
}
