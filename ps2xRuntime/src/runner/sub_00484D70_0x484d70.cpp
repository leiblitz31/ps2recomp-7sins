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

// Function: sub_00484D70
// Address: 0x484d70 - 0x484ed0
void sub_00484D70_0x484d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484D70_0x484d70");
#endif

    switch (ctx->pc) {
        case 0x484d70u: goto label_484d70;
        case 0x484d74u: goto label_484d74;
        case 0x484d78u: goto label_484d78;
        case 0x484d7cu: goto label_484d7c;
        case 0x484d80u: goto label_484d80;
        case 0x484d84u: goto label_484d84;
        case 0x484d88u: goto label_484d88;
        case 0x484d8cu: goto label_484d8c;
        case 0x484d90u: goto label_484d90;
        case 0x484d94u: goto label_484d94;
        case 0x484d98u: goto label_484d98;
        case 0x484d9cu: goto label_484d9c;
        case 0x484da0u: goto label_484da0;
        case 0x484da4u: goto label_484da4;
        case 0x484da8u: goto label_484da8;
        case 0x484dacu: goto label_484dac;
        case 0x484db0u: goto label_484db0;
        case 0x484db4u: goto label_484db4;
        case 0x484db8u: goto label_484db8;
        case 0x484dbcu: goto label_484dbc;
        case 0x484dc0u: goto label_484dc0;
        case 0x484dc4u: goto label_484dc4;
        case 0x484dc8u: goto label_484dc8;
        case 0x484dccu: goto label_484dcc;
        case 0x484dd0u: goto label_484dd0;
        case 0x484dd4u: goto label_484dd4;
        case 0x484dd8u: goto label_484dd8;
        case 0x484ddcu: goto label_484ddc;
        case 0x484de0u: goto label_484de0;
        case 0x484de4u: goto label_484de4;
        case 0x484de8u: goto label_484de8;
        case 0x484decu: goto label_484dec;
        case 0x484df0u: goto label_484df0;
        case 0x484df4u: goto label_484df4;
        case 0x484df8u: goto label_484df8;
        case 0x484dfcu: goto label_484dfc;
        case 0x484e00u: goto label_484e00;
        case 0x484e04u: goto label_484e04;
        case 0x484e08u: goto label_484e08;
        case 0x484e0cu: goto label_484e0c;
        case 0x484e10u: goto label_484e10;
        case 0x484e14u: goto label_484e14;
        case 0x484e18u: goto label_484e18;
        case 0x484e1cu: goto label_484e1c;
        case 0x484e20u: goto label_484e20;
        case 0x484e24u: goto label_484e24;
        case 0x484e28u: goto label_484e28;
        case 0x484e2cu: goto label_484e2c;
        case 0x484e30u: goto label_484e30;
        case 0x484e34u: goto label_484e34;
        case 0x484e38u: goto label_484e38;
        case 0x484e3cu: goto label_484e3c;
        case 0x484e40u: goto label_484e40;
        case 0x484e44u: goto label_484e44;
        case 0x484e48u: goto label_484e48;
        case 0x484e4cu: goto label_484e4c;
        case 0x484e50u: goto label_484e50;
        case 0x484e54u: goto label_484e54;
        case 0x484e58u: goto label_484e58;
        case 0x484e5cu: goto label_484e5c;
        case 0x484e60u: goto label_484e60;
        case 0x484e64u: goto label_484e64;
        case 0x484e68u: goto label_484e68;
        case 0x484e6cu: goto label_484e6c;
        case 0x484e70u: goto label_484e70;
        case 0x484e74u: goto label_484e74;
        case 0x484e78u: goto label_484e78;
        case 0x484e7cu: goto label_484e7c;
        case 0x484e80u: goto label_484e80;
        case 0x484e84u: goto label_484e84;
        case 0x484e88u: goto label_484e88;
        case 0x484e8cu: goto label_484e8c;
        case 0x484e90u: goto label_484e90;
        case 0x484e94u: goto label_484e94;
        case 0x484e98u: goto label_484e98;
        case 0x484e9cu: goto label_484e9c;
        case 0x484ea0u: goto label_484ea0;
        case 0x484ea4u: goto label_484ea4;
        case 0x484ea8u: goto label_484ea8;
        case 0x484eacu: goto label_484eac;
        case 0x484eb0u: goto label_484eb0;
        case 0x484eb4u: goto label_484eb4;
        case 0x484eb8u: goto label_484eb8;
        case 0x484ebcu: goto label_484ebc;
        case 0x484ec0u: goto label_484ec0;
        case 0x484ec4u: goto label_484ec4;
        case 0x484ec8u: goto label_484ec8;
        case 0x484eccu: goto label_484ecc;
        default: break;
    }

    ctx->pc = 0x484d70u;

