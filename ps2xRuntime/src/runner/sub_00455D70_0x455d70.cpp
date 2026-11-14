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

// Function: sub_00455D70
// Address: 0x455d70 - 0x455f10
void sub_00455D70_0x455d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455D70_0x455d70");
#endif

    switch (ctx->pc) {
        case 0x455d70u: goto label_455d70;
        case 0x455d74u: goto label_455d74;
        case 0x455d78u: goto label_455d78;
        case 0x455d7cu: goto label_455d7c;
        case 0x455d80u: goto label_455d80;
        case 0x455d84u: goto label_455d84;
        case 0x455d88u: goto label_455d88;
        case 0x455d8cu: goto label_455d8c;
        case 0x455d90u: goto label_455d90;
        case 0x455d94u: goto label_455d94;
        case 0x455d98u: goto label_455d98;
        case 0x455d9cu: goto label_455d9c;
        case 0x455da0u: goto label_455da0;
        case 0x455da4u: goto label_455da4;
        case 0x455da8u: goto label_455da8;
        case 0x455dacu: goto label_455dac;
        case 0x455db0u: goto label_455db0;
        case 0x455db4u: goto label_455db4;
        case 0x455db8u: goto label_455db8;
        case 0x455dbcu: goto label_455dbc;
        case 0x455dc0u: goto label_455dc0;
        case 0x455dc4u: goto label_455dc4;
        case 0x455dc8u: goto label_455dc8;
        case 0x455dccu: goto label_455dcc;
        case 0x455dd0u: goto label_455dd0;
        case 0x455dd4u: goto label_455dd4;
        case 0x455dd8u: goto label_455dd8;
        case 0x455ddcu: goto label_455ddc;
        case 0x455de0u: goto label_455de0;
        case 0x455de4u: goto label_455de4;
        case 0x455de8u: goto label_455de8;
        case 0x455decu: goto label_455dec;
        case 0x455df0u: goto label_455df0;
        case 0x455df4u: goto label_455df4;
        case 0x455df8u: goto label_455df8;
        case 0x455dfcu: goto label_455dfc;
        case 0x455e00u: goto label_455e00;
        case 0x455e04u: goto label_455e04;
        case 0x455e08u: goto label_455e08;
        case 0x455e0cu: goto label_455e0c;
        case 0x455e10u: goto label_455e10;
        case 0x455e14u: goto label_455e14;
        case 0x455e18u: goto label_455e18;
        case 0x455e1cu: goto label_455e1c;
        case 0x455e20u: goto label_455e20;
        case 0x455e24u: goto label_455e24;
        case 0x455e28u: goto label_455e28;
        case 0x455e2cu: goto label_455e2c;
        case 0x455e30u: goto label_455e30;
        case 0x455e34u: goto label_455e34;
        case 0x455e38u: goto label_455e38;
        case 0x455e3cu: goto label_455e3c;
        case 0x455e40u: goto label_455e40;
        case 0x455e44u: goto label_455e44;
        case 0x455e48u: goto label_455e48;
        case 0x455e4cu: goto label_455e4c;
        case 0x455e50u: goto label_455e50;
        case 0x455e54u: goto label_455e54;
        case 0x455e58u: goto label_455e58;
        case 0x455e5cu: goto label_455e5c;
        case 0x455e60u: goto label_455e60;
        case 0x455e64u: goto label_455e64;
        case 0x455e68u: goto label_455e68;
        case 0x455e6cu: goto label_455e6c;
        case 0x455e70u: goto label_455e70;
        case 0x455e74u: goto label_455e74;
        case 0x455e78u: goto label_455e78;
        case 0x455e7cu: goto label_455e7c;
        case 0x455e80u: goto label_455e80;
        case 0x455e84u: goto label_455e84;
        case 0x455e88u: goto label_455e88;
        case 0x455e8cu: goto label_455e8c;
        case 0x455e90u: goto label_455e90;
        case 0x455e94u: goto label_455e94;
        case 0x455e98u: goto label_455e98;
        case 0x455e9cu: goto label_455e9c;
        case 0x455ea0u: goto label_455ea0;
        case 0x455ea4u: goto label_455ea4;
        case 0x455ea8u: goto label_455ea8;
        case 0x455eacu: goto label_455eac;
        case 0x455eb0u: goto label_455eb0;
        case 0x455eb4u: goto label_455eb4;
        case 0x455eb8u: goto label_455eb8;
        case 0x455ebcu: goto label_455ebc;
        case 0x455ec0u: goto label_455ec0;
        case 0x455ec4u: goto label_455ec4;
        case 0x455ec8u: goto label_455ec8;
        case 0x455eccu: goto label_455ecc;
        case 0x455ed0u: goto label_455ed0;
        case 0x455ed4u: goto label_455ed4;
        case 0x455ed8u: goto label_455ed8;
        case 0x455edcu: goto label_455edc;
        case 0x455ee0u: goto label_455ee0;
        case 0x455ee4u: goto label_455ee4;
        case 0x455ee8u: goto label_455ee8;
        case 0x455eecu: goto label_455eec;
        case 0x455ef0u: goto label_455ef0;
        case 0x455ef4u: goto label_455ef4;
        case 0x455ef8u: goto label_455ef8;
        case 0x455efcu: goto label_455efc;
        case 0x455f00u: goto label_455f00;
        case 0x455f04u: goto label_455f04;
        case 0x455f08u: goto label_455f08;
        case 0x455f0cu: goto label_455f0c;
        default: break;
    }

    ctx->pc = 0x455d70u;

