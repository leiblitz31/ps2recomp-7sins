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

// Function: sub_0038FA90
// Address: 0x38fa90 - 0x38fcf0
void sub_0038FA90_0x38fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FA90_0x38fa90");
#endif

    switch (ctx->pc) {
        case 0x38faf4u: goto label_38faf4;
        case 0x38fafcu: goto label_38fafc;
        case 0x38fb28u: goto label_38fb28;
        case 0x38fb3cu: goto label_38fb3c;
        case 0x38fb58u: goto label_38fb58;
        case 0x38fbb8u: goto label_38fbb8;
        case 0x38fc50u: goto label_38fc50;
        case 0x38fc9cu: goto label_38fc9c;
        default: break;
    }

    ctx->pc = 0x38fa90u;

    // 0x38fa90: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x38fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
    // 0x38fa94: 0x7fb004d0  sq          $s0, 0x4D0($sp)
    ctx->pc = 0x38fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 16));
    // 0x38fa98: 0x7fb60470  sq          $s6, 0x470($sp)
    ctx->pc = 0x38fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 22));
    // 0x38fa9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38fa9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38faa0: 0x7fb70460  sq          $s7, 0x460($sp)
    ctx->pc = 0x38faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 23));
    // 0x38faa4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x38faa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38faa8: 0x7fb104c0  sq          $s1, 0x4C0($sp)
    ctx->pc = 0x38faa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 17));
    // 0x38faac: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x38faacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fab0: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x38fab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
    // 0x38fab4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x38fab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fab8: 0x7fb304a0  sq          $s3, 0x4A0($sp)
    ctx->pc = 0x38fab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 19));
    // 0x38fabc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38fabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fac0: 0x7fb40490  sq          $s4, 0x490($sp)
    ctx->pc = 0x38fac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 20));
    // 0x38fac4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x38fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38fac8: 0x7fb50480  sq          $s5, 0x480($sp)
    ctx->pc = 0x38fac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 21));
    // 0x38facc: 0x7fbe0450  sq          $fp, 0x450($sp)
    ctx->pc = 0x38faccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 30));
    // 0x38fad0: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x38fad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
    // 0x38fad4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38fad8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x38fad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38fadc: 0xafa70420  sw          $a3, 0x420($sp)
    ctx->pc = 0x38fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 7));
    // 0x38fae0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x38fae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38fae4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38fae8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x38fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x38faec: 0xc103440  jal         func_40D100
    ctx->pc = 0x38FAECu;
    SET_GPR_U32(ctx, 31, 0x38FAF4u);
    ctx->pc = 0x38FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FAECu;
    // 0x38faf0: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38FAECu, 0x38FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FAF4u;
label_38faf4:
    // 0x38faf4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FAF4u;
    {
        const bool branch_taken_0x38faf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38faf4) {
            ctx->pc = 0x38FAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FAF4u;
            // 0x38faf8: 0x96150004  lhu         $s5, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FB04u;
            goto label_38fb04;
        }
    }
    ctx->pc = 0x38FAFCu;
label_38fafc:
    // 0x38fafc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x38FAFCu;
    {
        const bool branch_taken_0x38fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAFCu;
        // 0x38fb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fafc) {
            ctx->pc = 0x38FCC0u;
            goto label_38fcc0;
        }
    }
    ctx->pc = 0x38FB04u;
label_38fb04:
    // 0x38fb04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x38fb08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38fb0c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x38fb0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x38fb10: 0x12a2006a  beq         $s5, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x38FB10u;
    {
        const bool branch_taken_0x38fb10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x38FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB10u;
        // 0x38fb14: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb10) {
            ctx->pc = 0x38FCBCu;
            goto label_38fcbc;
        }
    }
    ctx->pc = 0x38FB18u;
    // 0x38fb18: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x38fb18u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x38fb1c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38fb1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fb20: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x38fb20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x38fb24: 0x0  nop
    ctx->pc = 0x38fb24u;
    // NOP
label_38fb28:
    // 0x38fb28: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x38fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x38fb2c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x38fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x38fb30: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x38fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x38fb34: 0xc0e3e2a  jal         func_38F8A8
    ctx->pc = 0x38FB34u;
    SET_GPR_U32(ctx, 31, 0x38FB3Cu);
    ctx->pc = 0x38FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FB34u;
    // 0x38fb38: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8A8u, 0x38FB34u, 0x38FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FB3Cu;
label_38fb3c:
    // 0x38fb3c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38FB3Cu;
    {
        const bool branch_taken_0x38fb3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x38FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB3Cu;
        // 0x38fb40: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb3c) {
            ctx->pc = 0x38FB48u;
            goto label_38fb48;
        }
    }
    ctx->pc = 0x38FB44u;
    // 0x38fb44: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x38fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_38fb48:
    // 0x38fb48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x38fb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fb4c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x38fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38fb50: 0xc103440  jal         func_40D100
    ctx->pc = 0x38FB50u;
    SET_GPR_U32(ctx, 31, 0x38FB58u);
    ctx->pc = 0x38FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FB50u;
    // 0x38fb54: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38FB50u, 0x38FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FB58u;
