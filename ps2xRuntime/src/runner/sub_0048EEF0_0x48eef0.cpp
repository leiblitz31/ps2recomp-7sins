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

// Function: sub_0048EEF0
// Address: 0x48eef0 - 0x48f120
void sub_0048EEF0_0x48eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EEF0_0x48eef0");
#endif

    switch (ctx->pc) {
        case 0x48eef0u: goto label_48eef0;
        case 0x48eef4u: goto label_48eef4;
        case 0x48eef8u: goto label_48eef8;
        case 0x48eefcu: goto label_48eefc;
        case 0x48ef00u: goto label_48ef00;
        case 0x48ef04u: goto label_48ef04;
        case 0x48ef08u: goto label_48ef08;
        case 0x48ef0cu: goto label_48ef0c;
        case 0x48ef10u: goto label_48ef10;
        case 0x48ef14u: goto label_48ef14;
        case 0x48ef18u: goto label_48ef18;
        case 0x48ef1cu: goto label_48ef1c;
        case 0x48ef20u: goto label_48ef20;
        case 0x48ef24u: goto label_48ef24;
        case 0x48ef28u: goto label_48ef28;
        case 0x48ef2cu: goto label_48ef2c;
        case 0x48ef30u: goto label_48ef30;
        case 0x48ef34u: goto label_48ef34;
        case 0x48ef38u: goto label_48ef38;
        case 0x48ef3cu: goto label_48ef3c;
        case 0x48ef40u: goto label_48ef40;
        case 0x48ef44u: goto label_48ef44;
        case 0x48ef48u: goto label_48ef48;
        case 0x48ef4cu: goto label_48ef4c;
        case 0x48ef50u: goto label_48ef50;
        case 0x48ef54u: goto label_48ef54;
        case 0x48ef58u: goto label_48ef58;
        case 0x48ef5cu: goto label_48ef5c;
        case 0x48ef60u: goto label_48ef60;
        case 0x48ef64u: goto label_48ef64;
        case 0x48ef68u: goto label_48ef68;
        case 0x48ef6cu: goto label_48ef6c;
        case 0x48ef70u: goto label_48ef70;
        case 0x48ef74u: goto label_48ef74;
        case 0x48ef78u: goto label_48ef78;
        case 0x48ef7cu: goto label_48ef7c;
        case 0x48ef80u: goto label_48ef80;
        case 0x48ef84u: goto label_48ef84;
        case 0x48ef88u: goto label_48ef88;
        case 0x48ef8cu: goto label_48ef8c;
        case 0x48ef90u: goto label_48ef90;
        case 0x48ef94u: goto label_48ef94;
        case 0x48ef98u: goto label_48ef98;
        case 0x48ef9cu: goto label_48ef9c;
        case 0x48efa0u: goto label_48efa0;
        case 0x48efa4u: goto label_48efa4;
        case 0x48efa8u: goto label_48efa8;
        case 0x48efacu: goto label_48efac;
        case 0x48efb0u: goto label_48efb0;
        case 0x48efb4u: goto label_48efb4;
        case 0x48efb8u: goto label_48efb8;
        case 0x48efbcu: goto label_48efbc;
        case 0x48efc0u: goto label_48efc0;
        case 0x48efc4u: goto label_48efc4;
        case 0x48efc8u: goto label_48efc8;
        case 0x48efccu: goto label_48efcc;
        case 0x48efd0u: goto label_48efd0;
        case 0x48efd4u: goto label_48efd4;
        case 0x48efd8u: goto label_48efd8;
        case 0x48efdcu: goto label_48efdc;
        case 0x48efe0u: goto label_48efe0;
        case 0x48efe4u: goto label_48efe4;
        case 0x48efe8u: goto label_48efe8;
        case 0x48efecu: goto label_48efec;
        case 0x48eff0u: goto label_48eff0;
        case 0x48eff4u: goto label_48eff4;
        case 0x48eff8u: goto label_48eff8;
        case 0x48effcu: goto label_48effc;
        case 0x48f000u: goto label_48f000;
        case 0x48f004u: goto label_48f004;
        case 0x48f008u: goto label_48f008;
        case 0x48f00cu: goto label_48f00c;
        case 0x48f010u: goto label_48f010;
        case 0x48f014u: goto label_48f014;
        case 0x48f018u: goto label_48f018;
        case 0x48f01cu: goto label_48f01c;
        case 0x48f020u: goto label_48f020;
        case 0x48f024u: goto label_48f024;
        case 0x48f028u: goto label_48f028;
        case 0x48f02cu: goto label_48f02c;
        case 0x48f030u: goto label_48f030;
        case 0x48f034u: goto label_48f034;
        case 0x48f038u: goto label_48f038;
        case 0x48f03cu: goto label_48f03c;
        case 0x48f040u: goto label_48f040;
        case 0x48f044u: goto label_48f044;
        case 0x48f048u: goto label_48f048;
        case 0x48f04cu: goto label_48f04c;
        case 0x48f050u: goto label_48f050;
        case 0x48f054u: goto label_48f054;
        case 0x48f058u: goto label_48f058;
        case 0x48f05cu: goto label_48f05c;
        case 0x48f060u: goto label_48f060;
        case 0x48f064u: goto label_48f064;
        case 0x48f068u: goto label_48f068;
        case 0x48f06cu: goto label_48f06c;
        case 0x48f070u: goto label_48f070;
        case 0x48f074u: goto label_48f074;
        case 0x48f078u: goto label_48f078;
        case 0x48f07cu: goto label_48f07c;
        case 0x48f080u: goto label_48f080;
        case 0x48f084u: goto label_48f084;
        case 0x48f088u: goto label_48f088;
        case 0x48f08cu: goto label_48f08c;
        case 0x48f090u: goto label_48f090;
        case 0x48f094u: goto label_48f094;
        case 0x48f098u: goto label_48f098;
        case 0x48f09cu: goto label_48f09c;
        case 0x48f0a0u: goto label_48f0a0;
        case 0x48f0a4u: goto label_48f0a4;
        case 0x48f0a8u: goto label_48f0a8;
        case 0x48f0acu: goto label_48f0ac;
        case 0x48f0b0u: goto label_48f0b0;
        case 0x48f0b4u: goto label_48f0b4;
        case 0x48f0b8u: goto label_48f0b8;
        case 0x48f0bcu: goto label_48f0bc;
        case 0x48f0c0u: goto label_48f0c0;
        case 0x48f0c4u: goto label_48f0c4;
        case 0x48f0c8u: goto label_48f0c8;
        case 0x48f0ccu: goto label_48f0cc;
        case 0x48f0d0u: goto label_48f0d0;
        case 0x48f0d4u: goto label_48f0d4;
        case 0x48f0d8u: goto label_48f0d8;
        case 0x48f0dcu: goto label_48f0dc;
        case 0x48f0e0u: goto label_48f0e0;
        case 0x48f0e4u: goto label_48f0e4;
        case 0x48f0e8u: goto label_48f0e8;
        case 0x48f0ecu: goto label_48f0ec;
        case 0x48f0f0u: goto label_48f0f0;
        case 0x48f0f4u: goto label_48f0f4;
        case 0x48f0f8u: goto label_48f0f8;
        case 0x48f0fcu: goto label_48f0fc;
        case 0x48f100u: goto label_48f100;
        case 0x48f104u: goto label_48f104;
        case 0x48f108u: goto label_48f108;
        case 0x48f10cu: goto label_48f10c;
        case 0x48f110u: goto label_48f110;
        case 0x48f114u: goto label_48f114;
        case 0x48f118u: goto label_48f118;
        case 0x48f11cu: goto label_48f11c;
        default: break;
    }

    ctx->pc = 0x48eef0u;

