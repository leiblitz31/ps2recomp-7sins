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

// Function: sub_004ACB28
// Address: 0x4acb28 - 0x4acba8
void sub_004ACB28_0x4acb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACB28_0x4acb28");
#endif

    switch (ctx->pc) {
        case 0x4acb70u: goto label_4acb70;
        case 0x4acb84u: goto label_4acb84;
        default: break;
    }

    ctx->pc = 0x4acb28u;

    // 0x4acb28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4acb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4acb2c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4acb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4acb30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4acb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4acb34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4acb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acb38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4acb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4acb3c: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x4acb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x4acb40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acb44: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4acb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4acb48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4acb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4acb4c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4ACB4Cu;
    {
        const bool branch_taken_0x4acb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acb4c) {
            ctx->pc = 0x4ACB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACB4Cu;
            // 0x4acb50: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACB88u;
            goto label_4acb88;
        }
    }
    ctx->pc = 0x4ACB54u;
    // 0x4acb54: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4acb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4acb58: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4ACB58u;
    {
        const bool branch_taken_0x4acb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACB58u;
        // 0x4acb5c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acb58) {
            ctx->pc = 0x4ACB78u;
            goto label_4acb78;
        }
    }
    ctx->pc = 0x4ACB60u;
    // 0x4acb60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4acb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4acb64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4acb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4acb68: 0xc126464  jal         func_499190
    ctx->pc = 0x4ACB68u;
    SET_GPR_U32(ctx, 31, 0x4ACB70u);
    ctx->pc = 0x4ACB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACB68u;
    // 0x4acb6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499190u, 0x4ACB68u, 0x4ACB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACB70u;
label_4acb70:
    // 0x4acb70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4acb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4acb74: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x4acb74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_4acb78:
    // 0x4acb78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4acb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acb7c: 0xc12a7f0  jal         func_4A9FC0
    ctx->pc = 0x4ACB7Cu;
    SET_GPR_U32(ctx, 31, 0x4ACB84u);
    ctx->pc = 0x4ACB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACB7Cu;
    // 0x4acb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FC0u, 0x4ACB7Cu, 0x4ACB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACB84u;
label_4acb84:
    // 0x4acb84: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4acb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_4acb88:
    // 0x4acb88: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4acb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acb8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4acb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4acb90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4acb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acb94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4acb94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACB9Cu;
        // 0x4acba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACBA4u;
    // 0x4acba4: 0x0  nop
    ctx->pc = 0x4acba4u;
    // NOP
    ctx->pc = 0x4acba8u;
}