label_455d70:
    // 0x455d70: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x455d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_455d74:
    // 0x455d74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x455d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_455d78:
    // 0x455d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x455d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_455d7c:
    // 0x455d7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x455d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_455d80:
    // 0x455d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x455d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_455d84:
    // 0x455d84: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x455d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_455d88:
    // 0x455d88: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x455d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
label_455d8c:
    // 0x455d8c: 0xafa60190  sw          $a2, 0x190($sp)
    ctx->pc = 0x455d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 6));
label_455d90:
    // 0x455d90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x455d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455d94:
    // 0x455d94: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x455d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_455d98:
    // 0x455d98: 0xc114a58  jal         func_452960
label_455d9c:
    if (ctx->pc == 0x455D9Cu) {
        ctx->pc = 0x455DA0u;
        goto label_455da0;
    }
    ctx->pc = 0x455D98u;
    SET_GPR_U32(ctx, 31, 0x455DA0u);
    ctx->pc = 0x452960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452960u, 0x455D98u, 0x455DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455DA0u;
label_455da0:
    // 0x455da0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x455da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455da4:
    // 0x455da4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x455da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_455da8:
    // 0x455da8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x455da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_455dac:
    // 0x455dac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x455dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_455db0:
    // 0x455db0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_455db4:
    if (ctx->pc == 0x455DB4u) {
        ctx->pc = 0x455DB8u;
        goto label_455db8;
    }
    ctx->pc = 0x455DB0u;
    {
        const bool branch_taken_0x455db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455db0) {
            ctx->pc = 0x455E60u;
            goto label_455e60;
        }
    }
    ctx->pc = 0x455DB8u;
label_455db8:
    // 0x455db8: 0x8f82b088  lw          $v0, -0x4F78($gp)
    ctx->pc = 0x455db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946952)));
label_455dbc:
    // 0x455dbc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_455dc0:
    if (ctx->pc == 0x455DC0u) {
        ctx->pc = 0x455DC4u;
        goto label_455dc4;
    }
    ctx->pc = 0x455DBCu;
    {
        const bool branch_taken_0x455dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455dbc) {
            ctx->pc = 0x455E60u;
            goto label_455e60;
        }
    }
    ctx->pc = 0x455DC4u;
label_455dc4:
    // 0x455dc4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x455dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_455dc8:
    // 0x455dc8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x455dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455dcc:
    // 0x455dcc: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x455dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_455dd0:
    // 0x455dd0: 0xc115ee8  jal         func_457BA0
label_455dd4:
    if (ctx->pc == 0x455DD4u) {
        ctx->pc = 0x455DD8u;
        goto label_455dd8;
    }
    ctx->pc = 0x455DD0u;
    SET_GPR_U32(ctx, 31, 0x455DD8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x455DD0u, 0x455DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455DD8u;
label_455dd8:
    // 0x455dd8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_455ddc:
    if (ctx->pc == 0x455DDCu) {
        ctx->pc = 0x455DE0u;
        goto label_455de0;
    }
    ctx->pc = 0x455DD8u;
    {
        const bool branch_taken_0x455dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455dd8) {
            ctx->pc = 0x455E60u;
            goto label_455e60;
        }
    }
    ctx->pc = 0x455DE0u;
label_455de0:
    // 0x455de0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x455de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_455de4:
    // 0x455de4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_455de8:
    if (ctx->pc == 0x455DE8u) {
        ctx->pc = 0x455DECu;
        goto label_455dec;
    }
    ctx->pc = 0x455DE4u;
    {
        const bool branch_taken_0x455de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455de4) {
            ctx->pc = 0x455E60u;
            goto label_455e60;
        }
    }
    ctx->pc = 0x455DECu;
