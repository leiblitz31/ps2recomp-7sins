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

// Function: sub_00494370
// Address: 0x494370 - 0x494620
void sub_00494370_0x494370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494370_0x494370");
#endif

    switch (ctx->pc) {
        case 0x494370u: goto label_494370;
        case 0x494374u: goto label_494374;
        case 0x494378u: goto label_494378;
        case 0x49437cu: goto label_49437c;
        case 0x494380u: goto label_494380;
        case 0x494384u: goto label_494384;
        case 0x494388u: goto label_494388;
        case 0x49438cu: goto label_49438c;
        case 0x494390u: goto label_494390;
        case 0x494394u: goto label_494394;
        case 0x494398u: goto label_494398;
        case 0x49439cu: goto label_49439c;
        case 0x4943a0u: goto label_4943a0;
        case 0x4943a4u: goto label_4943a4;
        case 0x4943a8u: goto label_4943a8;
        case 0x4943acu: goto label_4943ac;
        case 0x4943b0u: goto label_4943b0;
        case 0x4943b4u: goto label_4943b4;
        case 0x4943b8u: goto label_4943b8;
        case 0x4943bcu: goto label_4943bc;
        case 0x4943c0u: goto label_4943c0;
        case 0x4943c4u: goto label_4943c4;
        case 0x4943c8u: goto label_4943c8;
        case 0x4943ccu: goto label_4943cc;
        case 0x4943d0u: goto label_4943d0;
        case 0x4943d4u: goto label_4943d4;
        case 0x4943d8u: goto label_4943d8;
        case 0x4943dcu: goto label_4943dc;
        case 0x4943e0u: goto label_4943e0;
        case 0x4943e4u: goto label_4943e4;
        case 0x4943e8u: goto label_4943e8;
        case 0x4943ecu: goto label_4943ec;
        case 0x4943f0u: goto label_4943f0;
        case 0x4943f4u: goto label_4943f4;
        case 0x4943f8u: goto label_4943f8;
        case 0x4943fcu: goto label_4943fc;
        case 0x494400u: goto label_494400;
        case 0x494404u: goto label_494404;
        case 0x494408u: goto label_494408;
        case 0x49440cu: goto label_49440c;
        case 0x494410u: goto label_494410;
        case 0x494414u: goto label_494414;
        case 0x494418u: goto label_494418;
        case 0x49441cu: goto label_49441c;
        case 0x494420u: goto label_494420;
        case 0x494424u: goto label_494424;
        case 0x494428u: goto label_494428;
        case 0x49442cu: goto label_49442c;
        case 0x494430u: goto label_494430;
        case 0x494434u: goto label_494434;
        case 0x494438u: goto label_494438;
        case 0x49443cu: goto label_49443c;
        case 0x494440u: goto label_494440;
        case 0x494444u: goto label_494444;
        case 0x494448u: goto label_494448;
        case 0x49444cu: goto label_49444c;
        case 0x494450u: goto label_494450;
        case 0x494454u: goto label_494454;
        case 0x494458u: goto label_494458;
        case 0x49445cu: goto label_49445c;
        case 0x494460u: goto label_494460;
        case 0x494464u: goto label_494464;
        case 0x494468u: goto label_494468;
        case 0x49446cu: goto label_49446c;
        case 0x494470u: goto label_494470;
        case 0x494474u: goto label_494474;
        case 0x494478u: goto label_494478;
        case 0x49447cu: goto label_49447c;
        case 0x494480u: goto label_494480;
        case 0x494484u: goto label_494484;
        case 0x494488u: goto label_494488;
        case 0x49448cu: goto label_49448c;
        case 0x494490u: goto label_494490;
        case 0x494494u: goto label_494494;
        case 0x494498u: goto label_494498;
        case 0x49449cu: goto label_49449c;
        case 0x4944a0u: goto label_4944a0;
        case 0x4944a4u: goto label_4944a4;
        case 0x4944a8u: goto label_4944a8;
        case 0x4944acu: goto label_4944ac;
        case 0x4944b0u: goto label_4944b0;
        case 0x4944b4u: goto label_4944b4;
        case 0x4944b8u: goto label_4944b8;
        case 0x4944bcu: goto label_4944bc;
        case 0x4944c0u: goto label_4944c0;
        case 0x4944c4u: goto label_4944c4;
        case 0x4944c8u: goto label_4944c8;
        case 0x4944ccu: goto label_4944cc;
        case 0x4944d0u: goto label_4944d0;
        case 0x4944d4u: goto label_4944d4;
        case 0x4944d8u: goto label_4944d8;
        case 0x4944dcu: goto label_4944dc;
        case 0x4944e0u: goto label_4944e0;
        case 0x4944e4u: goto label_4944e4;
        case 0x4944e8u: goto label_4944e8;
        case 0x4944ecu: goto label_4944ec;
        case 0x4944f0u: goto label_4944f0;
        case 0x4944f4u: goto label_4944f4;
        case 0x4944f8u: goto label_4944f8;
        case 0x4944fcu: goto label_4944fc;
        case 0x494500u: goto label_494500;
        case 0x494504u: goto label_494504;
        case 0x494508u: goto label_494508;
        case 0x49450cu: goto label_49450c;
        case 0x494510u: goto label_494510;
        case 0x494514u: goto label_494514;
        case 0x494518u: goto label_494518;
        case 0x49451cu: goto label_49451c;
        case 0x494520u: goto label_494520;
        case 0x494524u: goto label_494524;
        case 0x494528u: goto label_494528;
        case 0x49452cu: goto label_49452c;
        case 0x494530u: goto label_494530;
        case 0x494534u: goto label_494534;
        case 0x494538u: goto label_494538;
        case 0x49453cu: goto label_49453c;
        case 0x494540u: goto label_494540;
        case 0x494544u: goto label_494544;
        case 0x494548u: goto label_494548;
        case 0x49454cu: goto label_49454c;
        case 0x494550u: goto label_494550;
        case 0x494554u: goto label_494554;
        case 0x494558u: goto label_494558;
        case 0x49455cu: goto label_49455c;
        case 0x494560u: goto label_494560;
        case 0x494564u: goto label_494564;
        case 0x494568u: goto label_494568;
        case 0x49456cu: goto label_49456c;
        case 0x494570u: goto label_494570;
        case 0x494574u: goto label_494574;
        case 0x494578u: goto label_494578;
        case 0x49457cu: goto label_49457c;
        case 0x494580u: goto label_494580;
        case 0x494584u: goto label_494584;
        case 0x494588u: goto label_494588;
        case 0x49458cu: goto label_49458c;
        case 0x494590u: goto label_494590;
        case 0x494594u: goto label_494594;
        case 0x494598u: goto label_494598;
        case 0x49459cu: goto label_49459c;
        case 0x4945a0u: goto label_4945a0;
        case 0x4945a4u: goto label_4945a4;
        case 0x4945a8u: goto label_4945a8;
        case 0x4945acu: goto label_4945ac;
        case 0x4945b0u: goto label_4945b0;
        case 0x4945b4u: goto label_4945b4;
        case 0x4945b8u: goto label_4945b8;
        case 0x4945bcu: goto label_4945bc;
        case 0x4945c0u: goto label_4945c0;
        case 0x4945c4u: goto label_4945c4;
        case 0x4945c8u: goto label_4945c8;
        case 0x4945ccu: goto label_4945cc;
        case 0x4945d0u: goto label_4945d0;
        case 0x4945d4u: goto label_4945d4;
        case 0x4945d8u: goto label_4945d8;
        case 0x4945dcu: goto label_4945dc;
        case 0x4945e0u: goto label_4945e0;
        case 0x4945e4u: goto label_4945e4;
        case 0x4945e8u: goto label_4945e8;
        case 0x4945ecu: goto label_4945ec;
        case 0x4945f0u: goto label_4945f0;
        case 0x4945f4u: goto label_4945f4;
        case 0x4945f8u: goto label_4945f8;
        case 0x4945fcu: goto label_4945fc;
        case 0x494600u: goto label_494600;
        case 0x494604u: goto label_494604;
        case 0x494608u: goto label_494608;
        case 0x49460cu: goto label_49460c;
        case 0x494610u: goto label_494610;
        case 0x494614u: goto label_494614;
        case 0x494618u: goto label_494618;
        case 0x49461cu: goto label_49461c;
        default: break;
    }

    ctx->pc = 0x494370u;

