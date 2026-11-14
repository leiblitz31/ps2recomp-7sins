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

// Function: sub_0032A778
// Address: 0x32a778 - 0x32a7e0
void sub_0032A778_0x32a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A778_0x32a778");
#endif

    switch (ctx->pc) {
        case 0x32a7acu: goto label_32a7ac;
        case 0x32a7b4u: goto label_32a7b4;
        case 0x32a7c0u: goto label_32a7c0;
        default: break;
    }

    ctx->pc = 0x32a778u;

    // 0x32a778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a77c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x32a780: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32a784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a788: 0x24702318  addiu       $s0, $v1, 0x2318
    ctx->pc = 0x32a788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8984));
    // 0x32a78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32a790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a794: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x32a794u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F2328u));
    // 0x32a798: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32a79c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32A79Cu;
    {
        const bool branch_taken_0x32a79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a79c) {
            ctx->pc = 0x32A7C4u;
            goto label_32a7c4;
        }
    }
    ctx->pc = 0x32A7A4u;
    // 0x32a7a4: 0xc0ca9fa  jal         func_32A7E8
    ctx->pc = 0x32A7A4u;
    SET_GPR_U32(ctx, 31, 0x32A7ACu);
    ctx->pc = 0x32A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A7E8u, 0x32A7A4u, 0x32A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7ACu;
label_32a7ac:
    // 0x32a7ac: 0xc104284  jal         func_410A10
    ctx->pc = 0x32A7ACu;
    SET_GPR_U32(ctx, 31, 0x32A7B4u);
    ctx->pc = 0x32A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7ACu;
    // 0x32a7b0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x32A7ACu, 0x32A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7B4u;
label_32a7b4:
    // 0x32a7b4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x32a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32a7b8: 0xc104284  jal         func_410A10
    ctx->pc = 0x32A7B8u;
    SET_GPR_U32(ctx, 31, 0x32A7C0u);
    ctx->pc = 0x32A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7B8u;
    // 0x32a7bc: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x32A7B8u, 0x32A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7C0u;
label_32a7c0:
    // 0x32a7c0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x32a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_32a7c4:
    // 0x32a7c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32a7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a7c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32a7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a7cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a7ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x32A7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7D4u;
        // 0x32a7d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A7DCu;
    // 0x32a7dc: 0x0  nop
    ctx->pc = 0x32a7dcu;
    // NOP
    ctx->pc = 0x32a7e0u;
}
