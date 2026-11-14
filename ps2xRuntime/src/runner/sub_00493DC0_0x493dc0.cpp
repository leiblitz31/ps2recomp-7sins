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

// Function: sub_00493DC0
// Address: 0x493dc0 - 0x493fb0
void sub_00493DC0_0x493dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493DC0_0x493dc0");
#endif

    switch (ctx->pc) {
        case 0x493dc0u: goto label_493dc0;
        case 0x493dc4u: goto label_493dc4;
        case 0x493dc8u: goto label_493dc8;
        case 0x493dccu: goto label_493dcc;
        case 0x493dd0u: goto label_493dd0;
        case 0x493dd4u: goto label_493dd4;
        case 0x493dd8u: goto label_493dd8;
        case 0x493ddcu: goto label_493ddc;
        case 0x493de0u: goto label_493de0;
        case 0x493de4u: goto label_493de4;
        case 0x493de8u: goto label_493de8;
        case 0x493decu: goto label_493dec;
        case 0x493df0u: goto label_493df0;
        case 0x493df4u: goto label_493df4;
        case 0x493df8u: goto label_493df8;
        case 0x493dfcu: goto label_493dfc;
        case 0x493e00u: goto label_493e00;
        case 0x493e04u: goto label_493e04;
        case 0x493e08u: goto label_493e08;
        case 0x493e0cu: goto label_493e0c;
        case 0x493e10u: goto label_493e10;
        case 0x493e14u: goto label_493e14;
        case 0x493e18u: goto label_493e18;
        case 0x493e1cu: goto label_493e1c;
        case 0x493e20u: goto label_493e20;
        case 0x493e24u: goto label_493e24;
        case 0x493e28u: goto label_493e28;
        case 0x493e2cu: goto label_493e2c;
        case 0x493e30u: goto label_493e30;
        case 0x493e34u: goto label_493e34;
        case 0x493e38u: goto label_493e38;
        case 0x493e3cu: goto label_493e3c;
        case 0x493e40u: goto label_493e40;
        case 0x493e44u: goto label_493e44;
        case 0x493e48u: goto label_493e48;
        case 0x493e4cu: goto label_493e4c;
        case 0x493e50u: goto label_493e50;
        case 0x493e54u: goto label_493e54;
        case 0x493e58u: goto label_493e58;
        case 0x493e5cu: goto label_493e5c;
        case 0x493e60u: goto label_493e60;
        case 0x493e64u: goto label_493e64;
        case 0x493e68u: goto label_493e68;
        case 0x493e6cu: goto label_493e6c;
        case 0x493e70u: goto label_493e70;
        case 0x493e74u: goto label_493e74;
        case 0x493e78u: goto label_493e78;
        case 0x493e7cu: goto label_493e7c;
        case 0x493e80u: goto label_493e80;
        case 0x493e84u: goto label_493e84;
        case 0x493e88u: goto label_493e88;
        case 0x493e8cu: goto label_493e8c;
        case 0x493e90u: goto label_493e90;
        case 0x493e94u: goto label_493e94;
        case 0x493e98u: goto label_493e98;
        case 0x493e9cu: goto label_493e9c;
        case 0x493ea0u: goto label_493ea0;
        case 0x493ea4u: goto label_493ea4;
        case 0x493ea8u: goto label_493ea8;
        case 0x493eacu: goto label_493eac;
        case 0x493eb0u: goto label_493eb0;
        case 0x493eb4u: goto label_493eb4;
        case 0x493eb8u: goto label_493eb8;
        case 0x493ebcu: goto label_493ebc;
        case 0x493ec0u: goto label_493ec0;
        case 0x493ec4u: goto label_493ec4;
        case 0x493ec8u: goto label_493ec8;
        case 0x493eccu: goto label_493ecc;
        case 0x493ed0u: goto label_493ed0;
        case 0x493ed4u: goto label_493ed4;
        case 0x493ed8u: goto label_493ed8;
        case 0x493edcu: goto label_493edc;
        case 0x493ee0u: goto label_493ee0;
        case 0x493ee4u: goto label_493ee4;
        case 0x493ee8u: goto label_493ee8;
        case 0x493eecu: goto label_493eec;
        case 0x493ef0u: goto label_493ef0;
        case 0x493ef4u: goto label_493ef4;
        case 0x493ef8u: goto label_493ef8;
        case 0x493efcu: goto label_493efc;
        case 0x493f00u: goto label_493f00;
        case 0x493f04u: goto label_493f04;
        case 0x493f08u: goto label_493f08;
        case 0x493f0cu: goto label_493f0c;
        case 0x493f10u: goto label_493f10;
        case 0x493f14u: goto label_493f14;
        case 0x493f18u: goto label_493f18;
        case 0x493f1cu: goto label_493f1c;
        case 0x493f20u: goto label_493f20;
        case 0x493f24u: goto label_493f24;
        case 0x493f28u: goto label_493f28;
        case 0x493f2cu: goto label_493f2c;
        case 0x493f30u: goto label_493f30;
        case 0x493f34u: goto label_493f34;
        case 0x493f38u: goto label_493f38;
        case 0x493f3cu: goto label_493f3c;
        case 0x493f40u: goto label_493f40;
        case 0x493f44u: goto label_493f44;
        case 0x493f48u: goto label_493f48;
        case 0x493f4cu: goto label_493f4c;
        case 0x493f50u: goto label_493f50;
        case 0x493f54u: goto label_493f54;
        case 0x493f58u: goto label_493f58;
        case 0x493f5cu: goto label_493f5c;
        case 0x493f60u: goto label_493f60;
        case 0x493f64u: goto label_493f64;
        case 0x493f68u: goto label_493f68;
        case 0x493f6cu: goto label_493f6c;
        case 0x493f70u: goto label_493f70;
        case 0x493f74u: goto label_493f74;
        case 0x493f78u: goto label_493f78;
        case 0x493f7cu: goto label_493f7c;
        case 0x493f80u: goto label_493f80;
        case 0x493f84u: goto label_493f84;
        case 0x493f88u: goto label_493f88;
        case 0x493f8cu: goto label_493f8c;
        case 0x493f90u: goto label_493f90;
        case 0x493f94u: goto label_493f94;
        case 0x493f98u: goto label_493f98;
        case 0x493f9cu: goto label_493f9c;
        case 0x493fa0u: goto label_493fa0;
        case 0x493fa4u: goto label_493fa4;
        case 0x493fa8u: goto label_493fa8;
        case 0x493facu: goto label_493fac;
        default: break;
    }

    ctx->pc = 0x493dc0u;

