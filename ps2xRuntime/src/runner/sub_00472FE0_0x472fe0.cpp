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

// Function: sub_00472FE0
// Address: 0x472fe0 - 0x4731d0
void sub_00472FE0_0x472fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472FE0_0x472fe0");
#endif

    switch (ctx->pc) {
        case 0x472fe0u: goto label_472fe0;
        case 0x472fe4u: goto label_472fe4;
        case 0x472fe8u: goto label_472fe8;
        case 0x472fecu: goto label_472fec;
        case 0x472ff0u: goto label_472ff0;
        case 0x472ff4u: goto label_472ff4;
        case 0x472ff8u: goto label_472ff8;
        case 0x472ffcu: goto label_472ffc;
        case 0x473000u: goto label_473000;
        case 0x473004u: goto label_473004;
        case 0x473008u: goto label_473008;
        case 0x47300cu: goto label_47300c;
        case 0x473010u: goto label_473010;
        case 0x473014u: goto label_473014;
        case 0x473018u: goto label_473018;
        case 0x47301cu: goto label_47301c;
        case 0x473020u: goto label_473020;
        case 0x473024u: goto label_473024;
        case 0x473028u: goto label_473028;
        case 0x47302cu: goto label_47302c;
        case 0x473030u: goto label_473030;
        case 0x473034u: goto label_473034;
        case 0x473038u: goto label_473038;
        case 0x47303cu: goto label_47303c;
        case 0x473040u: goto label_473040;
        case 0x473044u: goto label_473044;
        case 0x473048u: goto label_473048;
        case 0x47304cu: goto label_47304c;
        case 0x473050u: goto label_473050;
        case 0x473054u: goto label_473054;
        case 0x473058u: goto label_473058;
        case 0x47305cu: goto label_47305c;
        case 0x473060u: goto label_473060;
        case 0x473064u: goto label_473064;
        case 0x473068u: goto label_473068;
        case 0x47306cu: goto label_47306c;
        case 0x473070u: goto label_473070;
        case 0x473074u: goto label_473074;
        case 0x473078u: goto label_473078;
        case 0x47307cu: goto label_47307c;
        case 0x473080u: goto label_473080;
        case 0x473084u: goto label_473084;
        case 0x473088u: goto label_473088;
        case 0x47308cu: goto label_47308c;
        case 0x473090u: goto label_473090;
        case 0x473094u: goto label_473094;
        case 0x473098u: goto label_473098;
        case 0x47309cu: goto label_47309c;
        case 0x4730a0u: goto label_4730a0;
        case 0x4730a4u: goto label_4730a4;
        case 0x4730a8u: goto label_4730a8;
        case 0x4730acu: goto label_4730ac;
        case 0x4730b0u: goto label_4730b0;
        case 0x4730b4u: goto label_4730b4;
        case 0x4730b8u: goto label_4730b8;
        case 0x4730bcu: goto label_4730bc;
        case 0x4730c0u: goto label_4730c0;
        case 0x4730c4u: goto label_4730c4;
        case 0x4730c8u: goto label_4730c8;
        case 0x4730ccu: goto label_4730cc;
        case 0x4730d0u: goto label_4730d0;
        case 0x4730d4u: goto label_4730d4;
        case 0x4730d8u: goto label_4730d8;
        case 0x4730dcu: goto label_4730dc;
        case 0x4730e0u: goto label_4730e0;
        case 0x4730e4u: goto label_4730e4;
        case 0x4730e8u: goto label_4730e8;
        case 0x4730ecu: goto label_4730ec;
        case 0x4730f0u: goto label_4730f0;
        case 0x4730f4u: goto label_4730f4;
        case 0x4730f8u: goto label_4730f8;
        case 0x4730fcu: goto label_4730fc;
        case 0x473100u: goto label_473100;
        case 0x473104u: goto label_473104;
        case 0x473108u: goto label_473108;
        case 0x47310cu: goto label_47310c;
        case 0x473110u: goto label_473110;
        case 0x473114u: goto label_473114;
        case 0x473118u: goto label_473118;
        case 0x47311cu: goto label_47311c;
        case 0x473120u: goto label_473120;
        case 0x473124u: goto label_473124;
        case 0x473128u: goto label_473128;
        case 0x47312cu: goto label_47312c;
        case 0x473130u: goto label_473130;
        case 0x473134u: goto label_473134;
        case 0x473138u: goto label_473138;
        case 0x47313cu: goto label_47313c;
        case 0x473140u: goto label_473140;
        case 0x473144u: goto label_473144;
        case 0x473148u: goto label_473148;
        case 0x47314cu: goto label_47314c;
        case 0x473150u: goto label_473150;
        case 0x473154u: goto label_473154;
        case 0x473158u: goto label_473158;
        case 0x47315cu: goto label_47315c;
        case 0x473160u: goto label_473160;
        case 0x473164u: goto label_473164;
        case 0x473168u: goto label_473168;
        case 0x47316cu: goto label_47316c;
        case 0x473170u: goto label_473170;
        case 0x473174u: goto label_473174;
        case 0x473178u: goto label_473178;
        case 0x47317cu: goto label_47317c;
        case 0x473180u: goto label_473180;
        case 0x473184u: goto label_473184;
        case 0x473188u: goto label_473188;
        case 0x47318cu: goto label_47318c;
        case 0x473190u: goto label_473190;
        case 0x473194u: goto label_473194;
        case 0x473198u: goto label_473198;
        case 0x47319cu: goto label_47319c;
        case 0x4731a0u: goto label_4731a0;
        case 0x4731a4u: goto label_4731a4;
        case 0x4731a8u: goto label_4731a8;
        case 0x4731acu: goto label_4731ac;
        case 0x4731b0u: goto label_4731b0;
        case 0x4731b4u: goto label_4731b4;
        case 0x4731b8u: goto label_4731b8;
        case 0x4731bcu: goto label_4731bc;
        case 0x4731c0u: goto label_4731c0;
        case 0x4731c4u: goto label_4731c4;
        case 0x4731c8u: goto label_4731c8;
        case 0x4731ccu: goto label_4731cc;
        default: break;
    }

    ctx->pc = 0x472fe0u;

