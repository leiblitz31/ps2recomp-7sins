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

// Function: sub_00486EC0
// Address: 0x486ec0 - 0x487190
void sub_00486EC0_0x486ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486EC0_0x486ec0");
#endif

    switch (ctx->pc) {
        case 0x486ec0u: goto label_486ec0;
        case 0x486ec4u: goto label_486ec4;
        case 0x486ec8u: goto label_486ec8;
        case 0x486eccu: goto label_486ecc;
        case 0x486ed0u: goto label_486ed0;
        case 0x486ed4u: goto label_486ed4;
        case 0x486ed8u: goto label_486ed8;
        case 0x486edcu: goto label_486edc;
        case 0x486ee0u: goto label_486ee0;
        case 0x486ee4u: goto label_486ee4;
        case 0x486ee8u: goto label_486ee8;
        case 0x486eecu: goto label_486eec;
        case 0x486ef0u: goto label_486ef0;
        case 0x486ef4u: goto label_486ef4;
        case 0x486ef8u: goto label_486ef8;
        case 0x486efcu: goto label_486efc;
        case 0x486f00u: goto label_486f00;
        case 0x486f04u: goto label_486f04;
        case 0x486f08u: goto label_486f08;
        case 0x486f0cu: goto label_486f0c;
        case 0x486f10u: goto label_486f10;
        case 0x486f14u: goto label_486f14;
        case 0x486f18u: goto label_486f18;
        case 0x486f1cu: goto label_486f1c;
        case 0x486f20u: goto label_486f20;
        case 0x486f24u: goto label_486f24;
        case 0x486f28u: goto label_486f28;
        case 0x486f2cu: goto label_486f2c;
        case 0x486f30u: goto label_486f30;
        case 0x486f34u: goto label_486f34;
        case 0x486f38u: goto label_486f38;
        case 0x486f3cu: goto label_486f3c;
        case 0x486f40u: goto label_486f40;
        case 0x486f44u: goto label_486f44;
        case 0x486f48u: goto label_486f48;
        case 0x486f4cu: goto label_486f4c;
        case 0x486f50u: goto label_486f50;
        case 0x486f54u: goto label_486f54;
        case 0x486f58u: goto label_486f58;
        case 0x486f5cu: goto label_486f5c;
        case 0x486f60u: goto label_486f60;
        case 0x486f64u: goto label_486f64;
        case 0x486f68u: goto label_486f68;
        case 0x486f6cu: goto label_486f6c;
        case 0x486f70u: goto label_486f70;
        case 0x486f74u: goto label_486f74;
        case 0x486f78u: goto label_486f78;
        case 0x486f7cu: goto label_486f7c;
        case 0x486f80u: goto label_486f80;
        case 0x486f84u: goto label_486f84;
        case 0x486f88u: goto label_486f88;
        case 0x486f8cu: goto label_486f8c;
        case 0x486f90u: goto label_486f90;
        case 0x486f94u: goto label_486f94;
        case 0x486f98u: goto label_486f98;
        case 0x486f9cu: goto label_486f9c;
        case 0x486fa0u: goto label_486fa0;
        case 0x486fa4u: goto label_486fa4;
        case 0x486fa8u: goto label_486fa8;
        case 0x486facu: goto label_486fac;
        case 0x486fb0u: goto label_486fb0;
        case 0x486fb4u: goto label_486fb4;
        case 0x486fb8u: goto label_486fb8;
        case 0x486fbcu: goto label_486fbc;
        case 0x486fc0u: goto label_486fc0;
        case 0x486fc4u: goto label_486fc4;
        case 0x486fc8u: goto label_486fc8;
        case 0x486fccu: goto label_486fcc;
        case 0x486fd0u: goto label_486fd0;
        case 0x486fd4u: goto label_486fd4;
        case 0x486fd8u: goto label_486fd8;
        case 0x486fdcu: goto label_486fdc;
        case 0x486fe0u: goto label_486fe0;
        case 0x486fe4u: goto label_486fe4;
        case 0x486fe8u: goto label_486fe8;
        case 0x486fecu: goto label_486fec;
        case 0x486ff0u: goto label_486ff0;
        case 0x486ff4u: goto label_486ff4;
        case 0x486ff8u: goto label_486ff8;
        case 0x486ffcu: goto label_486ffc;
        case 0x487000u: goto label_487000;
        case 0x487004u: goto label_487004;
        case 0x487008u: goto label_487008;
        case 0x48700cu: goto label_48700c;
        case 0x487010u: goto label_487010;
        case 0x487014u: goto label_487014;
        case 0x487018u: goto label_487018;
        case 0x48701cu: goto label_48701c;
        case 0x487020u: goto label_487020;
        case 0x487024u: goto label_487024;
        case 0x487028u: goto label_487028;
        case 0x48702cu: goto label_48702c;
        case 0x487030u: goto label_487030;
        case 0x487034u: goto label_487034;
        case 0x487038u: goto label_487038;
        case 0x48703cu: goto label_48703c;
        case 0x487040u: goto label_487040;
        case 0x487044u: goto label_487044;
        case 0x487048u: goto label_487048;
        case 0x48704cu: goto label_48704c;
        case 0x487050u: goto label_487050;
        case 0x487054u: goto label_487054;
        case 0x487058u: goto label_487058;
        case 0x48705cu: goto label_48705c;
        case 0x487060u: goto label_487060;
        case 0x487064u: goto label_487064;
        case 0x487068u: goto label_487068;
        case 0x48706cu: goto label_48706c;
        case 0x487070u: goto label_487070;
        case 0x487074u: goto label_487074;
        case 0x487078u: goto label_487078;
        case 0x48707cu: goto label_48707c;
        case 0x487080u: goto label_487080;
        case 0x487084u: goto label_487084;
        case 0x487088u: goto label_487088;
        case 0x48708cu: goto label_48708c;
        case 0x487090u: goto label_487090;
        case 0x487094u: goto label_487094;
        case 0x487098u: goto label_487098;
        case 0x48709cu: goto label_48709c;
        case 0x4870a0u: goto label_4870a0;
        case 0x4870a4u: goto label_4870a4;
        case 0x4870a8u: goto label_4870a8;
        case 0x4870acu: goto label_4870ac;
        case 0x4870b0u: goto label_4870b0;
        case 0x4870b4u: goto label_4870b4;
        case 0x4870b8u: goto label_4870b8;
        case 0x4870bcu: goto label_4870bc;
        case 0x4870c0u: goto label_4870c0;
        case 0x4870c4u: goto label_4870c4;
        case 0x4870c8u: goto label_4870c8;
        case 0x4870ccu: goto label_4870cc;
        case 0x4870d0u: goto label_4870d0;
        case 0x4870d4u: goto label_4870d4;
        case 0x4870d8u: goto label_4870d8;
        case 0x4870dcu: goto label_4870dc;
        case 0x4870e0u: goto label_4870e0;
        case 0x4870e4u: goto label_4870e4;
        case 0x4870e8u: goto label_4870e8;
        case 0x4870ecu: goto label_4870ec;
        case 0x4870f0u: goto label_4870f0;
        case 0x4870f4u: goto label_4870f4;
        case 0x4870f8u: goto label_4870f8;
        case 0x4870fcu: goto label_4870fc;
        case 0x487100u: goto label_487100;
        case 0x487104u: goto label_487104;
        case 0x487108u: goto label_487108;
        case 0x48710cu: goto label_48710c;
        case 0x487110u: goto label_487110;
        case 0x487114u: goto label_487114;
        case 0x487118u: goto label_487118;
        case 0x48711cu: goto label_48711c;
        case 0x487120u: goto label_487120;
        case 0x487124u: goto label_487124;
        case 0x487128u: goto label_487128;
        case 0x48712cu: goto label_48712c;
        case 0x487130u: goto label_487130;
        case 0x487134u: goto label_487134;
        case 0x487138u: goto label_487138;
        case 0x48713cu: goto label_48713c;
        case 0x487140u: goto label_487140;
        case 0x487144u: goto label_487144;
        case 0x487148u: goto label_487148;
        case 0x48714cu: goto label_48714c;
        case 0x487150u: goto label_487150;
        case 0x487154u: goto label_487154;
        case 0x487158u: goto label_487158;
        case 0x48715cu: goto label_48715c;
        case 0x487160u: goto label_487160;
        case 0x487164u: goto label_487164;
        case 0x487168u: goto label_487168;
        case 0x48716cu: goto label_48716c;
        case 0x487170u: goto label_487170;
        case 0x487174u: goto label_487174;
        case 0x487178u: goto label_487178;
        case 0x48717cu: goto label_48717c;
        case 0x487180u: goto label_487180;
        case 0x487184u: goto label_487184;
        case 0x487188u: goto label_487188;
        case 0x48718cu: goto label_48718c;
        default: break;
    }

    ctx->pc = 0x486ec0u;

