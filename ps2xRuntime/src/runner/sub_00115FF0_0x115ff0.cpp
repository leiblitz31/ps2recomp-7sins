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

// Function: sub_00115FF0
// Address: 0x115ff0 - 0x116200
void sub_00115FF0_0x115ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115FF0_0x115ff0");
#endif

    switch (ctx->pc) {
        case 0x115ff0u: goto label_115ff0;
        case 0x115ff4u: goto label_115ff4;
        case 0x115ff8u: goto label_115ff8;
        case 0x115ffcu: goto label_115ffc;
        case 0x116000u: goto label_116000;
        case 0x116004u: goto label_116004;
        case 0x116008u: goto label_116008;
        case 0x11600cu: goto label_11600c;
        case 0x116010u: goto label_116010;
        case 0x116014u: goto label_116014;
        case 0x116018u: goto label_116018;
        case 0x11601cu: goto label_11601c;
        case 0x116020u: goto label_116020;
        case 0x116024u: goto label_116024;
        case 0x116028u: goto label_116028;
        case 0x11602cu: goto label_11602c;
        case 0x116030u: goto label_116030;
        case 0x116034u: goto label_116034;
        case 0x116038u: goto label_116038;
        case 0x11603cu: goto label_11603c;
        case 0x116040u: goto label_116040;
        case 0x116044u: goto label_116044;
        case 0x116048u: goto label_116048;
        case 0x11604cu: goto label_11604c;
        case 0x116050u: goto label_116050;
        case 0x116054u: goto label_116054;
        case 0x116058u: goto label_116058;
        case 0x11605cu: goto label_11605c;
        case 0x116060u: goto label_116060;
        case 0x116064u: goto label_116064;
        case 0x116068u: goto label_116068;
        case 0x11606cu: goto label_11606c;
        case 0x116070u: goto label_116070;
        case 0x116074u: goto label_116074;
        case 0x116078u: goto label_116078;
        case 0x11607cu: goto label_11607c;
        case 0x116080u: goto label_116080;
        case 0x116084u: goto label_116084;
        case 0x116088u: goto label_116088;
        case 0x11608cu: goto label_11608c;
        case 0x116090u: goto label_116090;
        case 0x116094u: goto label_116094;
        case 0x116098u: goto label_116098;
        case 0x11609cu: goto label_11609c;
        case 0x1160a0u: goto label_1160a0;
        case 0x1160a4u: goto label_1160a4;
        case 0x1160a8u: goto label_1160a8;
        case 0x1160acu: goto label_1160ac;
        case 0x1160b0u: goto label_1160b0;
        case 0x1160b4u: goto label_1160b4;
        case 0x1160b8u: goto label_1160b8;
        case 0x1160bcu: goto label_1160bc;
        case 0x1160c0u: goto label_1160c0;
        case 0x1160c4u: goto label_1160c4;
        case 0x1160c8u: goto label_1160c8;
        case 0x1160ccu: goto label_1160cc;
        case 0x1160d0u: goto label_1160d0;
        case 0x1160d4u: goto label_1160d4;
        case 0x1160d8u: goto label_1160d8;
        case 0x1160dcu: goto label_1160dc;
        case 0x1160e0u: goto label_1160e0;
        case 0x1160e4u: goto label_1160e4;
        case 0x1160e8u: goto label_1160e8;
        case 0x1160ecu: goto label_1160ec;
        case 0x1160f0u: goto label_1160f0;
        case 0x1160f4u: goto label_1160f4;
        case 0x1160f8u: goto label_1160f8;
        case 0x1160fcu: goto label_1160fc;
        case 0x116100u: goto label_116100;
        case 0x116104u: goto label_116104;
        case 0x116108u: goto label_116108;
        case 0x11610cu: goto label_11610c;
        case 0x116110u: goto label_116110;
        case 0x116114u: goto label_116114;
        case 0x116118u: goto label_116118;
        case 0x11611cu: goto label_11611c;
        case 0x116120u: goto label_116120;
        case 0x116124u: goto label_116124;
        case 0x116128u: goto label_116128;
        case 0x11612cu: goto label_11612c;
        case 0x116130u: goto label_116130;
        case 0x116134u: goto label_116134;
        case 0x116138u: goto label_116138;
        case 0x11613cu: goto label_11613c;
        case 0x116140u: goto label_116140;
        case 0x116144u: goto label_116144;
        case 0x116148u: goto label_116148;
        case 0x11614cu: goto label_11614c;
        case 0x116150u: goto label_116150;
        case 0x116154u: goto label_116154;
        case 0x116158u: goto label_116158;
        case 0x11615cu: goto label_11615c;
        case 0x116160u: goto label_116160;
        case 0x116164u: goto label_116164;
        case 0x116168u: goto label_116168;
        case 0x11616cu: goto label_11616c;
        case 0x116170u: goto label_116170;
        case 0x116174u: goto label_116174;
        case 0x116178u: goto label_116178;
        case 0x11617cu: goto label_11617c;
        case 0x116180u: goto label_116180;
        case 0x116184u: goto label_116184;
        case 0x116188u: goto label_116188;
        case 0x11618cu: goto label_11618c;
        case 0x116190u: goto label_116190;
        case 0x116194u: goto label_116194;
        case 0x116198u: goto label_116198;
        case 0x11619cu: goto label_11619c;
        case 0x1161a0u: goto label_1161a0;
        case 0x1161a4u: goto label_1161a4;
        case 0x1161a8u: goto label_1161a8;
        case 0x1161acu: goto label_1161ac;
        case 0x1161b0u: goto label_1161b0;
        case 0x1161b4u: goto label_1161b4;
        case 0x1161b8u: goto label_1161b8;
        case 0x1161bcu: goto label_1161bc;
        case 0x1161c0u: goto label_1161c0;
        case 0x1161c4u: goto label_1161c4;
        case 0x1161c8u: goto label_1161c8;
        case 0x1161ccu: goto label_1161cc;
        case 0x1161d0u: goto label_1161d0;
        case 0x1161d4u: goto label_1161d4;
        case 0x1161d8u: goto label_1161d8;
        case 0x1161dcu: goto label_1161dc;
        case 0x1161e0u: goto label_1161e0;
        case 0x1161e4u: goto label_1161e4;
        case 0x1161e8u: goto label_1161e8;
        case 0x1161ecu: goto label_1161ec;
        case 0x1161f0u: goto label_1161f0;
        case 0x1161f4u: goto label_1161f4;
        case 0x1161f8u: goto label_1161f8;
        case 0x1161fcu: goto label_1161fc;
        default: break;
    }

    ctx->pc = 0x115ff0u;

