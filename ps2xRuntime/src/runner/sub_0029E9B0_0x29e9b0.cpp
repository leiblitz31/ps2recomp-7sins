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

// Function: sub_0029E9B0
// Address: 0x29e9b0 - 0x29ead0
void sub_0029E9B0_0x29e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E9B0_0x29e9b0");
#endif

    switch (ctx->pc) {
        case 0x29e9f4u: goto label_29e9f4;
        case 0x29ea00u: goto label_29ea00;
        case 0x29ea14u: goto label_29ea14;
        case 0x29ea38u: goto label_29ea38;
        case 0x29ea58u: goto label_29ea58;
        case 0x29ea68u: goto label_29ea68;
        case 0x29ea74u: goto label_29ea74;
        case 0x29ea88u: goto label_29ea88;
        case 0x29eaacu: goto label_29eaac;
        default: break;
    }

    ctx->pc = 0x29e9b0u;

    // 0x29e9b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29e9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29e9b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e9c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29e9c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x29e9c8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x29e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x29e9cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e9d0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x29e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29e9d4: 0x10030018  beq         $zero, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x29E9D4u;
    {
        const bool branch_taken_0x29e9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x29e9d4) {
            ctx->pc = 0x29EA38u;
            goto label_29ea38;
        }
    }
    ctx->pc = 0x29E9DCu;
    // 0x29e9dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e9e0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x29e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29e9e4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x29e9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29e9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9ec: 0xc106638  jal         func_4198E0
    ctx->pc = 0x29E9ECu;
    SET_GPR_U32(ctx, 31, 0x29E9F4u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x29E9ECu, 0x29E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9F4u;
label_29e9f4:
    // 0x29e9f4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e9f8: 0xc106784  jal         func_419E10
    ctx->pc = 0x29E9F8u;
    SET_GPR_U32(ctx, 31, 0x29EA00u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x29E9F8u, 0x29EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA00u;
label_29ea00:
    // 0x29ea00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29ea04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29ea08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ea0c: 0xc1065f8  jal         func_4197E0
    ctx->pc = 0x29EA0Cu;
    SET_GPR_U32(ctx, 31, 0x29EA14u);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x29EA0Cu, 0x29EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA14u;
label_29ea14:
    // 0x29ea14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ea18: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29ea1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ea20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29ea24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea28: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x29ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29ea2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29ea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ea30: 0xc1065f8  jal         func_4197E0
    ctx->pc = 0x29EA30u;
    SET_GPR_U32(ctx, 31, 0x29EA38u);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x29EA30u, 0x29EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA38u;
label_29ea38:
    // 0x29ea38: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ea3c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x29ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x29ea40: 0x1003001a  beq         $zero, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x29EA40u;
    {
        const bool branch_taken_0x29ea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x29ea40) {
            ctx->pc = 0x29EAACu;
            goto label_29eaac;
        }
    }
    ctx->pc = 0x29EA48u;
    // 0x29ea48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ea4c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x29ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29ea50: 0xc123428  jal         func_48D0A0
    ctx->pc = 0x29EA50u;
    SET_GPR_U32(ctx, 31, 0x29EA58u);
    ctx->pc = 0x48D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D0A0u, 0x29EA50u, 0x29EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA58u;
label_29ea58:
    // 0x29ea58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ea58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ea5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea60: 0xc106638  jal         func_4198E0
    ctx->pc = 0x29EA60u;
    SET_GPR_U32(ctx, 31, 0x29EA68u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x29EA60u, 0x29EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA68u;
label_29ea68:
    // 0x29ea68: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ea6c: 0xc106784  jal         func_419E10
    ctx->pc = 0x29EA6Cu;
    SET_GPR_U32(ctx, 31, 0x29EA74u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x29EA6Cu, 0x29EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA74u;
label_29ea74:
    // 0x29ea74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29ea78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29ea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ea80: 0xc1065f8  jal         func_4197E0
    ctx->pc = 0x29EA80u;
    SET_GPR_U32(ctx, 31, 0x29EA88u);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x29EA80u, 0x29EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA88u;
label_29ea88:
    // 0x29ea88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ea8c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29ea90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ea94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29ea98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea9c: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x29ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29eaa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29eaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eaa4: 0xc1065f8  jal         func_4197E0
    ctx->pc = 0x29EAA4u;
    SET_GPR_U32(ctx, 31, 0x29EAACu);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x29EAA4u, 0x29EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EAACu;
label_29eaac:
    // 0x29eaac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29eaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29eab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29eab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29eab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29eab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eab8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29eab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29eabc: 0x3e00008  jr          $ra
    ctx->pc = 0x29EABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EAC4u;
    // 0x29eac4: 0x0  nop
    ctx->pc = 0x29eac4u;
    // NOP
    // 0x29eac8: 0x0  nop
    ctx->pc = 0x29eac8u;
    // NOP
    // 0x29eacc: 0x0  nop
    ctx->pc = 0x29eaccu;
    // NOP
    ctx->pc = 0x29ead0u;
}
