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

// Function: sub_002E26D0
// Address: 0x2e26d0 - 0x2e2770
void sub_002E26D0_0x2e26d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E26D0_0x2e26d0");
#endif

    switch (ctx->pc) {
        case 0x2e26f0u: goto label_2e26f0;
        case 0x2e2708u: goto label_2e2708;
        case 0x2e271cu: goto label_2e271c;
        case 0x2e2730u: goto label_2e2730;
        case 0x2e2744u: goto label_2e2744;
        case 0x2e2750u: goto label_2e2750;
        default: break;
    }

    ctx->pc = 0x2e26d0u;

    // 0x2e26d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e26d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e26d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e26d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e26d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e26d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e26dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e26e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e26e4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e26e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e26e8: 0xc0b8680  jal         func_2E1A00
    ctx->pc = 0x2E26E8u;
    SET_GPR_U32(ctx, 31, 0x2E26F0u);
    ctx->pc = 0x2E1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A00u, 0x2E26E8u, 0x2E26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E26F0u;
label_2e26f0:
    // 0x2e26f0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E26F0u;
    {
        const bool branch_taken_0x2e26f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e26f0) {
            ctx->pc = 0x2E2754u;
            goto label_2e2754;
        }
    }
    ctx->pc = 0x2E26F8u;
    // 0x2e26f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e26fc: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e26fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e2700: 0xc0b7f04  jal         func_2DFC10
    ctx->pc = 0x2E2700u;
    SET_GPR_U32(ctx, 31, 0x2E2708u);
    ctx->pc = 0x2DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC10u, 0x2E2700u, 0x2E2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2708u;
label_2e2708:
    // 0x2e2708: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e2708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e270c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2710: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e2710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e2714: 0xc0b7f04  jal         func_2DFC10
    ctx->pc = 0x2E2714u;
    SET_GPR_U32(ctx, 31, 0x2E271Cu);
    ctx->pc = 0x2DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC10u, 0x2E2714u, 0x2E271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E271Cu;
label_2e271c:
    // 0x2e271c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2720: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x2e2720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2e2724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2728: 0xc0b80b0  jal         func_2E02C0
    ctx->pc = 0x2E2728u;
    SET_GPR_U32(ctx, 31, 0x2E2730u);
    ctx->pc = 0x2E02C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E02C0u, 0x2E2728u, 0x2E2730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2730u;
label_2e2730:
    // 0x2e2730: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2730u;
    {
        const bool branch_taken_0x2e2730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2730) {
            ctx->pc = 0x2E2754u;
            goto label_2e2754;
        }
    }
    ctx->pc = 0x2E2738u;
    // 0x2e2738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e273c: 0xc0b7ef8  jal         func_2DFBE0
    ctx->pc = 0x2E273Cu;
    SET_GPR_U32(ctx, 31, 0x2E2744u);
    ctx->pc = 0x2DFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBE0u, 0x2E273Cu, 0x2E2744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2744u;
label_2e2744:
    // 0x2e2744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2748: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2E2748u;
    SET_GPR_U32(ctx, 31, 0x2E2750u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E2748u, 0x2E2750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2750u;
label_2e2750:
    // 0x2e2750: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e2750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2754:
    // 0x2e2754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e2754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e275c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e275cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e2760: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2768u;
    // 0x2e2768: 0x0  nop
    ctx->pc = 0x2e2768u;
    // NOP
    // 0x2e276c: 0x0  nop
    ctx->pc = 0x2e276cu;
    // NOP
    ctx->pc = 0x2e2770u;
}