label_115ff0:
    // 0x115ff0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x115ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_115ff4:
    // 0x115ff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x115ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_115ff8:
    // 0x115ff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x115ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_115ffc:
    // 0x115ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x115ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_116000:
    // 0x116000: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_116004:
    // 0x116004: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x116004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_116008:
    // 0x116008: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x116008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_11600c:
    // 0x11600c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x11600cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_116010:
    // 0x116010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116014:
    // 0x116014: 0xc08ec98  jal         func_23B260
label_116018:
    if (ctx->pc == 0x116018u) {
        ctx->pc = 0x11601Cu;
        goto label_11601c;
    }
    ctx->pc = 0x116014u;
    SET_GPR_U32(ctx, 31, 0x11601Cu);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x116014u, 0x11601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11601Cu;
label_11601c:
    // 0x11601c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_116020:
    // 0x116020: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x116020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_116024:
    // 0x116024: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x116024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_116028:
    // 0x116028: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x116028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_11602c:
    // 0x11602c: 0xc0422a8  jal         func_108AA0
label_116030:
    if (ctx->pc == 0x116030u) {
        ctx->pc = 0x116034u;
        goto label_116034;
    }
    ctx->pc = 0x11602Cu;
    SET_GPR_U32(ctx, 31, 0x116034u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x11602Cu, 0x116034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116034u;
label_116034:
    // 0x116034: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x116034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_116038:
    // 0x116038: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x116038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11603c:
    // 0x11603c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x11603cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_116040:
    // 0x116040: 0x320f809  jalr        $t9
label_116044:
    if (ctx->pc == 0x116044u) {
        ctx->pc = 0x116048u;
        goto label_116048;
    }
    ctx->pc = 0x116040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x116048u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116040u, 0x116048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116048u;
label_116048:
    // 0x116048: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x116048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11604c:
    // 0x11604c: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_116050:
    if (ctx->pc == 0x116050u) {
        ctx->pc = 0x116054u;
        goto label_116054;
    }
    ctx->pc = 0x11604Cu;
    {
        const bool branch_taken_0x11604c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11604c) {
            ctx->pc = 0x116084u;
            goto label_116084;
        }
    }
    ctx->pc = 0x116054u;
