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

// Function: sub_0045E130
// Address: 0x45e130 - 0x45e330
void sub_0045E130_0x45e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E130_0x45e130");
#endif

    switch (ctx->pc) {
        case 0x45e130u: goto label_45e130;
        case 0x45e134u: goto label_45e134;
        case 0x45e138u: goto label_45e138;
        case 0x45e13cu: goto label_45e13c;
        case 0x45e140u: goto label_45e140;
        case 0x45e144u: goto label_45e144;
        case 0x45e148u: goto label_45e148;
        case 0x45e14cu: goto label_45e14c;
        case 0x45e150u: goto label_45e150;
        case 0x45e154u: goto label_45e154;
        case 0x45e158u: goto label_45e158;
        case 0x45e15cu: goto label_45e15c;
        case 0x45e160u: goto label_45e160;
        case 0x45e164u: goto label_45e164;
        case 0x45e168u: goto label_45e168;
        case 0x45e16cu: goto label_45e16c;
        case 0x45e170u: goto label_45e170;
        case 0x45e174u: goto label_45e174;
        case 0x45e178u: goto label_45e178;
        case 0x45e17cu: goto label_45e17c;
        case 0x45e180u: goto label_45e180;
        case 0x45e184u: goto label_45e184;
        case 0x45e188u: goto label_45e188;
        case 0x45e18cu: goto label_45e18c;
        case 0x45e190u: goto label_45e190;
        case 0x45e194u: goto label_45e194;
        case 0x45e198u: goto label_45e198;
        case 0x45e19cu: goto label_45e19c;
        case 0x45e1a0u: goto label_45e1a0;
        case 0x45e1a4u: goto label_45e1a4;
        case 0x45e1a8u: goto label_45e1a8;
        case 0x45e1acu: goto label_45e1ac;
        case 0x45e1b0u: goto label_45e1b0;
        case 0x45e1b4u: goto label_45e1b4;
        case 0x45e1b8u: goto label_45e1b8;
        case 0x45e1bcu: goto label_45e1bc;
        case 0x45e1c0u: goto label_45e1c0;
        case 0x45e1c4u: goto label_45e1c4;
        case 0x45e1c8u: goto label_45e1c8;
        case 0x45e1ccu: goto label_45e1cc;
        case 0x45e1d0u: goto label_45e1d0;
        case 0x45e1d4u: goto label_45e1d4;
        case 0x45e1d8u: goto label_45e1d8;
        case 0x45e1dcu: goto label_45e1dc;
        case 0x45e1e0u: goto label_45e1e0;
        case 0x45e1e4u: goto label_45e1e4;
        case 0x45e1e8u: goto label_45e1e8;
        case 0x45e1ecu: goto label_45e1ec;
        case 0x45e1f0u: goto label_45e1f0;
        case 0x45e1f4u: goto label_45e1f4;
        case 0x45e1f8u: goto label_45e1f8;
        case 0x45e1fcu: goto label_45e1fc;
        case 0x45e200u: goto label_45e200;
        case 0x45e204u: goto label_45e204;
        case 0x45e208u: goto label_45e208;
        case 0x45e20cu: goto label_45e20c;
        case 0x45e210u: goto label_45e210;
        case 0x45e214u: goto label_45e214;
        case 0x45e218u: goto label_45e218;
        case 0x45e21cu: goto label_45e21c;
        case 0x45e220u: goto label_45e220;
        case 0x45e224u: goto label_45e224;
        case 0x45e228u: goto label_45e228;
        case 0x45e22cu: goto label_45e22c;
        case 0x45e230u: goto label_45e230;
        case 0x45e234u: goto label_45e234;
        case 0x45e238u: goto label_45e238;
        case 0x45e23cu: goto label_45e23c;
        case 0x45e240u: goto label_45e240;
        case 0x45e244u: goto label_45e244;
        case 0x45e248u: goto label_45e248;
        case 0x45e24cu: goto label_45e24c;
        case 0x45e250u: goto label_45e250;
        case 0x45e254u: goto label_45e254;
        case 0x45e258u: goto label_45e258;
        case 0x45e25cu: goto label_45e25c;
        case 0x45e260u: goto label_45e260;
        case 0x45e264u: goto label_45e264;
        case 0x45e268u: goto label_45e268;
        case 0x45e26cu: goto label_45e26c;
        case 0x45e270u: goto label_45e270;
        case 0x45e274u: goto label_45e274;
        case 0x45e278u: goto label_45e278;
        case 0x45e27cu: goto label_45e27c;
        case 0x45e280u: goto label_45e280;
        case 0x45e284u: goto label_45e284;
        case 0x45e288u: goto label_45e288;
        case 0x45e28cu: goto label_45e28c;
        case 0x45e290u: goto label_45e290;
        case 0x45e294u: goto label_45e294;
        case 0x45e298u: goto label_45e298;
        case 0x45e29cu: goto label_45e29c;
        case 0x45e2a0u: goto label_45e2a0;
        case 0x45e2a4u: goto label_45e2a4;
        case 0x45e2a8u: goto label_45e2a8;
        case 0x45e2acu: goto label_45e2ac;
        case 0x45e2b0u: goto label_45e2b0;
        case 0x45e2b4u: goto label_45e2b4;
        case 0x45e2b8u: goto label_45e2b8;
        case 0x45e2bcu: goto label_45e2bc;
        case 0x45e2c0u: goto label_45e2c0;
        case 0x45e2c4u: goto label_45e2c4;
        case 0x45e2c8u: goto label_45e2c8;
        case 0x45e2ccu: goto label_45e2cc;
        case 0x45e2d0u: goto label_45e2d0;
        case 0x45e2d4u: goto label_45e2d4;
        case 0x45e2d8u: goto label_45e2d8;
        case 0x45e2dcu: goto label_45e2dc;
        case 0x45e2e0u: goto label_45e2e0;
        case 0x45e2e4u: goto label_45e2e4;
        case 0x45e2e8u: goto label_45e2e8;
        case 0x45e2ecu: goto label_45e2ec;
        case 0x45e2f0u: goto label_45e2f0;
        case 0x45e2f4u: goto label_45e2f4;
        case 0x45e2f8u: goto label_45e2f8;
        case 0x45e2fcu: goto label_45e2fc;
        case 0x45e300u: goto label_45e300;
        case 0x45e304u: goto label_45e304;
        case 0x45e308u: goto label_45e308;
        case 0x45e30cu: goto label_45e30c;
        case 0x45e310u: goto label_45e310;
        case 0x45e314u: goto label_45e314;
        case 0x45e318u: goto label_45e318;
        case 0x45e31cu: goto label_45e31c;
        case 0x45e320u: goto label_45e320;
        case 0x45e324u: goto label_45e324;
        case 0x45e328u: goto label_45e328;
        case 0x45e32cu: goto label_45e32c;
        default: break;
    }

    ctx->pc = 0x45e130u;

