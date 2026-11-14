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

// Function: sub_00340D00
// Address: 0x340d00 - 0x340f20
void sub_00340D00_0x340d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340D00_0x340d00");
#endif

    switch (ctx->pc) {
        case 0x340d00u: goto label_340d00;
        case 0x340d04u: goto label_340d04;
        case 0x340d08u: goto label_340d08;
        case 0x340d0cu: goto label_340d0c;
        case 0x340d10u: goto label_340d10;
        case 0x340d14u: goto label_340d14;
        case 0x340d18u: goto label_340d18;
        case 0x340d1cu: goto label_340d1c;
        case 0x340d20u: goto label_340d20;
        case 0x340d24u: goto label_340d24;
        case 0x340d28u: goto label_340d28;
        case 0x340d2cu: goto label_340d2c;
        case 0x340d30u: goto label_340d30;
        case 0x340d34u: goto label_340d34;
        case 0x340d38u: goto label_340d38;
        case 0x340d3cu: goto label_340d3c;
        case 0x340d40u: goto label_340d40;
        case 0x340d44u: goto label_340d44;
        case 0x340d48u: goto label_340d48;
        case 0x340d4cu: goto label_340d4c;
        case 0x340d50u: goto label_340d50;
        case 0x340d54u: goto label_340d54;
        case 0x340d58u: goto label_340d58;
        case 0x340d5cu: goto label_340d5c;
        case 0x340d60u: goto label_340d60;
        case 0x340d64u: goto label_340d64;
        case 0x340d68u: goto label_340d68;
        case 0x340d6cu: goto label_340d6c;
        case 0x340d70u: goto label_340d70;
        case 0x340d74u: goto label_340d74;
        case 0x340d78u: goto label_340d78;
        case 0x340d7cu: goto label_340d7c;
        case 0x340d80u: goto label_340d80;
        case 0x340d84u: goto label_340d84;
        case 0x340d88u: goto label_340d88;
        case 0x340d8cu: goto label_340d8c;
        case 0x340d90u: goto label_340d90;
        case 0x340d94u: goto label_340d94;
        case 0x340d98u: goto label_340d98;
        case 0x340d9cu: goto label_340d9c;
        case 0x340da0u: goto label_340da0;
        case 0x340da4u: goto label_340da4;
        case 0x340da8u: goto label_340da8;
        case 0x340dacu: goto label_340dac;
        case 0x340db0u: goto label_340db0;
        case 0x340db4u: goto label_340db4;
        case 0x340db8u: goto label_340db8;
        case 0x340dbcu: goto label_340dbc;
        case 0x340dc0u: goto label_340dc0;
        case 0x340dc4u: goto label_340dc4;
        case 0x340dc8u: goto label_340dc8;
        case 0x340dccu: goto label_340dcc;
        case 0x340dd0u: goto label_340dd0;
        case 0x340dd4u: goto label_340dd4;
        case 0x340dd8u: goto label_340dd8;
        case 0x340ddcu: goto label_340ddc;
        case 0x340de0u: goto label_340de0;
        case 0x340de4u: goto label_340de4;
        case 0x340de8u: goto label_340de8;
        case 0x340decu: goto label_340dec;
        case 0x340df0u: goto label_340df0;
        case 0x340df4u: goto label_340df4;
        case 0x340df8u: goto label_340df8;
        case 0x340dfcu: goto label_340dfc;
        case 0x340e00u: goto label_340e00;
        case 0x340e04u: goto label_340e04;
        case 0x340e08u: goto label_340e08;
        case 0x340e0cu: goto label_340e0c;
        case 0x340e10u: goto label_340e10;
        case 0x340e14u: goto label_340e14;
        case 0x340e18u: goto label_340e18;
        case 0x340e1cu: goto label_340e1c;
        case 0x340e20u: goto label_340e20;
        case 0x340e24u: goto label_340e24;
        case 0x340e28u: goto label_340e28;
        case 0x340e2cu: goto label_340e2c;
        case 0x340e30u: goto label_340e30;
        case 0x340e34u: goto label_340e34;
        case 0x340e38u: goto label_340e38;
        case 0x340e3cu: goto label_340e3c;
        case 0x340e40u: goto label_340e40;
        case 0x340e44u: goto label_340e44;
        case 0x340e48u: goto label_340e48;
        case 0x340e4cu: goto label_340e4c;
        case 0x340e50u: goto label_340e50;
        case 0x340e54u: goto label_340e54;
        case 0x340e58u: goto label_340e58;
        case 0x340e5cu: goto label_340e5c;
        case 0x340e60u: goto label_340e60;
        case 0x340e64u: goto label_340e64;
        case 0x340e68u: goto label_340e68;
        case 0x340e6cu: goto label_340e6c;
        case 0x340e70u: goto label_340e70;
        case 0x340e74u: goto label_340e74;
        case 0x340e78u: goto label_340e78;
        case 0x340e7cu: goto label_340e7c;
        case 0x340e80u: goto label_340e80;
        case 0x340e84u: goto label_340e84;
        case 0x340e88u: goto label_340e88;
        case 0x340e8cu: goto label_340e8c;
        case 0x340e90u: goto label_340e90;
        case 0x340e94u: goto label_340e94;
        case 0x340e98u: goto label_340e98;
        case 0x340e9cu: goto label_340e9c;
        case 0x340ea0u: goto label_340ea0;
        case 0x340ea4u: goto label_340ea4;
        case 0x340ea8u: goto label_340ea8;
        case 0x340eacu: goto label_340eac;
        case 0x340eb0u: goto label_340eb0;
        case 0x340eb4u: goto label_340eb4;
        case 0x340eb8u: goto label_340eb8;
        case 0x340ebcu: goto label_340ebc;
        case 0x340ec0u: goto label_340ec0;
        case 0x340ec4u: goto label_340ec4;
        case 0x340ec8u: goto label_340ec8;
        case 0x340eccu: goto label_340ecc;
        case 0x340ed0u: goto label_340ed0;
        case 0x340ed4u: goto label_340ed4;
        case 0x340ed8u: goto label_340ed8;
        case 0x340edcu: goto label_340edc;
        case 0x340ee0u: goto label_340ee0;
        case 0x340ee4u: goto label_340ee4;
        case 0x340ee8u: goto label_340ee8;
        case 0x340eecu: goto label_340eec;
        case 0x340ef0u: goto label_340ef0;
        case 0x340ef4u: goto label_340ef4;
        case 0x340ef8u: goto label_340ef8;
        case 0x340efcu: goto label_340efc;
        case 0x340f00u: goto label_340f00;
        case 0x340f04u: goto label_340f04;
        case 0x340f08u: goto label_340f08;
        case 0x340f0cu: goto label_340f0c;
        case 0x340f10u: goto label_340f10;
        case 0x340f14u: goto label_340f14;
        case 0x340f18u: goto label_340f18;
        case 0x340f1cu: goto label_340f1c;
        default: break;
    }

    ctx->pc = 0x340d00u;