label_493dc0:
    // 0x493dc0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x493dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_493dc4:
    // 0x493dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x493dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_493dc8:
    // 0x493dc8: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x493dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_493dcc:
    // 0x493dcc: 0xafa50290  sw          $a1, 0x290($sp)
    ctx->pc = 0x493dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 5));
label_493dd0:
    // 0x493dd0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x493dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_493dd4:
    // 0x493dd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x493dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_493dd8:
    // 0x493dd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x493dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_493ddc:
    // 0x493ddc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_493de0:
    if (ctx->pc == 0x493DE0u) {
        ctx->pc = 0x493DE4u;
        goto label_493de4;
    }
    ctx->pc = 0x493DDCu;
    {
        const bool branch_taken_0x493ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493ddc) {
            ctx->pc = 0x493E8Cu;
            goto label_493e8c;
        }
    }
    ctx->pc = 0x493DE4u;
label_493de4:
    // 0x493de4: 0x8f82b720  lw          $v0, -0x48E0($gp)
    ctx->pc = 0x493de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948640)));
label_493de8:
    // 0x493de8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_493dec:
    if (ctx->pc == 0x493DECu) {
        ctx->pc = 0x493DF0u;
        goto label_493df0;
    }
    ctx->pc = 0x493DE8u;
    {
        const bool branch_taken_0x493de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493de8) {
            ctx->pc = 0x493E8Cu;
            goto label_493e8c;
        }
    }
    ctx->pc = 0x493DF0u;
label_493df0:
    // 0x493df0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x493df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_493df4:
    // 0x493df4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x493df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_493df8:
    // 0x493df8: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x493df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_493dfc:
    // 0x493dfc: 0xc115ee8  jal         func_457BA0
label_493e00:
    if (ctx->pc == 0x493E00u) {
        ctx->pc = 0x493E04u;
        goto label_493e04;
    }
    ctx->pc = 0x493DFCu;
    SET_GPR_U32(ctx, 31, 0x493E04u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x493DFCu, 0x493E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493E04u;
label_493e04:
    // 0x493e04: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_493e08:
    if (ctx->pc == 0x493E08u) {
        ctx->pc = 0x493E0Cu;
        goto label_493e0c;
    }
    ctx->pc = 0x493E04u;
    {
        const bool branch_taken_0x493e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493e04) {
            ctx->pc = 0x493E8Cu;
            goto label_493e8c;
        }
    }
    ctx->pc = 0x493E0Cu;
