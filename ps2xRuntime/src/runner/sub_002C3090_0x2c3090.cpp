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

// Function: sub_002C3090
// Address: 0x2c3090 - 0x2c3340
void sub_002C3090_0x2c3090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3090_0x2c3090");
#endif

    switch (ctx->pc) {
        case 0x2c3090u: goto label_2c3090;
        case 0x2c3094u: goto label_2c3094;
        case 0x2c3098u: goto label_2c3098;
        case 0x2c309cu: goto label_2c309c;
        case 0x2c30a0u: goto label_2c30a0;
        case 0x2c30a4u: goto label_2c30a4;
        case 0x2c30a8u: goto label_2c30a8;
        case 0x2c30acu: goto label_2c30ac;
        case 0x2c30b0u: goto label_2c30b0;
        case 0x2c30b4u: goto label_2c30b4;
        case 0x2c30b8u: goto label_2c30b8;
        case 0x2c30bcu: goto label_2c30bc;
        case 0x2c30c0u: goto label_2c30c0;
        case 0x2c30c4u: goto label_2c30c4;
        case 0x2c30c8u: goto label_2c30c8;
        case 0x2c30ccu: goto label_2c30cc;
        case 0x2c30d0u: goto label_2c30d0;
        case 0x2c30d4u: goto label_2c30d4;
        case 0x2c30d8u: goto label_2c30d8;
        case 0x2c30dcu: goto label_2c30dc;
        case 0x2c30e0u: goto label_2c30e0;
        case 0x2c30e4u: goto label_2c30e4;
        case 0x2c30e8u: goto label_2c30e8;
        case 0x2c30ecu: goto label_2c30ec;
        case 0x2c30f0u: goto label_2c30f0;
        case 0x2c30f4u: goto label_2c30f4;
        case 0x2c30f8u: goto label_2c30f8;
        case 0x2c30fcu: goto label_2c30fc;
        case 0x2c3100u: goto label_2c3100;
        case 0x2c3104u: goto label_2c3104;
        case 0x2c3108u: goto label_2c3108;
        case 0x2c310cu: goto label_2c310c;
        case 0x2c3110u: goto label_2c3110;
        case 0x2c3114u: goto label_2c3114;
        case 0x2c3118u: goto label_2c3118;
        case 0x2c311cu: goto label_2c311c;
        case 0x2c3120u: goto label_2c3120;
        case 0x2c3124u: goto label_2c3124;
        case 0x2c3128u: goto label_2c3128;
        case 0x2c312cu: goto label_2c312c;
        case 0x2c3130u: goto label_2c3130;
        case 0x2c3134u: goto label_2c3134;
        case 0x2c3138u: goto label_2c3138;
        case 0x2c313cu: goto label_2c313c;
        case 0x2c3140u: goto label_2c3140;
        case 0x2c3144u: goto label_2c3144;
        case 0x2c3148u: goto label_2c3148;
        case 0x2c314cu: goto label_2c314c;
        case 0x2c3150u: goto label_2c3150;
        case 0x2c3154u: goto label_2c3154;
        case 0x2c3158u: goto label_2c3158;
        case 0x2c315cu: goto label_2c315c;
        case 0x2c3160u: goto label_2c3160;
        case 0x2c3164u: goto label_2c3164;
        case 0x2c3168u: goto label_2c3168;
        case 0x2c316cu: goto label_2c316c;
        case 0x2c3170u: goto label_2c3170;
        case 0x2c3174u: goto label_2c3174;
        case 0x2c3178u: goto label_2c3178;
        case 0x2c317cu: goto label_2c317c;
        case 0x2c3180u: goto label_2c3180;
        case 0x2c3184u: goto label_2c3184;
        case 0x2c3188u: goto label_2c3188;
        case 0x2c318cu: goto label_2c318c;
        case 0x2c3190u: goto label_2c3190;
        case 0x2c3194u: goto label_2c3194;
        case 0x2c3198u: goto label_2c3198;
        case 0x2c319cu: goto label_2c319c;
        case 0x2c31a0u: goto label_2c31a0;
        case 0x2c31a4u: goto label_2c31a4;
        case 0x2c31a8u: goto label_2c31a8;
        case 0x2c31acu: goto label_2c31ac;
        case 0x2c31b0u: goto label_2c31b0;
        case 0x2c31b4u: goto label_2c31b4;
        case 0x2c31b8u: goto label_2c31b8;
        case 0x2c31bcu: goto label_2c31bc;
        case 0x2c31c0u: goto label_2c31c0;
        case 0x2c31c4u: goto label_2c31c4;
        case 0x2c31c8u: goto label_2c31c8;
        case 0x2c31ccu: goto label_2c31cc;
        case 0x2c31d0u: goto label_2c31d0;
        case 0x2c31d4u: goto label_2c31d4;
        case 0x2c31d8u: goto label_2c31d8;
        case 0x2c31dcu: goto label_2c31dc;
        case 0x2c31e0u: goto label_2c31e0;
        case 0x2c31e4u: goto label_2c31e4;
        case 0x2c31e8u: goto label_2c31e8;
        case 0x2c31ecu: goto label_2c31ec;
        case 0x2c31f0u: goto label_2c31f0;
        case 0x2c31f4u: goto label_2c31f4;
        case 0x2c31f8u: goto label_2c31f8;
        case 0x2c31fcu: goto label_2c31fc;
        case 0x2c3200u: goto label_2c3200;
        case 0x2c3204u: goto label_2c3204;
        case 0x2c3208u: goto label_2c3208;
        case 0x2c320cu: goto label_2c320c;
        case 0x2c3210u: goto label_2c3210;
        case 0x2c3214u: goto label_2c3214;
        case 0x2c3218u: goto label_2c3218;
        case 0x2c321cu: goto label_2c321c;
        case 0x2c3220u: goto label_2c3220;
        case 0x2c3224u: goto label_2c3224;
        case 0x2c3228u: goto label_2c3228;
        case 0x2c322cu: goto label_2c322c;
        case 0x2c3230u: goto label_2c3230;
        case 0x2c3234u: goto label_2c3234;
        case 0x2c3238u: goto label_2c3238;
        case 0x2c323cu: goto label_2c323c;
        case 0x2c3240u: goto label_2c3240;
        case 0x2c3244u: goto label_2c3244;
        case 0x2c3248u: goto label_2c3248;
        case 0x2c324cu: goto label_2c324c;
        case 0x2c3250u: goto label_2c3250;
        case 0x2c3254u: goto label_2c3254;
        case 0x2c3258u: goto label_2c3258;
        case 0x2c325cu: goto label_2c325c;
        case 0x2c3260u: goto label_2c3260;
        case 0x2c3264u: goto label_2c3264;
        case 0x2c3268u: goto label_2c3268;
        case 0x2c326cu: goto label_2c326c;
        case 0x2c3270u: goto label_2c3270;
        case 0x2c3274u: goto label_2c3274;
        case 0x2c3278u: goto label_2c3278;
        case 0x2c327cu: goto label_2c327c;
        case 0x2c3280u: goto label_2c3280;
        case 0x2c3284u: goto label_2c3284;
        case 0x2c3288u: goto label_2c3288;
        case 0x2c328cu: goto label_2c328c;
        case 0x2c3290u: goto label_2c3290;
        case 0x2c3294u: goto label_2c3294;
        case 0x2c3298u: goto label_2c3298;
        case 0x2c329cu: goto label_2c329c;
        case 0x2c32a0u: goto label_2c32a0;
        case 0x2c32a4u: goto label_2c32a4;
        case 0x2c32a8u: goto label_2c32a8;
        case 0x2c32acu: goto label_2c32ac;
        case 0x2c32b0u: goto label_2c32b0;
        case 0x2c32b4u: goto label_2c32b4;
        case 0x2c32b8u: goto label_2c32b8;
        case 0x2c32bcu: goto label_2c32bc;
        case 0x2c32c0u: goto label_2c32c0;
        case 0x2c32c4u: goto label_2c32c4;
        case 0x2c32c8u: goto label_2c32c8;
        case 0x2c32ccu: goto label_2c32cc;
        case 0x2c32d0u: goto label_2c32d0;
        case 0x2c32d4u: goto label_2c32d4;
        case 0x2c32d8u: goto label_2c32d8;
        case 0x2c32dcu: goto label_2c32dc;
        case 0x2c32e0u: goto label_2c32e0;
        case 0x2c32e4u: goto label_2c32e4;
        case 0x2c32e8u: goto label_2c32e8;
        case 0x2c32ecu: goto label_2c32ec;
        case 0x2c32f0u: goto label_2c32f0;
        case 0x2c32f4u: goto label_2c32f4;
        case 0x2c32f8u: goto label_2c32f8;
        case 0x2c32fcu: goto label_2c32fc;
        case 0x2c3300u: goto label_2c3300;
        case 0x2c3304u: goto label_2c3304;
        case 0x2c3308u: goto label_2c3308;
        case 0x2c330cu: goto label_2c330c;
        case 0x2c3310u: goto label_2c3310;
        case 0x2c3314u: goto label_2c3314;
        case 0x2c3318u: goto label_2c3318;
        case 0x2c331cu: goto label_2c331c;
        case 0x2c3320u: goto label_2c3320;
        case 0x2c3324u: goto label_2c3324;
        case 0x2c3328u: goto label_2c3328;
        case 0x2c332cu: goto label_2c332c;
        case 0x2c3330u: goto label_2c3330;
        case 0x2c3334u: goto label_2c3334;
        case 0x2c3338u: goto label_2c3338;
        case 0x2c333cu: goto label_2c333c;
        default: break;
    }

    ctx->pc = 0x2c3090u;