label_340d00:
    // 0x340d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x340d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_340d04:
    // 0x340d04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x340d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_340d08:
    // 0x340d08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x340d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_340d0c:
    // 0x340d0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_340d10:
    // 0x340d10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x340d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_340d14:
    // 0x340d14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x340d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_340d18:
    // 0x340d18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x340d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_340d1c:
    // 0x340d1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_340d20:
    // 0x340d20: 0xc103468  jal         func_40D1A0
label_340d24:
    if (ctx->pc == 0x340D24u) {
        ctx->pc = 0x340D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D20u;
        // 0x340d24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340D28u;
        goto label_340d28;
    }
    ctx->pc = 0x340D20u;
    SET_GPR_U32(ctx, 31, 0x340D28u);
    ctx->pc = 0x340D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340D20u;
    // 0x340d24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x340D20u, 0x340D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340D28u;
label_340d28:
    // 0x340d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_340d2c:
    // 0x340d2c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x340d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_340d30:
    // 0x340d30: 0xc103468  jal         func_40D1A0
label_340d34:
    if (ctx->pc == 0x340D34u) {
        ctx->pc = 0x340D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D30u;
        // 0x340d34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340D38u;
        goto label_340d38;
    }
    ctx->pc = 0x340D30u;
    SET_GPR_U32(ctx, 31, 0x340D38u);
    ctx->pc = 0x340D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340D30u;
    // 0x340d34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x340D30u, 0x340D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340D38u;