label_493e0c:
    // 0x493e0c: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x493e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_493e10:
    // 0x493e10: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_493e14:
    if (ctx->pc == 0x493E14u) {
        ctx->pc = 0x493E18u;
        goto label_493e18;
    }
    ctx->pc = 0x493E10u;
    {
        const bool branch_taken_0x493e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493e10) {
            ctx->pc = 0x493E8Cu;
            goto label_493e8c;
        }
    }
    ctx->pc = 0x493E18u;
label_493e18:
    // 0x493e18: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x493e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_493e1c:
    // 0x493e1c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x493e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_493e20:
    // 0x493e20: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x493e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_493e24:
    // 0x493e24: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x493e24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_493e28:
    // 0x493e28: 0x24e75080  addiu       $a3, $a3, 0x5080
    ctx->pc = 0x493e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20608));
label_493e2c:
    // 0x493e2c: 0x24080179  addiu       $t0, $zero, 0x179
    ctx->pc = 0x493e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 377));
label_493e30:
    // 0x493e30: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x493e30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_493e34:
    // 0x493e34: 0x25295120  addiu       $t1, $t1, 0x5120
    ctx->pc = 0x493e34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20768));
label_493e38:
    // 0x493e38: 0xc113940  jal         func_44E500
label_493e3c:
    if (ctx->pc == 0x493E3Cu) {
        ctx->pc = 0x493E40u;
        goto label_493e40;
    }
    ctx->pc = 0x493E38u;
    SET_GPR_U32(ctx, 31, 0x493E40u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x493E38u, 0x493E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493E40u;
label_493e40:
    // 0x493e40: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x493e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_493e44:
    // 0x493e44: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x493e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_493e48:
    // 0x493e48: 0x24a55130  addiu       $a1, $a1, 0x5130
    ctx->pc = 0x493e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20784));
label_493e4c:
    // 0x493e4c: 0xc115c24  jal         func_457090
label_493e50:
    if (ctx->pc == 0x493E50u) {
        ctx->pc = 0x493E54u;
        goto label_493e54;
    }
    ctx->pc = 0x493E4Cu;
    SET_GPR_U32(ctx, 31, 0x493E54u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x493E4Cu, 0x493E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493E54u;
label_493e54:
    // 0x493e54: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x493e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_493e58:
    // 0x493e58: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x493e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_493e5c:
    // 0x493e5c: 0x40f809  jalr        $v0
label_493e60:
    if (ctx->pc == 0x493E60u) {
        ctx->pc = 0x493E64u;
        goto label_493e64;
    }
    ctx->pc = 0x493E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x493E64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493E5Cu, 0x493E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x493E64u;
label_493e64:
    // 0x493e64: 0xaf82b720  sw          $v0, -0x48E0($gp)
    ctx->pc = 0x493e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948640), GPR_U32(ctx, 2));
label_493e68:
    // 0x493e68: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x493e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_493e6c:
    // 0x493e6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_493e70:
    if (ctx->pc == 0x493E70u) {
        ctx->pc = 0x493E74u;
        goto label_493e74;
    }
    ctx->pc = 0x493E6Cu;
    {
        const bool branch_taken_0x493e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493e6c) {
            ctx->pc = 0x493E7Cu;
            goto label_493e7c;
        }
    }
    ctx->pc = 0x493E74u;
label_493e74:
    // 0x493e74: 0xd  break       0
    ctx->pc = 0x493e74u;
    runtime->handleBreak(rdram, ctx);
label_493e78:
    // 0x493e78: 0x0  nop
    ctx->pc = 0x493e78u;
    // NOP
label_493e7c:
    // 0x493e7c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x493e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_493e80:
    // 0x493e80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x493e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_493e84:
    // 0x493e84: 0xc11392c  jal         func_44E4B0
label_493e88:
    if (ctx->pc == 0x493E88u) {
        ctx->pc = 0x493E8Cu;
        goto label_493e8c;
    }
    ctx->pc = 0x493E84u;
    SET_GPR_U32(ctx, 31, 0x493E8Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x493E84u, 0x493E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493E8Cu;
label_493e8c:
    // 0x493e8c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x493e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_493e90:
    // 0x493e90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x493e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_493e94:
    // 0x493e94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x493e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_493e98:
    // 0x493e98: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_493e9c:
    if (ctx->pc == 0x493E9Cu) {
        ctx->pc = 0x493EA0u;
        goto label_493ea0;
    }
    ctx->pc = 0x493E98u;
    {
        const bool branch_taken_0x493e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493e98) {
            ctx->pc = 0x493F48u;
            goto label_493f48;
        }
    }
    ctx->pc = 0x493EA0u;