label_38fb58:
    // 0x38fb58: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x38FB58u;
    {
        const bool branch_taken_0x38fb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB58u;
        // 0x38fb5c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb58) {
            ctx->pc = 0x38FAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fafc;
        }
    }
    ctx->pc = 0x38FB60u;
    // 0x38fb60: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x38fb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x38fb64: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FB64u;
    {
        const bool branch_taken_0x38fb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB64u;
        // 0x38fb68: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb64) {
            ctx->pc = 0x38FB80u;
            goto label_38fb80;
        }
    }
    ctx->pc = 0x38FB6Cu;
    // 0x38fb6c: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x38fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x38fb70: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x38fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x38fb74: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x38fb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x38fb78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38FB78u;
    {
        const bool branch_taken_0x38fb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB78u;
        // 0x38fb7c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb78) {
            ctx->pc = 0x38FB9Cu;
            goto label_38fb9c;
        }
    }
    ctx->pc = 0x38FB80u;
label_38fb80:
    // 0x38fb80: 0x5462004c  bnel        $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x38FB80u;
    {
        const bool branch_taken_0x38fb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38fb80) {
            ctx->pc = 0x38FB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FB80u;
            // 0x38fb84: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FCB4u;
            goto label_38fcb4;
        }
    }
    ctx->pc = 0x38FB88u;
    // 0x38fb88: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x38fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x38fb8c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x38fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x38fb90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38fb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38fb94: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x38FB94u;
    {
        const bool branch_taken_0x38fb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fb94) {
            ctx->pc = 0x38FB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FB94u;
            // 0x38fb98: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FCB4u;
            goto label_38fcb4;
        }
    }
    ctx->pc = 0x38FB9Cu;
label_38fb9c:
    // 0x38fb9c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x38fb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x38fba0: 0x12400043  beqz        $s2, . + 4 + (0x43 << 2)
    ctx->pc = 0x38FBA0u;
    {
        const bool branch_taken_0x38fba0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBA0u;
        // 0x38fba4: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fba0) {
            ctx->pc = 0x38FCB0u;
            goto label_38fcb0;
        }
    }
    ctx->pc = 0x38FBA8u;
    // 0x38fba8: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x38fba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x38fbac: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x38fbacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38fbb0: 0x2e420101  sltiu       $v0, $s2, 0x101
    ctx->pc = 0x38fbb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x38fbb4: 0x0  nop
    ctx->pc = 0x38fbb4u;
    // NOP
label_38fbb8:
    // 0x38fbb8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x38fbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fbbc: 0x242880b  movn        $s1, $s2, $v0
    ctx->pc = 0x38fbbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
    // 0x38fbc0: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x38FBC0u;
    {
        const bool branch_taken_0x38fbc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBC0u;
        // 0x38fbc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fbc0) {
            ctx->pc = 0x38FC88u;
            goto label_38fc88;
        }
    }
    ctx->pc = 0x38FBC8u;
    // 0x38fbc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38fbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38fbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fbd0: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x38FBD0u;
    {
        const bool branch_taken_0x38fbd0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x38FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBD0u;
        // 0x38fbd4: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fbd0) {
            ctx->pc = 0x38FC28u;
            goto label_38fc28;
        }
    }
    ctx->pc = 0x38FBD8u;
    // 0x38fbd8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x38FBD8u;
    {
        const bool branch_taken_0x38fbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBD8u;
        // 0x38fbdc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fbd8) {
            ctx->pc = 0x38FC48u;
            goto label_38fc48;
        }
    }
    ctx->pc = 0x38FBE0u;
    // 0x38fbe0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x38FBE0u;
    {
        const bool branch_taken_0x38fbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fbe0) {
            ctx->pc = 0x38FBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FBE0u;
            // 0x38fbe4: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FC2Cu;
            goto label_38fc2c;
        }
    }
    ctx->pc = 0x38FBE8u;
    // 0x38fbe8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38fbe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x38fbec: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x38FBECu;
    {
        const bool branch_taken_0x38fbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fbec) {
            ctx->pc = 0x38FBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FBECu;
            // 0x38fbf0: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FC14u;
            goto label_38fc14;
        }
    }
    ctx->pc = 0x38FBF4u;
    // 0x38fbf4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x38fbf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38fbf8: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x38fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x38fbfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38fbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc00: 0x36650004  ori         $a1, $s3, 0x4
    ctx->pc = 0x38fc00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
    // 0x38fc04: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x38fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x38fc08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38fc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x38fc0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fc10: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x38fc10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_38fc14:
    // 0x38fc14: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x38fc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x38fc18: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x38fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x38fc1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x38fc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x38fc20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x38fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x38fc24: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x38fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_38fc28:
    // 0x38fc28: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x38fc28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_38fc2c:
    // 0x38fc2c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x38fc2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x38fc30: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x38fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x38fc34: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x38fc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x38fc38: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x38fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x38fc3c: 0x111482b  sltu        $t1, $t0, $s1
    ctx->pc = 0x38fc3cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x38fc40: 0x11200011  beqz        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x38FC40u;
    {
        const bool branch_taken_0x38fc40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC40u;
        // 0x38fc44: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc40) {
            ctx->pc = 0x38FC88u;
            goto label_38fc88;
        }
    }
    ctx->pc = 0x38FC48u;