label_116054:
    // 0x116054: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_116058:
    // 0x116058: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x116058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_11605c:
    // 0x11605c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_116060:
    // 0x116060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_116064:
    // 0x116064: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x116064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_116068:
    // 0x116068: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x116068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11606c:
    // 0x11606c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x11606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_116070:
    // 0x116070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116074:
    // 0x116074: 0xc0422a8  jal         func_108AA0
label_116078:
    if (ctx->pc == 0x116078u) {
        ctx->pc = 0x11607Cu;
        goto label_11607c;
    }
    ctx->pc = 0x116074u;
    SET_GPR_U32(ctx, 31, 0x11607Cu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x116074u, 0x11607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11607Cu;
label_11607c:
    // 0x11607c: 0x10000011  b           . + 4 + (0x11 << 2)
label_116080:
    if (ctx->pc == 0x116080u) {
        ctx->pc = 0x116084u;
        goto label_116084;
    }
    ctx->pc = 0x11607Cu;
    {
        const bool branch_taken_0x11607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11607c) {
            ctx->pc = 0x1160C4u;
            goto label_1160c4;
        }
    }
    ctx->pc = 0x116084u;
label_116084:
    // 0x116084: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x116084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_116088:
    // 0x116088: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x116088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_11608c:
    // 0x11608c: 0xc0422a8  jal         func_108AA0
label_116090:
    if (ctx->pc == 0x116090u) {
        ctx->pc = 0x116094u;
        goto label_116094;
    }
    ctx->pc = 0x11608Cu;
    SET_GPR_U32(ctx, 31, 0x116094u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x11608Cu, 0x116094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116094u;
label_116094:
    // 0x116094: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x116094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_116098:
    // 0x116098: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11609c:
    // 0x11609c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x11609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1160a0:
    // 0x1160a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1160a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1160a4:
    // 0x1160a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1160a8:
    if (ctx->pc == 0x1160A8u) {
        ctx->pc = 0x1160ACu;
        goto label_1160ac;
    }
    ctx->pc = 0x1160A4u;
    {
        const bool branch_taken_0x1160a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1160a4) {
            ctx->pc = 0x1160B8u;
            goto label_1160b8;
        }
    }
    ctx->pc = 0x1160ACu;
label_1160ac:
    // 0x1160ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1160acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1160b0:
    // 0x1160b0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1160b4:
    if (ctx->pc == 0x1160B4u) {
        ctx->pc = 0x1160B8u;
        goto label_1160b8;
    }
    ctx->pc = 0x1160B0u;
    {
        const bool branch_taken_0x1160b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1160b0) {
            ctx->pc = 0x1161E0u;
            goto label_1161e0;
        }
    }
    ctx->pc = 0x1160B8u;
label_1160b8:
    // 0x1160b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1160b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1160bc:
    // 0x1160bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1160bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1160c0:
    // 0x1160c0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1160c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_1160c4:
    // 0x1160c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1160c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1160c8:
    // 0x1160c8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1160c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1160cc:
    // 0x1160cc: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1160ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1160d0:
    // 0x1160d0: 0xc0422a8  jal         func_108AA0