label_494370:
    // 0x494370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x494370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_494374:
    // 0x494374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x494374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_494378:
    // 0x494378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x494378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49437c:
    // 0x49437c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x49437cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_494380:
    // 0x494380: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x494380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_494384:
    // 0x494384: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x494384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494388:
    // 0x494388: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x494388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_49438c:
    // 0x49438c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_494390:
    if (ctx->pc == 0x494390u) {
        ctx->pc = 0x494394u;
        goto label_494394;
    }
    ctx->pc = 0x49438Cu;
    {
        const bool branch_taken_0x49438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49438c) {
            ctx->pc = 0x4943A0u;
            goto label_4943a0;
        }
    }
    ctx->pc = 0x494394u;
label_494394:
    // 0x494394: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x494394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_494398:
    // 0x494398: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x494398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
label_49439c:
    // 0x49439c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x49439cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_4943a0:
    // 0x4943a0: 0x8f82c128  lw          $v0, -0x3ED8($gp)
    ctx->pc = 0x4943a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951208)));
label_4943a4:
    // 0x4943a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4943a8:
    if (ctx->pc == 0x4943A8u) {
        ctx->pc = 0x4943ACu;
        goto label_4943ac;
    }
    ctx->pc = 0x4943A4u;
    {
        const bool branch_taken_0x4943a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4943a4) {
            ctx->pc = 0x4943C0u;
            goto label_4943c0;
        }
    }
    ctx->pc = 0x4943ACu;