label_2c3090:
    // 0x2c3090: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c3090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2c3094:
    // 0x2c3094: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c3094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2c3098:
    // 0x2c3098: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c3098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2c309c:
    // 0x2c309c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c309cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2c30a0:
    // 0x2c30a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c30a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c30a4:
    // 0x2c30a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c30a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c30a8:
    // 0x2c30a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c30a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c30ac:
    // 0x2c30ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c30acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c30b0:
    // 0x2c30b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c30b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c30b4:
    // 0x2c30b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c30b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c30b8:
    // 0x2c30b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c30b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c30bc:
    // 0x2c30bc: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2c30bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_2c30c0:
    // 0x2c30c0: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2c30c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_2c30c4:
    // 0x2c30c4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2c30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2c30c8:
    // 0x2c30c8: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x2c30c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_2c30cc:
    // 0x2c30cc: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x2c30ccu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c30d0:
    // 0x2c30d0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c30d4:
    // 0x2c30d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c30d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c30d8:
    // 0x2c30d8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2c30dc:
    if (ctx->pc == 0x2C30DCu) {
        ctx->pc = 0x2C30E0u;
        goto label_2c30e0;
    }
    ctx->pc = 0x2C30D8u;
    {
        const bool branch_taken_0x2c30d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c30d8) {
            ctx->pc = 0x2C30ECu;
            goto label_2c30ec;
        }
    }
    ctx->pc = 0x2C30E0u;