label_38fc48:
    // 0x38fc48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x38fc48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc4c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38fc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38fc50:
    // 0x38fc50: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x38fc50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38fc54: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x38fc54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x38fc58: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x38fc58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x38fc5c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x38fc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x38fc60: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x38fc60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x38fc64: 0x111482b  sltu        $t1, $t0, $s1
    ctx->pc = 0x38fc64u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x38fc68: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x38fc68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x38fc6c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x38fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x38fc70: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x38fc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x38fc74: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x38fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x38fc78: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x38fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x38fc7c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x38fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x38fc80: 0x1520fff3  bnez        $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x38FC80u;
    {
        const bool branch_taken_0x38fc80 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC80u;
        // 0x38fc84: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc80) {
            ctx->pc = 0x38FC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fc50;
        }
    }
    ctx->pc = 0x38FC88u;
label_38fc88:
    // 0x38fc88: 0x7faa0430  sq          $t2, 0x430($sp)
    ctx->pc = 0x38fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 10));
    // 0x38fc8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x38fc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38fc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc94: 0xc103440  jal         func_40D100
    ctx->pc = 0x38FC94u;
    SET_GPR_U32(ctx, 31, 0x38FC9Cu);
    ctx->pc = 0x38FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FC94u;
    // 0x38fc98: 0x113080  sll         $a2, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38FC94u, 0x38FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FC9Cu;
label_38fc9c:
    // 0x38fc9c: 0x1040ff97  beqz        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x38FC9Cu;
    {
        const bool branch_taken_0x38fc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC9Cu;
        // 0x38fca0: 0x7baa0430  lq          $t2, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc9c) {
            ctx->pc = 0x38FAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fafc;
        }
    }
    ctx->pc = 0x38FCA4u;
    // 0x38fca4: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x38fca4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x38fca8: 0x1640ffc3  bnez        $s2, . + 4 + (-0x3D << 2)
    ctx->pc = 0x38FCA8u;
    {
        const bool branch_taken_0x38fca8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCA8u;
        // 0x38fcac: 0x2e420101  sltiu       $v0, $s2, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fca8) {
            ctx->pc = 0x38FBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fbb8;
        }
    }
    ctx->pc = 0x38FCB0u;
label_38fcb0:
    // 0x38fcb0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x38fcb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_38fcb4:
    // 0x38fcb4: 0x16beff9c  bne         $s5, $fp, . + 4 + (-0x64 << 2)
    ctx->pc = 0x38FCB4u;
    {
        const bool branch_taken_0x38fcb4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x38FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCB4u;
        // 0x38fcb8: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcb4) {
            ctx->pc = 0x38FB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fb28;
        }
    }
    ctx->pc = 0x38FCBCu;
label_38fcbc:
    // 0x38fcbc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x38fcbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38fcc0:
    // 0x38fcc0: 0x7bb004d0  lq          $s0, 0x4D0($sp)
    ctx->pc = 0x38fcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x38fcc4: 0x7bb104c0  lq          $s1, 0x4C0($sp)
    ctx->pc = 0x38fcc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x38fcc8: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x38fcc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x38fccc: 0x7bb304a0  lq          $s3, 0x4A0($sp)
    ctx->pc = 0x38fcccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x38fcd0: 0x7bb40490  lq          $s4, 0x490($sp)
    ctx->pc = 0x38fcd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x38fcd4: 0x7bb50480  lq          $s5, 0x480($sp)
    ctx->pc = 0x38fcd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x38fcd8: 0x7bb60470  lq          $s6, 0x470($sp)
    ctx->pc = 0x38fcd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x38fcdc: 0x7bb70460  lq          $s7, 0x460($sp)
    ctx->pc = 0x38fcdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x38fce0: 0x7bbe0450  lq          $fp, 0x450($sp)
    ctx->pc = 0x38fce0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x38fce4: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x38fce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x38fce8: 0x3e00008  jr          $ra
    ctx->pc = 0x38FCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCE8u;
        // 0x38fcec: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FCF0u;
}
