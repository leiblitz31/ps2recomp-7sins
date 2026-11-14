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

// Function: sub_00420D38
// Address: 0x420d38 - 0x420dd8
void sub_00420D38_0x420d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420D38_0x420d38");
#endif

    switch (ctx->pc) {
        case 0x420d38u: goto label_420d38;
        case 0x420d3cu: goto label_420d3c;
        case 0x420d40u: goto label_420d40;
        case 0x420d44u: goto label_420d44;
        case 0x420d48u: goto label_420d48;
        case 0x420d4cu: goto label_420d4c;
        case 0x420d50u: goto label_420d50;
        case 0x420d54u: goto label_420d54;
        case 0x420d58u: goto label_420d58;
        case 0x420d5cu: goto label_420d5c;
        case 0x420d60u: goto label_420d60;
        case 0x420d64u: goto label_420d64;
        case 0x420d68u: goto label_420d68;
        case 0x420d6cu: goto label_420d6c;
        case 0x420d70u: goto label_420d70;
        case 0x420d74u: goto label_420d74;
        case 0x420d78u: goto label_420d78;
        case 0x420d7cu: goto label_420d7c;
        case 0x420d80u: goto label_420d80;
        case 0x420d84u: goto label_420d84;
        case 0x420d88u: goto label_420d88;
        case 0x420d8cu: goto label_420d8c;
        case 0x420d90u: goto label_420d90;
        case 0x420d94u: goto label_420d94;
        case 0x420d98u: goto label_420d98;
        case 0x420d9cu: goto label_420d9c;
        case 0x420da0u: goto label_420da0;
        case 0x420da4u: goto label_420da4;
        case 0x420da8u: goto label_420da8;
        case 0x420dacu: goto label_420dac;
        case 0x420db0u: goto label_420db0;
        case 0x420db4u: goto label_420db4;
        case 0x420db8u: goto label_420db8;
        case 0x420dbcu: goto label_420dbc;
        case 0x420dc0u: goto label_420dc0;
        case 0x420dc4u: goto label_420dc4;
        case 0x420dc8u: goto label_420dc8;
        case 0x420dccu: goto label_420dcc;
        case 0x420dd0u: goto label_420dd0;
        case 0x420dd4u: goto label_420dd4;
        default: break;
    }

    ctx->pc = 0x420d38u;

label_420d38:
    // 0x420d38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x420d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_420d3c:
    // 0x420d3c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x420d3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_420d40:
    // 0x420d40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x420d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_420d44:
    // 0x420d44: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x420d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_420d48:
    // 0x420d48: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x420d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_420d4c:
    // 0x420d4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x420d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_420d50:
    // 0x420d50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x420d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_420d54:
    // 0x420d54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x420d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_420d58:
    // 0x420d58: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x420d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_420d5c:
    // 0x420d5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_420d60:
    if (ctx->pc == 0x420D60u) {
        ctx->pc = 0x420D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D5Cu;
        // 0x420d60: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420D64u;
        goto label_420d64;
    }
    ctx->pc = 0x420D5Cu;
    {
        const bool branch_taken_0x420d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D5Cu;
        // 0x420d60: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420d5c) {
            ctx->pc = 0x420D78u;
            goto label_420d78;
        }
    }
    ctx->pc = 0x420D64u;
label_420d64:
    // 0x420d64: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x420d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_420d68:
    // 0x420d68: 0x244206d8  addiu       $v0, $v0, 0x6D8
    ctx->pc = 0x420d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1752));
label_420d6c:
    // 0x420d6c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x420d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_420d70:
    // 0x420d70: 0x10000002  b           . + 4 + (0x2 << 2)
label_420d74:
    if (ctx->pc == 0x420D74u) {
        ctx->pc = 0x420D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D70u;
        // 0x420d74: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420D78u;
        goto label_420d78;
    }
    ctx->pc = 0x420D70u;
    {
        const bool branch_taken_0x420d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D70u;
        // 0x420d74: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420d70) {
            ctx->pc = 0x420D7Cu;
            goto label_420d7c;
        }
    }
    ctx->pc = 0x420D78u;
label_420d78:
    // 0x420d78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x420d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420d7c:
    // 0x420d7c: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x420d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
label_420d80:
    // 0x420d80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_420d84:
    if (ctx->pc == 0x420D84u) {
        ctx->pc = 0x420D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D80u;
        // 0x420d84: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420D88u;
        goto label_420d88;
    }
    ctx->pc = 0x420D80u;
    {
        const bool branch_taken_0x420d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D80u;
        // 0x420d84: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420d80) {
            ctx->pc = 0x420DBCu;
            goto label_420dbc;
        }
    }
    ctx->pc = 0x420D88u;
label_420d88:
    // 0x420d88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x420d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_420d8c:
    // 0x420d8c: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x420d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_420d90:
    // 0x420d90: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x420d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_420d94:
    // 0x420d94: 0x40f809  jalr        $v0
label_420d98:
    if (ctx->pc == 0x420D98u) {
        ctx->pc = 0x420D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D94u;
        // 0x420d98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420D9Cu;
        goto label_420d9c;
    }
    ctx->pc = 0x420D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420D9Cu);
        ctx->pc = 0x420D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D94u;
        // 0x420d98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420D94u, 0x420D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420D9Cu;
label_420d9c:
    // 0x420d9c: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_420da0:
    if (ctx->pc == 0x420DA0u) {
        ctx->pc = 0x420DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D9Cu;
        // 0x420da0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420DA4u;
        goto label_420da4;
    }
    ctx->pc = 0x420D9Cu;
    {
        const bool branch_taken_0x420d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x420d9c) {
            ctx->pc = 0x420DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420D9Cu;
            // 0x420da0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420DC0u;
            goto label_420dc0;
        }
    }
    ctx->pc = 0x420DA4u;
label_420da4:
    // 0x420da4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x420da4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_420da8:
    // 0x420da8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_420dac:
    if (ctx->pc == 0x420DACu) {
        ctx->pc = 0x420DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420DA8u;
        // 0x420dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420DB0u;
        goto label_420db0;
    }
    ctx->pc = 0x420DA8u;
    {
        const bool branch_taken_0x420da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420DA8u;
        // 0x420dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420da8) {
            ctx->pc = 0x420DBCu;
            goto label_420dbc;
        }
    }
    ctx->pc = 0x420DB0u;
label_420db0:
    // 0x420db0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x420db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_420db4:
    // 0x420db4: 0x40f809  jalr        $v0
label_420db8:
    if (ctx->pc == 0x420DB8u) {
        ctx->pc = 0x420DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420DB4u;
        // 0x420db8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420DBCu;
        goto label_420dbc;
    }
    ctx->pc = 0x420DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420DBCu);
        ctx->pc = 0x420DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420DB4u;
        // 0x420db8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420DB4u, 0x420DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420DBCu;
label_420dbc:
    // 0x420dbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x420dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420dc0:
    // 0x420dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420dc4:
    // 0x420dc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x420dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420dc8:
    // 0x420dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x420dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_420dcc:
    // 0x420dcc: 0x3e00008  jr          $ra
label_420dd0:
    if (ctx->pc == 0x420DD0u) {
        ctx->pc = 0x420DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420DCCu;
        // 0x420dd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420DD4u;
        goto label_420dd4;
    }
    ctx->pc = 0x420DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420DCCu;
        // 0x420dd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420DD4u;
label_420dd4:
    // 0x420dd4: 0x0  nop
    ctx->pc = 0x420dd4u;
    // NOP
    ctx->pc = 0x420dd8u;
}