label_340d38:
    // 0x340d38: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x340d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_340d3c:
    // 0x340d3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x340d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_340d40:
    // 0x340d40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x340d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340d44:
    // 0x340d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340d48:
    // 0x340d48: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x340d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_340d4c:
    // 0x340d4c: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x340d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_340d50:
    // 0x340d50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_340d54:
    if (ctx->pc == 0x340D54u) {
        ctx->pc = 0x340D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D50u;
        // 0x340d54: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340D58u;
        goto label_340d58;
    }
    ctx->pc = 0x340D50u;
    {
        const bool branch_taken_0x340d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D50u;
        // 0x340d54: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340d50) {
            ctx->pc = 0x340D74u;
            goto label_340d74;
        }
    }
    ctx->pc = 0x340D58u;
label_340d58:
    // 0x340d58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x340d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_340d5c:
    // 0x340d5c: 0x0  nop
    ctx->pc = 0x340d5cu;
    // NOP
label_340d60:
    // 0x340d60: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
label_340d64:
    if (ctx->pc == 0x340D64u) {
        ctx->pc = 0x340D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D60u;
        // 0x340d64: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340D68u;
        goto label_340d68;
    }
    ctx->pc = 0x340D60u;
    {
        const bool branch_taken_0x340d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x340d60) {
            ctx->pc = 0x340D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340D60u;
            // 0x340d64: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340D74u;
            goto label_340d74;
        }
    }
    ctx->pc = 0x340D68u;
label_340d68:
    // 0x340d68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x340d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_340d6c:
    // 0x340d6c: 0x5464fffc  bnel        $v1, $a0, . + 4 + (-0x4 << 2)
label_340d70:
    if (ctx->pc == 0x340D70u) {
        ctx->pc = 0x340D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D6Cu;
        // 0x340d70: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340D74u;
        goto label_340d74;
    }
    ctx->pc = 0x340D6Cu;
    {
        const bool branch_taken_0x340d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x340d6c) {
            ctx->pc = 0x340D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340D6Cu;
            // 0x340d70: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340d60;
        }
    }
    ctx->pc = 0x340D74u;
label_340d74:
    // 0x340d74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x340d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_340d78:
    // 0x340d78: 0x5640005f  bnel        $s2, $zero, . + 4 + (0x5F << 2)
label_340d7c:
    if (ctx->pc == 0x340D7Cu) {
        ctx->pc = 0x340D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D78u;
        // 0x340d7c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340D80u;
        goto label_340d80;
    }
    ctx->pc = 0x340D78u;
    {
        const bool branch_taken_0x340d78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x340d78) {
            ctx->pc = 0x340D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340D78u;
            // 0x340d7c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340EF8u;
            goto label_340ef8;
        }
    }
    ctx->pc = 0x340D80u;
label_340d80:
    // 0x340d80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x340d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_340d84:
    // 0x340d84: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x340d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_340d88:
    // 0x340d88: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x340d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_340d8c:
    // 0x340d8c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x340d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_340d90:
    // 0x340d90: 0x40f809  jalr        $v0
label_340d94:
    if (ctx->pc == 0x340D94u) {
        ctx->pc = 0x340D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D90u;
        // 0x340d94: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x340D98u;
        goto label_340d98;
    }
    ctx->pc = 0x340D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340D98u);
        ctx->pc = 0x340D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D90u;
        // 0x340d94: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340D90u, 0x340D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340D98u;
label_340d98:
    // 0x340d98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x340d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340d9c:
    // 0x340d9c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_340da0:
    if (ctx->pc == 0x340DA0u) {
        ctx->pc = 0x340DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D9Cu;
        // 0x340da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340DA4u;
        goto label_340da4;
    }
    ctx->pc = 0x340D9Cu;
    {
        const bool branch_taken_0x340d9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x340DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D9Cu;
        // 0x340da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340d9c) {
            ctx->pc = 0x340DFCu;
            goto label_340dfc;
        }
    }
    ctx->pc = 0x340DA4u;
