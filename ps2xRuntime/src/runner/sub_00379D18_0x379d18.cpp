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

// Function: sub_00379D18
// Address: 0x379d18 - 0x379db8
void sub_00379D18_0x379d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379D18_0x379d18");
#endif

    switch (ctx->pc) {
        case 0x379d44u: goto label_379d44;
        case 0x379d54u: goto label_379d54;
        case 0x379d78u: goto label_379d78;
        case 0x379d9cu: goto label_379d9c;
        default: break;
    }

    ctx->pc = 0x379d18u;

    // 0x379d18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379d1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x379d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x379d20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x379d24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x379d28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x379d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379d30: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x379d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x379d34: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x379D34u;
    {
        const bool branch_taken_0x379d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x379D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D34u;
        // 0x379d38: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d34) {
            ctx->pc = 0x379D9Cu;
            goto label_379d9c;
        }
    }
    ctx->pc = 0x379D3Cu;
    // 0x379d3c: 0xc0de61a  jal         func_379868
    ctx->pc = 0x379D3Cu;
    SET_GPR_U32(ctx, 31, 0x379D44u);
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x379D3Cu, 0x379D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D44u;
label_379d44:
    // 0x379d44: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x379D44u;
    {
        const bool branch_taken_0x379d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D44u;
        // 0x379d48: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d44) {
            ctx->pc = 0x379D9Cu;
            goto label_379d9c;
        }
    }
    ctx->pc = 0x379D4Cu;
    // 0x379d4c: 0xc106406  jal         func_419018
    ctx->pc = 0x379D4Cu;
    SET_GPR_U32(ctx, 31, 0x379D54u);
    ctx->pc = 0x379D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D4Cu;
    // 0x379d50: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x379D4Cu, 0x379D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D54u;
label_379d54:
    // 0x379d54: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x379d54u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x379d58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x379D58u;
    {
        const bool branch_taken_0x379d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D58u;
        // 0x379d5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d58) {
            ctx->pc = 0x379D70u;
            goto label_379d70;
        }
    }
    ctx->pc = 0x379D60u;
    // 0x379d60: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x379D60u;
    {
        const bool branch_taken_0x379d60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x379d60) {
            ctx->pc = 0x379D70u;
            goto label_379d70;
        }
    }
    ctx->pc = 0x379D68u;
    // 0x379d68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x379D68u;
    {
        const bool branch_taken_0x379d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D68u;
        // 0x379d6c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d68) {
            ctx->pc = 0x379D90u;
            goto label_379d90;
        }
    }
    ctx->pc = 0x379D70u;
label_379d70:
    // 0x379d70: 0xc106406  jal         func_419018
    ctx->pc = 0x379D70u;
    SET_GPR_U32(ctx, 31, 0x379D78u);
    ctx->pc = 0x379D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D70u;
    // 0x379d74: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x379D70u, 0x379D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D78u;
label_379d78:
    // 0x379d78: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x379d78u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x379d7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x379D7Cu;
    {
        const bool branch_taken_0x379d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D7Cu;
        // 0x379d80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d7c) {
            ctx->pc = 0x379D94u;
            goto label_379d94;
        }
    }
    ctx->pc = 0x379D84u;
    // 0x379d84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x379d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379d88: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x379d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x379d8c: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x379d8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_379d90:
    // 0x379d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_379d94:
    // 0x379d94: 0xc0de920  jal         func_37A480
    ctx->pc = 0x379D94u;
    SET_GPR_U32(ctx, 31, 0x379D9Cu);
    ctx->pc = 0x379D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D94u;
    // 0x379d98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A480u, 0x379D94u, 0x379D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D9Cu;
label_379d9c:
    // 0x379d9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379da4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379da8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379db0: 0x3e00008  jr          $ra
    ctx->pc = 0x379DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379DB0u;
        // 0x379db4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379DB8u;
}