label_484d70:
    // 0x484d70: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x484d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_484d74:
    // 0x484d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x484d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_484d78:
    // 0x484d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484d7c:
    // 0x484d7c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x484d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_484d80:
    // 0x484d80: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x484d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_484d84:
    // 0x484d84: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x484d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_484d88:
    // 0x484d88: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x484d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_484d8c:
    // 0x484d8c: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x484d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_484d90:
    // 0x484d90: 0xc1213b4  jal         func_484ED0
label_484d94:
    if (ctx->pc == 0x484D94u) {
        ctx->pc = 0x484D98u;
        goto label_484d98;
    }
    ctx->pc = 0x484D90u;
    SET_GPR_U32(ctx, 31, 0x484D98u);
    ctx->pc = 0x484ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484ED0u, 0x484D90u, 0x484D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484D98u;
label_484d98:
    // 0x484d98: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x484d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_484d9c:
    // 0x484d9c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x484d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_484da0:
    // 0x484da0: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x484da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_484da4:
    // 0x484da4: 0xc0a0284  jal         func_280A10
label_484da8:
    if (ctx->pc == 0x484DA8u) {
        ctx->pc = 0x484DACu;
        goto label_484dac;
    }
    ctx->pc = 0x484DA4u;
    SET_GPR_U32(ctx, 31, 0x484DACu);
    ctx->pc = 0x280A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A10u, 0x484DA4u, 0x484DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484DACu;
label_484dac:
    // 0x484dac: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x484dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_484db0:
    // 0x484db0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x484db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_484db4:
    // 0x484db4: 0xc0a0278  jal         func_2809E0
label_484db8:
    if (ctx->pc == 0x484DB8u) {
        ctx->pc = 0x484DBCu;
        goto label_484dbc;
    }
    ctx->pc = 0x484DB4u;
    SET_GPR_U32(ctx, 31, 0x484DBCu);
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x484DB4u, 0x484DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484DBCu;
label_484dbc:
    // 0x484dbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x484dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_484dc0:
    // 0x484dc0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_484dc4:
    if (ctx->pc == 0x484DC4u) {
        ctx->pc = 0x484DC8u;
        goto label_484dc8;
    }
    ctx->pc = 0x484DC0u;
    {
        const bool branch_taken_0x484dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x484dc0) {
            ctx->pc = 0x484E70u;
            goto label_484e70;
        }
    }
    ctx->pc = 0x484DC8u;
label_484dc8:
    // 0x484dc8: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x484dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_484dcc:
    // 0x484dcc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_484dd0:
    if (ctx->pc == 0x484DD0u) {
        ctx->pc = 0x484DD4u;
        goto label_484dd4;
    }
    ctx->pc = 0x484DCCu;
    {
        const bool branch_taken_0x484dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484dcc) {
            ctx->pc = 0x484E70u;
            goto label_484e70;
        }
    }
    ctx->pc = 0x484DD4u;
label_484dd4:
    // 0x484dd4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x484dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_484dd8:
    // 0x484dd8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x484dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_484ddc:
    // 0x484ddc: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x484ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_484de0:
    // 0x484de0: 0xc115ee8  jal         func_457BA0
