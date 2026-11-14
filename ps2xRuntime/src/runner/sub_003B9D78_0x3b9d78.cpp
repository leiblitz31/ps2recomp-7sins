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

// Function: sub_003B9D78
// Address: 0x3b9d78 - 0x3b9e30
void sub_003B9D78_0x3b9d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9D78_0x3b9d78");
#endif

    switch (ctx->pc) {
        case 0x3b9d78u: goto label_3b9d78;
        case 0x3b9d7cu: goto label_3b9d7c;
        case 0x3b9d80u: goto label_3b9d80;
        case 0x3b9d84u: goto label_3b9d84;
        case 0x3b9d88u: goto label_3b9d88;
        case 0x3b9d8cu: goto label_3b9d8c;
        case 0x3b9d90u: goto label_3b9d90;
        case 0x3b9d94u: goto label_3b9d94;
        case 0x3b9d98u: goto label_3b9d98;
        case 0x3b9d9cu: goto label_3b9d9c;
        case 0x3b9da0u: goto label_3b9da0;
        case 0x3b9da4u: goto label_3b9da4;
        case 0x3b9da8u: goto label_3b9da8;
        case 0x3b9dacu: goto label_3b9dac;
        case 0x3b9db0u: goto label_3b9db0;
        case 0x3b9db4u: goto label_3b9db4;
        case 0x3b9db8u: goto label_3b9db8;
        case 0x3b9dbcu: goto label_3b9dbc;
        case 0x3b9dc0u: goto label_3b9dc0;
        case 0x3b9dc4u: goto label_3b9dc4;
        case 0x3b9dc8u: goto label_3b9dc8;
        case 0x3b9dccu: goto label_3b9dcc;
        case 0x3b9dd0u: goto label_3b9dd0;
        case 0x3b9dd4u: goto label_3b9dd4;
        case 0x3b9dd8u: goto label_3b9dd8;
        case 0x3b9ddcu: goto label_3b9ddc;
        case 0x3b9de0u: goto label_3b9de0;
        case 0x3b9de4u: goto label_3b9de4;
        case 0x3b9de8u: goto label_3b9de8;
        case 0x3b9decu: goto label_3b9dec;
        case 0x3b9df0u: goto label_3b9df0;
        case 0x3b9df4u: goto label_3b9df4;
        case 0x3b9df8u: goto label_3b9df8;
        case 0x3b9dfcu: goto label_3b9dfc;
        case 0x3b9e00u: goto label_3b9e00;
        case 0x3b9e04u: goto label_3b9e04;
        case 0x3b9e08u: goto label_3b9e08;
        case 0x3b9e0cu: goto label_3b9e0c;
        case 0x3b9e10u: goto label_3b9e10;
        case 0x3b9e14u: goto label_3b9e14;
        case 0x3b9e18u: goto label_3b9e18;
        case 0x3b9e1cu: goto label_3b9e1c;
        case 0x3b9e20u: goto label_3b9e20;
        case 0x3b9e24u: goto label_3b9e24;
        case 0x3b9e28u: goto label_3b9e28;
        case 0x3b9e2cu: goto label_3b9e2c;
        default: break;
    }

    ctx->pc = 0x3b9d78u;

label_3b9d78:
    // 0x3b9d78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b9d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b9d7c:
    // 0x3b9d7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b9d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b9d80:
    // 0x3b9d80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b9d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3b9d84:
    // 0x3b9d84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b9d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9d88:
    // 0x3b9d88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b9d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b9d8c:
    // 0x3b9d8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b9d8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b9d90:
    // 0x3b9d90: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_3b9d94:
    if (ctx->pc == 0x3B9D94u) {
        ctx->pc = 0x3B9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D90u;
        // 0x3b9d94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9D98u;
        goto label_3b9d98;
    }
    ctx->pc = 0x3B9D90u;
    {
        const bool branch_taken_0x3b9d90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D90u;
        // 0x3b9d94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9d90) {
            ctx->pc = 0x3B9DACu;
            goto label_3b9dac;
        }
    }
    ctx->pc = 0x3B9D98u;
label_3b9d98:
    // 0x3b9d98: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x3b9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_3b9d9c:
    // 0x3b9d9c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3b9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3b9da0:
    // 0x3b9da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b9da4:
    // 0x3b9da4: 0x10000018  b           . + 4 + (0x18 << 2)
