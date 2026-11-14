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

// Function: sub_00440FE0
// Address: 0x440fe0 - 0x441258
void sub_00440FE0_0x440fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440FE0_0x440fe0");
#endif

    switch (ctx->pc) {
        case 0x440fe0u: goto label_440fe0;
        case 0x440fe4u: goto label_440fe4;
        case 0x440fe8u: goto label_440fe8;
        case 0x440fecu: goto label_440fec;
        case 0x440ff0u: goto label_440ff0;
        case 0x440ff4u: goto label_440ff4;
        case 0x440ff8u: goto label_440ff8;
        case 0x440ffcu: goto label_440ffc;
        case 0x441000u: goto label_441000;
        case 0x441004u: goto label_441004;
        case 0x441008u: goto label_441008;
        case 0x44100cu: goto label_44100c;
        case 0x441010u: goto label_441010;
        case 0x441014u: goto label_441014;
        case 0x441018u: goto label_441018;
        case 0x44101cu: goto label_44101c;
        case 0x441020u: goto label_441020;
        case 0x441024u: goto label_441024;
        case 0x441028u: goto label_441028;
        case 0x44102cu: goto label_44102c;
        case 0x441030u: goto label_441030;
        case 0x441034u: goto label_441034;
        case 0x441038u: goto label_441038;
        case 0x44103cu: goto label_44103c;
        case 0x441040u: goto label_441040;
        case 0x441044u: goto label_441044;
        case 0x441048u: goto label_441048;
        case 0x44104cu: goto label_44104c;
        case 0x441050u: goto label_441050;
        case 0x441054u: goto label_441054;
        case 0x441058u: goto label_441058;
        case 0x44105cu: goto label_44105c;
        case 0x441060u: goto label_441060;
        case 0x441064u: goto label_441064;
        case 0x441068u: goto label_441068;
        case 0x44106cu: goto label_44106c;
        case 0x441070u: goto label_441070;
        case 0x441074u: goto label_441074;
        case 0x441078u: goto label_441078;
        case 0x44107cu: goto label_44107c;
        case 0x441080u: goto label_441080;
        case 0x441084u: goto label_441084;
        case 0x441088u: goto label_441088;
        case 0x44108cu: goto label_44108c;
        case 0x441090u: goto label_441090;
        case 0x441094u: goto label_441094;
        case 0x441098u: goto label_441098;
        case 0x44109cu: goto label_44109c;
        case 0x4410a0u: goto label_4410a0;
        case 0x4410a4u: goto label_4410a4;
        case 0x4410a8u: goto label_4410a8;
        case 0x4410acu: goto label_4410ac;
        case 0x4410b0u: goto label_4410b0;
        case 0x4410b4u: goto label_4410b4;
        case 0x4410b8u: goto label_4410b8;
        case 0x4410bcu: goto label_4410bc;
        case 0x4410c0u: goto label_4410c0;
        case 0x4410c4u: goto label_4410c4;
        case 0x4410c8u: goto label_4410c8;
        case 0x4410ccu: goto label_4410cc;
        case 0x4410d0u: goto label_4410d0;
        case 0x4410d4u: goto label_4410d4;
        case 0x4410d8u: goto label_4410d8;
        case 0x4410dcu: goto label_4410dc;
        case 0x4410e0u: goto label_4410e0;
        case 0x4410e4u: goto label_4410e4;
        case 0x4410e8u: goto label_4410e8;
        case 0x4410ecu: goto label_4410ec;
        case 0x4410f0u: goto label_4410f0;
        case 0x4410f4u: goto label_4410f4;
        case 0x4410f8u: goto label_4410f8;
        case 0x4410fcu: goto label_4410fc;
        case 0x441100u: goto label_441100;
        case 0x441104u: goto label_441104;
        case 0x441108u: goto label_441108;
        case 0x44110cu: goto label_44110c;
        case 0x441110u: goto label_441110;
        case 0x441114u: goto label_441114;
        case 0x441118u: goto label_441118;
        case 0x44111cu: goto label_44111c;
        case 0x441120u: goto label_441120;
        case 0x441124u: goto label_441124;
        case 0x441128u: goto label_441128;
        case 0x44112cu: goto label_44112c;
        case 0x441130u: goto label_441130;
        case 0x441134u: goto label_441134;
        case 0x441138u: goto label_441138;
        case 0x44113cu: goto label_44113c;
        case 0x441140u: goto label_441140;
        case 0x441144u: goto label_441144;
        case 0x441148u: goto label_441148;
        case 0x44114cu: goto label_44114c;
        case 0x441150u: goto label_441150;
        case 0x441154u: goto label_441154;
        case 0x441158u: goto label_441158;
        case 0x44115cu: goto label_44115c;
        case 0x441160u: goto label_441160;
        case 0x441164u: goto label_441164;
        case 0x441168u: goto label_441168;
        case 0x44116cu: goto label_44116c;
        case 0x441170u: goto label_441170;
        case 0x441174u: goto label_441174;
        case 0x441178u: goto label_441178;
        case 0x44117cu: goto label_44117c;
        case 0x441180u: goto label_441180;
        case 0x441184u: goto label_441184;
        case 0x441188u: goto label_441188;
        case 0x44118cu: goto label_44118c;
        case 0x441190u: goto label_441190;
        case 0x441194u: goto label_441194;
        case 0x441198u: goto label_441198;
        case 0x44119cu: goto label_44119c;
        case 0x4411a0u: goto label_4411a0;
        case 0x4411a4u: goto label_4411a4;
        case 0x4411a8u: goto label_4411a8;
        case 0x4411acu: goto label_4411ac;
        case 0x4411b0u: goto label_4411b0;
        case 0x4411b4u: goto label_4411b4;
        case 0x4411b8u: goto label_4411b8;
        case 0x4411bcu: goto label_4411bc;
        case 0x4411c0u: goto label_4411c0;
        case 0x4411c4u: goto label_4411c4;
        case 0x4411c8u: goto label_4411c8;
        case 0x4411ccu: goto label_4411cc;
        case 0x4411d0u: goto label_4411d0;
        case 0x4411d4u: goto label_4411d4;
        case 0x4411d8u: goto label_4411d8;
        case 0x4411dcu: goto label_4411dc;
        case 0x4411e0u: goto label_4411e0;
        case 0x4411e4u: goto label_4411e4;
        case 0x4411e8u: goto label_4411e8;
        case 0x4411ecu: goto label_4411ec;
        case 0x4411f0u: goto label_4411f0;
        case 0x4411f4u: goto label_4411f4;
        case 0x4411f8u: goto label_4411f8;
        case 0x4411fcu: goto label_4411fc;
        case 0x441200u: goto label_441200;
        case 0x441204u: goto label_441204;
        case 0x441208u: goto label_441208;
        case 0x44120cu: goto label_44120c;
        case 0x441210u: goto label_441210;
        case 0x441214u: goto label_441214;
        case 0x441218u: goto label_441218;
        case 0x44121cu: goto label_44121c;
        case 0x441220u: goto label_441220;
        case 0x441224u: goto label_441224;
        case 0x441228u: goto label_441228;
        case 0x44122cu: goto label_44122c;
        case 0x441230u: goto label_441230;
        case 0x441234u: goto label_441234;
        case 0x441238u: goto label_441238;
        case 0x44123cu: goto label_44123c;
        case 0x441240u: goto label_441240;
        case 0x441244u: goto label_441244;
        case 0x441248u: goto label_441248;
        case 0x44124cu: goto label_44124c;
        case 0x441250u: goto label_441250;
        case 0x441254u: goto label_441254;
        default: break;
    }

    ctx->pc = 0x440fe0u;