label_486ec0:
    // 0x486ec0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x486ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_486ec4:
    // 0x486ec4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x486ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_486ec8:
    // 0x486ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x486ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_486ecc:
    // 0x486ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_486ed0:
    // 0x486ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486ed4:
    // 0x486ed4: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x486ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_486ed8:
    // 0x486ed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x486ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486edc:
    // 0x486edc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x486edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486ee0:
    // 0x486ee0: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x486ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486ee4:
    // 0x486ee4: 0x90630072  lbu         $v1, 0x72($v1)
    ctx->pc = 0x486ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 114)));
label_486ee8:
    // 0x486ee8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_486eec:
    if (ctx->pc == 0x486EECu) {
        ctx->pc = 0x486EF0u;
        goto label_486ef0;
    }
    ctx->pc = 0x486EE8u;
    {
        const bool branch_taken_0x486ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486ee8) {
            ctx->pc = 0x486F08u;
            goto label_486f08;
        }
    }
    ctx->pc = 0x486EF0u;
label_486ef0:
    // 0x486ef0: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x486ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486ef4:
    // 0x486ef4: 0x8c70007c  lw          $s0, 0x7C($v1)
    ctx->pc = 0x486ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_486ef8:
    // 0x486ef8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x486ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486efc:
    // 0x486efc: 0x8c710078  lw          $s1, 0x78($v1)
    ctx->pc = 0x486efcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_486f00:
    // 0x486f00: 0x10000005  b           . + 4 + (0x5 << 2)