label_340da4:
    // 0x340da4: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x340da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
label_340da8:
    // 0x340da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340dac:
    // 0x340dac: 0xc0bb7e6  jal         func_2EDF98
label_340db0:
    if (ctx->pc == 0x340DB0u) {
        ctx->pc = 0x340DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DACu;
        // 0x340db0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340DB4u;
        goto label_340db4;
    }
    ctx->pc = 0x340DACu;
    SET_GPR_U32(ctx, 31, 0x340DB4u);
    ctx->pc = 0x340DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340DACu;
    // 0x340db0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x340DACu, 0x340DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340DB4u;
label_340db4:
    // 0x340db4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x340db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_340db8:
    // 0x340db8: 0x2665c2c8  addiu       $a1, $s3, -0x3D38
    ctx->pc = 0x340db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
label_340dbc:
    // 0x340dbc: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x340dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_340dc0:
    // 0x340dc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x340dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_340dc4:
    // 0x340dc4: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x340dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
label_340dc8:
    // 0x340dc8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x340dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_340dcc:
    // 0x340dcc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x340dccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_340dd0:
    // 0x340dd0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x340dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_340dd4:
    // 0x340dd4: 0x8ca30060  lw          $v1, 0x60($a1)
    ctx->pc = 0x340dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
label_340dd8:
    // 0x340dd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_340ddc:
    if (ctx->pc == 0x340DDCu) {
        ctx->pc = 0x340DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DD8u;
        // 0x340ddc: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340DE0u;
        goto label_340de0;
    }
    ctx->pc = 0x340DD8u;
    {
        const bool branch_taken_0x340dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DD8u;
        // 0x340ddc: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340dd8) {
            ctx->pc = 0x340DE8u;
            goto label_340de8;
        }
    }
    ctx->pc = 0x340DE0u;
label_340de0:
    // 0x340de0: 0x10000004  b           . + 4 + (0x4 << 2)
label_340de4:
    if (ctx->pc == 0x340DE4u) {
        ctx->pc = 0x340DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DE0u;
        // 0x340de4: 0xae310000  sw          $s1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340DE8u;
        goto label_340de8;
    }
    ctx->pc = 0x340DE0u;
    {
        const bool branch_taken_0x340de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DE0u;
        // 0x340de4: 0xae310000  sw          $s1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340de0) {
            ctx->pc = 0x340DF4u;
            goto label_340df4;
        }
    }
    ctx->pc = 0x340DE8u;
label_340de8:
    // 0x340de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x340de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_340dec:
    // 0x340dec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x340decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_340df0:
    // 0x340df0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x340df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_340df4:
    // 0x340df4: 0x2662c2c8  addiu       $v0, $s3, -0x3D38
    ctx->pc = 0x340df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
label_340df8:
    // 0x340df8: 0xac460060  sw          $a2, 0x60($v0)
    ctx->pc = 0x340df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 6));
label_340dfc:
    // 0x340dfc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x340dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_340e00:
    // 0x340e00: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
label_340e04:
    if (ctx->pc == 0x340E04u) {
        ctx->pc = 0x340E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E00u;
        // 0x340e04: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340E08u;
        goto label_340e08;
    }
    ctx->pc = 0x340E00u;
    {
        const bool branch_taken_0x340e00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E00u;
        // 0x340e04: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e00) {
            ctx->pc = 0x340F04u;
            goto label_340f04;
        }
    }
    ctx->pc = 0x340E08u;
label_340e08:
    // 0x340e08: 0xc0d123e  jal         func_3448F8
label_340e0c:
    if (ctx->pc == 0x340E0Cu) {
        ctx->pc = 0x340E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E08u;
        // 0x340e0c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340E10u;
        goto label_340e10;
    }
    ctx->pc = 0x340E08u;
    SET_GPR_U32(ctx, 31, 0x340E10u);
    ctx->pc = 0x340E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340E08u;
    // 0x340e0c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448F8u, 0x340E08u, 0x340E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340E10u;