label_472fe0:
    // 0x472fe0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x472fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_472fe4:
    // 0x472fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x472fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_472fe8:
    // 0x472fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x472fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_472fec:
    // 0x472fec: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x472fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_472ff0:
    // 0x472ff0: 0xe7ac0290  swc1        $f12, 0x290($sp)
    ctx->pc = 0x472ff0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_472ff4:
    // 0x472ff4: 0xc11c1fc  jal         func_4707F0
label_472ff8:
    if (ctx->pc == 0x472FF8u) {
        ctx->pc = 0x472FFCu;
        goto label_472ffc;
    }
    ctx->pc = 0x472FF4u;
    SET_GPR_U32(ctx, 31, 0x472FFCu);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x472FF4u, 0x472FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472FFCu;
label_472ffc:
    // 0x472ffc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_473000:
    if (ctx->pc == 0x473000u) {
        ctx->pc = 0x473004u;
        goto label_473004;
    }
    ctx->pc = 0x472FFCu;
    {
        const bool branch_taken_0x472ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x472ffc) {
            ctx->pc = 0x4730ACu;
            goto label_4730ac;
        }
    }
    ctx->pc = 0x473004u;
label_473004:
    // 0x473004: 0x8f82b3cc  lw          $v0, -0x4C34($gp)
    ctx->pc = 0x473004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947788)));
label_473008:
    // 0x473008: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47300c:
    if (ctx->pc == 0x47300Cu) {
        ctx->pc = 0x473010u;
        goto label_473010;
    }
    ctx->pc = 0x473008u;
    {
        const bool branch_taken_0x473008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473008) {
            ctx->pc = 0x4730ACu;
            goto label_4730ac;
        }
    }
    ctx->pc = 0x473010u;
label_473010:
    // 0x473010: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_473014:
    // 0x473014: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473018:
    // 0x473018: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x473018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_47301c:
    // 0x47301c: 0xc115ee8  jal         func_457BA0