label_486f04:
    if (ctx->pc == 0x486F04u) {
        ctx->pc = 0x486F08u;
        goto label_486f08;
    }
    ctx->pc = 0x486F00u;
    {
        const bool branch_taken_0x486f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486f00) {
            ctx->pc = 0x486F18u;
            goto label_486f18;
        }
    }
    ctx->pc = 0x486F08u;
label_486f08:
    // 0x486f08: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x486f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f0c:
    // 0x486f0c: 0x8c700078  lw          $s0, 0x78($v1)
    ctx->pc = 0x486f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_486f10:
    // 0x486f10: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x486f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f14:
    // 0x486f14: 0x8c71007c  lw          $s1, 0x7C($v1)
    ctx->pc = 0x486f14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_486f18:
    // 0x486f18: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x486f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f1c:
    // 0x486f1c: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x486f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_486f20:
    // 0x486f20: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_486f24:
    if (ctx->pc == 0x486F24u) {
        ctx->pc = 0x486F28u;
        goto label_486f28;
    }
    ctx->pc = 0x486F20u;
    {
        const bool branch_taken_0x486f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486f20) {
            ctx->pc = 0x487174u;
            goto label_487174;
        }
    }
    ctx->pc = 0x486F28u;
label_486f28:
    // 0x486f28: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x486f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f2c:
    // 0x486f2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x486f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_486f30:
    // 0x486f30: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x486f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f34:
    // 0x486f34: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x486f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_486f38:
    // 0x486f38: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x486f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f3c:
    // 0x486f3c: 0xc1218e8  jal         func_4863A0
label_486f40:
    if (ctx->pc == 0x486F40u) {
        ctx->pc = 0x486F44u;
        goto label_486f44;
    }
    ctx->pc = 0x486F3Cu;
    SET_GPR_U32(ctx, 31, 0x486F44u);
    ctx->pc = 0x4863A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4863A0u, 0x486F3Cu, 0x486F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486F44u;
label_486f44:
    // 0x486f44: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x486f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f48:
    // 0x486f48: 0xc1218fc  jal         func_4863F0