label_3b9da8:
    if (ctx->pc == 0x3B9DA8u) {
        ctx->pc = 0x3B9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DA4u;
        // 0x3b9da8: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9DACu;
        goto label_3b9dac;
    }
    ctx->pc = 0x3B9DA4u;
    {
        const bool branch_taken_0x3b9da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DA4u;
        // 0x3b9da8: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9da4) {
            ctx->pc = 0x3B9E08u;
            goto label_3b9e08;
        }
    }
    ctx->pc = 0x3B9DACu;
label_3b9dac:
    // 0x3b9dac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b9db0:
    // 0x3b9db0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b9db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b9db4:
    // 0x3b9db4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3b9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3b9db8:
    // 0x3b9db8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b9dbc:
    // 0x3b9dbc: 0x40f809  jalr        $v0
label_3b9dc0:
    if (ctx->pc == 0x3B9DC0u) {
        ctx->pc = 0x3B9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DBCu;
        // 0x3b9dc0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9DC4u;
        goto label_3b9dc4;
    }
    ctx->pc = 0x3B9DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B9DC4u);
        ctx->pc = 0x3B9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DBCu;
        // 0x3b9dc0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9DBCu, 0x3B9DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B9DC4u;
label_3b9dc4:
    // 0x3b9dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b9dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9dc8:
    // 0x3b9dc8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b9dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b9dcc:
    // 0x3b9dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b9dd0:
    // 0x3b9dd0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b9dd4:
    // 0x3b9dd4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b9dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b9dd8:
    // 0x3b9dd8: 0xc103642  jal         func_40D908
label_3b9ddc:
    if (ctx->pc == 0x3B9DDCu) {
        ctx->pc = 0x3B9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DD8u;
        // 0x3b9ddc: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9DE0u;
        goto label_3b9de0;
    }
    ctx->pc = 0x3B9DD8u;
    SET_GPR_U32(ctx, 31, 0x3B9DE0u);
    ctx->pc = 0x3B9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9DD8u;
    // 0x3b9ddc: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B9DD8u, 0x3B9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9DE0u;
label_3b9de0:
    // 0x3b9de0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3b9de4:
    // 0x3b9de4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_3b9de8:
    if (ctx->pc == 0x3B9DE8u) {
        ctx->pc = 0x3B9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DE4u;
        // 0x3b9de8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9DECu;
        goto label_3b9dec;
    }
    ctx->pc = 0x3B9DE4u;
    {
        const bool branch_taken_0x3b9de4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DE4u;
        // 0x3b9de8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9de4) {
            ctx->pc = 0x3B9E00u;
            goto label_3b9e00;
        }
    }
    ctx->pc = 0x3B9DECu;
label_3b9dec:
    // 0x3b9dec: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3b9decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3b9df0:
    // 0x3b9df0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b9df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9df4:
    // 0x3b9df4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b9df8:
    // 0x3b9df8: 0xc103722  jal         func_40DC88
label_3b9dfc:
    if (ctx->pc == 0x3B9DFCu) {
        ctx->pc = 0x3B9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DF8u;
        // 0x3b9dfc: 0x34c601a4  ori         $a2, $a2, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9E00u;
        goto label_3b9e00;
    }
    ctx->pc = 0x3B9DF8u;
    SET_GPR_U32(ctx, 31, 0x3B9E00u);
    ctx->pc = 0x3B9DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9DF8u;
    // 0x3b9dfc: 0x34c601a4  ori         $a2, $a2, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B9DF8u, 0x3B9E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9E00u;
label_3b9e00:
    // 0x3b9e00: 0xae3000b0  sw          $s0, 0xB0($s1)
    ctx->pc = 0x3b9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 16));
label_3b9e04:
    // 0x3b9e04: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3b9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3b9e08:
    // 0x3b9e08: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3b9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b9e0c:
    // 0x3b9e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b9e10:
    // 0x3b9e10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b9e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b9e14:
    // 0x3b9e14: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b9e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3b9e18:
    // 0x3b9e18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b9e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9e1c:
    // 0x3b9e1c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3b9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3b9e20:
    // 0x3b9e20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b9e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b9e24:
    // 0x3b9e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9e28:
    // 0x3b9e28: 0x3e00008  jr          $ra
label_3b9e2c:
    if (ctx->pc == 0x3B9E2Cu) {
        ctx->pc = 0x3B9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E28u;
        // 0x3b9e2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9E30u;
        goto label_fallthrough_0x3b9e28;
    }
    ctx->pc = 0x3B9E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E28u;
        // 0x3b9e2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b9e28:
    ctx->pc = 0x3B9E30u;
}