label_45e130:
    // 0x45e130: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x45e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_45e134:
    // 0x45e134: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x45e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_45e138:
    // 0x45e138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45e138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45e13c:
    // 0x45e13c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45e140:
    // 0x45e140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45e140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45e144:
    // 0x45e144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45e144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45e148:
    // 0x45e148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45e14c:
    // 0x45e14c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x45e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_45e150:
    // 0x45e150: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x45e150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_45e154:
    // 0x45e154: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x45e154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_45e158:
    // 0x45e158: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x45e158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
label_45e15c:
    // 0x45e15c: 0xafa800a0  sw          $t0, 0xA0($sp)
    ctx->pc = 0x45e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
label_45e160:
    // 0x45e160: 0xafa900b0  sw          $t1, 0xB0($sp)
    ctx->pc = 0x45e160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 9));
label_45e164:
    // 0x45e164: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45e164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e168:
    // 0x45e168: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x45e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_45e16c:
    // 0x45e16c: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_45e170:
    if (ctx->pc == 0x45E170u) {
        ctx->pc = 0x45E174u;
        goto label_45e174;
    }
    ctx->pc = 0x45E16Cu;
    {
        const bool branch_taken_0x45e16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e16c) {
            ctx->pc = 0x45E308u;
            goto label_45e308;
        }
    }
    ctx->pc = 0x45E174u;
