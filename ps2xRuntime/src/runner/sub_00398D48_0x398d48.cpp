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

// Function: sub_00398D48
// Address: 0x398d48 - 0x398de8
void sub_00398D48_0x398d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398D48_0x398d48");
#endif

    switch (ctx->pc) {
        case 0x398d48u: goto label_398d48;
        case 0x398d4cu: goto label_398d4c;
        case 0x398d50u: goto label_398d50;
        case 0x398d54u: goto label_398d54;
        case 0x398d58u: goto label_398d58;
        case 0x398d5cu: goto label_398d5c;
        case 0x398d60u: goto label_398d60;
        case 0x398d64u: goto label_398d64;
        case 0x398d68u: goto label_398d68;
        case 0x398d6cu: goto label_398d6c;
        case 0x398d70u: goto label_398d70;
        case 0x398d74u: goto label_398d74;
        case 0x398d78u: goto label_398d78;
        case 0x398d7cu: goto label_398d7c;
        case 0x398d80u: goto label_398d80;
        case 0x398d84u: goto label_398d84;
        case 0x398d88u: goto label_398d88;
        case 0x398d8cu: goto label_398d8c;
        case 0x398d90u: goto label_398d90;
        case 0x398d94u: goto label_398d94;
        case 0x398d98u: goto label_398d98;
        case 0x398d9cu: goto label_398d9c;
        case 0x398da0u: goto label_398da0;
        case 0x398da4u: goto label_398da4;
        case 0x398da8u: goto label_398da8;
        case 0x398dacu: goto label_398dac;
        case 0x398db0u: goto label_398db0;
        case 0x398db4u: goto label_398db4;
        case 0x398db8u: goto label_398db8;
        case 0x398dbcu: goto label_398dbc;
        case 0x398dc0u: goto label_398dc0;
        case 0x398dc4u: goto label_398dc4;
        case 0x398dc8u: goto label_398dc8;
        case 0x398dccu: goto label_398dcc;
        case 0x398dd0u: goto label_398dd0;
        case 0x398dd4u: goto label_398dd4;
        case 0x398dd8u: goto label_398dd8;
        case 0x398ddcu: goto label_398ddc;
        case 0x398de0u: goto label_398de0;
        case 0x398de4u: goto label_398de4;
        default: break;
    }

    ctx->pc = 0x398d48u;

label_398d48:
    // 0x398d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_398d4c:
    // 0x398d4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x398d4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398d50:
    // 0x398d50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x398d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_398d54:
    // 0x398d54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x398d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_398d58:
    // 0x398d58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x398d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398d5c:
    // 0x398d5c: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_398d60:
    if (ctx->pc == 0x398D60u) {
        ctx->pc = 0x398D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D5Cu;
        // 0x398d60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D64u;
        goto label_398d64;
    }
    ctx->pc = 0x398D5Cu;
    {
        const bool branch_taken_0x398d5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D5Cu;
        // 0x398d60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d5c) {
            ctx->pc = 0x398DCCu;
            goto label_398dcc;
        }
    }
    ctx->pc = 0x398D64u;
label_398d64:
    // 0x398d64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x398d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_398d68:
    // 0x398d68: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_398d6c:
    if (ctx->pc == 0x398D6Cu) {
        ctx->pc = 0x398D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D68u;
        // 0x398d6c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D70u;
        goto label_398d70;
    }
    ctx->pc = 0x398D68u;
    {
        const bool branch_taken_0x398d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398d68) {
            ctx->pc = 0x398D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398D68u;
            // 0x398d6c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x398D84u;
            goto label_398d84;
        }
    }
    ctx->pc = 0x398D70u;
label_398d70:
    // 0x398d70: 0xc0e403a  jal         func_3900E8
label_398d74:
    if (ctx->pc == 0x398D74u) {
        ctx->pc = 0x398D78u;
        goto label_398d78;
    }
    ctx->pc = 0x398D70u;
    SET_GPR_U32(ctx, 31, 0x398D78u);
    ctx->pc = 0x3900E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900E8u, 0x398D70u, 0x398D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D78u;
label_398d78:
    // 0x398d78: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x398d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_398d7c:
    // 0x398d7c: 0x10000014  b           . + 4 + (0x14 << 2)
label_398d80:
    if (ctx->pc == 0x398D80u) {
        ctx->pc = 0x398D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D7Cu;
        // 0x398d80: 0x2442ae28  addiu       $v0, $v0, -0x51D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D84u;
        goto label_398d84;
    }
    ctx->pc = 0x398D7Cu;
    {
        const bool branch_taken_0x398d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D7Cu;
        // 0x398d80: 0x2442ae28  addiu       $v0, $v0, -0x51D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d7c) {
            ctx->pc = 0x398DD0u;
            goto label_398dd0;
        }
    }
    ctx->pc = 0x398D84u;