label_2c30e0:
    // 0x2c30e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c30e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c30e4:
    // 0x2c30e4: 0x10000088  b           . + 4 + (0x88 << 2)
label_2c30e8:
    if (ctx->pc == 0x2C30E8u) {
        ctx->pc = 0x2C30ECu;
        goto label_2c30ec;
    }
    ctx->pc = 0x2C30E4u;
    {
        const bool branch_taken_0x2c30e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c30e4) {
            ctx->pc = 0x2C3308u;
            goto label_2c3308;
        }
    }
    ctx->pc = 0x2C30ECu;
label_2c30ec:
    // 0x2c30ec: 0xc08ef50  jal         func_23BD40
label_2c30f0:
    if (ctx->pc == 0x2C30F0u) {
        ctx->pc = 0x2C30F4u;
        goto label_2c30f4;
    }
    ctx->pc = 0x2C30ECu;
    SET_GPR_U32(ctx, 31, 0x2C30F4u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C30ECu, 0x2C30F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30F4u;
label_2c30f4:
    // 0x2c30f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c30f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c30f8:
    // 0x2c30f8: 0xc0406f0  jal         func_101BC0
label_2c30fc:
    if (ctx->pc == 0x2C30FCu) {
        ctx->pc = 0x2C3100u;
        goto label_2c3100;
    }
    ctx->pc = 0x2C30F8u;
    SET_GPR_U32(ctx, 31, 0x2C3100u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C30F8u, 0x2C3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3100u;
label_2c3100:
    // 0x2c3100: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3104:
    // 0x2c3104: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_2c3108:
    if (ctx->pc == 0x2C3108u) {
        ctx->pc = 0x2C310Cu;
        goto label_2c310c;
    }
    ctx->pc = 0x2C3104u;
    {
        const bool branch_taken_0x2c3104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3104) {
            ctx->pc = 0x2C3148u;
            goto label_2c3148;
        }
    }
    ctx->pc = 0x2C310Cu;
label_2c310c:
    // 0x2c310c: 0x9382a4b8  lbu         $v0, -0x5B48($gp)
    ctx->pc = 0x2c310cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943928)));
