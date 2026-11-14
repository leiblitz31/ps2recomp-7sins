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

// Function: sub_00389D10
// Address: 0x389d10 - 0x389dc8
void sub_00389D10_0x389d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389D10_0x389d10");
#endif

    switch (ctx->pc) {
        case 0x389d10u: goto label_389d10;
        case 0x389d14u: goto label_389d14;
        case 0x389d18u: goto label_389d18;
        case 0x389d1cu: goto label_389d1c;
        case 0x389d20u: goto label_389d20;
        case 0x389d24u: goto label_389d24;
        case 0x389d28u: goto label_389d28;
        case 0x389d2cu: goto label_389d2c;
        case 0x389d30u: goto label_389d30;
        case 0x389d34u: goto label_389d34;
        case 0x389d38u: goto label_389d38;
        case 0x389d3cu: goto label_389d3c;
        case 0x389d40u: goto label_389d40;
        case 0x389d44u: goto label_389d44;
        case 0x389d48u: goto label_389d48;
        case 0x389d4cu: goto label_389d4c;
        case 0x389d50u: goto label_389d50;
        case 0x389d54u: goto label_389d54;
        case 0x389d58u: goto label_389d58;
        case 0x389d5cu: goto label_389d5c;
        case 0x389d60u: goto label_389d60;
        case 0x389d64u: goto label_389d64;
        case 0x389d68u: goto label_389d68;
        case 0x389d6cu: goto label_389d6c;
        case 0x389d70u: goto label_389d70;
        case 0x389d74u: goto label_389d74;
        case 0x389d78u: goto label_389d78;
        case 0x389d7cu: goto label_389d7c;
        case 0x389d80u: goto label_389d80;
        case 0x389d84u: goto label_389d84;
        case 0x389d88u: goto label_389d88;
        case 0x389d8cu: goto label_389d8c;
        case 0x389d90u: goto label_389d90;
        case 0x389d94u: goto label_389d94;
        case 0x389d98u: goto label_389d98;
        case 0x389d9cu: goto label_389d9c;
        case 0x389da0u: goto label_389da0;
        case 0x389da4u: goto label_389da4;
        case 0x389da8u: goto label_389da8;
        case 0x389dacu: goto label_389dac;
        case 0x389db0u: goto label_389db0;
        case 0x389db4u: goto label_389db4;
        case 0x389db8u: goto label_389db8;
        case 0x389dbcu: goto label_389dbc;
        case 0x389dc0u: goto label_389dc0;
        case 0x389dc4u: goto label_389dc4;
        default: break;
    }

    ctx->pc = 0x389d10u;

label_389d10:
    // 0x389d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_389d14:
    // 0x389d14: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x389d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
label_389d18:
    // 0x389d18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x389d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_389d1c:
    // 0x389d1c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x389d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_389d20:
    // 0x389d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_389d24:
    // 0x389d24: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x389d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_389d28:
    // 0x389d28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x389d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_389d2c:
    // 0x389d2c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x389d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_389d30:
    // 0x389d30: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x389d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_389d34:
    // 0x389d34: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x389d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
label_389d38:
    // 0x389d38: 0x40f809  jalr        $v0
label_389d3c:
    if (ctx->pc == 0x389D3Cu) {
        ctx->pc = 0x389D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D38u;
        // 0x389d3c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D40u;
        goto label_389d40;
    }
    ctx->pc = 0x389D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389D40u);
        ctx->pc = 0x389D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D38u;
        // 0x389d3c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D38u, 0x389D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389D40u;
label_389d40:
    // 0x389d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x389d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_389d44:
    // 0x389d44: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_389d48:
    if (ctx->pc == 0x389D48u) {
        ctx->pc = 0x389D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D44u;
        // 0x389d48: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D4Cu;
        goto label_389d4c;
    }
    ctx->pc = 0x389D44u;
    {
        const bool branch_taken_0x389d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D44u;
        // 0x389d48: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d44) {
            ctx->pc = 0x389DB0u;
            goto label_389db0;
        }
    }
    ctx->pc = 0x389D4Cu;
label_389d4c:
    // 0x389d4c: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x389d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_389d50:
    // 0x389d50: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x389d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_389d54:
    // 0x389d54: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x389d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_389d58:
    // 0x389d58: 0x2442aa30  addiu       $v0, $v0, -0x55D0
    ctx->pc = 0x389d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
label_389d5c:
    // 0x389d5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x389d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_389d60:
    // 0x389d60: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x389d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_389d64:
    // 0x389d64: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x389d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_389d68:
    // 0x389d68: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x389d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_389d6c:
    // 0x389d6c: 0x2484adb8  addiu       $a0, $a0, -0x5248
    ctx->pc = 0x389d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
label_389d70:
    // 0x389d70: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x389d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_389d74:
    // 0x389d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x389d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389d78:
    // 0x389d78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x389d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_389d7c:
    // 0x389d7c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x389d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_389d80:
    // 0x389d80: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x389d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_389d84:
    // 0x389d84: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x389d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_389d88:
    // 0x389d88: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x389d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
label_389d8c:
    // 0x389d8c: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x389d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_389d90:
    // 0x389d90: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x389d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_389d94:
    // 0x389d94: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x389d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_389d98:
    // 0x389d98: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x389d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
label_389d9c:
    // 0x389d9c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x389d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_389da0:
    // 0x389da0: 0xc104c80  jal         func_413200
label_389da4:
    if (ctx->pc == 0x389DA4u) {
        ctx->pc = 0x389DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DA0u;
        // 0x389da4: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389DA8u;
        goto label_389da8;
    }
    ctx->pc = 0x389DA0u;
    SET_GPR_U32(ctx, 31, 0x389DA8u);
    ctx->pc = 0x389DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389DA0u;
    // 0x389da4: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x389DA0u, 0x389DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389DA8u;
label_389da8:
    // 0x389da8: 0x10000003  b           . + 4 + (0x3 << 2)
label_389dac:
    if (ctx->pc == 0x389DACu) {
        ctx->pc = 0x389DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DA8u;
        // 0x389dac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389DB0u;
        goto label_389db0;
    }
    ctx->pc = 0x389DA8u;
    {
        const bool branch_taken_0x389da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DA8u;
        // 0x389dac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389da8) {
            ctx->pc = 0x389DB8u;
            goto label_389db8;
        }
    }
    ctx->pc = 0x389DB0u;
label_389db0:
    // 0x389db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389db4:
    // 0x389db4: 0x0  nop
    ctx->pc = 0x389db4u;
    // NOP
label_389db8:
    // 0x389db8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x389db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_389dbc:
    // 0x389dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389dc0:
    // 0x389dc0: 0x3e00008  jr          $ra
label_389dc4:
    if (ctx->pc == 0x389DC4u) {
        ctx->pc = 0x389DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DC0u;
        // 0x389dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389DC8u;
        goto label_fallthrough_0x389dc0;
    }
    ctx->pc = 0x389DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DC0u;
        // 0x389dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389dc0:
    ctx->pc = 0x389DC8u;
}
