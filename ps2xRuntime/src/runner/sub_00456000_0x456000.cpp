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

// Function: sub_00456000
// Address: 0x456000 - 0x4561e0
void sub_00456000_0x456000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456000_0x456000");
#endif

    switch (ctx->pc) {
        case 0x456000u: goto label_456000;
        case 0x456004u: goto label_456004;
        case 0x456008u: goto label_456008;
        case 0x45600cu: goto label_45600c;
        case 0x456010u: goto label_456010;
        case 0x456014u: goto label_456014;
        case 0x456018u: goto label_456018;
        case 0x45601cu: goto label_45601c;
        case 0x456020u: goto label_456020;
        case 0x456024u: goto label_456024;
        case 0x456028u: goto label_456028;
        case 0x45602cu: goto label_45602c;
        case 0x456030u: goto label_456030;
        case 0x456034u: goto label_456034;
        case 0x456038u: goto label_456038;
        case 0x45603cu: goto label_45603c;
        case 0x456040u: goto label_456040;
        case 0x456044u: goto label_456044;
        case 0x456048u: goto label_456048;
        case 0x45604cu: goto label_45604c;
        case 0x456050u: goto label_456050;
        case 0x456054u: goto label_456054;
        case 0x456058u: goto label_456058;
        case 0x45605cu: goto label_45605c;
        case 0x456060u: goto label_456060;
        case 0x456064u: goto label_456064;
        case 0x456068u: goto label_456068;
        case 0x45606cu: goto label_45606c;
        case 0x456070u: goto label_456070;
        case 0x456074u: goto label_456074;
        case 0x456078u: goto label_456078;
        case 0x45607cu: goto label_45607c;
        case 0x456080u: goto label_456080;
        case 0x456084u: goto label_456084;
        case 0x456088u: goto label_456088;
        case 0x45608cu: goto label_45608c;
        case 0x456090u: goto label_456090;
        case 0x456094u: goto label_456094;
        case 0x456098u: goto label_456098;
        case 0x45609cu: goto label_45609c;
        case 0x4560a0u: goto label_4560a0;
        case 0x4560a4u: goto label_4560a4;
        case 0x4560a8u: goto label_4560a8;
        case 0x4560acu: goto label_4560ac;
        case 0x4560b0u: goto label_4560b0;
        case 0x4560b4u: goto label_4560b4;
        case 0x4560b8u: goto label_4560b8;
        case 0x4560bcu: goto label_4560bc;
        case 0x4560c0u: goto label_4560c0;
        case 0x4560c4u: goto label_4560c4;
        case 0x4560c8u: goto label_4560c8;
        case 0x4560ccu: goto label_4560cc;
        case 0x4560d0u: goto label_4560d0;
        case 0x4560d4u: goto label_4560d4;
        case 0x4560d8u: goto label_4560d8;
        case 0x4560dcu: goto label_4560dc;
        case 0x4560e0u: goto label_4560e0;
        case 0x4560e4u: goto label_4560e4;
        case 0x4560e8u: goto label_4560e8;
        case 0x4560ecu: goto label_4560ec;
        case 0x4560f0u: goto label_4560f0;
        case 0x4560f4u: goto label_4560f4;
        case 0x4560f8u: goto label_4560f8;
        case 0x4560fcu: goto label_4560fc;
        case 0x456100u: goto label_456100;
        case 0x456104u: goto label_456104;
        case 0x456108u: goto label_456108;
        case 0x45610cu: goto label_45610c;
        case 0x456110u: goto label_456110;
        case 0x456114u: goto label_456114;
        case 0x456118u: goto label_456118;
        case 0x45611cu: goto label_45611c;
        case 0x456120u: goto label_456120;
        case 0x456124u: goto label_456124;
        case 0x456128u: goto label_456128;
        case 0x45612cu: goto label_45612c;
        case 0x456130u: goto label_456130;
        case 0x456134u: goto label_456134;
        case 0x456138u: goto label_456138;
        case 0x45613cu: goto label_45613c;
        case 0x456140u: goto label_456140;
        case 0x456144u: goto label_456144;
        case 0x456148u: goto label_456148;
        case 0x45614cu: goto label_45614c;
        case 0x456150u: goto label_456150;
        case 0x456154u: goto label_456154;
        case 0x456158u: goto label_456158;
        case 0x45615cu: goto label_45615c;
        case 0x456160u: goto label_456160;
        case 0x456164u: goto label_456164;
        case 0x456168u: goto label_456168;
        case 0x45616cu: goto label_45616c;
        case 0x456170u: goto label_456170;
        case 0x456174u: goto label_456174;
        case 0x456178u: goto label_456178;
        case 0x45617cu: goto label_45617c;
        case 0x456180u: goto label_456180;
        case 0x456184u: goto label_456184;
        case 0x456188u: goto label_456188;
        case 0x45618cu: goto label_45618c;
        case 0x456190u: goto label_456190;
        case 0x456194u: goto label_456194;
        case 0x456198u: goto label_456198;
        case 0x45619cu: goto label_45619c;
        case 0x4561a0u: goto label_4561a0;
        case 0x4561a4u: goto label_4561a4;
        case 0x4561a8u: goto label_4561a8;
        case 0x4561acu: goto label_4561ac;
        case 0x4561b0u: goto label_4561b0;
        case 0x4561b4u: goto label_4561b4;
        case 0x4561b8u: goto label_4561b8;
        case 0x4561bcu: goto label_4561bc;
        case 0x4561c0u: goto label_4561c0;
        case 0x4561c4u: goto label_4561c4;
        case 0x4561c8u: goto label_4561c8;
        case 0x4561ccu: goto label_4561cc;
        case 0x4561d0u: goto label_4561d0;
        case 0x4561d4u: goto label_4561d4;
        case 0x4561d8u: goto label_4561d8;
        case 0x4561dcu: goto label_4561dc;
        default: break;
    }

    ctx->pc = 0x456000u;