label_2c3110:
    // 0x2c3110: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c3110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c3114:
    // 0x2c3114: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c3118:
    if (ctx->pc == 0x2C3118u) {
        ctx->pc = 0x2C311Cu;
        goto label_2c311c;
    }
    ctx->pc = 0x2C3114u;
    {
        const bool branch_taken_0x2c3114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3114) {
            ctx->pc = 0x2C3128u;
            goto label_2c3128;
        }
    }
    ctx->pc = 0x2C311Cu;
label_2c311c:
    // 0x2c311c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c311cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3120:
    // 0x2c3120: 0x10000079  b           . + 4 + (0x79 << 2)
label_2c3124:
    if (ctx->pc == 0x2C3124u) {
        ctx->pc = 0x2C3128u;
        goto label_2c3128;
    }
    ctx->pc = 0x2C3120u;
    {
        const bool branch_taken_0x2c3120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3120) {
            ctx->pc = 0x2C3308u;
            goto label_2c3308;
        }
    }
    ctx->pc = 0x2C3128u;
label_2c3128:
    // 0x2c3128: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c3128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c312c:
    // 0x2c312c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x2c312cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_2c3130:
    // 0x2c3130: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c3130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c3134:
    // 0x2c3134: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c3138:
    if (ctx->pc == 0x2C3138u) {
        ctx->pc = 0x2C313Cu;
        goto label_2c313c;
    }
    ctx->pc = 0x2C3134u;
    {
        const bool branch_taken_0x2c3134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3134) {
            ctx->pc = 0x2C3148u;
            goto label_2c3148;
        }
    }
    ctx->pc = 0x2C313Cu;
label_2c313c:
    // 0x2c313c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c313cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3140:
    // 0x2c3140: 0x10000071  b           . + 4 + (0x71 << 2)
label_2c3144:
    if (ctx->pc == 0x2C3144u) {
        ctx->pc = 0x2C3148u;
        goto label_2c3148;
    }
    ctx->pc = 0x2C3140u;
    {
        const bool branch_taken_0x2c3140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3140) {
            ctx->pc = 0x2C3308u;
            goto label_2c3308;
        }
    }
    ctx->pc = 0x2C3148u;
label_2c3148:
    // 0x2c3148: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c3148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2c314c:
    // 0x2c314c: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
label_2c3150:
    if (ctx->pc == 0x2C3150u) {
        ctx->pc = 0x2C3154u;
        goto label_2c3154;
    }
    ctx->pc = 0x2C314Cu;
    {
        const bool branch_taken_0x2c314c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c314c) {
            ctx->pc = 0x2C3304u;
            goto label_2c3304;
        }
    }
    ctx->pc = 0x2C3154u;
label_2c3154:
    // 0x2c3154: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_2c3158:
    if (ctx->pc == 0x2C3158u) {
        ctx->pc = 0x2C315Cu;
        goto label_2c315c;
    }
    ctx->pc = 0x2C3154u;
    {
        const bool branch_taken_0x2c3154 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3154) {
            ctx->pc = 0x2C3170u;
            goto label_2c3170;
        }
    }
    ctx->pc = 0x2C315Cu;
