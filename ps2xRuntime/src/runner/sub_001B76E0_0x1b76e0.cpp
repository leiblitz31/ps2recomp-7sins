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

// Function: sub_001B76E0
// Address: 0x1b76e0 - 0x1b77a0
void sub_001B76E0_0x1b76e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B76E0_0x1b76e0");
#endif

    switch (ctx->pc) {
        case 0x1b7708u: goto label_1b7708;
        case 0x1b7720u: goto label_1b7720;
        case 0x1b7738u: goto label_1b7738;
        case 0x1b774cu: goto label_1b774c;
        case 0x1b7760u: goto label_1b7760;
        case 0x1b7770u: goto label_1b7770;
        case 0x1b778cu: goto label_1b778c;
        default: break;
    }

    ctx->pc = 0x1b76e0u;

    // 0x1b76e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b76e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b76e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b76e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b76e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b76e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b76ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b76f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b76f4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1b76f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1b76f8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1b76f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b76fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7700: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1B7700u;
    SET_GPR_U32(ctx, 31, 0x1B7708u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1B7700u, 0x1B7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7708u;
label_1b7708:
    // 0x1b7708: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1b7708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b770c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B770Cu;
    {
        const bool branch_taken_0x1b770c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b770c) {
            ctx->pc = 0x1B7754u;
            goto label_1b7754;
        }
    }
    ctx->pc = 0x1B7714u;
    // 0x1b7714: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b7714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7718: 0xc069d98  jal         func_1A7660
    ctx->pc = 0x1B7718u;
    SET_GPR_U32(ctx, 31, 0x1B7720u);
    ctx->pc = 0x1A7660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7660u, 0x1B7718u, 0x1B7720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7720u;
label_1b7720:
    // 0x1b7720: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b7720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7724: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b7724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b7728: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1b7728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b772c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7730: 0xc069e3c  jal         func_1A78F0
    ctx->pc = 0x1B7730u;
    SET_GPR_U32(ctx, 31, 0x1B7738u);
    ctx->pc = 0x1A78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78F0u, 0x1B7730u, 0x1B7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7738u;
label_1b7738:
    // 0x1b7738: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b7738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b773c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b773cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7740: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b7740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7744: 0xc069dec  jal         func_1A77B0
    ctx->pc = 0x1B7744u;
    SET_GPR_U32(ctx, 31, 0x1B774Cu);
    ctx->pc = 0x1A77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77B0u, 0x1B7744u, 0x1B774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B774Cu;
label_1b774c:
    // 0x1b774c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B774Cu;
    {
        const bool branch_taken_0x1b774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b774c) {
            ctx->pc = 0x1B778Cu;
            goto label_1b778c;
        }
    }
    ctx->pc = 0x1B7754u;
label_1b7754:
    // 0x1b7754: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b7754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7758: 0xc069e3c  jal         func_1A78F0
    ctx->pc = 0x1B7758u;
    SET_GPR_U32(ctx, 31, 0x1B7760u);
    ctx->pc = 0x1A78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78F0u, 0x1B7758u, 0x1B7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7760u;
label_1b7760:
    // 0x1b7760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b7760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7764: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b7764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7768: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1B7768u;
    SET_GPR_U32(ctx, 31, 0x1B7770u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1B7768u, 0x1B7770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7770u;
label_1b7770:
    // 0x1b7770: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b7770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7774: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1b7774u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7778: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b7778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b777c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b777cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7780: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1b7780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7784: 0xc06dde8  jal         func_1B77A0
    ctx->pc = 0x1B7784u;
    SET_GPR_U32(ctx, 31, 0x1B778Cu);
    ctx->pc = 0x1B77A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B77A0u, 0x1B7784u, 0x1B778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B778Cu;
label_1b778c:
    // 0x1b778c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b778cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7794: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b7794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b7798: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B77A0u;
}
