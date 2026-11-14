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

// Function: sub_0038D748
// Address: 0x38d748 - 0x38d7d0
void sub_0038D748_0x38d748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D748_0x38d748");
#endif

    switch (ctx->pc) {
        case 0x38d780u: goto label_38d780;
        case 0x38d790u: goto label_38d790;
        default: break;
    }

    ctx->pc = 0x38d748u;

    // 0x38d748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38d748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38d74c: 0x8f82bd38  lw          $v0, -0x42C8($gp)
    ctx->pc = 0x38d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950200)));
    // 0x38d750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38d750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38d754: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38d754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38d758: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x38d758u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x38d75c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38d760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d764: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x38d764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
    // 0x38d768: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38d768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d76c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x38d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x38d770: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38d770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38d774: 0x24a5dcb0  addiu       $a1, $a1, -0x2350
    ctx->pc = 0x38d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958256));
    // 0x38d778: 0xc104388  jal         func_410E20
    ctx->pc = 0x38D778u;
    SET_GPR_U32(ctx, 31, 0x38D780u);
    ctx->pc = 0x38D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D778u;
    // 0x38d77c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410E20u, 0x38D778u, 0x38D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D780u;
label_38d780:
    // 0x38d780: 0x8f83bd38  lw          $v1, -0x42C8($gp)
    ctx->pc = 0x38d780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950200)));
    // 0x38d784: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x38d784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x38d788: 0xc104284  jal         func_410A10
    ctx->pc = 0x38D788u;
    SET_GPR_U32(ctx, 31, 0x38D790u);
    ctx->pc = 0x38D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D788u;
    // 0x38d78c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x38D788u, 0x38D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D790u;
label_38d790:
    // 0x38d790: 0x8f83bd38  lw          $v1, -0x42C8($gp)
    ctx->pc = 0x38d790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950200)));
    // 0x38d794: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38d794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d798: 0x8f84bd3c  lw          $a0, -0x42C4($gp)
    ctx->pc = 0x38d798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950204)));
    // 0x38d79c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x38d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x38d7a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38d7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d7a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x38d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x38d7a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38d7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d7b0: 0xaf84bd3c  sw          $a0, -0x42C4($gp)
    ctx->pc = 0x38d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950204), GPR_U32(ctx, 4));
    // 0x38d7b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x38d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x38d7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x38D7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7B8u;
        // 0x38d7bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D7C0u;
    // 0x38d7c0: 0xaf84a9a8  sw          $a0, -0x5658($gp)
    ctx->pc = 0x38d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945192), GPR_U32(ctx, 4));
    // 0x38d7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x38D7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7C4u;
        // 0x38d7c8: 0xaf85a9ac  sw          $a1, -0x5654($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945196), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D7CCu;
    // 0x38d7cc: 0x0  nop
    ctx->pc = 0x38d7ccu;
    // NOP
    ctx->pc = 0x38d7d0u;
}