label_456000:
    // 0x456000: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x456000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_456004:
    // 0x456004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x456004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_456008:
    // 0x456008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45600c:
    // 0x45600c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x45600cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_456010:
    // 0x456010: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x456010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_456014:
    // 0x456014: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x456014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
label_456018:
    // 0x456018: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x456018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45601c:
    // 0x45601c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_456020:
    // 0x456020: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x456020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_456024:
    // 0x456024: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x456024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_456028:
    // 0x456028: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x456028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_45602c:
    // 0x45602c: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x45602cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_456030:
    // 0x456030: 0xc115878  jal         func_4561E0
label_456034:
    if (ctx->pc == 0x456034u) {
        ctx->pc = 0x456038u;
        goto label_456038;
    }
    ctx->pc = 0x456030u;
    SET_GPR_U32(ctx, 31, 0x456038u);
    ctx->pc = 0x4561E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4561E0u, 0x456030u, 0x456038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456038u;
label_456038:
    // 0x456038: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_45603c:
    if (ctx->pc == 0x45603Cu) {
        ctx->pc = 0x456040u;
        goto label_456040;
    }
    ctx->pc = 0x456038u;
    {
        const bool branch_taken_0x456038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456038) {
            ctx->pc = 0x45604Cu;
            goto label_45604c;
        }
    }
    ctx->pc = 0x456040u;
label_456040:
    // 0x456040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x456040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456044:
    // 0x456044: 0x1000005e  b           . + 4 + (0x5E << 2)
label_456048:
    if (ctx->pc == 0x456048u) {
        ctx->pc = 0x45604Cu;
        goto label_45604c;
    }
    ctx->pc = 0x456044u;
    {
        const bool branch_taken_0x456044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456044) {
            ctx->pc = 0x4561C0u;
            goto label_4561c0;
        }
    }
    ctx->pc = 0x45604Cu;
label_45604c:
    // 0x45604c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_456050:
    // 0x456050: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x456050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_456054:
    // 0x456054: 0xc043544  jal         func_10D510
label_456058:
    if (ctx->pc == 0x456058u) {
        ctx->pc = 0x45605Cu;
        goto label_45605c;
    }
    ctx->pc = 0x456054u;
    SET_GPR_U32(ctx, 31, 0x45605Cu);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x456054u, 0x45605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45605Cu;
label_45605c:
    // 0x45605c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x45605cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_456060:
    // 0x456060: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x456060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_456064:
    // 0x456064: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x456064u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_456068:
    // 0x456068: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x456068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_45606c:
    // 0x45606c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_456070:
    if (ctx->pc == 0x456070u) {
        ctx->pc = 0x456074u;
        goto label_456074;
    }
    ctx->pc = 0x45606Cu;
    {
        const bool branch_taken_0x45606c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45606c) {
            ctx->pc = 0x456098u;
            goto label_456098;
        }
    }
    ctx->pc = 0x456074u;
label_456074:
    // 0x456074: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x456074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_456078:
    // 0x456078: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x456078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45607c:
    // 0x45607c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x45607cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_456080:
    // 0x456080: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x456080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_456084:
    // 0x456084: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x456084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_456088:
    // 0x456088: 0xc043764  jal         func_10DD90
label_45608c:
    if (ctx->pc == 0x45608Cu) {
        ctx->pc = 0x456090u;
        goto label_456090;
    }
    ctx->pc = 0x456088u;
    SET_GPR_U32(ctx, 31, 0x456090u);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x456088u, 0x456090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456090u;
label_456090:
    // 0x456090: 0x1000004a  b           . + 4 + (0x4A << 2)