label_440fe0:
    // 0x440fe0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x440fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_440fe4:
    // 0x440fe4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x440fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_440fe8:
    // 0x440fe8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x440fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_440fec:
    // 0x440fec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x440fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_440ff0:
    // 0x440ff0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x440ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_440ff4:
    // 0x440ff4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x440ff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_440ff8:
    // 0x440ff8: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x440ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_440ffc:
    // 0x440ffc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x440ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_441000:
    // 0x441000: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x441000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_441004:
    // 0x441004: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x441004u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_441008:
    // 0x441008: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x441008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_44100c:
    // 0x44100c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_441010:
    // 0x441010: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x441010u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_441014:
    // 0x441014: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x441014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_441018:
    // 0x441018: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
label_44101c:
    if (ctx->pc == 0x44101Cu) {
        ctx->pc = 0x44101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441018u;
        // 0x44101c: 0x4803e  dsrl32      $s0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x441020u;
        goto label_441020;
    }
    ctx->pc = 0x441018u;
    {
        const bool branch_taken_0x441018 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x44101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441018u;
        // 0x44101c: 0x4803e  dsrl32      $s0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441018) {
            ctx->pc = 0x441074u;
            goto label_441074;
        }
    }
    ctx->pc = 0x441020u;
label_441020:
    // 0x441020: 0x6611000f  daddiu      $s1, $s0, 0xF
    ctx->pc = 0x441020u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)15);
