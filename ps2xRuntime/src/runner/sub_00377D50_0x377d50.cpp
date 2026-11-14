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

// Function: sub_00377D50
// Address: 0x377d50 - 0x377eb8
void sub_00377D50_0x377d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377D50_0x377d50");
#endif

    switch (ctx->pc) {
        case 0x377d50u: goto label_377d50;
        case 0x377d54u: goto label_377d54;
        case 0x377d58u: goto label_377d58;
        case 0x377d5cu: goto label_377d5c;
        case 0x377d60u: goto label_377d60;
        case 0x377d64u: goto label_377d64;
        case 0x377d68u: goto label_377d68;
        case 0x377d6cu: goto label_377d6c;
        case 0x377d70u: goto label_377d70;
        case 0x377d74u: goto label_377d74;
        case 0x377d78u: goto label_377d78;
        case 0x377d7cu: goto label_377d7c;
        case 0x377d80u: goto label_377d80;
        case 0x377d84u: goto label_377d84;
        case 0x377d88u: goto label_377d88;
        case 0x377d8cu: goto label_377d8c;
        case 0x377d90u: goto label_377d90;
        case 0x377d94u: goto label_377d94;
        case 0x377d98u: goto label_377d98;
        case 0x377d9cu: goto label_377d9c;
        case 0x377da0u: goto label_377da0;
        case 0x377da4u: goto label_377da4;
        case 0x377da8u: goto label_377da8;
        case 0x377dacu: goto label_377dac;
        case 0x377db0u: goto label_377db0;
        case 0x377db4u: goto label_377db4;
        case 0x377db8u: goto label_377db8;
        case 0x377dbcu: goto label_377dbc;
        case 0x377dc0u: goto label_377dc0;
        case 0x377dc4u: goto label_377dc4;
        case 0x377dc8u: goto label_377dc8;
        case 0x377dccu: goto label_377dcc;
        case 0x377dd0u: goto label_377dd0;
        case 0x377dd4u: goto label_377dd4;
        case 0x377dd8u: goto label_377dd8;
        case 0x377ddcu: goto label_377ddc;
        case 0x377de0u: goto label_377de0;
        case 0x377de4u: goto label_377de4;
        case 0x377de8u: goto label_377de8;
        case 0x377decu: goto label_377dec;
        case 0x377df0u: goto label_377df0;
        case 0x377df4u: goto label_377df4;
        case 0x377df8u: goto label_377df8;
        case 0x377dfcu: goto label_377dfc;
        case 0x377e00u: goto label_377e00;
        case 0x377e04u: goto label_377e04;
        case 0x377e08u: goto label_377e08;
        case 0x377e0cu: goto label_377e0c;
        case 0x377e10u: goto label_377e10;
        case 0x377e14u: goto label_377e14;
        case 0x377e18u: goto label_377e18;
        case 0x377e1cu: goto label_377e1c;
        case 0x377e20u: goto label_377e20;
        case 0x377e24u: goto label_377e24;
        case 0x377e28u: goto label_377e28;
        case 0x377e2cu: goto label_377e2c;
        case 0x377e30u: goto label_377e30;
        case 0x377e34u: goto label_377e34;
        case 0x377e38u: goto label_377e38;
        case 0x377e3cu: goto label_377e3c;
        case 0x377e40u: goto label_377e40;
        case 0x377e44u: goto label_377e44;
        case 0x377e48u: goto label_377e48;
        case 0x377e4cu: goto label_377e4c;
        case 0x377e50u: goto label_377e50;
        case 0x377e54u: goto label_377e54;
        case 0x377e58u: goto label_377e58;
        case 0x377e5cu: goto label_377e5c;
        case 0x377e60u: goto label_377e60;
        case 0x377e64u: goto label_377e64;
        case 0x377e68u: goto label_377e68;
        case 0x377e6cu: goto label_377e6c;
        case 0x377e70u: goto label_377e70;
        case 0x377e74u: goto label_377e74;
        case 0x377e78u: goto label_377e78;
        case 0x377e7cu: goto label_377e7c;
        case 0x377e80u: goto label_377e80;
        case 0x377e84u: goto label_377e84;
        case 0x377e88u: goto label_377e88;
        case 0x377e8cu: goto label_377e8c;
        case 0x377e90u: goto label_377e90;
        case 0x377e94u: goto label_377e94;
        case 0x377e98u: goto label_377e98;
        case 0x377e9cu: goto label_377e9c;
        case 0x377ea0u: goto label_377ea0;
        case 0x377ea4u: goto label_377ea4;
        case 0x377ea8u: goto label_377ea8;
        case 0x377eacu: goto label_377eac;
        case 0x377eb0u: goto label_377eb0;
        case 0x377eb4u: goto label_377eb4;
        default: break;
    }

    ctx->pc = 0x377d50u;

label_377d50:
    // 0x377d50: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x377d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_377d54:
    // 0x377d54: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x377d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377d58:
    // 0x377d58: 0x2463c430  addiu       $v1, $v1, -0x3BD0
    ctx->pc = 0x377d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