label_456094:
    if (ctx->pc == 0x456094u) {
        ctx->pc = 0x456098u;
        goto label_456098;
    }
    ctx->pc = 0x456090u;
    {
        const bool branch_taken_0x456090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456090) {
            ctx->pc = 0x4561BCu;
            goto label_4561bc;
        }
    }
    ctx->pc = 0x456098u;
label_456098:
    // 0x456098: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x456098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45609c:
    // 0x45609c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4560a0:
    // 0x4560a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4560a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4560a4:
    // 0x4560a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4560a8:
    if (ctx->pc == 0x4560A8u) {
        ctx->pc = 0x4560ACu;
        goto label_4560ac;
    }
    ctx->pc = 0x4560A4u;
    {
        const bool branch_taken_0x4560a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4560a4) {
            ctx->pc = 0x4560E4u;
            goto label_4560e4;
        }
    }
    ctx->pc = 0x4560ACu;
label_4560ac:
    // 0x4560ac: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4560acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4560b0:
    // 0x4560b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4560b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4560b4:
    // 0x4560b4: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x4560b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4560b8:
    // 0x4560b8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x4560b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4560bc:
    // 0x4560bc: 0xc043544  jal         func_10D510
label_4560c0:
    if (ctx->pc == 0x4560C0u) {
        ctx->pc = 0x4560C4u;
        goto label_4560c4;
    }
    ctx->pc = 0x4560BCu;
    SET_GPR_U32(ctx, 31, 0x4560C4u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x4560BCu, 0x4560C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4560C4u;
label_4560c4:
    // 0x4560c4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x4560c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4560c8:
    // 0x4560c8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x4560c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_4560cc:
    // 0x4560cc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4560ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4560d0:
    // 0x4560d0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x4560d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_4560d4:
    // 0x4560d4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_4560d8:
    if (ctx->pc == 0x4560D8u) {
        ctx->pc = 0x4560DCu;
        goto label_4560dc;
    }
    ctx->pc = 0x4560D4u;
    {
        const bool branch_taken_0x4560d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4560d4) {
            ctx->pc = 0x4560E4u;
            goto label_4560e4;
        }
    }
    ctx->pc = 0x4560DCu;
label_4560dc:
    // 0x4560dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4560dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4560e0:
    // 0x4560e0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x4560e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4560e4:
    // 0x4560e4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x4560e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4560e8:
    // 0x4560e8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4560ec:
    if (ctx->pc == 0x4560ECu) {
        ctx->pc = 0x4560F0u;
        goto label_4560f0;
    }
    ctx->pc = 0x4560E8u;
    {
        const bool branch_taken_0x4560e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4560e8) {
            ctx->pc = 0x456198u;
            goto label_456198;
        }
    }
    ctx->pc = 0x4560F0u;
label_4560f0:
    // 0x4560f0: 0x8f82b08c  lw          $v0, -0x4F74($gp)
    ctx->pc = 0x4560f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946956)));
label_4560f4:
    // 0x4560f4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4560f8:
    if (ctx->pc == 0x4560F8u) {
        ctx->pc = 0x4560FCu;
        goto label_4560fc;
    }
    ctx->pc = 0x4560F4u;
    {
        const bool branch_taken_0x4560f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4560f4) {
            ctx->pc = 0x456198u;
            goto label_456198;
        }
    }
    ctx->pc = 0x4560FCu;
label_4560fc:
    // 0x4560fc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4560fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_456100:
    // 0x456100: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x456100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_456104:
    // 0x456104: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x456104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_456108:
    // 0x456108: 0xc115ee8  jal         func_457BA0
label_45610c:
    if (ctx->pc == 0x45610Cu) {
        ctx->pc = 0x456110u;
        goto label_456110;
    }
    ctx->pc = 0x456108u;
    SET_GPR_U32(ctx, 31, 0x456110u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x456108u, 0x456110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456110u;
label_456110:
    // 0x456110: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_456114:
    if (ctx->pc == 0x456114u) {
        ctx->pc = 0x456118u;
        goto label_456118;
    }
    ctx->pc = 0x456110u;
    {
        const bool branch_taken_0x456110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456110) {
            ctx->pc = 0x456198u;
            goto label_456198;
        }
    }
    ctx->pc = 0x456118u;
label_456118:
    // 0x456118: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x456118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_45611c:
    // 0x45611c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_456120:
    if (ctx->pc == 0x456120u) {
        ctx->pc = 0x456124u;
        goto label_456124;
    }
    ctx->pc = 0x45611Cu;
    {
        const bool branch_taken_0x45611c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45611c) {
            ctx->pc = 0x456198u;
            goto label_456198;
        }
    }
    ctx->pc = 0x456124u;
label_456124:
    // 0x456124: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x456124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_456128:
    // 0x456128: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x456128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45612c:
    // 0x45612c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x45612cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_456130:
    // 0x456130: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x456130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_456134:
    // 0x456134: 0x24e7e310  addiu       $a3, $a3, -0x1CF0
    ctx->pc = 0x456134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959888));