label_1160d4:
    if (ctx->pc == 0x1160D4u) {
        ctx->pc = 0x1160D8u;
        goto label_1160d8;
    }
    ctx->pc = 0x1160D0u;
    SET_GPR_U32(ctx, 31, 0x1160D8u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x1160D0u, 0x1160D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160D8u;
label_1160d8:
    // 0x1160d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1160d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1160dc:
    // 0x1160dc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1160dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1160e0:
    // 0x1160e0: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x1160e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_1160e4:
    // 0x1160e4: 0xc0422a8  jal         func_108AA0
label_1160e8:
    if (ctx->pc == 0x1160E8u) {
        ctx->pc = 0x1160ECu;
        goto label_1160ec;
    }
    ctx->pc = 0x1160E4u;
    SET_GPR_U32(ctx, 31, 0x1160ECu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x1160E4u, 0x1160ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160ECu;
label_1160ec:
    // 0x1160ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1160ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1160f0:
    // 0x1160f0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1160f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1160f4:
    // 0x1160f4: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1160f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1160f8:
    // 0x1160f8: 0xc0422a8  jal         func_108AA0
label_1160fc:
    if (ctx->pc == 0x1160FCu) {
        ctx->pc = 0x116100u;
        goto label_116100;
    }
    ctx->pc = 0x1160F8u;
    SET_GPR_U32(ctx, 31, 0x116100u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x1160F8u, 0x116100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116100u;
label_116100:
    // 0x116100: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_116104:
    // 0x116104: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x116104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_116108:
    // 0x116108: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x116108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_11610c:
    // 0x11610c: 0xc042298  jal         func_108A60
label_116110:
    if (ctx->pc == 0x116110u) {
        ctx->pc = 0x116114u;
        goto label_116114;
    }
    ctx->pc = 0x11610Cu;
    SET_GPR_U32(ctx, 31, 0x116114u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x11610Cu, 0x116114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116114u;
label_116114:
    // 0x116114: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x116114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_116118:
    // 0x116118: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x116118u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_11611c:
    // 0x11611c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_116120:
    if (ctx->pc == 0x116120u) {
        ctx->pc = 0x116124u;
        goto label_116124;
    }
    ctx->pc = 0x11611Cu;
    {
        const bool branch_taken_0x11611c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11611c) {
            ctx->pc = 0x11614Cu;
            goto label_11614c;
        }
    }
    ctx->pc = 0x116124u;
label_116124:
    // 0x116124: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x116124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_116128:
    // 0x116128: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x116128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11612c:
    // 0x11612c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x11612cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_116130:
    // 0x116130: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116134:
    // 0x116134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x116134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_116138:
    // 0x116138: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x116138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_11613c:
    // 0x11613c: 0x320f809  jalr        $t9
label_116140:
    if (ctx->pc == 0x116140u) {
        ctx->pc = 0x116144u;
        goto label_116144;
    }
    ctx->pc = 0x11613Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x116144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11613Cu, 0x116144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116144u;
label_116144:
    // 0x116144: 0x1000000b  b           . + 4 + (0xB << 2)
label_116148:
    if (ctx->pc == 0x116148u) {
        ctx->pc = 0x11614Cu;
        goto label_11614c;
    }
    ctx->pc = 0x116144u;
    {
        const bool branch_taken_0x116144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116144) {
            ctx->pc = 0x116174u;
            goto label_116174;
        }
    }
    ctx->pc = 0x11614Cu;
label_11614c:
    // 0x11614c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x11614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_116150:
    // 0x116150: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x116150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_116154:
    // 0x116154: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x116154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_116158:
    // 0x116158: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11615c:
    // 0x11615c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11615cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_116160:
    // 0x116160: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x116160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_116164:
    // 0x116164: 0x320f809  jalr        $t9
label_116168:
    if (ctx->pc == 0x116168u) {
        ctx->pc = 0x11616Cu;
        goto label_11616c;
    }
    ctx->pc = 0x116164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11616Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116164u, 0x11616Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11616Cu;
label_11616c:
    // 0x11616c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x11616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_116170:
    // 0x116170: 0xa040001f  sb          $zero, 0x1F($v0)
    ctx->pc = 0x116170u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 31), (uint8_t)GPR_U32(ctx, 0));