label_4943ac:
    // 0x4943ac: 0x8f84c128  lw          $a0, -0x3ED8($gp)
    ctx->pc = 0x4943acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951208)));
label_4943b0:
    // 0x4943b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4943b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4943b4:
    // 0x4943b4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x4943b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_4943b8:
    // 0x4943b8: 0x320f809  jalr        $t9
label_4943bc:
    if (ctx->pc == 0x4943BCu) {
        ctx->pc = 0x4943C0u;
        goto label_4943c0;
    }
    ctx->pc = 0x4943B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4943C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4943B8u, 0x4943C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4943C0u;
label_4943c0:
    // 0x4943c0: 0x8f82c124  lw          $v0, -0x3EDC($gp)
    ctx->pc = 0x4943c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951204)));
label_4943c4:
    // 0x4943c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4943c8:
    if (ctx->pc == 0x4943C8u) {
        ctx->pc = 0x4943CCu;
        goto label_4943cc;
    }
    ctx->pc = 0x4943C4u;
    {
        const bool branch_taken_0x4943c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4943c4) {
            ctx->pc = 0x4943E0u;
            goto label_4943e0;
        }
    }
    ctx->pc = 0x4943CCu;
label_4943cc:
    // 0x4943cc: 0x8f84c124  lw          $a0, -0x3EDC($gp)
    ctx->pc = 0x4943ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951204)));
label_4943d0:
    // 0x4943d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4943d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4943d4:
    // 0x4943d4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x4943d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_4943d8:
    // 0x4943d8: 0x320f809  jalr        $t9
label_4943dc:
    if (ctx->pc == 0x4943DCu) {
        ctx->pc = 0x4943E0u;
        goto label_4943e0;
    }
    ctx->pc = 0x4943D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4943E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4943D8u, 0x4943E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4943E0u;
label_4943e0:
    // 0x4943e0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x4943e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_4943e4:
    // 0x4943e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4943e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4943e8:
    // 0x4943e8: 0xc780c114  lwc1        $f0, -0x3EEC($gp)
    ctx->pc = 0x4943e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294951188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4943ec:
    // 0x4943ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4943ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4943f0:
    // 0x4943f0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x4943f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4943f4:
    // 0x4943f4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4943f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4943f8:
    // 0x4943f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4943f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4943fc:
    // 0x4943fc: 0xc780c118  lwc1        $f0, -0x3EE8($gp)
    ctx->pc = 0x4943fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294951192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_494400:
    // 0x494400: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x494400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_494404:
    // 0x494404: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x494404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_494408:
    // 0x494408: 0xc78380f4  lwc1        $f3, -0x7F0C($gp)
    ctx->pc = 0x494408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49440c:
    // 0x49440c: 0xc782c11c  lwc1        $f2, -0x3EE4($gp)
    ctx->pc = 0x49440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294951196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_494410:
    // 0x494410: 0xc781c11c  lwc1        $f1, -0x3EE4($gp)
    ctx->pc = 0x494410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294951196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_494414:
    // 0x494414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x494414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_494418:
    // 0x494418: 0x0  nop
    ctx->pc = 0x494418u;
    // NOP