label_484de4:
    if (ctx->pc == 0x484DE4u) {
        ctx->pc = 0x484DE8u;
        goto label_484de8;
    }
    ctx->pc = 0x484DE0u;
    SET_GPR_U32(ctx, 31, 0x484DE8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x484DE0u, 0x484DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484DE8u;
label_484de8:
    // 0x484de8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_484dec:
    if (ctx->pc == 0x484DECu) {
        ctx->pc = 0x484DF0u;
        goto label_484df0;
    }
    ctx->pc = 0x484DE8u;
    {
        const bool branch_taken_0x484de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484de8) {
            ctx->pc = 0x484E70u;
            goto label_484e70;
        }
    }
    ctx->pc = 0x484DF0u;
label_484df0:
    // 0x484df0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x484df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_484df4:
    // 0x484df4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_484df8:
    if (ctx->pc == 0x484DF8u) {
        ctx->pc = 0x484DFCu;
        goto label_484dfc;
    }
    ctx->pc = 0x484DF4u;
    {
        const bool branch_taken_0x484df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484df4) {
            ctx->pc = 0x484E70u;
            goto label_484e70;
        }
    }
    ctx->pc = 0x484DFCu;
label_484dfc:
    // 0x484dfc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x484dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_484e00:
    // 0x484e00: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x484e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_484e04:
    // 0x484e04: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x484e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_484e08:
    // 0x484e08: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x484e08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_484e0c:
    // 0x484e0c: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x484e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_484e10:
    // 0x484e10: 0x240802e3  addiu       $t0, $zero, 0x2E3
    ctx->pc = 0x484e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 739));
label_484e14:
    // 0x484e14: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x484e14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_484e18:
    // 0x484e18: 0x25293ca0  addiu       $t1, $t1, 0x3CA0
    ctx->pc = 0x484e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15520));
label_484e1c:
    // 0x484e1c: 0xc113940  jal         func_44E500
label_484e20:
    if (ctx->pc == 0x484E20u) {
        ctx->pc = 0x484E24u;
        goto label_484e24;
    }
    ctx->pc = 0x484E1Cu;
    SET_GPR_U32(ctx, 31, 0x484E24u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x484E1Cu, 0x484E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484E24u;
label_484e24:
    // 0x484e24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x484e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_484e28:
    // 0x484e28: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x484e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_484e2c:
    // 0x484e2c: 0x24a53cc0  addiu       $a1, $a1, 0x3CC0
    ctx->pc = 0x484e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15552));
label_484e30:
    // 0x484e30: 0xc115c24  jal         func_457090
label_484e34:
    if (ctx->pc == 0x484E34u) {
        ctx->pc = 0x484E38u;
        goto label_484e38;
    }
    ctx->pc = 0x484E30u;
    SET_GPR_U32(ctx, 31, 0x484E38u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x484E30u, 0x484E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484E38u;
label_484e38:
    // 0x484e38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x484e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_484e3c:
    // 0x484e3c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x484e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_484e40:
    // 0x484e40: 0x40f809  jalr        $v0
label_484e44:
    if (ctx->pc == 0x484E44u) {
        ctx->pc = 0x484E48u;
        goto label_484e48;
    }
    ctx->pc = 0x484E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484E48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484E40u, 0x484E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484E48u;
label_484e48:
    // 0x484e48: 0xaf82b59c  sw          $v0, -0x4A64($gp)
    ctx->pc = 0x484e48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948252), GPR_U32(ctx, 2));
label_484e4c:
    // 0x484e4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x484e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_484e50:
    // 0x484e50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_484e54:
    if (ctx->pc == 0x484E54u) {
        ctx->pc = 0x484E58u;
        goto label_484e58;
    }
    ctx->pc = 0x484E50u;
    {
        const bool branch_taken_0x484e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484e50) {
            ctx->pc = 0x484E60u;
            goto label_484e60;
        }
    }
    ctx->pc = 0x484E58u;