label_486f4c:
    if (ctx->pc == 0x486F4Cu) {
        ctx->pc = 0x486F50u;
        goto label_486f50;
    }
    ctx->pc = 0x486F48u;
    SET_GPR_U32(ctx, 31, 0x486F50u);
    ctx->pc = 0x4863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4863F0u, 0x486F48u, 0x486F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486F50u;
label_486f50:
    // 0x486f50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x486f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_486f54:
    // 0x486f54: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x486f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f58:
    // 0x486f58: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x486f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_486f5c:
    // 0x486f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x486f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486f60:
    // 0x486f60: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_486f64:
    if (ctx->pc == 0x486F64u) {
        ctx->pc = 0x486F68u;
        goto label_486f68;
    }
    ctx->pc = 0x486F60u;
    {
        const bool branch_taken_0x486f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x486f60) {
            ctx->pc = 0x486FB0u;
            goto label_486fb0;
        }
    }
    ctx->pc = 0x486F68u;
label_486f68:
    // 0x486f68: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x486f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f6c:
    // 0x486f6c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x486f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_486f70:
    // 0x486f70: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_486f74:
    if (ctx->pc == 0x486F74u) {
        ctx->pc = 0x486F78u;
        goto label_486f78;
    }
    ctx->pc = 0x486F70u;
    {
        const bool branch_taken_0x486f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x486f70) {
            ctx->pc = 0x486FB0u;
            goto label_486fb0;
        }
    }
    ctx->pc = 0x486F78u;
label_486f78:
    // 0x486f78: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x486f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f7c:
    // 0x486f7c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x486f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_486f80:
    // 0x486f80: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x486f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_486f84:
    // 0x486f84: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x486f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_486f88:
    // 0x486f88: 0xc0eee8c  jal         func_3BBA30
label_486f8c:
    if (ctx->pc == 0x486F8Cu) {
        ctx->pc = 0x486F90u;
        goto label_486f90;
    }
    ctx->pc = 0x486F88u;
    SET_GPR_U32(ctx, 31, 0x486F90u);
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x486F88u, 0x486F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486F90u;
label_486f90:
    // 0x486f90: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x486f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486f94:
    // 0x486f94: 0x90420070  lbu         $v0, 0x70($v0)
    ctx->pc = 0x486f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_486f98:
    // 0x486f98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_486f9c:
    if (ctx->pc == 0x486F9Cu) {
        ctx->pc = 0x486FA0u;
        goto label_486fa0;
    }
    ctx->pc = 0x486F98u;
    {
        const bool branch_taken_0x486f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486f98) {
            ctx->pc = 0x486FB0u;
            goto label_486fb0;
        }
    }
    ctx->pc = 0x486FA0u;
label_486fa0:
    // 0x486fa0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x486fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486fa4:
    // 0x486fa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x486fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_486fa8:
    // 0x486fa8: 0xc121fd0  jal         func_487F40
label_486fac:
    if (ctx->pc == 0x486FACu) {
        ctx->pc = 0x486FB0u;
        goto label_486fb0;
    }
    ctx->pc = 0x486FA8u;
    SET_GPR_U32(ctx, 31, 0x486FB0u);
    ctx->pc = 0x487F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487F40u, 0x486FA8u, 0x486FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486FB0u;
label_486fb0:
    // 0x486fb0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x486fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486fb4:
    // 0x486fb4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x486fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_486fb8:
    // 0x486fb8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_486fbc:
    if (ctx->pc == 0x486FBCu) {
        ctx->pc = 0x486FC0u;
        goto label_486fc0;
    }
    ctx->pc = 0x486FB8u;
    {
        const bool branch_taken_0x486fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486fb8) {
            ctx->pc = 0x487110u;
            goto label_487110;
        }
    }
    ctx->pc = 0x486FC0u;
label_486fc0:
    // 0x486fc0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x486fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_486fc4:
    // 0x486fc4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x486fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486fc8:
    // 0x486fc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x486fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486fcc:
    // 0x486fcc: 0x0  nop
    ctx->pc = 0x486fccu;
    // NOP
