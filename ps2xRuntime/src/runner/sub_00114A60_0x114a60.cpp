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

// Function: sub_00114A60
// Address: 0x114a60 - 0x114ae0
void sub_00114A60_0x114a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114A60_0x114a60");
#endif

    switch (ctx->pc) {
        case 0x114a94u: goto label_114a94;
        case 0x114aa4u: goto label_114aa4;
        case 0x114ac4u: goto label_114ac4;
        default: break;
    }

    ctx->pc = 0x114a60u;

    // 0x114a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114a68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x114a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x114a6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x114a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x114a70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114a74: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x114A74u;
    {
        const bool branch_taken_0x114a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114a74) {
            ctx->pc = 0x114AC4u;
            goto label_114ac4;
        }
    }
    ctx->pc = 0x114A7Cu;
    // 0x114a7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x114a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114a80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114a84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x114a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x114a88: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x114a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x114a8c: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x114A8Cu;
    SET_GPR_U32(ctx, 31, 0x114A94u);
    ctx->pc = 0x10C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1F0u, 0x114A8Cu, 0x114A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A94u;
label_114a94:
    // 0x114a94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x114a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a9c: 0xc0452b8  jal         func_114AE0
    ctx->pc = 0x114A9Cu;
    SET_GPR_U32(ctx, 31, 0x114AA4u);
    ctx->pc = 0x114AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114AE0u, 0x114A9Cu, 0x114AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AA4u;
label_114aa4:
    // 0x114aa4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x114aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114aa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x114aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x114aac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x114aacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x114ab0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114AB0u;
    {
        const bool branch_taken_0x114ab0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x114ab0) {
            ctx->pc = 0x114AC4u;
            goto label_114ac4;
        }
    }
    ctx->pc = 0x114AB8u;
    // 0x114ab8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x114ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114abc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x114ABCu;
    SET_GPR_U32(ctx, 31, 0x114AC4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x114ABCu, 0x114AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AC4u;
label_114ac4:
    // 0x114ac4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114acc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x114accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x114AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114AD8u;
    // 0x114ad8: 0x0  nop
    ctx->pc = 0x114ad8u;
    // NOP
    // 0x114adc: 0x0  nop
    ctx->pc = 0x114adcu;
    // NOP
    ctx->pc = 0x114ae0u;
}