label_484e58:
    // 0x484e58: 0xd  break       0
    ctx->pc = 0x484e58u;
    runtime->handleBreak(rdram, ctx);
label_484e5c:
    // 0x484e5c: 0x0  nop
    ctx->pc = 0x484e5cu;
    // NOP
label_484e60:
    // 0x484e60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x484e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_484e64:
    // 0x484e64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x484e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_484e68:
    // 0x484e68: 0xc11392c  jal         func_44E4B0
label_484e6c:
    if (ctx->pc == 0x484E6Cu) {
        ctx->pc = 0x484E70u;
        goto label_484e70;
    }
    ctx->pc = 0x484E68u;
    SET_GPR_U32(ctx, 31, 0x484E70u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x484E68u, 0x484E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484E70u;
label_484e70:
    // 0x484e70: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x484e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_484e74:
    // 0x484e74: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x484e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_484e78:
    // 0x484e78: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x484e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_484e7c:
    // 0x484e7c: 0xc0a0284  jal         func_280A10
label_484e80:
    if (ctx->pc == 0x484E80u) {
        ctx->pc = 0x484E84u;
        goto label_484e84;
    }
    ctx->pc = 0x484E7Cu;
    SET_GPR_U32(ctx, 31, 0x484E84u);
    ctx->pc = 0x280A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A10u, 0x484E7Cu, 0x484E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484E84u;
label_484e84:
    // 0x484e84: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x484e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_484e88:
    // 0x484e88: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x484e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_484e8c:
    // 0x484e8c: 0xc0a0278  jal         func_2809E0
label_484e90:
    if (ctx->pc == 0x484E90u) {
        ctx->pc = 0x484E94u;
        goto label_484e94;
    }
    ctx->pc = 0x484E8Cu;
    SET_GPR_U32(ctx, 31, 0x484E94u);
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x484E8Cu, 0x484E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484E94u;
label_484e94:
    // 0x484e94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_484e98:
    if (ctx->pc == 0x484E98u) {
        ctx->pc = 0x484E9Cu;
        goto label_484e9c;
    }
    ctx->pc = 0x484E94u;
    {
        const bool branch_taken_0x484e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484e94) {
            ctx->pc = 0x484EB8u;
            goto label_484eb8;
        }
    }
    ctx->pc = 0x484E9Cu;
label_484e9c:
    // 0x484e9c: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x484e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_484ea0:
    // 0x484ea0: 0xc0a041c  jal         func_281070
label_484ea4:
    if (ctx->pc == 0x484EA4u) {
        ctx->pc = 0x484EA8u;
        goto label_484ea8;
    }
    ctx->pc = 0x484EA0u;
    SET_GPR_U32(ctx, 31, 0x484EA8u);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x484EA0u, 0x484EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484EA8u;
label_484ea8:
    // 0x484ea8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x484ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_484eac:
    // 0x484eac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x484eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_484eb0:
    // 0x484eb0: 0x10000002  b           . + 4 + (0x2 << 2)
label_484eb4:
    if (ctx->pc == 0x484EB4u) {
        ctx->pc = 0x484EB8u;
        goto label_484eb8;
    }
    ctx->pc = 0x484EB0u;
    {
        const bool branch_taken_0x484eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484eb0) {
            ctx->pc = 0x484EBCu;
            goto label_484ebc;
        }
    }
    ctx->pc = 0x484EB8u;
label_484eb8:
    // 0x484eb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x484eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484ebc:
    // 0x484ebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x484ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_484ec0:
    // 0x484ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_484ec4:
    // 0x484ec4: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x484ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_484ec8:
    // 0x484ec8: 0x3e00008  jr          $ra
label_484ecc:
    if (ctx->pc == 0x484ECCu) {
        ctx->pc = 0x484ED0u;
        goto label_fallthrough_0x484ec8;
    }
    ctx->pc = 0x484EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x484ec8:
    ctx->pc = 0x484ED0u;
}