label_49441c:
    // 0x49441c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x49441cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_494420:
    // 0x494420: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x494420u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_494424:
    // 0x494424: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x494424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_494428:
    // 0x494428: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x494428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49442c:
    // 0x49442c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x49442cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_494430:
    // 0x494430: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x494430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_494434:
    // 0x494434: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x494434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_494438:
    // 0x494438: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x494438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
label_49443c:
    // 0x49443c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x49443cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_494440:
    // 0x494440: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x494440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_494444:
    // 0x494444: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x494444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_494448:
    // 0x494448: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x494448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_49444c:
    // 0x49444c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x49444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_494450:
    // 0x494450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x494450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_494454:
    // 0x494454: 0x0  nop
    ctx->pc = 0x494454u;
    // NOP
label_494458:
    // 0x494458: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x494458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_49445c:
    // 0x49445c: 0x8f84c120  lw          $a0, -0x3EE0($gp)
    ctx->pc = 0x49445cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951200)));
label_494460:
    // 0x494460: 0xc11c044  jal         func_470110
label_494464:
    if (ctx->pc == 0x494464u) {
        ctx->pc = 0x494468u;
        goto label_494468;
    }
    ctx->pc = 0x494460u;
    SET_GPR_U32(ctx, 31, 0x494468u);
    ctx->pc = 0x470110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470110u, 0x494460u, 0x494468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494468u;
label_494468:
    // 0x494468: 0x8f84c110  lw          $a0, -0x3EF0($gp)
    ctx->pc = 0x494468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951184)));
label_49446c:
    // 0x49446c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x49446cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_494470:
    // 0x494470: 0xc78cb728  lwc1        $f12, -0x48D8($gp)
    ctx->pc = 0x494470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_494474:
    // 0x494474: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x494474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_494478:
    // 0x494478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x494478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49447c:
    // 0x49447c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x49447cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_494480:
    // 0x494480: 0xc0eb0ae  jal         func_3AC2B8
label_494484:
    if (ctx->pc == 0x494484u) {
        ctx->pc = 0x494488u;
        goto label_494488;
    }
    ctx->pc = 0x494480u;
    SET_GPR_U32(ctx, 31, 0x494488u);
    ctx->pc = 0x3AC2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC2B8u, 0x494480u, 0x494488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494488u;
label_494488:
    // 0x494488: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x494488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49448c:
    // 0x49448c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x49448cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_494490:
    // 0x494490: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x494490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_494494:
    // 0x494494: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x494494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_494498:
    // 0x494498: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x494498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49449c:
    // 0x49449c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x49449cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4944a0:
    // 0x4944a0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x4944a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4944a4:
    // 0x4944a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x4944a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_4944a8:
    // 0x4944a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4944a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4944ac:
    // 0x4944ac: 0x0  nop
    ctx->pc = 0x4944acu;
    // NOP
label_4944b0:
    // 0x4944b0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x4944b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_4944b4:
    // 0x4944b4: 0x8f84c120  lw          $a0, -0x3EE0($gp)
    ctx->pc = 0x4944b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951200)));
label_4944b8:
    // 0x4944b8: 0xc11c044  jal         func_470110
label_4944bc:
    if (ctx->pc == 0x4944BCu) {
        ctx->pc = 0x4944C0u;
        goto label_4944c0;
    }
    ctx->pc = 0x4944B8u;
    SET_GPR_U32(ctx, 31, 0x4944C0u);
    ctx->pc = 0x470110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470110u, 0x4944B8u, 0x4944C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4944C0u;
label_4944c0:
    // 0x4944c0: 0x8f84c110  lw          $a0, -0x3EF0($gp)
    ctx->pc = 0x4944c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951184)));