label_48eef0:
    // 0x48eef0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x48eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_48eef4:
    // 0x48eef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48eef8:
    // 0x48eef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48eefc:
    // 0x48eefc: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x48eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_48ef00:
    // 0x48ef00: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x48ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_48ef04:
    // 0x48ef04: 0x8f83b690  lw          $v1, -0x4970($gp)
    ctx->pc = 0x48ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948496)));
label_48ef08:
    // 0x48ef08: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_48ef0c:
    if (ctx->pc == 0x48EF0Cu) {
        ctx->pc = 0x48EF10u;
        goto label_48ef10;
    }
    ctx->pc = 0x48EF08u;
    {
        const bool branch_taken_0x48ef08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ef08) {
            ctx->pc = 0x48EFA8u;
            goto label_48efa8;
        }
    }
    ctx->pc = 0x48EF10u;
label_48ef10:
    // 0x48ef10: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48ef14:
    // 0x48ef14: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48ef18:
    // 0x48ef18: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x48ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48ef1c:
    // 0x48ef1c: 0xc115ee8  jal         func_457BA0
label_48ef20:
    if (ctx->pc == 0x48EF20u) {
        ctx->pc = 0x48EF24u;
        goto label_48ef24;
    }
    ctx->pc = 0x48EF1Cu;
    SET_GPR_U32(ctx, 31, 0x48EF24u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48EF1Cu, 0x48EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EF24u;
label_48ef24:
    // 0x48ef24: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48ef28:
    if (ctx->pc == 0x48EF28u) {
        ctx->pc = 0x48EF2Cu;
        goto label_48ef2c;
    }
    ctx->pc = 0x48EF24u;
    {
        const bool branch_taken_0x48ef24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ef24) {
            ctx->pc = 0x48EFA8u;
            goto label_48efa8;
        }
    }
    ctx->pc = 0x48EF2Cu;