label_486fd0:
    // 0x486fd0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x486fd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486fd4:
    // 0x486fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x486fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486fd8:
    // 0x486fd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_486fdc:
    if (ctx->pc == 0x486FDCu) {
        ctx->pc = 0x486FE0u;
        goto label_486fe0;
    }
    ctx->pc = 0x486FD8u;
    {
        const bool branch_taken_0x486fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x486fd8) {
            ctx->pc = 0x486FE4u;
            goto label_486fe4;
        }
    }
    ctx->pc = 0x486FE0u;
label_486fe0:
    // 0x486fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x486fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486fe4:
    // 0x486fe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x486fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_486fe8:
    // 0x486fe8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_486fec:
    if (ctx->pc == 0x486FECu) {
        ctx->pc = 0x486FF0u;
        goto label_486ff0;
    }
    ctx->pc = 0x486FE8u;
    {
        const bool branch_taken_0x486fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x486fe8) {
            ctx->pc = 0x487098u;
            goto label_487098;
        }
    }
    ctx->pc = 0x486FF0u;
label_486ff0:
    // 0x486ff0: 0x8f82b5d0  lw          $v0, -0x4A30($gp)
    ctx->pc = 0x486ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948304)));
label_486ff4:
    // 0x486ff4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_486ff8:
    if (ctx->pc == 0x486FF8u) {
        ctx->pc = 0x486FFCu;
        goto label_486ffc;
    }
    ctx->pc = 0x486FF4u;
    {
        const bool branch_taken_0x486ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486ff4) {
            ctx->pc = 0x487098u;
            goto label_487098;
        }
    }
    ctx->pc = 0x486FFCu;
label_486ffc:
    // 0x486ffc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x486ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_487000:
    // 0x487000: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x487000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_487004:
    // 0x487004: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x487004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_487008:
    // 0x487008: 0xc115ee8  jal         func_457BA0
label_48700c:
    if (ctx->pc == 0x48700Cu) {
        ctx->pc = 0x487010u;
        goto label_487010;
    }
    ctx->pc = 0x487008u;
    SET_GPR_U32(ctx, 31, 0x487010u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x487008u, 0x487010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487010u;
label_487010:
    // 0x487010: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_487014:
    if (ctx->pc == 0x487014u) {
        ctx->pc = 0x487018u;
        goto label_487018;
    }
    ctx->pc = 0x487010u;
    {
        const bool branch_taken_0x487010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487010) {
            ctx->pc = 0x487098u;
            goto label_487098;
        }
    }
    ctx->pc = 0x487018u;
label_487018:
    // 0x487018: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x487018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_48701c:
    // 0x48701c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_487020:
    if (ctx->pc == 0x487020u) {
        ctx->pc = 0x487024u;
        goto label_487024;
    }
    ctx->pc = 0x48701Cu;
    {
        const bool branch_taken_0x48701c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48701c) {
            ctx->pc = 0x487098u;
            goto label_487098;
        }
    }
    ctx->pc = 0x487024u;
label_487024:
    // 0x487024: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x487024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_487028:
    // 0x487028: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x487028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48702c:
    // 0x48702c: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x48702cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_487030:
    // 0x487030: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x487030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_487034:
    // 0x487034: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x487034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_487038:
    // 0x487038: 0x24080250  addiu       $t0, $zero, 0x250
    ctx->pc = 0x487038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_48703c:
    // 0x48703c: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48703cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_487040:
    // 0x487040: 0x25293eb0  addiu       $t1, $t1, 0x3EB0
    ctx->pc = 0x487040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16048));
label_487044:
    // 0x487044: 0xc113940  jal         func_44E500
label_487048:
    if (ctx->pc == 0x487048u) {
        ctx->pc = 0x48704Cu;
        goto label_48704c;
    }
    ctx->pc = 0x487044u;
    SET_GPR_U32(ctx, 31, 0x48704Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x487044u, 0x48704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48704Cu;
label_48704c:
    // 0x48704c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_487050:
    // 0x487050: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x487050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_487054:
    // 0x487054: 0x24a53ec8  addiu       $a1, $a1, 0x3EC8
    ctx->pc = 0x487054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16072));
label_487058:
    // 0x487058: 0xc115c24  jal         func_457090