label_493ea0:
    // 0x493ea0: 0x8f82b724  lw          $v0, -0x48DC($gp)
    ctx->pc = 0x493ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948644)));
label_493ea4:
    // 0x493ea4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_493ea8:
    if (ctx->pc == 0x493EA8u) {
        ctx->pc = 0x493EACu;
        goto label_493eac;
    }
    ctx->pc = 0x493EA4u;
    {
        const bool branch_taken_0x493ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493ea4) {
            ctx->pc = 0x493F48u;
            goto label_493f48;
        }
    }
    ctx->pc = 0x493EACu;
label_493eac:
    // 0x493eac: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x493eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_493eb0:
    // 0x493eb0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x493eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_493eb4:
    // 0x493eb4: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x493eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_493eb8:
    // 0x493eb8: 0xc115ee8  jal         func_457BA0
label_493ebc:
    if (ctx->pc == 0x493EBCu) {
        ctx->pc = 0x493EC0u;
        goto label_493ec0;
    }
    ctx->pc = 0x493EB8u;
    SET_GPR_U32(ctx, 31, 0x493EC0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x493EB8u, 0x493EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493EC0u;
label_493ec0:
    // 0x493ec0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_493ec4:
    if (ctx->pc == 0x493EC4u) {
        ctx->pc = 0x493EC8u;
        goto label_493ec8;
    }
    ctx->pc = 0x493EC0u;
    {
        const bool branch_taken_0x493ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493ec0) {
            ctx->pc = 0x493F48u;
            goto label_493f48;
        }
    }
    ctx->pc = 0x493EC8u;
label_493ec8:
    // 0x493ec8: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x493ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_493ecc:
    // 0x493ecc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_493ed0:
    if (ctx->pc == 0x493ED0u) {
        ctx->pc = 0x493ED4u;
        goto label_493ed4;
    }
    ctx->pc = 0x493ECCu;
    {
        const bool branch_taken_0x493ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493ecc) {
            ctx->pc = 0x493F48u;
            goto label_493f48;
        }
    }
    ctx->pc = 0x493ED4u;
label_493ed4:
    // 0x493ed4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x493ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_493ed8:
    // 0x493ed8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x493ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_493edc:
    // 0x493edc: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x493edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_493ee0:
    // 0x493ee0: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x493ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_493ee4:
    // 0x493ee4: 0x24e75080  addiu       $a3, $a3, 0x5080
    ctx->pc = 0x493ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20608));
label_493ee8:
    // 0x493ee8: 0x2408017a  addiu       $t0, $zero, 0x17A
    ctx->pc = 0x493ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 378));
label_493eec:
    // 0x493eec: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x493eecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_493ef0:
    // 0x493ef0: 0x25295170  addiu       $t1, $t1, 0x5170
    ctx->pc = 0x493ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20848));
label_493ef4:
    // 0x493ef4: 0xc113940  jal         func_44E500
label_493ef8:
    if (ctx->pc == 0x493EF8u) {
        ctx->pc = 0x493EFCu;
        goto label_493efc;
    }
    ctx->pc = 0x493EF4u;
    SET_GPR_U32(ctx, 31, 0x493EFCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x493EF4u, 0x493EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493EFCu;
label_493efc:
    // 0x493efc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x493efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_493f00:
    // 0x493f00: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x493f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_493f04:
    // 0x493f04: 0x24a55130  addiu       $a1, $a1, 0x5130
    ctx->pc = 0x493f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20784));
label_493f08:
    // 0x493f08: 0xc115c24  jal         func_457090
label_493f0c:
    if (ctx->pc == 0x493F0Cu) {
        ctx->pc = 0x493F10u;
        goto label_493f10;
    }
    ctx->pc = 0x493F08u;
    SET_GPR_U32(ctx, 31, 0x493F10u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x493F08u, 0x493F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493F10u;
label_493f10:
    // 0x493f10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x493f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_493f14:
    // 0x493f14: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x493f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_493f18:
    // 0x493f18: 0x40f809  jalr        $v0
label_493f1c:
    if (ctx->pc == 0x493F1Cu) {
        ctx->pc = 0x493F20u;
        goto label_493f20;
    }
    ctx->pc = 0x493F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x493F20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493F18u, 0x493F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x493F20u;
label_493f20:
    // 0x493f20: 0xaf82b724  sw          $v0, -0x48DC($gp)
    ctx->pc = 0x493f20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948644), GPR_U32(ctx, 2));