label_48ef2c:
    // 0x48ef2c: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x48ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_48ef30:
    // 0x48ef30: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_48ef34:
    if (ctx->pc == 0x48EF34u) {
        ctx->pc = 0x48EF38u;
        goto label_48ef38;
    }
    ctx->pc = 0x48EF30u;
    {
        const bool branch_taken_0x48ef30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ef30) {
            ctx->pc = 0x48EFA8u;
            goto label_48efa8;
        }
    }
    ctx->pc = 0x48EF38u;
label_48ef38:
    // 0x48ef38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48ef3c:
    // 0x48ef3c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48ef40:
    // 0x48ef40: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x48ef40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_48ef44:
    // 0x48ef44: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48ef44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48ef48:
    // 0x48ef48: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x48ef48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
label_48ef4c:
    // 0x48ef4c: 0x240800b2  addiu       $t0, $zero, 0xB2
    ctx->pc = 0x48ef4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_48ef50:
    // 0x48ef50: 0x2789b698  addiu       $t1, $gp, -0x4968
    ctx->pc = 0x48ef50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948504));
label_48ef54:
    // 0x48ef54: 0xc113940  jal         func_44E500
label_48ef58:
    if (ctx->pc == 0x48EF58u) {
        ctx->pc = 0x48EF5Cu;
        goto label_48ef5c;
    }
    ctx->pc = 0x48EF54u;
    SET_GPR_U32(ctx, 31, 0x48EF5Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48EF54u, 0x48EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EF5Cu;
label_48ef5c:
    // 0x48ef5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48ef60:
    // 0x48ef60: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48ef64:
    // 0x48ef64: 0x24a54ec0  addiu       $a1, $a1, 0x4EC0
    ctx->pc = 0x48ef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20160));
label_48ef68:
    // 0x48ef68: 0xc115c24  jal         func_457090