label_455dec:
    // 0x455dec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x455decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_455df0:
    // 0x455df0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x455df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455df4:
    // 0x455df4: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x455df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_455df8:
    // 0x455df8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x455df8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_455dfc:
    // 0x455dfc: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x455dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_455e00:
    // 0x455e00: 0x240803cd  addiu       $t0, $zero, 0x3CD
    ctx->pc = 0x455e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 973));
label_455e04:
    // 0x455e04: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x455e04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_455e08:
    // 0x455e08: 0x2529e2a8  addiu       $t1, $t1, -0x1D58
    ctx->pc = 0x455e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959784));
label_455e0c:
    // 0x455e0c: 0xc113940  jal         func_44E500
label_455e10:
    if (ctx->pc == 0x455E10u) {
        ctx->pc = 0x455E14u;
        goto label_455e14;
    }
    ctx->pc = 0x455E0Cu;
    SET_GPR_U32(ctx, 31, 0x455E14u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x455E0Cu, 0x455E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455E14u;
label_455e14:
    // 0x455e14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x455e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_455e18:
    // 0x455e18: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x455e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_455e1c:
    // 0x455e1c: 0x24a5e2c0  addiu       $a1, $a1, -0x1D40
    ctx->pc = 0x455e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959808));
label_455e20:
    // 0x455e20: 0xc115c24  jal         func_457090
label_455e24:
    if (ctx->pc == 0x455E24u) {
        ctx->pc = 0x455E28u;
        goto label_455e28;
    }
    ctx->pc = 0x455E20u;
    SET_GPR_U32(ctx, 31, 0x455E28u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x455E20u, 0x455E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455E28u;
label_455e28:
    // 0x455e28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x455e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_455e2c:
    // 0x455e2c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x455e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_455e30:
    // 0x455e30: 0x40f809  jalr        $v0
label_455e34:
    if (ctx->pc == 0x455E34u) {
        ctx->pc = 0x455E38u;
        goto label_455e38;
    }
    ctx->pc = 0x455E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455E38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455E30u, 0x455E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455E38u;
label_455e38:
    // 0x455e38: 0xaf82b088  sw          $v0, -0x4F78($gp)
    ctx->pc = 0x455e38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946952), GPR_U32(ctx, 2));
label_455e3c:
    // 0x455e3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x455e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_455e40:
    // 0x455e40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_455e44:
    if (ctx->pc == 0x455E44u) {
        ctx->pc = 0x455E48u;
        goto label_455e48;
    }
    ctx->pc = 0x455E40u;
    {
        const bool branch_taken_0x455e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455e40) {
            ctx->pc = 0x455E50u;
            goto label_455e50;
        }
    }
    ctx->pc = 0x455E48u;
label_455e48:
    // 0x455e48: 0xd  break       0
    ctx->pc = 0x455e48u;
    runtime->handleBreak(rdram, ctx);
label_455e4c:
    // 0x455e4c: 0x0  nop
    ctx->pc = 0x455e4cu;
    // NOP
label_455e50:
    // 0x455e50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x455e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_455e54:
    // 0x455e54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x455e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_455e58:
    // 0x455e58: 0xc11392c  jal         func_44E4B0
label_455e5c:
    if (ctx->pc == 0x455E5Cu) {
        ctx->pc = 0x455E60u;
        goto label_455e60;
    }
    ctx->pc = 0x455E58u;
    SET_GPR_U32(ctx, 31, 0x455E60u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x455E58u, 0x455E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455E60u;
label_455e60:
    // 0x455e60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x455e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455e64:
    // 0x455e64: 0x10000012  b           . + 4 + (0x12 << 2)
label_455e68:
    if (ctx->pc == 0x455E68u) {
        ctx->pc = 0x455E6Cu;
        goto label_455e6c;
    }
    ctx->pc = 0x455E64u;
    {
        const bool branch_taken_0x455e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x455e64) {
            ctx->pc = 0x455EB0u;
            goto label_455eb0;
        }
    }
    ctx->pc = 0x455E6Cu;
label_455e6c:
    // 0x455e6c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x455e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_455e70:
    // 0x455e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x455e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_455e74:
    // 0x455e74: 0xc114a74  jal         func_4529D0
label_455e78:
    if (ctx->pc == 0x455E78u) {
        ctx->pc = 0x455E7Cu;
        goto label_455e7c;
    }
    ctx->pc = 0x455E74u;
    SET_GPR_U32(ctx, 31, 0x455E7Cu);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x455E74u, 0x455E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455E7Cu;
label_455e7c:
    // 0x455e7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x455e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_455e80:
    // 0x455e80: 0xc041874  jal         func_1061D0