label_473020:
    if (ctx->pc == 0x473020u) {
        ctx->pc = 0x473024u;
        goto label_473024;
    }
    ctx->pc = 0x47301Cu;
    SET_GPR_U32(ctx, 31, 0x473024u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47301Cu, 0x473024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473024u;
label_473024:
    // 0x473024: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_473028:
    if (ctx->pc == 0x473028u) {
        ctx->pc = 0x47302Cu;
        goto label_47302c;
    }
    ctx->pc = 0x473024u;
    {
        const bool branch_taken_0x473024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473024) {
            ctx->pc = 0x4730ACu;
            goto label_4730ac;
        }
    }
    ctx->pc = 0x47302Cu;
label_47302c:
    // 0x47302c: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x47302cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_473030:
    // 0x473030: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_473034:
    if (ctx->pc == 0x473034u) {
        ctx->pc = 0x473038u;
        goto label_473038;
    }
    ctx->pc = 0x473030u;
    {
        const bool branch_taken_0x473030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473030) {
            ctx->pc = 0x4730ACu;
            goto label_4730ac;
        }
    }
    ctx->pc = 0x473038u;
label_473038:
    // 0x473038: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x473038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_47303c:
    // 0x47303c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47303cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473040:
    // 0x473040: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x473040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_473044:
    // 0x473044: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x473044u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473048:
    // 0x473048: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_47304c:
    // 0x47304c: 0x2408009f  addiu       $t0, $zero, 0x9F
    ctx->pc = 0x47304cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_473050:
    // 0x473050: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x473050u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_473054:
    // 0x473054: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x473054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_473058:
    // 0x473058: 0xc113940  jal         func_44E500
label_47305c:
    if (ctx->pc == 0x47305Cu) {
        ctx->pc = 0x473060u;
        goto label_473060;
    }
    ctx->pc = 0x473058u;
    SET_GPR_U32(ctx, 31, 0x473060u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473058u, 0x473060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473060u;
label_473060:
    // 0x473060: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x473060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_473064:
    // 0x473064: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x473064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473068:
    // 0x473068: 0x24a50500  addiu       $a1, $a1, 0x500
    ctx->pc = 0x473068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
label_47306c:
    // 0x47306c: 0xc115c24  jal         func_457090
label_473070:
    if (ctx->pc == 0x473070u) {
        ctx->pc = 0x473074u;
        goto label_473074;
    }
    ctx->pc = 0x47306Cu;
    SET_GPR_U32(ctx, 31, 0x473074u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47306Cu, 0x473074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473074u;
label_473074:
    // 0x473074: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x473074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_473078:
    // 0x473078: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x473078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_47307c:
    // 0x47307c: 0x40f809  jalr        $v0
label_473080:
    if (ctx->pc == 0x473080u) {
        ctx->pc = 0x473084u;
        goto label_473084;
    }
    ctx->pc = 0x47307Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473084u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47307Cu, 0x473084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473084u;
label_473084:
    // 0x473084: 0xaf82b3cc  sw          $v0, -0x4C34($gp)
    ctx->pc = 0x473084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947788), GPR_U32(ctx, 2));
label_473088:
    // 0x473088: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x473088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47308c:
    // 0x47308c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473090:
    if (ctx->pc == 0x473090u) {
        ctx->pc = 0x473094u;
        goto label_473094;
    }
    ctx->pc = 0x47308Cu;
    {
        const bool branch_taken_0x47308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47308c) {
            ctx->pc = 0x47309Cu;
            goto label_47309c;
        }
    }
    ctx->pc = 0x473094u;
label_473094:
    // 0x473094: 0xd  break       0
    ctx->pc = 0x473094u;
    runtime->handleBreak(rdram, ctx);
label_473098:
    // 0x473098: 0x0  nop
    ctx->pc = 0x473098u;
    // NOP
label_47309c:
    // 0x47309c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x47309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4730a0:
    // 0x4730a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4730a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4730a4:
    // 0x4730a4: 0xc11392c  jal         func_44E4B0