label_398d84:
    // 0x398d84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_398d88:
    if (ctx->pc == 0x398D88u) {
        ctx->pc = 0x398D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D84u;
        // 0x398d88: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D8Cu;
        goto label_398d8c;
    }
    ctx->pc = 0x398D84u;
    {
        const bool branch_taken_0x398d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D84u;
        // 0x398d88: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d84) {
            ctx->pc = 0x398D9Cu;
            goto label_398d9c;
        }
    }
    ctx->pc = 0x398D8Cu;
label_398d8c:
    // 0x398d8c: 0x2442ae28  addiu       $v0, $v0, -0x51D8
    ctx->pc = 0x398d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946344));
label_398d90:
    // 0x398d90: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x398d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_398d94:
    // 0x398d94: 0x10000003  b           . + 4 + (0x3 << 2)
label_398d98:
    if (ctx->pc == 0x398D98u) {
        ctx->pc = 0x398D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D94u;
        // 0x398d98: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D9Cu;
        goto label_398d9c;
    }
    ctx->pc = 0x398D94u;
    {
        const bool branch_taken_0x398d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D94u;
        // 0x398d98: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d94) {
            ctx->pc = 0x398DA4u;
            goto label_398da4;
        }
    }
    ctx->pc = 0x398D9Cu;
label_398d9c:
    // 0x398d9c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x398d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_398da0:
    // 0x398da0: 0x244283a0  addiu       $v0, $v0, -0x7C60
    ctx->pc = 0x398da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935456));
label_398da4:
    // 0x398da4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x398da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_398da8:
    // 0x398da8: 0x40f809  jalr        $v0
label_398dac:
    if (ctx->pc == 0x398DACu) {
        ctx->pc = 0x398DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DA8u;
        // 0x398dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DB0u;
        goto label_398db0;
    }
    ctx->pc = 0x398DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398DB0u);
        ctx->pc = 0x398DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DA8u;
        // 0x398dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398DA8u, 0x398DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398DB0u;
label_398db0:
    // 0x398db0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398db4:
    // 0x398db4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_398db8:
    if (ctx->pc == 0x398DB8u) {
        ctx->pc = 0x398DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DB4u;
        // 0x398db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DBCu;
        goto label_398dbc;
    }
    ctx->pc = 0x398DB4u;
    {
        const bool branch_taken_0x398db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x398DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DB4u;
        // 0x398db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398db4) {
            ctx->pc = 0x398DD0u;
            goto label_398dd0;
        }
    }
    ctx->pc = 0x398DBCu;
label_398dbc:
    // 0x398dbc: 0xc0e403a  jal         func_3900E8
label_398dc0:
    if (ctx->pc == 0x398DC0u) {
        ctx->pc = 0x398DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DBCu;
        // 0x398dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DC4u;
        goto label_398dc4;
    }
    ctx->pc = 0x398DBCu;
    SET_GPR_U32(ctx, 31, 0x398DC4u);
    ctx->pc = 0x398DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398DBCu;
    // 0x398dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900E8u, 0x398DBCu, 0x398DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398DC4u;
label_398dc4:
    // 0x398dc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_398dc8:
    if (ctx->pc == 0x398DC8u) {
        ctx->pc = 0x398DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DC4u;
        // 0x398dc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DCCu;
        goto label_398dcc;
    }
    ctx->pc = 0x398DC4u;
    {
        const bool branch_taken_0x398dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DC4u;
        // 0x398dc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398dc4) {
            ctx->pc = 0x398DD0u;
            goto label_398dd0;
        }
    }
    ctx->pc = 0x398DCCu;
label_398dcc:
    // 0x398dcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x398dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398dd0:
    // 0x398dd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x398dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_398dd4:
    // 0x398dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x398dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_398dd8:
    // 0x398dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_398ddc:
    // 0x398ddc: 0x3e00008  jr          $ra
label_398de0:
    if (ctx->pc == 0x398DE0u) {
        ctx->pc = 0x398DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DDCu;
        // 0x398de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DE4u;
        goto label_398de4;
    }
    ctx->pc = 0x398DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DDCu;
        // 0x398de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398DE4u;
label_398de4:
    // 0x398de4: 0x0  nop
    ctx->pc = 0x398de4u;
    // NOP
    ctx->pc = 0x398de8u;
}