label_48705c:
    if (ctx->pc == 0x48705Cu) {
        ctx->pc = 0x487060u;
        goto label_487060;
    }
    ctx->pc = 0x487058u;
    SET_GPR_U32(ctx, 31, 0x487060u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x487058u, 0x487060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487060u;
label_487060:
    // 0x487060: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x487060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_487064:
    // 0x487064: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x487064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_487068:
    // 0x487068: 0x40f809  jalr        $v0
label_48706c:
    if (ctx->pc == 0x48706Cu) {
        ctx->pc = 0x487070u;
        goto label_487070;
    }
    ctx->pc = 0x487068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487070u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487068u, 0x487070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487070u;
label_487070:
    // 0x487070: 0xaf82b5d0  sw          $v0, -0x4A30($gp)
    ctx->pc = 0x487070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948304), GPR_U32(ctx, 2));
label_487074:
    // 0x487074: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x487074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_487078:
    // 0x487078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48707c:
    if (ctx->pc == 0x48707Cu) {
        ctx->pc = 0x487080u;
        goto label_487080;
    }
    ctx->pc = 0x487078u;
    {
        const bool branch_taken_0x487078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487078) {
            ctx->pc = 0x487088u;
            goto label_487088;
        }
    }
    ctx->pc = 0x487080u;
label_487080:
    // 0x487080: 0xd  break       0
    ctx->pc = 0x487080u;
    runtime->handleBreak(rdram, ctx);
label_487084:
    // 0x487084: 0x0  nop
    ctx->pc = 0x487084u;
    // NOP
label_487088:
    // 0x487088: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x487088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48708c:
    // 0x48708c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_487090:
    // 0x487090: 0xc11392c  jal         func_44E4B0
label_487094:
    if (ctx->pc == 0x487094u) {
        ctx->pc = 0x487098u;
        goto label_487098;
    }
    ctx->pc = 0x487090u;
    SET_GPR_U32(ctx, 31, 0x487098u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x487090u, 0x487098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487098u;
label_487098:
    // 0x487098: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x487098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48709c:
    // 0x48709c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4870a0:
    // 0x4870a0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4870a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4870a4:
    // 0x4870a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4870a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4870a8:
    // 0x4870a8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x4870a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_4870ac:
    // 0x4870ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4870acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4870b0:
    // 0x4870b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4870b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4870b4:
    // 0x4870b4: 0x0  nop
    ctx->pc = 0x4870b4u;
    // NOP
label_4870b8:
    // 0x4870b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4870b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4870bc:
    // 0x4870bc: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x4870bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_4870c0:
    // 0x4870c0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4870c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4870c4:
    // 0x4870c4: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x4870c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_4870c8:
    // 0x4870c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4870c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4870cc:
    // 0x4870cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4870ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4870d0:
    // 0x4870d0: 0xc7ac016c  lwc1        $f12, 0x16C($sp)
    ctx->pc = 0x4870d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4870d4:
    // 0x4870d4: 0xc0ef424  jal         func_3BD090
label_4870d8:
    if (ctx->pc == 0x4870D8u) {
        ctx->pc = 0x4870DCu;
        goto label_4870dc;
    }
    ctx->pc = 0x4870D4u;
    SET_GPR_U32(ctx, 31, 0x4870DCu);
    ctx->pc = 0x3BD090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD090u, 0x4870D4u, 0x4870DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4870DCu;
label_4870dc:
    // 0x4870dc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4870dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4870e0:
    // 0x4870e0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x4870e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4870e4:
    // 0x4870e4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4870e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4870e8:
    // 0x4870e8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x4870e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4870ec:
    // 0x4870ec: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x4870ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_4870f0:
    // 0x4870f0: 0xc0ef404  jal         func_3BD010
label_4870f4:
    if (ctx->pc == 0x4870F4u) {
        ctx->pc = 0x4870F8u;
        goto label_4870f8;
    }
    ctx->pc = 0x4870F0u;
    SET_GPR_U32(ctx, 31, 0x4870F8u);
    ctx->pc = 0x3BD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD010u, 0x4870F0u, 0x4870F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4870F8u;
label_4870f8:
    // 0x4870f8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4870f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4870fc:
    // 0x4870fc: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x4870fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_487100:
    // 0x487100: 0xc0c8260  jal         func_320980
label_487104:
    if (ctx->pc == 0x487104u) {
        ctx->pc = 0x487108u;
        goto label_487108;
    }
    ctx->pc = 0x487100u;
    SET_GPR_U32(ctx, 31, 0x487108u);
    ctx->pc = 0x320980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320980u, 0x487100u, 0x487108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487108u;
label_487108:
    // 0x487108: 0x1000001a  b           . + 4 + (0x1A << 2)
label_48710c:
    if (ctx->pc == 0x48710Cu) {
        ctx->pc = 0x487110u;
        goto label_487110;
    }
    ctx->pc = 0x487108u;
    {
        const bool branch_taken_0x487108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487108) {
            ctx->pc = 0x487174u;
            goto label_487174;
        }
    }
    ctx->pc = 0x487110u;