label_340e10:
    // 0x340e10: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x340e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_340e14:
    // 0x340e14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_340e18:
    if (ctx->pc == 0x340E18u) {
        ctx->pc = 0x340E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E14u;
        // 0x340e18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340E1Cu;
        goto label_340e1c;
    }
    ctx->pc = 0x340E14u;
    {
        const bool branch_taken_0x340e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E14u;
        // 0x340e18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e14) {
            ctx->pc = 0x340E24u;
            goto label_340e24;
        }
    }
    ctx->pc = 0x340E1Cu;
label_340e1c:
    // 0x340e1c: 0xc0d1054  jal         func_344150
label_340e20:
    if (ctx->pc == 0x340E20u) {
        ctx->pc = 0x340E24u;
        goto label_340e24;
    }
    ctx->pc = 0x340E1Cu;
    SET_GPR_U32(ctx, 31, 0x340E24u);
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x340E1Cu, 0x340E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340E24u;
label_340e24:
    // 0x340e24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x340e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_340e28:
    // 0x340e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340e2c:
    // 0x340e2c: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x340e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
label_340e30:
    // 0x340e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x340e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_340e34:
    // 0x340e34: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_340e38:
    if (ctx->pc == 0x340E38u) {
        ctx->pc = 0x340E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E34u;
        // 0x340e38: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340E3Cu;
        goto label_340e3c;
    }
    ctx->pc = 0x340E34u;
    {
        const bool branch_taken_0x340e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E34u;
        // 0x340e38: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e34) {
            ctx->pc = 0x340ECCu;
            goto label_340ecc;
        }
    }
    ctx->pc = 0x340E3Cu;
label_340e3c:
    // 0x340e3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340e40:
    // 0x340e40: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_340e44:
    if (ctx->pc == 0x340E44u) {
        ctx->pc = 0x340E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E40u;
        // 0x340e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340E48u;
        goto label_340e48;
    }
    ctx->pc = 0x340E40u;
    {
        const bool branch_taken_0x340e40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x340E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E40u;
        // 0x340e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e40) {
            ctx->pc = 0x340ECCu;
            goto label_340ecc;
        }
    }
    ctx->pc = 0x340E48u;
label_340e48:
    // 0x340e48: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x340e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_340e4c:
    // 0x340e4c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x340e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_340e50:
    // 0x340e50: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x340e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_340e54:
    // 0x340e54: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_340e58:
    if (ctx->pc == 0x340E58u) {
        ctx->pc = 0x340E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E54u;
        // 0x340e58: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340E5Cu;
        goto label_340e5c;
    }
    ctx->pc = 0x340E54u;
    {
        const bool branch_taken_0x340e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E54u;
        // 0x340e58: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e54) {
            ctx->pc = 0x340EA0u;
            goto label_340ea0;
        }
    }
    ctx->pc = 0x340E5Cu;
label_340e5c:
    // 0x340e5c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x340e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_340e60:
    // 0x340e60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_340e64:
    if (ctx->pc == 0x340E64u) {
        ctx->pc = 0x340E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E60u;
        // 0x340e64: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x340E68u;
        goto label_340e68;
    }
    ctx->pc = 0x340E60u;
    {
        const bool branch_taken_0x340e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E60u;
        // 0x340e64: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e60) {
            ctx->pc = 0x340E8Cu;
            goto label_340e8c;
        }
    }
    ctx->pc = 0x340E68u;
label_340e68:
    // 0x340e68: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_340e6c:
    if (ctx->pc == 0x340E6Cu) {
        ctx->pc = 0x340E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E68u;
        // 0x340e6c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340E70u;
        goto label_340e70;
    }
    ctx->pc = 0x340E68u;
    {
        const bool branch_taken_0x340e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340e68) {
            ctx->pc = 0x340E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340E68u;
            // 0x340e6c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340E80u;
            goto label_340e80;
        }
    }
    ctx->pc = 0x340E70u;