label_493f24:
    // 0x493f24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x493f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_493f28:
    // 0x493f28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_493f2c:
    if (ctx->pc == 0x493F2Cu) {
        ctx->pc = 0x493F30u;
        goto label_493f30;
    }
    ctx->pc = 0x493F28u;
    {
        const bool branch_taken_0x493f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493f28) {
            ctx->pc = 0x493F38u;
            goto label_493f38;
        }
    }
    ctx->pc = 0x493F30u;
label_493f30:
    // 0x493f30: 0xd  break       0
    ctx->pc = 0x493f30u;
    runtime->handleBreak(rdram, ctx);
label_493f34:
    // 0x493f34: 0x0  nop
    ctx->pc = 0x493f34u;
    // NOP
label_493f38:
    // 0x493f38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x493f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_493f3c:
    // 0x493f3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x493f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_493f40:
    // 0x493f40: 0xc11392c  jal         func_44E4B0
label_493f44:
    if (ctx->pc == 0x493F44u) {
        ctx->pc = 0x493F48u;
        goto label_493f48;
    }
    ctx->pc = 0x493F40u;
    SET_GPR_U32(ctx, 31, 0x493F48u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x493F40u, 0x493F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493F48u;
label_493f48:
    // 0x493f48: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x493f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_493f4c:
    // 0x493f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_493f50:
    if (ctx->pc == 0x493F50u) {
        ctx->pc = 0x493F54u;
        goto label_493f54;
    }
    ctx->pc = 0x493F4Cu;
    {
        const bool branch_taken_0x493f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493f4c) {
            ctx->pc = 0x493F60u;
            goto label_493f60;
        }
    }
    ctx->pc = 0x493F54u;
label_493f54:
    // 0x493f54: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x493f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_493f58:
    // 0x493f58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_493f5c:
    if (ctx->pc == 0x493F5Cu) {
        ctx->pc = 0x493F60u;
        goto label_493f60;
    }
    ctx->pc = 0x493F58u;
    {
        const bool branch_taken_0x493f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493f58) {
            ctx->pc = 0x493F6Cu;
            goto label_493f6c;
        }
    }
    ctx->pc = 0x493F60u;
label_493f60:
    // 0x493f60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x493f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_493f64:
    // 0x493f64: 0x1000000e  b           . + 4 + (0xE << 2)
label_493f68:
    if (ctx->pc == 0x493F68u) {
        ctx->pc = 0x493F6Cu;
        goto label_493f6c;
    }
    ctx->pc = 0x493F64u;
    {
        const bool branch_taken_0x493f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493f64) {
            ctx->pc = 0x493FA0u;
            goto label_493fa0;
        }
    }
    ctx->pc = 0x493F6Cu;
label_493f6c:
    // 0x493f6c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x493f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_493f70:
    // 0x493f70: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x493f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_493f74:
    // 0x493f74: 0x24847d70  addiu       $a0, $a0, 0x7D70
    ctx->pc = 0x493f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32112));
label_493f78:
    // 0x493f78: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x493f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_493f7c:
    // 0x493f7c: 0xc0bc5c6  jal         func_2F1718
label_493f80:
    if (ctx->pc == 0x493F80u) {
        ctx->pc = 0x493F84u;
        goto label_493f84;
    }
    ctx->pc = 0x493F7Cu;
    SET_GPR_U32(ctx, 31, 0x493F84u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x493F7Cu, 0x493F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493F84u;
label_493f84:
    // 0x493f84: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x493f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_493f88:
    // 0x493f88: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x493f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_493f8c:
    // 0x493f8c: 0x24a53c60  addiu       $a1, $a1, 0x3C60
    ctx->pc = 0x493f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15456));
label_493f90:
    // 0x493f90: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x493f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_493f94:
    // 0x493f94: 0xc1066c2  jal         func_419B08
label_493f98:
    if (ctx->pc == 0x493F98u) {
        ctx->pc = 0x493F9Cu;
        goto label_493f9c;
    }
    ctx->pc = 0x493F94u;
    SET_GPR_U32(ctx, 31, 0x493F9Cu);
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x493F94u, 0x493F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493F9Cu;
label_493f9c:
    // 0x493f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_493fa0:
    // 0x493fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x493fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_493fa4:
    // 0x493fa4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x493fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_493fa8:
    // 0x493fa8: 0x3e00008  jr          $ra
label_493fac:
    if (ctx->pc == 0x493FACu) {
        ctx->pc = 0x493FB0u;
        goto label_fallthrough_0x493fa8;
    }
    ctx->pc = 0x493FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x493fa8:
    ctx->pc = 0x493FB0u;
}