label_377d5c:
    // 0x377d5c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x377d5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_377d60:
    // 0x377d60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x377d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_377d64:
    // 0x377d64: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x377d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_377d68:
    // 0x377d68: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x377d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_377d6c:
    // 0x377d6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x377d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_377d70:
    // 0x377d70: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x377d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_377d74:
    // 0x377d74: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x377d74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
label_377d78:
    // 0x377d78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x377d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_377d7c:
    // 0x377d7c: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x377d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_377d80:
    // 0x377d80: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x377d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_377d84:
    // 0x377d84: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x377d84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_377d88:
    // 0x377d88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x377d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_377d8c:
    // 0x377d8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_377d90:
    if (ctx->pc == 0x377D90u) {
        ctx->pc = 0x377D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D8Cu;
        // 0x377d90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377D94u;
        goto label_377d94;
    }
    ctx->pc = 0x377D8Cu;
    {
        const bool branch_taken_0x377d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D8Cu;
        // 0x377d90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377d8c) {
            ctx->pc = 0x377D9Cu;
            goto label_377d9c;
        }
    }
    ctx->pc = 0x377D94u;
label_377d94:
    // 0x377d94: 0x3e00008  jr          $ra
label_377d98:
    if (ctx->pc == 0x377D98u) {
        ctx->pc = 0x377D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D94u;
        // 0x377d98: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377D9Cu;
        goto label_377d9c;
    }
    ctx->pc = 0x377D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D94u;
        // 0x377d98: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377D9Cu;
label_377d9c:
    // 0x377d9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377da0:
    // 0x377da0: 0x3e00008  jr          $ra
label_377da4:
    if (ctx->pc == 0x377DA4u) {
        ctx->pc = 0x377DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377DA0u;
        // 0x377da4: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377DA8u;
        goto label_377da8;
    }
    ctx->pc = 0x377DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377DA0u;
        // 0x377da4: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377DA8u;
label_377da8:
    // 0x377da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_377dac:
    // 0x377dac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_377db0:
    // 0x377db0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_377db4:
    // 0x377db4: 0x2443c430  addiu       $v1, $v0, -0x3BD0
    ctx->pc = 0x377db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_377db8:
    // 0x377db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377dbc:
    // 0x377dbc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x377dbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377dc0:
    // 0x377dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_377dc4:
    // 0x377dc4: 0x8c46c430  lw          $a2, -0x3BD0($v0)
    ctx->pc = 0x377dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951984)));
label_377dc8:
    // 0x377dc8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x377dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_377dcc:
    // 0x377dcc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x377dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_377dd0:
    // 0x377dd0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x377dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_377dd4:
    // 0x377dd4: 0x94e20084  lhu         $v0, 0x84($a3)
    ctx->pc = 0x377dd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 132)));
label_377dd8:
    // 0x377dd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x377dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_377ddc:
    // 0x377ddc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x377ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_377de0:
    // 0x377de0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_377de4:
    if (ctx->pc == 0x377DE4u) {
        ctx->pc = 0x377DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377DE0u;
        // 0x377de4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377DE8u;
        goto label_377de8;
    }
    ctx->pc = 0x377DE0u;
    {
        const bool branch_taken_0x377de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377DE0u;
        // 0x377de4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377de0) {
            ctx->pc = 0x377E20u;
            goto label_377e20;
        }
    }
    ctx->pc = 0x377DE8u;
label_377de8:
    // 0x377de8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x377de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_377dec:
    // 0x377dec: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_377df0:
    if (ctx->pc == 0x377DF0u) {
        ctx->pc = 0x377DF4u;
        goto label_377df4;
    }
    ctx->pc = 0x377DECu;
    {
        const bool branch_taken_0x377dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x377dec) {
            ctx->pc = 0x377E20u;
            goto label_377e20;
        }
    }
    ctx->pc = 0x377DF4u;
label_377df4:
    // 0x377df4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x377df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_377df8:
    // 0x377df8: 0x94e30084  lhu         $v1, 0x84($a3)
    ctx->pc = 0x377df8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 132)));
label_377dfc:
    // 0x377dfc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x377dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_377e00:
    // 0x377e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_377e04:
    // 0x377e04: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x377e04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
label_377e08:
    // 0x377e08: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x377e08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_377e0c:
    // 0x377e0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x377e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_377e10:
    // 0x377e10: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x377e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_377e14:
    // 0x377e14: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x377e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_377e18:
    // 0x377e18: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x377e18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_377e1c:
    // 0x377e1c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x377e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_377e20:
    // 0x377e20: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_377e24:
    if (ctx->pc == 0x377E24u) {
        ctx->pc = 0x377E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E20u;
        // 0x377e24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E28u;
        goto label_377e28;
    }
    ctx->pc = 0x377E20u;
    {
        const bool branch_taken_0x377e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x377E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E20u;
        // 0x377e24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e20) {
            ctx->pc = 0x377EA0u;
            goto label_377ea0;
        }
    }
    ctx->pc = 0x377E28u;
label_377e28:
    // 0x377e28: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x377e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_377e2c:
    // 0x377e2c: 0x94e30084  lhu         $v1, 0x84($a3)
    ctx->pc = 0x377e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 132)));