label_48ef6c:
    if (ctx->pc == 0x48EF6Cu) {
        ctx->pc = 0x48EF70u;
        goto label_48ef70;
    }
    ctx->pc = 0x48EF68u;
    SET_GPR_U32(ctx, 31, 0x48EF70u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48EF68u, 0x48EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EF70u;
label_48ef70:
    // 0x48ef70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48ef74:
    // 0x48ef74: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x48ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_48ef78:
    // 0x48ef78: 0x40f809  jalr        $v0
label_48ef7c:
    if (ctx->pc == 0x48EF7Cu) {
        ctx->pc = 0x48EF80u;
        goto label_48ef80;
    }
    ctx->pc = 0x48EF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48EF80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EF78u, 0x48EF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48EF80u;
label_48ef80:
    // 0x48ef80: 0xaf82b690  sw          $v0, -0x4970($gp)
    ctx->pc = 0x48ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948496), GPR_U32(ctx, 2));
label_48ef84:
    // 0x48ef84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_48ef88:
    // 0x48ef88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48ef8c:
    if (ctx->pc == 0x48EF8Cu) {
        ctx->pc = 0x48EF90u;
        goto label_48ef90;
    }
    ctx->pc = 0x48EF88u;
    {
        const bool branch_taken_0x48ef88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ef88) {
            ctx->pc = 0x48EF98u;
            goto label_48ef98;
        }
    }
    ctx->pc = 0x48EF90u;
label_48ef90:
    // 0x48ef90: 0xd  break       0
    ctx->pc = 0x48ef90u;
    runtime->handleBreak(rdram, ctx);
label_48ef94:
    // 0x48ef94: 0x0  nop
    ctx->pc = 0x48ef94u;
    // NOP
label_48ef98:
    // 0x48ef98: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48ef9c:
    // 0x48ef9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48efa0:
    // 0x48efa0: 0xc11392c  jal         func_44E4B0
label_48efa4:
    if (ctx->pc == 0x48EFA4u) {
        ctx->pc = 0x48EFA8u;
        goto label_48efa8;
    }
    ctx->pc = 0x48EFA0u;
    SET_GPR_U32(ctx, 31, 0x48EFA8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48EFA0u, 0x48EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EFA8u;
label_48efa8:
    // 0x48efa8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x48efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48efac:
    // 0x48efac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_48efb0:
    if (ctx->pc == 0x48EFB0u) {
        ctx->pc = 0x48EFB4u;
        goto label_48efb4;
    }
    ctx->pc = 0x48EFACu;
    {
        const bool branch_taken_0x48efac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48efac) {
            ctx->pc = 0x48EFC4u;
            goto label_48efc4;
        }
    }
    ctx->pc = 0x48EFB4u;
label_48efb4:
    // 0x48efb4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x48efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48efb8:
    // 0x48efb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48efbc:
    // 0x48efbc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_48efc0:
    if (ctx->pc == 0x48EFC0u) {
        ctx->pc = 0x48EFC4u;
        goto label_48efc4;
    }
    ctx->pc = 0x48EFBCu;
    {
        const bool branch_taken_0x48efbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48efbc) {
            ctx->pc = 0x48EFCCu;
            goto label_48efcc;
        }
    }
    ctx->pc = 0x48EFC4u;
label_48efc4:
    // 0x48efc4: 0x10000051  b           . + 4 + (0x51 << 2)
label_48efc8:
    if (ctx->pc == 0x48EFC8u) {
        ctx->pc = 0x48EFCCu;
        goto label_48efcc;
    }
    ctx->pc = 0x48EFC4u;
    {
        const bool branch_taken_0x48efc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48efc4) {
            ctx->pc = 0x48F10Cu;
            goto label_48f10c;
        }
    }
    ctx->pc = 0x48EFCCu;
label_48efcc:
    // 0x48efcc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48efd0:
    // 0x48efd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48efd4:
    // 0x48efd4: 0xc123464  jal         func_48D190