label_4730a8:
    if (ctx->pc == 0x4730A8u) {
        ctx->pc = 0x4730ACu;
        goto label_4730ac;
    }
    ctx->pc = 0x4730A4u;
    SET_GPR_U32(ctx, 31, 0x4730ACu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4730A4u, 0x4730ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4730ACu;
label_4730ac:
    // 0x4730ac: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4730acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4730b0:
    // 0x4730b0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x4730b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4730b4:
    // 0x4730b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4730b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4730b8:
    // 0x4730b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4730b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4730bc:
    // 0x4730bc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4730c0:
    if (ctx->pc == 0x4730C0u) {
        ctx->pc = 0x4730C4u;
        goto label_4730c4;
    }
    ctx->pc = 0x4730BCu;
    {
        const bool branch_taken_0x4730bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4730bc) {
            ctx->pc = 0x47316Cu;
            goto label_47316c;
        }
    }
    ctx->pc = 0x4730C4u;
label_4730c4:
    // 0x4730c4: 0x8f82b3d0  lw          $v0, -0x4C30($gp)
    ctx->pc = 0x4730c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947792)));
label_4730c8:
    // 0x4730c8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4730cc:
    if (ctx->pc == 0x4730CCu) {
        ctx->pc = 0x4730D0u;
        goto label_4730d0;
    }
    ctx->pc = 0x4730C8u;
    {
        const bool branch_taken_0x4730c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4730c8) {
            ctx->pc = 0x47316Cu;
            goto label_47316c;
        }
    }
    ctx->pc = 0x4730D0u;
label_4730d0:
    // 0x4730d0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4730d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4730d4:
    // 0x4730d4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4730d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4730d8:
    // 0x4730d8: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x4730d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4730dc:
    // 0x4730dc: 0xc115ee8  jal         func_457BA0
label_4730e0:
    if (ctx->pc == 0x4730E0u) {
        ctx->pc = 0x4730E4u;
        goto label_4730e4;
    }
    ctx->pc = 0x4730DCu;
    SET_GPR_U32(ctx, 31, 0x4730E4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4730DCu, 0x4730E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4730E4u;
label_4730e4:
    // 0x4730e4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4730e8:
    if (ctx->pc == 0x4730E8u) {
        ctx->pc = 0x4730ECu;
        goto label_4730ec;
    }
    ctx->pc = 0x4730E4u;
    {
        const bool branch_taken_0x4730e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4730e4) {
            ctx->pc = 0x47316Cu;
            goto label_47316c;
        }
    }
    ctx->pc = 0x4730ECu;
label_4730ec:
    // 0x4730ec: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4730ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4730f0:
    // 0x4730f0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4730f4:
    if (ctx->pc == 0x4730F4u) {
        ctx->pc = 0x4730F8u;
        goto label_4730f8;
    }
    ctx->pc = 0x4730F0u;
    {
        const bool branch_taken_0x4730f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4730f0) {
            ctx->pc = 0x47316Cu;
            goto label_47316c;
        }
    }
    ctx->pc = 0x4730F8u;
label_4730f8:
    // 0x4730f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4730f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4730fc:
    // 0x4730fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4730fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473100:
    // 0x473100: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x473100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_473104:
    // 0x473104: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x473104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473108:
    // 0x473108: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_47310c:
    // 0x47310c: 0x240800a0  addiu       $t0, $zero, 0xA0
    ctx->pc = 0x47310cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_473110:
    // 0x473110: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x473110u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_473114:
    // 0x473114: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x473114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_473118:
    // 0x473118: 0xc113940  jal         func_44E500
label_47311c:
    if (ctx->pc == 0x47311Cu) {
        ctx->pc = 0x473120u;
        goto label_473120;
    }
    ctx->pc = 0x473118u;
    SET_GPR_U32(ctx, 31, 0x473120u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473118u, 0x473120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473120u;
label_473120:
    // 0x473120: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x473120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_473124:
    // 0x473124: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x473124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473128:
    // 0x473128: 0x24a50570  addiu       $a1, $a1, 0x570
    ctx->pc = 0x473128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1392));
label_47312c:
    // 0x47312c: 0xc115c24  jal         func_457090
