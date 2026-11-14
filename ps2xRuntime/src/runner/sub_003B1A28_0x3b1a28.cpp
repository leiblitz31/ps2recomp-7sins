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

// Function: sub_003B1A28
// Address: 0x3b1a28 - 0x3b1a90
void sub_003B1A28_0x3b1a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1A28_0x3b1a28");
#endif

    switch (ctx->pc) {
        case 0x3b1a58u: goto label_3b1a58;
        case 0x3b1a64u: goto label_3b1a64;
        case 0x3b1a74u: goto label_3b1a74;
        default: break;
    }

    ctx->pc = 0x3b1a28u;

label_3b1a28:
    // 0x3b1a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b1a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b1a30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b1a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b1a34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b1a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a38: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B1A38u;
    {
        const bool branch_taken_0x3b1a38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A38u;
        // 0x3b1a3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a38) {
            ctx->pc = 0x3B1A74u;
            goto label_3b1a74;
        }
    }
    ctx->pc = 0x3B1A40u;
    // 0x3b1a40: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b1a44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b1a48: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B1A48u;
    {
        const bool branch_taken_0x3b1a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A48u;
        // 0x3b1a4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a48) {
            ctx->pc = 0x3B1A78u;
            goto label_3b1a78;
        }
    }
    ctx->pc = 0x3B1A50u;
    // 0x3b1a50: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B1A50u;
    SET_GPR_U32(ctx, 31, 0x3B1A58u);
    ctx->pc = 0x3B1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1A50u;
    // 0x3b1a54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B1A50u, 0x3B1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1A58u;
label_3b1a58:
    // 0x3b1a58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b1a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b1a5c: 0xc10376e  jal         func_40DDB8
    ctx->pc = 0x3B1A5Cu;
    SET_GPR_U32(ctx, 31, 0x3B1A64u);
    ctx->pc = 0x3B1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1A5Cu;
    // 0x3b1a60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDB8u, 0x3B1A5Cu, 0x3B1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1A64u;
label_3b1a64:
    // 0x3b1a64: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3b1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3b1a68: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3b1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3b1a6c: 0xc0ec68a  jal         func_3B1A28
    ctx->pc = 0x3B1A6Cu;
    SET_GPR_U32(ctx, 31, 0x3B1A74u);
    ctx->pc = 0x3B1A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1A6Cu;
    // 0x3b1a70: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A28u;
    goto label_3b1a28;
    ctx->pc = 0x3B1A74u;
label_3b1a74:
    // 0x3b1a74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b1a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a78:
    // 0x3b1a78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b1a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b1a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1a84: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A84u;
        // 0x3b1a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1A8Cu;
    // 0x3b1a8c: 0x0  nop
    ctx->pc = 0x3b1a8cu;
    // NOP
    ctx->pc = 0x3b1a90u;
}