label_455e84:
    if (ctx->pc == 0x455E84u) {
        ctx->pc = 0x455E88u;
        goto label_455e88;
    }
    ctx->pc = 0x455E80u;
    SET_GPR_U32(ctx, 31, 0x455E88u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x455E80u, 0x455E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455E88u;
label_455e88:
    // 0x455e88: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x455e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_455e8c:
    // 0x455e8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455e90:
    // 0x455e90: 0xc048c30  jal         func_1230C0
label_455e94:
    if (ctx->pc == 0x455E94u) {
        ctx->pc = 0x455E98u;
        goto label_455e98;
    }
    ctx->pc = 0x455E90u;
    SET_GPR_U32(ctx, 31, 0x455E98u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x455E90u, 0x455E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455E98u;
label_455e98:
    // 0x455e98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_455e9c:
    if (ctx->pc == 0x455E9Cu) {
        ctx->pc = 0x455EA0u;
        goto label_455ea0;
    }
    ctx->pc = 0x455E98u;
    {
        const bool branch_taken_0x455e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455e98) {
            ctx->pc = 0x455EACu;
            goto label_455eac;
        }
    }
    ctx->pc = 0x455EA0u;
label_455ea0:
    // 0x455ea0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x455ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_455ea4:
    // 0x455ea4: 0x10000002  b           . + 4 + (0x2 << 2)
label_455ea8:
    if (ctx->pc == 0x455EA8u) {
        ctx->pc = 0x455EACu;
        goto label_455eac;
    }
    ctx->pc = 0x455EA4u;
    {
        const bool branch_taken_0x455ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x455ea4) {
            ctx->pc = 0x455EB0u;
            goto label_455eb0;
        }
    }
    ctx->pc = 0x455EACu;
label_455eac:
    // 0x455eac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x455eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_455eb0:
    // 0x455eb0: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_455eb4:
    if (ctx->pc == 0x455EB4u) {
        ctx->pc = 0x455EB8u;
        goto label_455eb8;
    }
    ctx->pc = 0x455EB0u;
    {
        const bool branch_taken_0x455eb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x455eb0) {
            ctx->pc = 0x455EC4u;
            goto label_455ec4;
        }
    }
    ctx->pc = 0x455EB8u;
label_455eb8:
    // 0x455eb8: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x455eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_455ebc:
    // 0x455ebc: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_455ec0:
    if (ctx->pc == 0x455EC0u) {
        ctx->pc = 0x455EC4u;
        goto label_455ec4;
    }
    ctx->pc = 0x455EBCu;
    {
        const bool branch_taken_0x455ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455ebc) {
            ctx->pc = 0x455E6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455e6c;
        }
    }
    ctx->pc = 0x455EC4u;
label_455ec4:
    // 0x455ec4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_455ec8:
    if (ctx->pc == 0x455EC8u) {
        ctx->pc = 0x455ECCu;
        goto label_455ecc;
    }
    ctx->pc = 0x455EC4u;
    {
        const bool branch_taken_0x455ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x455ec4) {
            ctx->pc = 0x455EECu;
            goto label_455eec;
        }
    }
    ctx->pc = 0x455ECCu;
label_455ecc:
    // 0x455ecc: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x455eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_455ed0:
    // 0x455ed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x455ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_455ed4:
    // 0x455ed4: 0xc114a74  jal         func_4529D0
label_455ed8:
    if (ctx->pc == 0x455ED8u) {
        ctx->pc = 0x455EDCu;
        goto label_455edc;
    }
    ctx->pc = 0x455ED4u;
    SET_GPR_U32(ctx, 31, 0x455EDCu);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x455ED4u, 0x455EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455EDCu;
label_455edc:
    // 0x455edc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x455edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_455ee0:
    // 0x455ee0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x455ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_455ee4:
    // 0x455ee4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x455ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_455ee8:
    // 0x455ee8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x455ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_455eec:
    // 0x455eec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x455eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455ef0:
    // 0x455ef0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x455ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_455ef4:
    // 0x455ef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x455ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_455ef8:
    // 0x455ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x455ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_455efc:
    // 0x455efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x455efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_455f00:
    // 0x455f00: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x455f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_455f04:
    // 0x455f04: 0x3e00008  jr          $ra
label_455f08:
    if (ctx->pc == 0x455F08u) {
        ctx->pc = 0x455F0Cu;
        goto label_455f0c;
    }
    ctx->pc = 0x455F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x455F0Cu;
label_455f0c:
    // 0x455f0c: 0x0  nop
    ctx->pc = 0x455f0cu;
    // NOP
    ctx->pc = 0x455f10u;
}