label_45e174:
    // 0x45e174: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x45e174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_45e178:
    // 0x45e178: 0xc0f0c30  jal         func_3C30C0
label_45e17c:
    if (ctx->pc == 0x45E17Cu) {
        ctx->pc = 0x45E180u;
        goto label_45e180;
    }
    ctx->pc = 0x45E178u;
    SET_GPR_U32(ctx, 31, 0x45E180u);
    ctx->pc = 0x3C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C30C0u, 0x45E178u, 0x45E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E180u;
label_45e180:
    // 0x45e180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_45e184:
    if (ctx->pc == 0x45E184u) {
        ctx->pc = 0x45E188u;
        goto label_45e188;
    }
    ctx->pc = 0x45E180u;
    {
        const bool branch_taken_0x45e180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e180) {
            ctx->pc = 0x45E194u;
            goto label_45e194;
        }
    }
    ctx->pc = 0x45E188u;
label_45e188:
    // 0x45e188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45e188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e18c:
    // 0x45e18c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_45e190:
    if (ctx->pc == 0x45E190u) {
        ctx->pc = 0x45E194u;
        goto label_45e194;
    }
    ctx->pc = 0x45E18Cu;
    {
        const bool branch_taken_0x45e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e18c) {
            ctx->pc = 0x45E30Cu;
            goto label_45e30c;
        }
    }
    ctx->pc = 0x45E194u;
label_45e194:
    // 0x45e194: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x45e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_45e198:
    // 0x45e198: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x45e198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_45e19c:
    // 0x45e19c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45e1a0:
    // 0x45e1a0: 0x8c42e988  lw          $v0, -0x1678($v0)
    ctx->pc = 0x45e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961544)));
label_45e1a4:
    // 0x45e1a4: 0x40f809  jalr        $v0
label_45e1a8:
    if (ctx->pc == 0x45E1A8u) {
        ctx->pc = 0x45E1ACu;
        goto label_45e1ac;
    }
    ctx->pc = 0x45E1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45E1ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E1A4u, 0x45E1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45E1ACu;
label_45e1ac:
    // 0x45e1ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45e1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e1b0:
    // 0x45e1b0: 0x12200055  beqz        $s1, . + 4 + (0x55 << 2)
label_45e1b4:
    if (ctx->pc == 0x45E1B4u) {
        ctx->pc = 0x45E1B8u;
        goto label_45e1b8;
    }
    ctx->pc = 0x45E1B0u;
    {
        const bool branch_taken_0x45e1b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e1b0) {
            ctx->pc = 0x45E308u;
            goto label_45e308;
        }
    }
    ctx->pc = 0x45E1B8u;
label_45e1b8:
    // 0x45e1b8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x45e1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45e1bc:
    // 0x45e1bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_45e1c0:
    // 0x45e1c0: 0x2442e0d0  addiu       $v0, $v0, -0x1F30
    ctx->pc = 0x45e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959312));
label_45e1c4:
    // 0x45e1c4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x45e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_45e1c8:
    // 0x45e1c8: 0xc0f0c58  jal         func_3C3160
label_45e1cc:
    if (ctx->pc == 0x45E1CCu) {
        ctx->pc = 0x45E1D0u;
        goto label_45e1d0;
    }
    ctx->pc = 0x45E1C8u;
    SET_GPR_U32(ctx, 31, 0x45E1D0u);
    ctx->pc = 0x3C3160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3160u, 0x45E1C8u, 0x45E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E1D0u;
label_45e1d0:
    // 0x45e1d0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x45e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_45e1d4:
    // 0x45e1d4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x45e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_45e1d8:
    // 0x45e1d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_45e1dc:
    // 0x45e1dc: 0x2442c740  addiu       $v0, $v0, -0x38C0
    ctx->pc = 0x45e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