label_48efd8:
    if (ctx->pc == 0x48EFD8u) {
        ctx->pc = 0x48EFDCu;
        goto label_48efdc;
    }
    ctx->pc = 0x48EFD4u;
    SET_GPR_U32(ctx, 31, 0x48EFDCu);
    ctx->pc = 0x48D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D190u, 0x48EFD4u, 0x48EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EFDCu;
label_48efdc:
    // 0x48efdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48efe0:
    // 0x48efe0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_48efe4:
    if (ctx->pc == 0x48EFE4u) {
        ctx->pc = 0x48EFE8u;
        goto label_48efe8;
    }
    ctx->pc = 0x48EFE0u;
    {
        const bool branch_taken_0x48efe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x48efe0) {
            ctx->pc = 0x48F008u;
            goto label_48f008;
        }
    }
    ctx->pc = 0x48EFE8u;
label_48efe8:
    // 0x48efe8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48efec:
    // 0x48efec: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x48efecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48eff0:
    // 0x48eff0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x48eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48eff4:
    // 0x48eff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48eff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48eff8:
    // 0x48eff8: 0xc123e4c  jal         func_48F930
label_48effc:
    if (ctx->pc == 0x48EFFCu) {
        ctx->pc = 0x48F000u;
        goto label_48f000;
    }
    ctx->pc = 0x48EFF8u;
    SET_GPR_U32(ctx, 31, 0x48F000u);
    ctx->pc = 0x48F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F930u, 0x48EFF8u, 0x48F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F000u;
label_48f000:
    // 0x48f000: 0x10000042  b           . + 4 + (0x42 << 2)
label_48f004:
    if (ctx->pc == 0x48F004u) {
        ctx->pc = 0x48F008u;
        goto label_48f008;
    }
    ctx->pc = 0x48F000u;
    {
        const bool branch_taken_0x48f000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f000) {
            ctx->pc = 0x48F10Cu;
            goto label_48f10c;
        }
    }
    ctx->pc = 0x48F008u;
label_48f008:
    // 0x48f008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48f008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f00c:
    // 0x48f00c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48f010:
    // 0x48f010: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x48f010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_48f014:
    // 0x48f014: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48f014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_48f018:
    // 0x48f018: 0xc123940  jal         func_48E500
label_48f01c:
    if (ctx->pc == 0x48F01Cu) {
        ctx->pc = 0x48F020u;
        goto label_48f020;
    }
    ctx->pc = 0x48F018u;
    SET_GPR_U32(ctx, 31, 0x48F020u);
    ctx->pc = 0x48E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E500u, 0x48F018u, 0x48F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F020u;
label_48f020:
    // 0x48f020: 0x1000002d  b           . + 4 + (0x2D << 2)
label_48f024:
    if (ctx->pc == 0x48F024u) {
        ctx->pc = 0x48F028u;
        goto label_48f028;
    }
    ctx->pc = 0x48F020u;
    {
        const bool branch_taken_0x48f020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f020) {
            ctx->pc = 0x48F0D8u;
            goto label_48f0d8;
        }
    }
    ctx->pc = 0x48F028u;
label_48f028:
    // 0x48f028: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x48f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_48f02c:
    // 0x48f02c: 0xc123ba8  jal         func_48EEA0
label_48f030:
    if (ctx->pc == 0x48F030u) {
        ctx->pc = 0x48F034u;
        goto label_48f034;
    }
    ctx->pc = 0x48F02Cu;
    SET_GPR_U32(ctx, 31, 0x48F034u);
    ctx->pc = 0x48EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EEA0u, 0x48F02Cu, 0x48F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F034u;
label_48f034:
    // 0x48f034: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x48f034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_48f038:
    // 0x48f038: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48f03c:
    // 0x48f03c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48f040:
    // 0x48f040: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_48f044:
    if (ctx->pc == 0x48F044u) {
        ctx->pc = 0x48F048u;
        goto label_48f048;
    }
    ctx->pc = 0x48F040u;
    {
        const bool branch_taken_0x48f040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48f040) {
            ctx->pc = 0x48F0CCu;
            goto label_48f0cc;
        }
    }
    ctx->pc = 0x48F048u;