label_487110:
    // 0x487110: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x487110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_487114:
    // 0x487114: 0x90420070  lbu         $v0, 0x70($v0)
    ctx->pc = 0x487114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_487118:
    // 0x487118: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_48711c:
    if (ctx->pc == 0x48711Cu) {
        ctx->pc = 0x487120u;
        goto label_487120;
    }
    ctx->pc = 0x487118u;
    {
        const bool branch_taken_0x487118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487118) {
            ctx->pc = 0x48714Cu;
            goto label_48714c;
        }
    }
    ctx->pc = 0x487120u;
label_487120:
    // 0x487120: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x487120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_487124:
    // 0x487124: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x487124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487128:
    // 0x487128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x487128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48712c:
    // 0x48712c: 0x0  nop
    ctx->pc = 0x48712cu;
    // NOP
label_487130:
    // 0x487130: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x487130u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_487134:
    // 0x487134: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_487138:
    if (ctx->pc == 0x487138u) {
        ctx->pc = 0x48713Cu;
        goto label_48713c;
    }
    ctx->pc = 0x487134u;
    {
        const bool branch_taken_0x487134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x487134) {
            ctx->pc = 0x48714Cu;
            goto label_48714c;
        }
    }
    ctx->pc = 0x48713Cu;
label_48713c:
    // 0x48713c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x48713cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_487140:
    // 0x487140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x487140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487144:
    // 0x487144: 0xc121fd0  jal         func_487F40
label_487148:
    if (ctx->pc == 0x487148u) {
        ctx->pc = 0x48714Cu;
        goto label_48714c;
    }
    ctx->pc = 0x487144u;
    SET_GPR_U32(ctx, 31, 0x48714Cu);
    ctx->pc = 0x487F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487F40u, 0x487144u, 0x48714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48714Cu;
label_48714c:
    // 0x48714c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_487150:
    // 0x487150: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x487150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_487154:
    // 0x487154: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x487154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_487158:
    // 0x487158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x487158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48715c:
    // 0x48715c: 0xc0ef404  jal         func_3BD010
label_487160:
    if (ctx->pc == 0x487160u) {
        ctx->pc = 0x487164u;
        goto label_487164;
    }
    ctx->pc = 0x48715Cu;
    SET_GPR_U32(ctx, 31, 0x487164u);
    ctx->pc = 0x3BD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD010u, 0x48715Cu, 0x487164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487164u;
label_487164:
    // 0x487164: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x487164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_487168:
    // 0x487168: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x487168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_48716c:
    // 0x48716c: 0xc0c8260  jal         func_320980
label_487170:
    if (ctx->pc == 0x487170u) {
        ctx->pc = 0x487174u;
        goto label_487174;
    }
    ctx->pc = 0x48716Cu;
    SET_GPR_U32(ctx, 31, 0x487174u);
    ctx->pc = 0x320980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320980u, 0x48716Cu, 0x487174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487174u;
label_487174:
    // 0x487174: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x487174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_487178:
    // 0x487178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x487178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48717c:
    // 0x48717c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48717cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_487180:
    // 0x487180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_487184:
    // 0x487184: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x487184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_487188:
    // 0x487188: 0x3e00008  jr          $ra
label_48718c:
    if (ctx->pc == 0x48718Cu) {
        ctx->pc = 0x487190u;
        goto label_fallthrough_0x487188;
    }
    ctx->pc = 0x487188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x487188:
    ctx->pc = 0x487190u;
}