label_4944c4:
    // 0x4944c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4944c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4944c8:
    // 0x4944c8: 0xc78cb728  lwc1        $f12, -0x48D8($gp)
    ctx->pc = 0x4944c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4944cc:
    // 0x4944cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4944ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4944d0:
    // 0x4944d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4944d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4944d4:
    // 0x4944d4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4944d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4944d8:
    // 0x4944d8: 0xc0eb0ae  jal         func_3AC2B8
label_4944dc:
    if (ctx->pc == 0x4944DCu) {
        ctx->pc = 0x4944E0u;
        goto label_4944e0;
    }
    ctx->pc = 0x4944D8u;
    SET_GPR_U32(ctx, 31, 0x4944E0u);
    ctx->pc = 0x3AC2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC2B8u, 0x4944D8u, 0x4944E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4944E0u;
label_4944e0:
    // 0x4944e0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x4944e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4944e4:
    // 0x4944e4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4944e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4944e8:
    // 0x4944e8: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x4944e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_4944ec:
    // 0x4944ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4944ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4944f0:
    // 0x4944f0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x4944f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4944f4:
    // 0x4944f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4944f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4944f8:
    // 0x4944f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x4944f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4944fc:
    // 0x4944fc: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x4944fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_494500:
    // 0x494500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x494500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_494504:
    // 0x494504: 0x0  nop
    ctx->pc = 0x494504u;
    // NOP
label_494508:
    // 0x494508: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x494508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_49450c:
    // 0x49450c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x49450cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_494510:
    // 0x494510: 0x261051b0  addiu       $s0, $s0, 0x51B0
    ctx->pc = 0x494510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20912));
label_494514:
    // 0x494514: 0x8f84c120  lw          $a0, -0x3EE0($gp)
    ctx->pc = 0x494514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951200)));
label_494518:
    // 0x494518: 0xc11c044  jal         func_470110
label_49451c:
    if (ctx->pc == 0x49451Cu) {
        ctx->pc = 0x494520u;
        goto label_494520;
    }
    ctx->pc = 0x494518u;
    SET_GPR_U32(ctx, 31, 0x494520u);
    ctx->pc = 0x470110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470110u, 0x494518u, 0x494520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494520u;
label_494520:
    // 0x494520: 0x8f84c110  lw          $a0, -0x3EF0($gp)
    ctx->pc = 0x494520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951184)));
label_494524:
    // 0x494524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x494524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_494528:
    // 0x494528: 0xc78cb728  lwc1        $f12, -0x48D8($gp)
    ctx->pc = 0x494528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49452c:
    // 0x49452c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x49452cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_494530:
    // 0x494530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x494530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494534:
    // 0x494534: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x494534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_494538:
    // 0x494538: 0xc0eb0ae  jal         func_3AC2B8
label_49453c:
    if (ctx->pc == 0x49453Cu) {
        ctx->pc = 0x494540u;
        goto label_494540;
    }
    ctx->pc = 0x494538u;
    SET_GPR_U32(ctx, 31, 0x494540u);
    ctx->pc = 0x3AC2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC2B8u, 0x494538u, 0x494540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494540u;
label_494540:
    // 0x494540: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x494540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_494544:
    // 0x494544: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x494544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_494548:
    // 0x494548: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x494548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_49454c:
    // 0x49454c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x49454cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_494550:
    // 0x494550: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x494550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_494554:
    // 0x494554: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x494554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_494558:
    // 0x494558: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x494558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_49455c:
    // 0x49455c: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x49455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_494560:
    // 0x494560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x494560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_494564:
    // 0x494564: 0x0  nop
    ctx->pc = 0x494564u;
    // NOP
label_494568:
    // 0x494568: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x494568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_49456c:
    // 0x49456c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x49456cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_494570:
    // 0x494570: 0x261051d0  addiu       $s0, $s0, 0x51D0
    ctx->pc = 0x494570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20944));
label_494574:
    // 0x494574: 0x8f84c120  lw          $a0, -0x3EE0($gp)
    ctx->pc = 0x494574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951200)));
label_494578:
    // 0x494578: 0xc11c044  jal         func_470110
label_49457c:
    if (ctx->pc == 0x49457Cu) {
        ctx->pc = 0x494580u;
        goto label_494580;
    }
    ctx->pc = 0x494578u;
    SET_GPR_U32(ctx, 31, 0x494580u);
    ctx->pc = 0x470110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470110u, 0x494578u, 0x494580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494580u;