label_441024:
    // 0x441024: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x441024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_441028:
    // 0x441028: 0x34a5fee0  ori         $a1, $a1, 0xFEE0
    ctx->pc = 0x441028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65248);
label_44102c:
    // 0x44102c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x44102cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_441030:
    // 0x441030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x441030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_441034:
    // 0x441034: 0xc0be820  jal         func_2FA080
label_441038:
    if (ctx->pc == 0x441038u) {
        ctx->pc = 0x441038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441034u;
        // 0x441038: 0x2610e880  addiu       $s0, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44103Cu;
        goto label_44103c;
    }
    ctx->pc = 0x441034u;
    SET_GPR_U32(ctx, 31, 0x44103Cu);
    ctx->pc = 0x441038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441034u;
    // 0x441038: 0x2610e880  addiu       $s0, $s0, -0x1780 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x441034u, 0x44103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44103Cu;
label_44103c:
    // 0x44103c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x44103cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_441040:
    // 0x441040: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x441040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_441044:
    // 0x441044: 0x22078  dsll        $a0, $v0, 1
    ctx->pc = 0x441044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 1);
label_441048:
    // 0x441048: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x441048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44104c:
    // 0x44104c: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x44104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_441050:
    // 0x441050: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x441050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_441054:
    // 0x441054: 0x648400b0  daddiu      $a0, $a0, 0xB0
    ctx->pc = 0x441054u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)176);
label_441058:
    // 0x441058: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x441058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_44105c:
    // 0x44105c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x44105cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_441060:
    // 0x441060: 0x60f809  jalr        $v1
label_441064:
    if (ctx->pc == 0x441064u) {
        ctx->pc = 0x441064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441060u;
        // 0x441064: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x441068u;
        goto label_441068;
    }
    ctx->pc = 0x441060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x441068u);
        ctx->pc = 0x441064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441060u;
        // 0x441064: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x441060u, 0x441068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x441068u;
label_441068:
    // 0x441068: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x441068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44106c:
    // 0x44106c: 0x10000012  b           . + 4 + (0x12 << 2)
label_441070:
    if (ctx->pc == 0x441070u) {
        ctx->pc = 0x441070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44106Cu;
        // 0x441070: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x441074u;
        goto label_441074;
    }
    ctx->pc = 0x44106Cu;
    {
        const bool branch_taken_0x44106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44106Cu;
        // 0x441070: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44106c) {
            ctx->pc = 0x4410B8u;
            goto label_4410b8;
        }
    }
    ctx->pc = 0x441074u;
label_441074:
    // 0x441074: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x441074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_441078:
    // 0x441078: 0xc10a1e2  jal         func_428788
label_44107c:
    if (ctx->pc == 0x44107Cu) {
        ctx->pc = 0x44107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441078u;
        // 0x44107c: 0x6610000f  daddiu      $s0, $s0, 0xF (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x441080u;
        goto label_441080;
    }
    ctx->pc = 0x441078u;
    SET_GPR_U32(ctx, 31, 0x441080u);
    ctx->pc = 0x44107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441078u;
    // 0x44107c: 0x6610000f  daddiu      $s0, $s0, 0xF (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x428788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428788u, 0x441078u, 0x441080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441080u;
label_441080:
    // 0x441080: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x441080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_441084:
    // 0x441084: 0x34a5fee0  ori         $a1, $a1, 0xFEE0
    ctx->pc = 0x441084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65248);
label_441088:
    // 0x441088: 0xc0be820  jal         func_2FA080