label_45e1e0:
    // 0x45e1e0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x45e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_45e1e4:
    // 0x45e1e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_45e1e8:
    // 0x45e1e8: 0x2442ca80  addiu       $v0, $v0, -0x3580
    ctx->pc = 0x45e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
label_45e1ec:
    // 0x45e1ec: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x45e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_45e1f0:
    // 0x45e1f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_45e1f4:
    // 0x45e1f4: 0x2442cb30  addiu       $v0, $v0, -0x34D0
    ctx->pc = 0x45e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953776));
label_45e1f8:
    // 0x45e1f8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x45e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_45e1fc:
    // 0x45e1fc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_45e200:
    // 0x45e200: 0x2442cf20  addiu       $v0, $v0, -0x30E0
    ctx->pc = 0x45e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
label_45e204:
    // 0x45e204: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x45e204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_45e208:
    // 0x45e208: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45e208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_45e20c:
    // 0x45e20c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x45e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_45e210:
    // 0x45e210: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x45e210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_45e214:
    // 0x45e214: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45e214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_45e218:
    // 0x45e218: 0x2442c550  addiu       $v0, $v0, -0x3AB0
    ctx->pc = 0x45e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952272));
label_45e21c:
    // 0x45e21c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x45e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_45e220:
    // 0x45e220: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45e220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_45e224:
    // 0x45e224: 0x2442c6b0  addiu       $v0, $v0, -0x3950
    ctx->pc = 0x45e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952624));
label_45e228:
    // 0x45e228: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x45e228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_45e22c:
    // 0x45e22c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x45e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45e230:
    // 0x45e230: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x45e230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_45e234:
    // 0x45e234: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x45e234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_45e238:
    // 0x45e238: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45e23c:
    // 0x45e23c: 0x8c42e994  lw          $v0, -0x166C($v0)
    ctx->pc = 0x45e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961556)));
label_45e240:
    // 0x45e240: 0x40f809  jalr        $v0
label_45e244:
    if (ctx->pc == 0x45E244u) {
        ctx->pc = 0x45E248u;
        goto label_45e248;
    }
    ctx->pc = 0x45E240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45E248u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E240u, 0x45E248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45E248u;
label_45e248:
    // 0x45e248: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x45e248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_45e24c:
    // 0x45e24c: 0x8e340058  lw          $s4, 0x58($s1)
    ctx->pc = 0x45e24cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_45e250:
    // 0x45e250: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x45e250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e254:
    // 0x45e254: 0x10000012  b           . + 4 + (0x12 << 2)
label_45e258:
    if (ctx->pc == 0x45E258u) {
        ctx->pc = 0x45E25Cu;
        goto label_45e25c;
    }
    ctx->pc = 0x45E254u;
    {
        const bool branch_taken_0x45e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e254) {
            ctx->pc = 0x45E2A0u;
            goto label_45e2a0;
        }
    }
    ctx->pc = 0x45E25Cu;
label_45e25c:
    // 0x45e25c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x45e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_45e260:
    // 0x45e260: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x45e260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_45e264:
    // 0x45e264: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x45e264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_45e268:
    // 0x45e268: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x45e268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_45e26c:
    // 0x45e26c: 0xae710050  sw          $s1, 0x50($s3)
    ctx->pc = 0x45e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
label_45e270:
    // 0x45e270: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x45e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_45e274:
    // 0x45e274: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x45e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45e278:
    // 0x45e278: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x45e278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_45e27c:
    // 0x45e27c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x45e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45e280:
    // 0x45e280: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x45e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_45e284:
    // 0x45e284: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x45e284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_45e288:
    // 0x45e288: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x45e288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_45e28c:
    // 0x45e28c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45e290:
    // 0x45e290: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x45e290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_45e294:
    // 0x45e294: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x45e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_45e298:
    // 0x45e298: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x45e298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_45e29c:
    // 0x45e29c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x45e29cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_45e2a0:
    // 0x45e2a0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x45e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45e2a4:
    // 0x45e2a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x45e2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_45e2a8:
    // 0x45e2a8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_45e2ac:
    if (ctx->pc == 0x45E2ACu) {
        ctx->pc = 0x45E2B0u;
        goto label_45e2b0;
    }
    ctx->pc = 0x45E2A8u;
    {
        const bool branch_taken_0x45e2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e2a8) {
            ctx->pc = 0x45E25Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e25c;
        }
    }
    ctx->pc = 0x45E2B0u;