label_494580:
    // 0x494580: 0x8f84c110  lw          $a0, -0x3EF0($gp)
    ctx->pc = 0x494580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951184)));
label_494584:
    // 0x494584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x494584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_494588:
    // 0x494588: 0xc78cb728  lwc1        $f12, -0x48D8($gp)
    ctx->pc = 0x494588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49458c:
    // 0x49458c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x49458cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_494590:
    // 0x494590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x494590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494594:
    // 0x494594: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x494594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_494598:
    // 0x494598: 0xc0eb0ae  jal         func_3AC2B8
label_49459c:
    if (ctx->pc == 0x49459Cu) {
        ctx->pc = 0x4945A0u;
        goto label_4945a0;
    }
    ctx->pc = 0x494598u;
    SET_GPR_U32(ctx, 31, 0x4945A0u);
    ctx->pc = 0x3AC2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC2B8u, 0x494598u, 0x4945A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4945A0u;
label_4945a0:
    // 0x4945a0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x4945a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4945a4:
    // 0x4945a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4945a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4945a8:
    // 0x4945a8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4945a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_4945ac:
    // 0x4945ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4945acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4945b0:
    // 0x4945b0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x4945b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4945b4:
    // 0x4945b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4945b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4945b8:
    // 0x4945b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x4945b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4945bc:
    // 0x4945bc: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x4945bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_4945c0:
    // 0x4945c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4945c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4945c4:
    // 0x4945c4: 0x0  nop
    ctx->pc = 0x4945c4u;
    // NOP
label_4945c8:
    // 0x4945c8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x4945c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_4945cc:
    // 0x4945cc: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x4945ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_4945d0:
    // 0x4945d0: 0x261051f0  addiu       $s0, $s0, 0x51F0
    ctx->pc = 0x4945d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20976));
label_4945d4:
    // 0x4945d4: 0x8f84c120  lw          $a0, -0x3EE0($gp)
    ctx->pc = 0x4945d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951200)));
label_4945d8:
    // 0x4945d8: 0xc11c044  jal         func_470110
label_4945dc:
    if (ctx->pc == 0x4945DCu) {
        ctx->pc = 0x4945E0u;
        goto label_4945e0;
    }
    ctx->pc = 0x4945D8u;
    SET_GPR_U32(ctx, 31, 0x4945E0u);
    ctx->pc = 0x470110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470110u, 0x4945D8u, 0x4945E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4945E0u;
label_4945e0:
    // 0x4945e0: 0x8f84c110  lw          $a0, -0x3EF0($gp)
    ctx->pc = 0x4945e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951184)));
label_4945e4:
    // 0x4945e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4945e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4945e8:
    // 0x4945e8: 0xc78cb728  lwc1        $f12, -0x48D8($gp)
    ctx->pc = 0x4945e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4945ec:
    // 0x4945ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4945ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4945f0:
    // 0x4945f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4945f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4945f4:
    // 0x4945f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4945f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4945f8:
    // 0x4945f8: 0xc0eb0ae  jal         func_3AC2B8
label_4945fc:
    if (ctx->pc == 0x4945FCu) {
        ctx->pc = 0x494600u;
        goto label_494600;
    }
    ctx->pc = 0x4945F8u;
    SET_GPR_U32(ctx, 31, 0x494600u);
    ctx->pc = 0x3AC2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC2B8u, 0x4945F8u, 0x494600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494600u;
label_494600:
    // 0x494600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x494600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_494604:
    // 0x494604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x494604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_494608:
    // 0x494608: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x494608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_49460c:
    // 0x49460c: 0x3e00008  jr          $ra
label_494610:
    if (ctx->pc == 0x494610u) {
        ctx->pc = 0x494614u;
        goto label_494614;
    }
    ctx->pc = 0x49460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49460Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494614u;
label_494614:
    // 0x494614: 0x0  nop
    ctx->pc = 0x494614u;
    // NOP
label_494618:
    // 0x494618: 0x0  nop
    ctx->pc = 0x494618u;
    // NOP
label_49461c:
    // 0x49461c: 0x0  nop
    ctx->pc = 0x49461cu;
    // NOP
    ctx->pc = 0x494620u;
}