label_44108c:
    if (ctx->pc == 0x44108Cu) {
        ctx->pc = 0x44108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441088u;
        // 0x44108c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x441090u;
        goto label_441090;
    }
    ctx->pc = 0x441088u;
    SET_GPR_U32(ctx, 31, 0x441090u);
    ctx->pc = 0x44108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441088u;
    // 0x44108c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x441088u, 0x441090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441090u;
label_441090:
    // 0x441090: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x441090u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_441094:
    // 0x441094: 0x22078  dsll        $a0, $v0, 1
    ctx->pc = 0x441094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 1);
label_441098:
    // 0x441098: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x441098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_44109c:
    // 0x44109c: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x44109cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_4410a0:
    // 0x4410a0: 0x648400b0  daddiu      $a0, $a0, 0xB0
    ctx->pc = 0x4410a0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)176);
label_4410a4:
    // 0x4410a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4410a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_4410a8:
    // 0x4410a8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4410a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_4410ac:
    // 0x4410ac: 0xc10a4a8  jal         func_4292A0
label_4410b0:
    if (ctx->pc == 0x4410B0u) {
        ctx->pc = 0x4410B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4410ACu;
        // 0x4410b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4410B4u;
        goto label_4410b4;
    }
    ctx->pc = 0x4410ACu;
    SET_GPR_U32(ctx, 31, 0x4410B4u);
    ctx->pc = 0x4410B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4410ACu;
    // 0x4410b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4292A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4292A0u, 0x4410ACu, 0x4410B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4410B4u;
label_4410b4:
    // 0x4410b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4410b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4410b8:
    // 0x4410b8: 0x108738  dsll        $s0, $s0, 28
    ctx->pc = 0x4410b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 28);
label_4410bc:
    // 0x4410bc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4410bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_4410c0:
    // 0x4410c0: 0x24027fee  addiu       $v0, $zero, 0x7FEE
    ctx->pc = 0x4410c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
label_4410c4:
    // 0x4410c4: 0x26077fed  addiu       $a3, $s0, 0x7FED
    ctx->pc = 0x4410c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32749));
label_4410c8:
    // 0x4410c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4410c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4410cc:
    // 0x4410cc: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x4410ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4410d0:
    // 0x4410d0: 0x2644003f  addiu       $a0, $s2, 0x3F
    ctx->pc = 0x4410d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_4410d4:
    // 0x4410d4: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x4410d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_4410d8:
    // 0x4410d8: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x4410d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_4410dc:
    // 0x4410dc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x4410dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
label_4410e0:
    // 0x4410e0: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x4410e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_4410e4:
    // 0x4410e4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x4410e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_4410e8:
    // 0x4410e8: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x4410e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_4410ec:
    // 0x4410ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4410ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4410f0:
    // 0x4410f0: 0x7109c389  pcpyld      $t8, $t0, $t1
    ctx->pc = 0x4410f0u;
    SET_GPR_VEC(ctx, 24, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
label_4410f4:
    // 0x4410f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4410f8:
    if (ctx->pc == 0x4410F8u) {
        ctx->pc = 0x4410F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4410F4u;
        // 0x4410f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4410FCu;
        goto label_4410fc;
    }
    ctx->pc = 0x4410F4u;
    {
        const bool branch_taken_0x4410f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4410f4) {
            ctx->pc = 0x4410F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4410F4u;
            // 0x4410f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4410FCu;
            goto label_4410fc;
        }
    }
    ctx->pc = 0x4410FCu;
label_4410fc:
    // 0x4410fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4410fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_441100:
    // 0x441100: 0x835024  and         $t2, $a0, $v1
    ctx->pc = 0x441100u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_441104:
    // 0x441104: 0x5812  mflo        $t3
    ctx->pc = 0x441104u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_441108:
    // 0x441108: 0x19600031  blez        $t3, . + 4 + (0x31 << 2)
label_44110c:
    if (ctx->pc == 0x44110Cu) {
        ctx->pc = 0x44110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441108u;
        // 0x44110c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x441110u;
        goto label_441110;
    }
    ctx->pc = 0x441108u;
    {
        const bool branch_taken_0x441108 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x44110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441108u;
        // 0x44110c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441108) {
            ctx->pc = 0x4411D0u;
            goto label_4411d0;
        }
    }
    ctx->pc = 0x441110u;
label_441110:
    // 0x441110: 0x3c0e0007  lui         $t6, 0x7
    ctx->pc = 0x441110u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)7 << 16));