label_45e2b0:
    // 0x45e2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45e2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45e2b4:
    // 0x45e2b4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x45e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45e2b8:
    // 0x45e2b8: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x45e2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_45e2bc:
    // 0x45e2bc: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x45e2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_45e2c0:
    // 0x45e2c0: 0xc0f079a  jal         func_3C1E68
label_45e2c4:
    if (ctx->pc == 0x45E2C4u) {
        ctx->pc = 0x45E2C8u;
        goto label_45e2c8;
    }
    ctx->pc = 0x45E2C0u;
    SET_GPR_U32(ctx, 31, 0x45E2C8u);
    ctx->pc = 0x3C1E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1E68u, 0x45E2C0u, 0x45E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E2C8u;
label_45e2c8:
    // 0x45e2c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45e2cc:
    // 0x45e2cc: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_45e2d0:
    if (ctx->pc == 0x45E2D0u) {
        ctx->pc = 0x45E2D4u;
        goto label_45e2d4;
    }
    ctx->pc = 0x45E2CCu;
    {
        const bool branch_taken_0x45e2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45e2cc) {
            ctx->pc = 0x45E308u;
            goto label_45e308;
        }
    }
    ctx->pc = 0x45E2D4u;
label_45e2d4:
    // 0x45e2d4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x45e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_45e2d8:
    // 0x45e2d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45e2dc:
    // 0x45e2dc: 0x8c42e98c  lw          $v0, -0x1674($v0)
    ctx->pc = 0x45e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_45e2e0:
    // 0x45e2e0: 0x40f809  jalr        $v0
label_45e2e4:
    if (ctx->pc == 0x45E2E4u) {
        ctx->pc = 0x45E2E8u;
        goto label_45e2e8;
    }
    ctx->pc = 0x45E2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45E2E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E2E0u, 0x45E2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45E2E8u;
label_45e2e8:
    // 0x45e2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45e2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45e2ec:
    // 0x45e2ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45e2f0:
    // 0x45e2f0: 0x8c42e98c  lw          $v0, -0x1674($v0)
    ctx->pc = 0x45e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_45e2f4:
    // 0x45e2f4: 0x40f809  jalr        $v0
label_45e2f8:
    if (ctx->pc == 0x45E2F8u) {
        ctx->pc = 0x45E2FCu;
        goto label_45e2fc;
    }
    ctx->pc = 0x45E2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45E2FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E2F4u, 0x45E2FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45E2FCu;
label_45e2fc:
    // 0x45e2fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45e2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e300:
    // 0x45e300: 0x10000002  b           . + 4 + (0x2 << 2)
label_45e304:
    if (ctx->pc == 0x45E304u) {
        ctx->pc = 0x45E308u;
        goto label_45e308;
    }
    ctx->pc = 0x45E300u;
    {
        const bool branch_taken_0x45e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e300) {
            ctx->pc = 0x45E30Cu;
            goto label_45e30c;
        }
    }
    ctx->pc = 0x45E308u;
label_45e308:
    // 0x45e308: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x45e308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45e30c:
    // 0x45e30c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x45e30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_45e310:
    // 0x45e310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45e310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45e314:
    // 0x45e314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45e314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45e318:
    // 0x45e318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45e318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45e31c:
    // 0x45e31c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45e31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45e320:
    // 0x45e320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45e320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45e324:
    // 0x45e324: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x45e324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_45e328:
    // 0x45e328: 0x3e00008  jr          $ra
label_45e32c:
    if (ctx->pc == 0x45E32Cu) {
        ctx->pc = 0x45E330u;
        goto label_fallthrough_0x45e328;
    }
    ctx->pc = 0x45E328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x45e328:
    ctx->pc = 0x45E330u;
}