label_48f048:
    // 0x48f048: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x48f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_48f04c:
    // 0x48f04c: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x48f04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_48f050:
    // 0x48f050: 0xc123c74  jal         func_48F1D0
label_48f054:
    if (ctx->pc == 0x48F054u) {
        ctx->pc = 0x48F058u;
        goto label_48f058;
    }
    ctx->pc = 0x48F050u;
    SET_GPR_U32(ctx, 31, 0x48F058u);
    ctx->pc = 0x48F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F1D0u, 0x48F050u, 0x48F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F058u;
label_48f058:
    // 0x48f058: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x48f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48f05c:
    // 0x48f05c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x48f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_48f060:
    // 0x48f060: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48f060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48f064:
    // 0x48f064: 0xc123c64  jal         func_48F190
label_48f068:
    if (ctx->pc == 0x48F068u) {
        ctx->pc = 0x48F06Cu;
        goto label_48f06c;
    }
    ctx->pc = 0x48F064u;
    SET_GPR_U32(ctx, 31, 0x48F06Cu);
    ctx->pc = 0x48F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F190u, 0x48F064u, 0x48F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F06Cu;
label_48f06c:
    // 0x48f06c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48f070:
    // 0x48f070: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48f070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48f074:
    // 0x48f074: 0xc123464  jal         func_48D190
label_48f078:
    if (ctx->pc == 0x48F078u) {
        ctx->pc = 0x48F07Cu;
        goto label_48f07c;
    }
    ctx->pc = 0x48F074u;
    SET_GPR_U32(ctx, 31, 0x48F07Cu);
    ctx->pc = 0x48D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D190u, 0x48F074u, 0x48F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F07Cu;
label_48f07c:
    // 0x48f07c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x48f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48f080:
    // 0x48f080: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_48f084:
    if (ctx->pc == 0x48F084u) {
        ctx->pc = 0x48F088u;
        goto label_48f088;
    }
    ctx->pc = 0x48F080u;
    {
        const bool branch_taken_0x48f080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x48f080) {
            ctx->pc = 0x48F0C0u;
            goto label_48f0c0;
        }
    }
    ctx->pc = 0x48F088u;
label_48f088:
    // 0x48f088: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x48f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48f08c:
    // 0x48f08c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48f090:
    // 0x48f090: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_48f094:
    if (ctx->pc == 0x48F094u) {
        ctx->pc = 0x48F098u;
        goto label_48f098;
    }
    ctx->pc = 0x48F090u;
    {
        const bool branch_taken_0x48f090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f090) {
            ctx->pc = 0x48F0C0u;
            goto label_48f0c0;
        }
    }
    ctx->pc = 0x48F098u;
label_48f098:
    // 0x48f098: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48f09c:
    // 0x48f09c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48f0a0:
    // 0x48f0a0: 0xc082d24  jal         func_20B490
label_48f0a4:
    if (ctx->pc == 0x48F0A4u) {
        ctx->pc = 0x48F0A8u;
        goto label_48f0a8;
    }
    ctx->pc = 0x48F0A0u;
    SET_GPR_U32(ctx, 31, 0x48F0A8u);
    ctx->pc = 0x20B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B490u, 0x48F0A0u, 0x48F0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F0A8u;
label_48f0a8:
    // 0x48f0a8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48f0ac:
    // 0x48f0ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48f0b0:
    // 0x48f0b0: 0xc119c5c  jal         func_467170