label_441114:
    // 0x441114: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x441114u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_441118:
    // 0x441118: 0x34198000  ori         $t9, $zero, 0x8000
    ctx->pc = 0x441118u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_44111c:
    // 0x44111c: 0x19cb3c  dsll32      $t9, $t9, 12
    ctx->pc = 0x44111cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 12));
label_441120:
    // 0x441120: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x441120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441124:
    // 0x441124: 0x3c135000  lui         $s3, 0x5000
    ctx->pc = 0x441124u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)20480 << 16));
label_441128:
    // 0x441128: 0x35cefee0  ori         $t6, $t6, 0xFEE0
    ctx->pc = 0x441128u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65248);
label_44112c:
    // 0x44112c: 0x240f7fee  addiu       $t7, $zero, 0x7FEE
    ctx->pc = 0x44112cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
label_441130:
    // 0x441130: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x441130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_441134:
    // 0x441134: 0x0  nop
    ctx->pc = 0x441134u;
    // NOP
label_441138:
    // 0x441138: 0x7cf80000  sq          $t8, 0x0($a3)
    ctx->pc = 0x441138u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 24));
label_44113c:
    // 0x44113c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x44113cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_441140:
    // 0x441140: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x441140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_441144:
    // 0x441144: 0x2a027fef  slti        $v0, $s0, 0x7FEF
    ctx->pc = 0x441144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32751) ? 1 : 0);
label_441148:
    // 0x441148: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_44114c:
    if (ctx->pc == 0x44114Cu) {
        ctx->pc = 0x44114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441148u;
        // 0x44114c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x441150u;
        goto label_441150;
    }
    ctx->pc = 0x441148u;
    {
        const bool branch_taken_0x441148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441148u;
        // 0x44114c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441148) {
            ctx->pc = 0x441154u;
            goto label_441154;
        }
    }
    ctx->pc = 0x441150u;
label_441150:
    // 0x441150: 0x24047fee  addiu       $a0, $zero, 0x7FEE
    ctx->pc = 0x441150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
label_441154:
    // 0x441154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x441154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441158:
    // 0x441158: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x441158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44115c:
    // 0x44115c: 0x1af001a  div         $zero, $t5, $t7
    ctx->pc = 0x44115cu;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_441160:
    // 0x441160: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x441160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
label_441164:
    // 0x441164: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x441164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_441168:
    // 0x441168: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x441168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
label_44116c:
    // 0x44116c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x44116cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_441170:
    // 0x441170: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x441170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_441174:
    // 0x441174: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x441174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_441178:
    // 0x441178: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x441178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_44117c:
    // 0x44117c: 0x594825  or          $t1, $v0, $t9
    ctx->pc = 0x44117cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_441180:
    // 0x441180: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x441180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_441184:
    // 0x441184: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x441184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_441188:
    // 0x441188: 0x72292b89  pcpyld      $a1, $s1, $t1
    ctx->pc = 0x441188u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
label_44118c:
    // 0x44118c: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x44118cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
label_441190:
    // 0x441190: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x441190u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
label_441194:
    // 0x441194: 0x624825  or          $t1, $v1, $v0
    ctx->pc = 0x441194u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_441198:
    // 0x441198: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x441198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
label_44119c:
    // 0x44119c: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x44119cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
label_4411a0:
    // 0x4411a0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4411a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4411a4:
    // 0x4411a4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x4411a4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_4411a8:
    // 0x4411a8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4411a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_4411ac:
    // 0x4411ac: 0x51f10001  beql        $t7, $s1, . + 4 + (0x1 << 2)
label_4411b0:
    if (ctx->pc == 0x4411B0u) {
        ctx->pc = 0x4411B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4411ACu;
        // 0x4411b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4411B4u;
        goto label_4411b4;
    }
    ctx->pc = 0x4411ACu;
    {
        const bool branch_taken_0x4411ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 17));
        if (branch_taken_0x4411ac) {
            ctx->pc = 0x4411B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4411ACu;
            // 0x4411b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4411B4u;
            goto label_4411b4;
        }
    }
    ctx->pc = 0x4411B4u;