label_473130:
    if (ctx->pc == 0x473130u) {
        ctx->pc = 0x473134u;
        goto label_473134;
    }
    ctx->pc = 0x47312Cu;
    SET_GPR_U32(ctx, 31, 0x473134u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47312Cu, 0x473134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473134u;
label_473134:
    // 0x473134: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x473134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_473138:
    // 0x473138: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x473138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_47313c:
    // 0x47313c: 0x40f809  jalr        $v0
label_473140:
    if (ctx->pc == 0x473140u) {
        ctx->pc = 0x473144u;
        goto label_473144;
    }
    ctx->pc = 0x47313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47313Cu, 0x473144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473144u;
label_473144:
    // 0x473144: 0xaf82b3d0  sw          $v0, -0x4C30($gp)
    ctx->pc = 0x473144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947792), GPR_U32(ctx, 2));
label_473148:
    // 0x473148: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x473148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_47314c:
    // 0x47314c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473150:
    if (ctx->pc == 0x473150u) {
        ctx->pc = 0x473154u;
        goto label_473154;
    }
    ctx->pc = 0x47314Cu;
    {
        const bool branch_taken_0x47314c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47314c) {
            ctx->pc = 0x47315Cu;
            goto label_47315c;
        }
    }
    ctx->pc = 0x473154u;
label_473154:
    // 0x473154: 0xd  break       0
    ctx->pc = 0x473154u;
    runtime->handleBreak(rdram, ctx);
label_473158:
    // 0x473158: 0x0  nop
    ctx->pc = 0x473158u;
    // NOP
label_47315c:
    // 0x47315c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_473160:
    // 0x473160: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473164:
    // 0x473164: 0xc11392c  jal         func_44E4B0
label_473168:
    if (ctx->pc == 0x473168u) {
        ctx->pc = 0x47316Cu;
        goto label_47316c;
    }
    ctx->pc = 0x473164u;
    SET_GPR_U32(ctx, 31, 0x47316Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473164u, 0x47316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47316Cu;
label_47316c:
    // 0x47316c: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x47316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473170:
    // 0x473170: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x473170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_473174:
    // 0x473174: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x473174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_473178:
    // 0x473178: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x473178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47317c:
    // 0x47317c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x47317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473180:
    // 0x473180: 0xc0ed20a  jal         func_3B4828
label_473184:
    if (ctx->pc == 0x473184u) {
        ctx->pc = 0x473188u;
        goto label_473188;
    }
    ctx->pc = 0x473180u;
    SET_GPR_U32(ctx, 31, 0x473188u);
    ctx->pc = 0x3B4828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4828u, 0x473180u, 0x473188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473188u;
label_473188:
    // 0x473188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x473188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47318c:
    // 0x47318c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x47318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_473190:
    // 0x473190: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x473190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473194:
    // 0x473194: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x473194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_473198:
    // 0x473198: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x473198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47319c:
    // 0x47319c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x47319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4731a0:
    // 0x4731a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4731a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4731a4:
    // 0x4731a4: 0xc0ed20c  jal         func_3B4830
label_4731a8:
    if (ctx->pc == 0x4731A8u) {
        ctx->pc = 0x4731ACu;
        goto label_4731ac;
    }
    ctx->pc = 0x4731A4u;
    SET_GPR_U32(ctx, 31, 0x4731ACu);
    ctx->pc = 0x3B4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4830u, 0x4731A4u, 0x4731ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4731ACu;
label_4731ac:
    // 0x4731ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4731acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4731b0:
    // 0x4731b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4731b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4731b4:
    // 0x4731b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4731b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4731b8:
    // 0x4731b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4731b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4731bc:
    // 0x4731bc: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x4731bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_4731c0:
    // 0x4731c0: 0x3e00008  jr          $ra
label_4731c4:
    if (ctx->pc == 0x4731C4u) {
        ctx->pc = 0x4731C8u;
        goto label_4731c8;
    }
    ctx->pc = 0x4731C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4731C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4731C8u;
label_4731c8:
    // 0x4731c8: 0x0  nop
    ctx->pc = 0x4731c8u;
    // NOP
label_4731cc:
    // 0x4731cc: 0x0  nop
    ctx->pc = 0x4731ccu;
    // NOP
    ctx->pc = 0x4731d0u;
}