label_116174:
    // 0x116174: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x116174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_116178:
    // 0x116178: 0xc041b48  jal         func_106D20
label_11617c:
    if (ctx->pc == 0x11617Cu) {
        ctx->pc = 0x116180u;
        goto label_116180;
    }
    ctx->pc = 0x116178u;
    SET_GPR_U32(ctx, 31, 0x116180u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x116178u, 0x116180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116180u;
label_116180:
    // 0x116180: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x116180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_116184:
    // 0x116184: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x116184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_116188:
    // 0x116188: 0xc045a48  jal         func_116920
label_11618c:
    if (ctx->pc == 0x11618Cu) {
        ctx->pc = 0x116190u;
        goto label_116190;
    }
    ctx->pc = 0x116188u;
    SET_GPR_U32(ctx, 31, 0x116190u);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x116188u, 0x116190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116190u;
label_116190:
    // 0x116190: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x116190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_116194:
    // 0x116194: 0xc0457e8  jal         func_115FA0
label_116198:
    if (ctx->pc == 0x116198u) {
        ctx->pc = 0x11619Cu;
        goto label_11619c;
    }
    ctx->pc = 0x116194u;
    SET_GPR_U32(ctx, 31, 0x11619Cu);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x116194u, 0x11619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11619Cu;
label_11619c:
    // 0x11619c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1161a0:
    // 0x1161a0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1161a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1161a4:
    // 0x1161a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1161a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1161a8:
    // 0x1161a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1161a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1161ac:
    // 0x1161ac: 0x320f809  jalr        $t9
label_1161b0:
    if (ctx->pc == 0x1161B0u) {
        ctx->pc = 0x1161B4u;
        goto label_1161b4;
    }
    ctx->pc = 0x1161ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1161B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1161ACu, 0x1161B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1161B4u;
label_1161b4:
    // 0x1161b4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1161b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1161b8:
    // 0x1161b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1161b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1161bc:
    // 0x1161bc: 0xc08ec98  jal         func_23B260
label_1161c0:
    if (ctx->pc == 0x1161C0u) {
        ctx->pc = 0x1161C4u;
        goto label_1161c4;
    }
    ctx->pc = 0x1161BCu;
    SET_GPR_U32(ctx, 31, 0x1161C4u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x1161BCu, 0x1161C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161C4u;
label_1161c4:
    // 0x1161c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1161c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1161c8:
    // 0x1161c8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1161c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1161cc:
    // 0x1161cc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1161ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1161d0:
    // 0x1161d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1161d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1161d4:
    // 0x1161d4: 0xc0402d4  jal         func_100B50
label_1161d8:
    if (ctx->pc == 0x1161D8u) {
        ctx->pc = 0x1161DCu;
        goto label_1161dc;
    }
    ctx->pc = 0x1161D4u;
    SET_GPR_U32(ctx, 31, 0x1161DCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1161D4u, 0x1161DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161DCu;
label_1161dc:
    // 0x1161dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1161dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1161e0:
    // 0x1161e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1161e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1161e4:
    // 0x1161e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1161e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1161e8:
    // 0x1161e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1161e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1161ec:
    // 0x1161ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1161ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1161f0:
    // 0x1161f0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1161f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1161f4:
    // 0x1161f4: 0x3e00008  jr          $ra
label_1161f8:
    if (ctx->pc == 0x1161F8u) {
        ctx->pc = 0x1161FCu;
        goto label_1161fc;
    }
    ctx->pc = 0x1161F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1161F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1161FCu;
label_1161fc:
    // 0x1161fc: 0x0  nop
    ctx->pc = 0x1161fcu;
    // NOP
    ctx->pc = 0x116200u;
}