label_4411b4:
    // 0x4411b4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4411b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4411b8:
    // 0x4411b8: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x4411b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_4411bc:
    // 0x4411bc: 0xce3021  addu        $a2, $a2, $t6
    ctx->pc = 0x4411bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_4411c0:
    // 0x4411c0: 0x5812  mflo        $t3
    ctx->pc = 0x4411c0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_4411c4:
    // 0x4411c4: 0x18b102a  slt         $v0, $t4, $t3
    ctx->pc = 0x4411c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_4411c8:
    // 0x4411c8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_4411cc:
    if (ctx->pc == 0x4411CCu) {
        ctx->pc = 0x4411CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4411C8u;
        // 0x4411cc: 0x26108012  addiu       $s0, $s0, -0x7FEE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934546));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4411D0u;
        goto label_4411d0;
    }
    ctx->pc = 0x4411C8u;
    {
        const bool branch_taken_0x4411c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4411CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4411C8u;
        // 0x4411cc: 0x26108012  addiu       $s0, $s0, -0x7FEE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4411c8) {
            ctx->pc = 0x441138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_441138;
        }
    }
    ctx->pc = 0x4411D0u;
label_4411d0:
    // 0x4411d0: 0x3c096000  lui         $t1, 0x6000
    ctx->pc = 0x4411d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24576 << 16));
label_4411d4:
    // 0x4411d4: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x4411d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
label_4411d8:
    // 0x4411d8: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x4411d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
label_4411dc:
    // 0x4411dc: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x4411dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_4411e0:
    // 0x4411e0: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x4411e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_4411e4:
    // 0x4411e4: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x4411e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
label_4411e8:
    // 0x4411e8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4411e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4411ec:
    // 0x4411ec: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x4411ecu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_4411f0:
    // 0x4411f0: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x4411f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_4411f4:
    // 0x4411f4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x4411f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_4411f8:
    // 0x4411f8: 0x35298001  ori         $t1, $t1, 0x8001
    ctx->pc = 0x4411f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32769);
label_4411fc:
    // 0x4411fc: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x4411fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_441200:
    // 0x441200: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x441200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_441204:
    // 0x441204: 0x71092b89  pcpyld      $a1, $t0, $t1
    ctx->pc = 0x441204u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
label_441208:
    // 0x441208: 0x24634040  addiu       $v1, $v1, 0x4040
    ctx->pc = 0x441208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16448));
label_44120c:
    // 0x44120c: 0x7d450000  sq          $a1, 0x0($t2)
    ctx->pc = 0x44120cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 5));
label_441210:
    // 0x441210: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x441210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_441214:
    // 0x441214: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x441214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_441218:
    // 0x441218: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x441218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
label_44121c:
    // 0x44121c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x44121cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_441220:
    // 0x441220: 0x2842024  and         $a0, $s4, $a0
    ctx->pc = 0x441220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
label_441224:
    // 0x441224: 0x2545008f  addiu       $a1, $t2, 0x8F
    ctx->pc = 0x441224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 143));
label_441228:
    // 0x441228: 0xc0bf916  jal         func_2FE458
label_44122c:
    if (ctx->pc == 0x44122Cu) {
        ctx->pc = 0x44122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441228u;
        // 0x44122c: 0x7d420000  sq          $v0, 0x0($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x441230u;
        goto label_441230;
    }
    ctx->pc = 0x441228u;
    SET_GPR_U32(ctx, 31, 0x441230u);
    ctx->pc = 0x44122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441228u;
    // 0x44122c: 0x7d420000  sq          $v0, 0x0($t2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x441228u, 0x441230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441230u;
label_441230:
    // 0x441230: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x441230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_441234:
    // 0x441234: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x441234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_441238:
    // 0x441238: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x441238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44123c:
    // 0x44123c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x44123cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_441240:
    // 0x441240: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x441240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_441244:
    // 0x441244: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x441244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_441248:
    // 0x441248: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x441248u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44124c:
    // 0x44124c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44124cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_441250:
    // 0x441250: 0x3e00008  jr          $ra
label_441254:
    if (ctx->pc == 0x441254u) {
        ctx->pc = 0x441254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441250u;
        // 0x441254: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x441258u;
        goto label_fallthrough_0x441250;
    }
    ctx->pc = 0x441250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441250u;
        // 0x441254: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x441250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x441250:
    ctx->pc = 0x441258u;
}