label_340e70:
    // 0x340e70: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x340e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_340e74:
    // 0x340e74: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x340e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_340e78:
    // 0x340e78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x340e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_340e7c:
    // 0x340e7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x340e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_340e80:
    // 0x340e80: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x340e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_340e84:
    // 0x340e84: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x340e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_340e88:
    // 0x340e88: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x340e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_340e8c:
    // 0x340e8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x340e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_340e90:
    // 0x340e90: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x340e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_340e94:
    // 0x340e94: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x340e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_340e98:
    // 0x340e98: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_340e9c:
    if (ctx->pc == 0x340E9Cu) {
        ctx->pc = 0x340E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E98u;
        // 0x340e9c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340EA0u;
        goto label_340ea0;
    }
    ctx->pc = 0x340E98u;
    {
        const bool branch_taken_0x340e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E98u;
        // 0x340e9c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e98) {
            ctx->pc = 0x340ECCu;
            goto label_340ecc;
        }
    }
    ctx->pc = 0x340EA0u;
label_340ea0:
    // 0x340ea0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x340ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_340ea4:
    // 0x340ea4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x340ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_340ea8:
    // 0x340ea8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x340ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_340eac:
    // 0x340eac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x340eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_340eb0:
    // 0x340eb0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x340eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_340eb4:
    // 0x340eb4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x340eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_340eb8:
    // 0x340eb8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x340eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_340ebc:
    // 0x340ebc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x340ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_340ec0:
    // 0x340ec0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x340ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_340ec4:
    // 0x340ec4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_340ec8:
    if (ctx->pc == 0x340EC8u) {
        ctx->pc = 0x340EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EC4u;
        // 0x340ec8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340ECCu;
        goto label_340ecc;
    }
    ctx->pc = 0x340EC4u;
    {
        const bool branch_taken_0x340ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x340EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EC4u;
        // 0x340ec8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ec4) {
            ctx->pc = 0x340EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340ea0;
        }
    }
    ctx->pc = 0x340ECCu;
label_340ecc:
    // 0x340ecc: 0x2663c2c8  addiu       $v1, $s3, -0x3D38
    ctx->pc = 0x340eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
label_340ed0:
    // 0x340ed0: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x340ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
label_340ed4:
    // 0x340ed4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x340ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_340ed8:
    // 0x340ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_340edc:
    // 0x340edc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x340edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_340ee0:
    // 0x340ee0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x340ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_340ee4:
    // 0x340ee4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x340ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_340ee8:
    // 0x340ee8: 0x40f809  jalr        $v0
label_340eec:
    if (ctx->pc == 0x340EECu) {
        ctx->pc = 0x340EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EE8u;
        // 0x340eec: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340EF0u;
        goto label_340ef0;
    }
    ctx->pc = 0x340EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340EF0u);
        ctx->pc = 0x340EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EE8u;
        // 0x340eec: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340EE8u, 0x340EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340EF0u;
label_340ef0:
    // 0x340ef0: 0x10000004  b           . + 4 + (0x4 << 2)
label_340ef4:
    if (ctx->pc == 0x340EF4u) {
        ctx->pc = 0x340EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EF0u;
        // 0x340ef4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340EF8u;
        goto label_340ef8;
    }
    ctx->pc = 0x340EF0u;
    {
        const bool branch_taken_0x340ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EF0u;
        // 0x340ef4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ef0) {
            ctx->pc = 0x340F04u;
            goto label_340f04;
        }
    }
    ctx->pc = 0x340EF8u;
label_340ef8:
    // 0x340ef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x340ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_340efc:
    // 0x340efc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x340efcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_340f00:
    // 0x340f00: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x340f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_340f04:
    // 0x340f04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x340f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_340f08:
    // 0x340f08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x340f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_340f0c:
    // 0x340f0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x340f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_340f10:
    // 0x340f10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x340f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_340f14:
    // 0x340f14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_340f18:
    // 0x340f18: 0x3e00008  jr          $ra
label_340f1c:
    if (ctx->pc == 0x340F1Cu) {
        ctx->pc = 0x340F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F18u;
        // 0x340f1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F20u;
        goto label_fallthrough_0x340f18;
    }
    ctx->pc = 0x340F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F18u;
        // 0x340f1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340f18:
    ctx->pc = 0x340F20u;
}