label_48f0b4:
    if (ctx->pc == 0x48F0B4u) {
        ctx->pc = 0x48F0B8u;
        goto label_48f0b8;
    }
    ctx->pc = 0x48F0B0u;
    SET_GPR_U32(ctx, 31, 0x48F0B8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x48F0B0u, 0x48F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F0B8u;
label_48f0b8:
    // 0x48f0b8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x48f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48f0bc:
    // 0x48f0bc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x48f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_48f0c0:
    // 0x48f0c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x48f0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f0c4:
    // 0x48f0c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_48f0c8:
    if (ctx->pc == 0x48F0C8u) {
        ctx->pc = 0x48F0CCu;
        goto label_48f0cc;
    }
    ctx->pc = 0x48F0C4u;
    {
        const bool branch_taken_0x48f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f0c4) {
            ctx->pc = 0x48F0D8u;
            goto label_48f0d8;
        }
    }
    ctx->pc = 0x48F0CCu;
label_48f0cc:
    // 0x48f0cc: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x48f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_48f0d0:
    // 0x48f0d0: 0xc123c48  jal         func_48F120
label_48f0d4:
    if (ctx->pc == 0x48F0D4u) {
        ctx->pc = 0x48F0D8u;
        goto label_48f0d8;
    }
    ctx->pc = 0x48F0D0u;
    SET_GPR_U32(ctx, 31, 0x48F0D8u);
    ctx->pc = 0x48F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F120u, 0x48F0D0u, 0x48F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F0D8u;
label_48f0d8:
    // 0x48f0d8: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_48f0dc:
    if (ctx->pc == 0x48F0DCu) {
        ctx->pc = 0x48F0E0u;
        goto label_48f0e0;
    }
    ctx->pc = 0x48F0D8u;
    {
        const bool branch_taken_0x48f0d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f0d8) {
            ctx->pc = 0x48F10Cu;
            goto label_48f10c;
        }
    }
    ctx->pc = 0x48F0E0u;
label_48f0e0:
    // 0x48f0e0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48f0e4:
    // 0x48f0e4: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x48f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_48f0e8:
    // 0x48f0e8: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48f0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_48f0ec:
    // 0x48f0ec: 0xc1238e0  jal         func_48E380
label_48f0f0:
    if (ctx->pc == 0x48F0F0u) {
        ctx->pc = 0x48F0F4u;
        goto label_48f0f4;
    }
    ctx->pc = 0x48F0ECu;
    SET_GPR_U32(ctx, 31, 0x48F0F4u);
    ctx->pc = 0x48E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E380u, 0x48F0ECu, 0x48F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F0F4u;
label_48f0f4:
    // 0x48f0f4: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x48f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_48f0f8:
    // 0x48f0f8: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x48f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_48f0fc:
    // 0x48f0fc: 0xc1238d4  jal         func_48E350
label_48f100:
    if (ctx->pc == 0x48F100u) {
        ctx->pc = 0x48F104u;
        goto label_48f104;
    }
    ctx->pc = 0x48F0FCu;
    SET_GPR_U32(ctx, 31, 0x48F104u);
    ctx->pc = 0x48E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E350u, 0x48F0FCu, 0x48F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F104u;
label_48f104:
    // 0x48f104: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_48f108:
    if (ctx->pc == 0x48F108u) {
        ctx->pc = 0x48F10Cu;
        goto label_48f10c;
    }
    ctx->pc = 0x48F104u;
    {
        const bool branch_taken_0x48f104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f104) {
            ctx->pc = 0x48F028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f028;
        }
    }
    ctx->pc = 0x48F10Cu;
label_48f10c:
    // 0x48f10c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48f10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48f110:
    // 0x48f110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48f110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48f114:
    // 0x48f114: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x48f114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_48f118:
    // 0x48f118: 0x3e00008  jr          $ra
label_48f11c:
    if (ctx->pc == 0x48F11Cu) {
        ctx->pc = 0x48F120u;
        goto label_fallthrough_0x48f118;
    }
    ctx->pc = 0x48F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48f118:
    ctx->pc = 0x48F120u;
}