label_456138:
    // 0x456138: 0x240801cc  addiu       $t0, $zero, 0x1CC
    ctx->pc = 0x456138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_45613c:
    // 0x45613c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45613cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_456140:
    // 0x456140: 0x2529e330  addiu       $t1, $t1, -0x1CD0
    ctx->pc = 0x456140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959920));
label_456144:
    // 0x456144: 0xc113940  jal         func_44E500
label_456148:
    if (ctx->pc == 0x456148u) {
        ctx->pc = 0x45614Cu;
        goto label_45614c;
    }
    ctx->pc = 0x456144u;
    SET_GPR_U32(ctx, 31, 0x45614Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x456144u, 0x45614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45614Cu;
label_45614c:
    // 0x45614c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x45614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_456150:
    // 0x456150: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x456150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_456154:
    // 0x456154: 0x24a5e360  addiu       $a1, $a1, -0x1CA0
    ctx->pc = 0x456154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959968));
label_456158:
    // 0x456158: 0xc115c24  jal         func_457090
label_45615c:
    if (ctx->pc == 0x45615Cu) {
        ctx->pc = 0x456160u;
        goto label_456160;
    }
    ctx->pc = 0x456158u;
    SET_GPR_U32(ctx, 31, 0x456160u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x456158u, 0x456160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456160u;
label_456160:
    // 0x456160: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x456160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_456164:
    // 0x456164: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x456164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_456168:
    // 0x456168: 0x40f809  jalr        $v0
label_45616c:
    if (ctx->pc == 0x45616Cu) {
        ctx->pc = 0x456170u;
        goto label_456170;
    }
    ctx->pc = 0x456168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x456170u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456168u, 0x456170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x456170u;
label_456170:
    // 0x456170: 0xaf82b08c  sw          $v0, -0x4F74($gp)
    ctx->pc = 0x456170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946956), GPR_U32(ctx, 2));
label_456174:
    // 0x456174: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x456174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_456178:
    // 0x456178: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45617c:
    if (ctx->pc == 0x45617Cu) {
        ctx->pc = 0x456180u;
        goto label_456180;
    }
    ctx->pc = 0x456178u;
    {
        const bool branch_taken_0x456178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456178) {
            ctx->pc = 0x456188u;
            goto label_456188;
        }
    }
    ctx->pc = 0x456180u;
label_456180:
    // 0x456180: 0xd  break       0
    ctx->pc = 0x456180u;
    runtime->handleBreak(rdram, ctx);
label_456184:
    // 0x456184: 0x0  nop
    ctx->pc = 0x456184u;
    // NOP
label_456188:
    // 0x456188: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x456188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_45618c:
    // 0x45618c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_456190:
    // 0x456190: 0xc11392c  jal         func_44E4B0
label_456194:
    if (ctx->pc == 0x456194u) {
        ctx->pc = 0x456198u;
        goto label_456198;
    }
    ctx->pc = 0x456190u;
    SET_GPR_U32(ctx, 31, 0x456198u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x456190u, 0x456198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456198u;
label_456198:
    // 0x456198: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x456198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_45619c:
    // 0x45619c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x45619cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4561a0:
    // 0x4561a0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4561a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4561a4:
    // 0x4561a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4561a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4561a8:
    // 0x4561a8: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x4561a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4561ac:
    // 0x4561ac: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x4561acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4561b0:
    // 0x4561b0: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x4561b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4561b4:
    // 0x4561b4: 0xc043764  jal         func_10DD90
label_4561b8:
    if (ctx->pc == 0x4561B8u) {
        ctx->pc = 0x4561BCu;
        goto label_4561bc;
    }
    ctx->pc = 0x4561B4u;
    SET_GPR_U32(ctx, 31, 0x4561BCu);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x4561B4u, 0x4561BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4561BCu;
label_4561bc:
    // 0x4561bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4561bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4561c0:
    // 0x4561c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4561c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4561c4:
    // 0x4561c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4561c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4561c8:
    // 0x4561c8: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x4561c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4561cc:
    // 0x4561cc: 0x3e00008  jr          $ra
label_4561d0:
    if (ctx->pc == 0x4561D0u) {
        ctx->pc = 0x4561D4u;
        goto label_4561d4;
    }
    ctx->pc = 0x4561CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4561CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4561D4u;
label_4561d4:
    // 0x4561d4: 0x0  nop
    ctx->pc = 0x4561d4u;
    // NOP
label_4561d8:
    // 0x4561d8: 0x0  nop
    ctx->pc = 0x4561d8u;
    // NOP
label_4561dc:
    // 0x4561dc: 0x0  nop
    ctx->pc = 0x4561dcu;
    // NOP
    ctx->pc = 0x4561e0u;
}
