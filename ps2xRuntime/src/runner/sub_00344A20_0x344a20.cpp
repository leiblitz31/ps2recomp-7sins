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

// Function: sub_00344A20
// Address: 0x344a20 - 0x344ad0
void sub_00344A20_0x344a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344A20_0x344a20");
#endif

    switch (ctx->pc) {
        case 0x344a3cu: goto label_344a3c;
        case 0x344a58u: goto label_344a58;
        case 0x344a74u: goto label_344a74;
        case 0x344a84u: goto label_344a84;
        case 0x344aa0u: goto label_344aa0;
        case 0x344ab4u: goto label_344ab4;
        default: break;
    }

    ctx->pc = 0x344a20u;

    // 0x344a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x344a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x344a24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x344a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x344a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x344a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x344a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344a34: 0xc0d12b4  jal         func_344AD0
    ctx->pc = 0x344A34u;
    SET_GPR_U32(ctx, 31, 0x344A3Cu);
    ctx->pc = 0x344A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A34u;
    // 0x344a38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344AD0u, 0x344A34u, 0x344A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A3Cu;
label_344a3c:
    // 0x344a3c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x344a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x344a40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x344a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a48: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x344a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x344a4c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x344a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x344a50: 0xc103404  jal         func_40D010
    ctx->pc = 0x344A50u;
    SET_GPR_U32(ctx, 31, 0x344A58u);
    ctx->pc = 0x344A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A50u;
    // 0x344a54: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x344A50u, 0x344A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A58u;
label_344a58:
    // 0x344a58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344A58u;
    {
        const bool branch_taken_0x344a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A58u;
        // 0x344a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a58) {
            ctx->pc = 0x344A68u;
            goto label_344a68;
        }
    }
    ctx->pc = 0x344A60u;
    // 0x344a60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x344A60u;
    {
        const bool branch_taken_0x344a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A60u;
        // 0x344a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a60) {
            ctx->pc = 0x344AB8u;
            goto label_344ab8;
        }
    }
    ctx->pc = 0x344A68u;
label_344a68:
    // 0x344a68: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x344a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x344a6c: 0xc103440  jal         func_40D100
    ctx->pc = 0x344A6Cu;
    SET_GPR_U32(ctx, 31, 0x344A74u);
    ctx->pc = 0x344A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A6Cu;
    // 0x344a70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x344A6Cu, 0x344A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A74u;
label_344a74:
    // 0x344a74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x344a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x344a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a7c: 0xc103440  jal         func_40D100
    ctx->pc = 0x344A7Cu;
    SET_GPR_U32(ctx, 31, 0x344A84u);
    ctx->pc = 0x344A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A7Cu;
    // 0x344a80: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x344A7Cu, 0x344A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A84u;
label_344a84:
    // 0x344a84: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x344a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x344a88: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x344A88u;
    {
        const bool branch_taken_0x344a88 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x344A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A88u;
        // 0x344a8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a88) {
            ctx->pc = 0x344AB8u;
            goto label_344ab8;
        }
    }
    ctx->pc = 0x344A90u;
    // 0x344a90: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x344a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x344a94: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x344a94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x344a98: 0xc103440  jal         func_40D100
    ctx->pc = 0x344A98u;
    SET_GPR_U32(ctx, 31, 0x344AA0u);
    ctx->pc = 0x344A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A98u;
    // 0x344a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x344A98u, 0x344AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AA0u;
label_344aa0:
    // 0x344aa0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x344aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x344aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344aa8: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x344aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x344aac: 0xc103440  jal         func_40D100
    ctx->pc = 0x344AACu;
    SET_GPR_U32(ctx, 31, 0x344AB4u);
    ctx->pc = 0x344AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344AACu;
    // 0x344ab0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x344AACu, 0x344AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AB4u;
label_344ab4:
    // 0x344ab4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x344ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344ab8:
    // 0x344ab8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x344ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x344abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x344AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AC4u;
        // 0x344ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344ACCu;
    // 0x344acc: 0x0  nop
    ctx->pc = 0x344accu;
    // NOP
    ctx->pc = 0x344ad0u;
}