label_377e30:
    // 0x377e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_377e34:
    // 0x377e34: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x377e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_377e38:
    // 0x377e38: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x377e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_377e3c:
    // 0x377e3c: 0x24714080  addiu       $s1, $v1, 0x4080
    ctx->pc = 0x377e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16512));
label_377e40:
    // 0x377e40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x377e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_377e44:
    // 0x377e44: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_377e48:
    if (ctx->pc == 0x377E48u) {
        ctx->pc = 0x377E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E44u;
        // 0x377e48: 0x8c704080  lw          $s0, 0x4080($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E4Cu;
        goto label_377e4c;
    }
    ctx->pc = 0x377E44u;
    {
        const bool branch_taken_0x377e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E44u;
        // 0x377e48: 0x8c704080  lw          $s0, 0x4080($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e44) {
            ctx->pc = 0x377E80u;
            goto label_377e80;
        }
    }
    ctx->pc = 0x377E4Cu;
label_377e4c:
    // 0x377e4c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x377e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_377e50:
    // 0x377e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377e54:
    // 0x377e54: 0xc11139e  jal         func_444E78
label_377e58:
    if (ctx->pc == 0x377E58u) {
        ctx->pc = 0x377E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E54u;
        // 0x377e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E5Cu;
        goto label_377e5c;
    }
    ctx->pc = 0x377E54u;
    SET_GPR_U32(ctx, 31, 0x377E5Cu);
    ctx->pc = 0x377E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E54u;
    // 0x377e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444E78u, 0x377E54u, 0x377E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E5Cu;
label_377e5c:
    // 0x377e5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_377e60:
    if (ctx->pc == 0x377E60u) {
        ctx->pc = 0x377E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E5Cu;
        // 0x377e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E64u;
        goto label_377e64;
    }
    ctx->pc = 0x377E5Cu;
    {
        const bool branch_taken_0x377e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E5Cu;
        // 0x377e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e5c) {
            ctx->pc = 0x377E80u;
            goto label_377e80;
        }
    }
    ctx->pc = 0x377E64u;
label_377e64:
    // 0x377e64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x377e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_377e68:
    // 0x377e68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x377e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_377e6c:
    // 0x377e6c: 0x40f809  jalr        $v0
label_377e70:
    if (ctx->pc == 0x377E70u) {
        ctx->pc = 0x377E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E6Cu;
        // 0x377e70: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E74u;
        goto label_377e74;
    }
    ctx->pc = 0x377E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x377E74u);
        ctx->pc = 0x377E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E6Cu;
        // 0x377e70: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377E6Cu, 0x377E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x377E74u;
label_377e74:
    // 0x377e74: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_377e78:
    if (ctx->pc == 0x377E78u) {
        ctx->pc = 0x377E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E74u;
        // 0x377e78: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E7Cu;
        goto label_377e7c;
    }
    ctx->pc = 0x377E74u;
    {
        const bool branch_taken_0x377e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377e74) {
            ctx->pc = 0x377E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377E74u;
            // 0x377e78: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377E80u;
            goto label_377e80;
        }
    }
    ctx->pc = 0x377E7Cu;
label_377e7c:
    // 0x377e7c: 0x0  nop
    ctx->pc = 0x377e7cu;
    // NOP
label_377e80:
    // 0x377e80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x377e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_377e84:
    // 0x377e84: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x377e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_377e88:
    // 0x377e88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_377e8c:
    if (ctx->pc == 0x377E8Cu) {
        ctx->pc = 0x377E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E88u;
        // 0x377e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E90u;
        goto label_377e90;
    }
    ctx->pc = 0x377E88u;
    {
        const bool branch_taken_0x377e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E88u;
        // 0x377e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e88) {
            ctx->pc = 0x377E9Cu;
            goto label_377e9c;
        }
    }
    ctx->pc = 0x377E90u;
label_377e90:
    // 0x377e90: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x377e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_377e94:
    // 0x377e94: 0xc111448  jal         func_445120
label_377e98:
    if (ctx->pc == 0x377E98u) {
        ctx->pc = 0x377E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E94u;
        // 0x377e98: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E9Cu;
        goto label_377e9c;
    }
    ctx->pc = 0x377E94u;
    SET_GPR_U32(ctx, 31, 0x377E9Cu);
    ctx->pc = 0x377E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E94u;
    // 0x377e98: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445120u, 0x377E94u, 0x377E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E9Cu;
label_377e9c:
    // 0x377e9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_377ea0:
    // 0x377ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_377ea4:
    // 0x377ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377ea8:
    // 0x377ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_377eac:
    // 0x377eac: 0x3e00008  jr          $ra
label_377eb0:
    if (ctx->pc == 0x377EB0u) {
        ctx->pc = 0x377EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EACu;
        // 0x377eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377EB4u;
        goto label_377eb4;
    }
    ctx->pc = 0x377EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EACu;
        // 0x377eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377EB4u;
label_377eb4:
    // 0x377eb4: 0x0  nop
    ctx->pc = 0x377eb4u;
    // NOP
    ctx->pc = 0x377eb8u;
}