label_2c315c:
    // 0x2c315c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c3160:
    // 0x2c3160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3164:
    // 0x2c3164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c3164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3168:
    // 0x2c3168: 0xc08d69c  jal         func_235A70
label_2c316c:
    if (ctx->pc == 0x2C316Cu) {
        ctx->pc = 0x2C3170u;
        goto label_2c3170;
    }
    ctx->pc = 0x2C3168u;
    SET_GPR_U32(ctx, 31, 0x2C3170u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x2C3168u, 0x2C3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3170u;
label_2c3170:
    // 0x2c3170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3174:
    // 0x2c3174: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c3174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c3178:
    // 0x2c3178: 0xc085538  jal         func_2154E0
label_2c317c:
    if (ctx->pc == 0x2C317Cu) {
        ctx->pc = 0x2C3180u;
        goto label_2c3180;
    }
    ctx->pc = 0x2C3178u;
    SET_GPR_U32(ctx, 31, 0x2C3180u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C3178u, 0x2C3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3180u;
label_2c3180:
    // 0x2c3180: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c3180u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3184:
    // 0x2c3184: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x2c3184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
label_2c3188:
    // 0x2c3188: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2c3188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2c318c:
    // 0x2c318c: 0xc0b1768  jal         func_2C5DA0
label_2c3190:
    if (ctx->pc == 0x2C3190u) {
        ctx->pc = 0x2C3194u;
        goto label_2c3194;
    }
    ctx->pc = 0x2C318Cu;
    SET_GPR_U32(ctx, 31, 0x2C3194u);
    ctx->pc = 0x2C5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5DA0u, 0x2C318Cu, 0x2C3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3194u;
label_2c3194:
    // 0x2c3194: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c3194u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3198:
    // 0x2c3198: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c3198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c319c:
    // 0x2c319c: 0x12a2001c  beq         $s5, $v0, . + 4 + (0x1C << 2)
label_2c31a0:
    if (ctx->pc == 0x2C31A0u) {
        ctx->pc = 0x2C31A4u;
        goto label_2c31a4;
    }
    ctx->pc = 0x2C319Cu;
    {
        const bool branch_taken_0x2c319c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c319c) {
            ctx->pc = 0x2C3210u;
            goto label_2c3210;
        }
    }
    ctx->pc = 0x2C31A4u;
label_2c31a4:
    // 0x2c31a4: 0xc08ef50  jal         func_23BD40
label_2c31a8:
    if (ctx->pc == 0x2C31A8u) {
        ctx->pc = 0x2C31ACu;
        goto label_2c31ac;
    }
    ctx->pc = 0x2C31A4u;
    SET_GPR_U32(ctx, 31, 0x2C31ACu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C31A4u, 0x2C31ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31ACu;
label_2c31ac:
    // 0x2c31ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c31acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c31b0:
    // 0x2c31b0: 0xc0406f0  jal         func_101BC0
label_2c31b4:
    if (ctx->pc == 0x2C31B4u) {
        ctx->pc = 0x2C31B8u;
        goto label_2c31b8;
    }
    ctx->pc = 0x2C31B0u;
    SET_GPR_U32(ctx, 31, 0x2C31B8u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C31B0u, 0x2C31B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31B8u;
label_2c31b8:
    // 0x2c31b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c31b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c31bc:
    // 0x2c31bc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_2c31c0:
    if (ctx->pc == 0x2C31C0u) {
        ctx->pc = 0x2C31C4u;
        goto label_2c31c4;
    }
    ctx->pc = 0x2C31BCu;
    {
        const bool branch_taken_0x2c31bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c31bc) {
            ctx->pc = 0x2C31E8u;
            goto label_2c31e8;
        }
    }
    ctx->pc = 0x2C31C4u;
label_2c31c4:
    // 0x2c31c4: 0x8f82bcb0  lw          $v0, -0x4350($gp)
    ctx->pc = 0x2c31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
label_2c31c8:
    // 0x2c31c8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2c31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2c31cc:
    // 0x2c31cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c31d0:
    if (ctx->pc == 0x2C31D0u) {
        ctx->pc = 0x2C31D4u;
        goto label_2c31d4;
    }
    ctx->pc = 0x2C31CCu;
    {
        const bool branch_taken_0x2c31cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c31cc) {
            ctx->pc = 0x2C31E8u;
            goto label_2c31e8;
        }
    }
    ctx->pc = 0x2C31D4u;
label_2c31d4:
    // 0x2c31d4: 0x15202a  slt         $a0, $zero, $s5
    ctx->pc = 0x2c31d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2c31d8:
    // 0x2c31d8: 0x8f82bcb0  lw          $v0, -0x4350($gp)
    ctx->pc = 0x2c31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
label_2c31dc:
    // 0x2c31dc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2c31dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2c31e0:
    // 0x2c31e0: 0x40f809  jalr        $v0
label_2c31e4:
    if (ctx->pc == 0x2C31E4u) {
        ctx->pc = 0x2C31E8u;
        goto label_2c31e8;
    }
    ctx->pc = 0x2C31E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C31E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C31E0u, 0x2C31E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C31E8u;
label_2c31e8:
    // 0x2c31e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c31e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c31ec:
    // 0x2c31ec: 0xc096814  jal         func_25A050
label_2c31f0:
    if (ctx->pc == 0x2C31F0u) {
        ctx->pc = 0x2C31F4u;
        goto label_2c31f4;
    }
    ctx->pc = 0x2C31ECu;
    SET_GPR_U32(ctx, 31, 0x2C31F4u);
    ctx->pc = 0x25A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A050u, 0x2C31ECu, 0x2C31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31F4u;
label_2c31f4:
    // 0x2c31f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c31f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c31f8:
    // 0x2c31f8: 0xc09d3d0  jal         func_274F40
label_2c31fc:
    if (ctx->pc == 0x2C31FCu) {
        ctx->pc = 0x2C3200u;
        goto label_2c3200;
    }
    ctx->pc = 0x2C31F8u;
    SET_GPR_U32(ctx, 31, 0x2C3200u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2C31F8u, 0x2C3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3200u;
label_2c3200:
    // 0x2c3200: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c3200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c3204:
    // 0x2c3204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3208:
    // 0x2c3208: 0xc096994  jal         func_25A650
label_2c320c:
    if (ctx->pc == 0x2C320Cu) {
        ctx->pc = 0x2C3210u;
        goto label_2c3210;
    }
    ctx->pc = 0x2C3208u;
    SET_GPR_U32(ctx, 31, 0x2C3210u);
    ctx->pc = 0x25A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A650u, 0x2C3208u, 0x2C3210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3210u;
label_2c3210:
    // 0x2c3210: 0xc08ef50  jal         func_23BD40
label_2c3214:
    if (ctx->pc == 0x2C3214u) {
        ctx->pc = 0x2C3218u;
        goto label_2c3218;
    }
    ctx->pc = 0x2C3210u;
    SET_GPR_U32(ctx, 31, 0x2C3218u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C3210u, 0x2C3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3218u;
label_2c3218:
    // 0x2c3218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c321c:
    // 0x2c321c: 0xc0406f0  jal         func_101BC0
label_2c3220:
    if (ctx->pc == 0x2C3220u) {
        ctx->pc = 0x2C3224u;
        goto label_2c3224;
    }
    ctx->pc = 0x2C321Cu;
    SET_GPR_U32(ctx, 31, 0x2C3224u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C321Cu, 0x2C3224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3224u;
label_2c3224:
    // 0x2c3224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3228:
    // 0x2c3228: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
label_2c322c:
    if (ctx->pc == 0x2C322Cu) {
        ctx->pc = 0x2C3230u;
        goto label_2c3230;
    }
    ctx->pc = 0x2C3228u;
    {
        const bool branch_taken_0x2c3228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3228) {
            ctx->pc = 0x2C3304u;
            goto label_2c3304;
        }
    }
    ctx->pc = 0x2C3230u;
label_2c3230:
    // 0x2c3230: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c3230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3234:
    // 0x2c3234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3238:
    // 0x2c3238: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c3238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c323c:
    // 0x2c323c: 0xc085538  jal         func_2154E0
label_2c3240:
    if (ctx->pc == 0x2C3240u) {
        ctx->pc = 0x2C3244u;
        goto label_2c3244;
    }
    ctx->pc = 0x2C323Cu;
    SET_GPR_U32(ctx, 31, 0x2C3244u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C323Cu, 0x2C3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3244u;
label_2c3244:
    // 0x2c3244: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c3244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3248:
    // 0x2c3248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c324c:
    // 0x2c324c: 0xc0ae160  jal         func_2B8580
label_2c3250:
    if (ctx->pc == 0x2C3250u) {
        ctx->pc = 0x2C3254u;
        goto label_2c3254;
    }
    ctx->pc = 0x2C324Cu;
    SET_GPR_U32(ctx, 31, 0x2C3254u);
    ctx->pc = 0x2B8580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8580u, 0x2C324Cu, 0x2C3254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3254u;
label_2c3254:
    // 0x2c3254: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2c3258:
    if (ctx->pc == 0x2C3258u) {
        ctx->pc = 0x2C325Cu;
        goto label_2c325c;
    }
    ctx->pc = 0x2C3254u;
    {
        const bool branch_taken_0x2c3254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3254) {
            ctx->pc = 0x2C3298u;
            goto label_2c3298;
        }
    }
    ctx->pc = 0x2C325Cu;
label_2c325c:
    // 0x2c325c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c325cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c3260:
    // 0x2c3260: 0xc0ae160  jal         func_2B8580
label_2c3264:
    if (ctx->pc == 0x2C3264u) {
        ctx->pc = 0x2C3268u;
        goto label_2c3268;
    }
    ctx->pc = 0x2C3260u;
    SET_GPR_U32(ctx, 31, 0x2C3268u);
    ctx->pc = 0x2B8580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8580u, 0x2C3260u, 0x2C3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3268u;
label_2c3268:
    // 0x2c3268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c326c:
    // 0x2c326c: 0xc0ae4b4  jal         func_2B92D0
label_2c3270:
    if (ctx->pc == 0x2C3270u) {
        ctx->pc = 0x2C3274u;
        goto label_2c3274;
    }
    ctx->pc = 0x2C326Cu;
    SET_GPR_U32(ctx, 31, 0x2C3274u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2C326Cu, 0x2C3274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3274u;
label_2c3274:
    // 0x2c3274: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c3274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3278:
    // 0x2c3278: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2c327c:
    if (ctx->pc == 0x2C327Cu) {
        ctx->pc = 0x2C3280u;
        goto label_2c3280;
    }
    ctx->pc = 0x2C3278u;
    {
        const bool branch_taken_0x2c3278 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3278) {
            ctx->pc = 0x2C3298u;
            goto label_2c3298;
        }
    }
    ctx->pc = 0x2C3280u;
label_2c3280:
    // 0x2c3280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3284:
    // 0x2c3284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3288:
    // 0x2c3288: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c3288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c328c:
    // 0x2c328c: 0xc099f94  jal         func_267E50
label_2c3290:
    if (ctx->pc == 0x2C3290u) {
        ctx->pc = 0x2C3294u;
        goto label_2c3294;
    }
    ctx->pc = 0x2C328Cu;
    SET_GPR_U32(ctx, 31, 0x2C3294u);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2C328Cu, 0x2C3294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3294u;
label_2c3294:
    // 0x2c3294: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2c3294u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c3298:
    // 0x2c3298: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x2c3298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_2c329c:
    // 0x2c329c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c329cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c32a0:
    // 0x2c32a0: 0xc04fbd0  jal         func_13EF40
label_2c32a4:
    if (ctx->pc == 0x2C32A4u) {
        ctx->pc = 0x2C32A8u;
        goto label_2c32a8;
    }
    ctx->pc = 0x2C32A0u;
    SET_GPR_U32(ctx, 31, 0x2C32A8u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x2C32A0u, 0x2C32A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32A8u;
label_2c32a8:
    // 0x2c32a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c32a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c32ac:
    // 0x2c32ac: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
label_2c32b0:
    if (ctx->pc == 0x2C32B0u) {
        ctx->pc = 0x2C32B4u;
        goto label_2c32b4;
    }
    ctx->pc = 0x2C32ACu;
    {
        const bool branch_taken_0x2c32ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c32ac) {
            ctx->pc = 0x2C32CCu;
            goto label_2c32cc;
        }
    }
    ctx->pc = 0x2C32B4u;
label_2c32b4:
    // 0x2c32b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c32b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c32b8:
    // 0x2c32b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c32b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c32bc:
    // 0x2c32bc: 0xc04cf14  jal         func_133C50
label_2c32c0:
    if (ctx->pc == 0x2C32C0u) {
        ctx->pc = 0x2C32C4u;
        goto label_2c32c4;
    }
    ctx->pc = 0x2C32BCu;
    SET_GPR_U32(ctx, 31, 0x2C32C4u);
    ctx->pc = 0x133C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133C50u, 0x2C32BCu, 0x2C32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32C4u;
label_2c32c4:
    // 0x2c32c4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2c32c8:
    if (ctx->pc == 0x2C32C8u) {
        ctx->pc = 0x2C32CCu;
        goto label_2c32cc;
    }
    ctx->pc = 0x2C32C4u;
    {
        const bool branch_taken_0x2c32c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c32c4) {
            ctx->pc = 0x2C3304u;
            goto label_2c3304;
        }
    }
    ctx->pc = 0x2C32CCu;
label_2c32cc:
    // 0x2c32cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c32ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c32d0:
    // 0x2c32d0: 0xc04d050  jal         func_134140
label_2c32d4:
    if (ctx->pc == 0x2C32D4u) {
        ctx->pc = 0x2C32D8u;
        goto label_2c32d8;
    }
    ctx->pc = 0x2C32D0u;
    SET_GPR_U32(ctx, 31, 0x2C32D8u);
    ctx->pc = 0x134140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134140u, 0x2C32D0u, 0x2C32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32D8u;
label_2c32d8:
    // 0x2c32d8: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x2c32d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_2c32dc:
    // 0x2c32dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c32dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c32e0:
    // 0x2c32e0: 0xc04fbd0  jal         func_13EF40
label_2c32e4:
    if (ctx->pc == 0x2C32E4u) {
        ctx->pc = 0x2C32E8u;
        goto label_2c32e8;
    }
    ctx->pc = 0x2C32E0u;
    SET_GPR_U32(ctx, 31, 0x2C32E8u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x2C32E0u, 0x2C32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32E8u;
label_2c32e8:
    // 0x2c32e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c32e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c32ec:
    // 0x2c32ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c32ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c32f0:
    // 0x2c32f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c32f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c32f4:
    // 0x2c32f4: 0xc050270  jal         func_1409C0
label_2c32f8:
    if (ctx->pc == 0x2C32F8u) {
        ctx->pc = 0x2C32FCu;
        goto label_2c32fc;
    }
    ctx->pc = 0x2C32F4u;
    SET_GPR_U32(ctx, 31, 0x2C32FCu);
    ctx->pc = 0x1409C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1409C0u, 0x2C32F4u, 0x2C32FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32FCu;
label_2c32fc:
    // 0x2c32fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3300:
    // 0x2c3300: 0xaf82b9e0  sw          $v0, -0x4620($gp)
    ctx->pc = 0x2c3300u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949344), GPR_U32(ctx, 2));
label_2c3304:
    // 0x2c3304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3308:
    // 0x2c3308: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c3308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2c330c:
    // 0x2c330c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c330cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c3310:
    // 0x2c3310: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c3310u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c3314:
    // 0x2c3314: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c3314u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c3318:
    // 0x2c3318: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c3318u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c331c:
    // 0x2c331c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c331cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c3320:
    // 0x2c3320: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c3320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c3324:
    // 0x2c3324: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3328:
    // 0x2c3328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c332c:
    // 0x2c332c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c332cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3330:
    // 0x2c3330: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2c3330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2c3334:
    // 0x2c3334: 0x3e00008  jr          $ra
label_2c3338:
    if (ctx->pc == 0x2C3338u) {
        ctx->pc = 0x2C333Cu;
        goto label_2c333c;
    }
    ctx->pc = 0x2C3334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C333Cu;
label_2c333c:
    // 0x2c333c: 0x0  nop
    ctx->pc = 0x2c333cu;
    // NOP
    ctx->pc = 0x2c3340u;
}
