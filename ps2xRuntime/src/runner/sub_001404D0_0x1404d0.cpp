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

// Function: sub_001404D0
// Address: 0x1404d0 - 0x140650
void sub_001404D0_0x1404d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001404D0_0x1404d0");
#endif

    switch (ctx->pc) {
        case 0x1404d0u: goto label_1404d0;
        case 0x1404d4u: goto label_1404d4;
        case 0x1404d8u: goto label_1404d8;
        case 0x1404dcu: goto label_1404dc;
        case 0x1404e0u: goto label_1404e0;
        case 0x1404e4u: goto label_1404e4;
        case 0x1404e8u: goto label_1404e8;
        case 0x1404ecu: goto label_1404ec;
        case 0x1404f0u: goto label_1404f0;
        case 0x1404f4u: goto label_1404f4;
        case 0x1404f8u: goto label_1404f8;
        case 0x1404fcu: goto label_1404fc;
        case 0x140500u: goto label_140500;
        case 0x140504u: goto label_140504;
        case 0x140508u: goto label_140508;
        case 0x14050cu: goto label_14050c;
        case 0x140510u: goto label_140510;
        case 0x140514u: goto label_140514;
        case 0x140518u: goto label_140518;
        case 0x14051cu: goto label_14051c;
        case 0x140520u: goto label_140520;
        case 0x140524u: goto label_140524;
        case 0x140528u: goto label_140528;
        case 0x14052cu: goto label_14052c;
        case 0x140530u: goto label_140530;
        case 0x140534u: goto label_140534;
        case 0x140538u: goto label_140538;
        case 0x14053cu: goto label_14053c;
        case 0x140540u: goto label_140540;
        case 0x140544u: goto label_140544;
        case 0x140548u: goto label_140548;
        case 0x14054cu: goto label_14054c;
        case 0x140550u: goto label_140550;
        case 0x140554u: goto label_140554;
        case 0x140558u: goto label_140558;
        case 0x14055cu: goto label_14055c;
        case 0x140560u: goto label_140560;
        case 0x140564u: goto label_140564;
        case 0x140568u: goto label_140568;
        case 0x14056cu: goto label_14056c;
        case 0x140570u: goto label_140570;
        case 0x140574u: goto label_140574;
        case 0x140578u: goto label_140578;
        case 0x14057cu: goto label_14057c;
        case 0x140580u: goto label_140580;
        case 0x140584u: goto label_140584;
        case 0x140588u: goto label_140588;
        case 0x14058cu: goto label_14058c;
        case 0x140590u: goto label_140590;
        case 0x140594u: goto label_140594;
        case 0x140598u: goto label_140598;
        case 0x14059cu: goto label_14059c;
        case 0x1405a0u: goto label_1405a0;
        case 0x1405a4u: goto label_1405a4;
        case 0x1405a8u: goto label_1405a8;
        case 0x1405acu: goto label_1405ac;
        case 0x1405b0u: goto label_1405b0;
        case 0x1405b4u: goto label_1405b4;
        case 0x1405b8u: goto label_1405b8;
        case 0x1405bcu: goto label_1405bc;
        case 0x1405c0u: goto label_1405c0;
        case 0x1405c4u: goto label_1405c4;
        case 0x1405c8u: goto label_1405c8;
        case 0x1405ccu: goto label_1405cc;
        case 0x1405d0u: goto label_1405d0;
        case 0x1405d4u: goto label_1405d4;
        case 0x1405d8u: goto label_1405d8;
        case 0x1405dcu: goto label_1405dc;
        case 0x1405e0u: goto label_1405e0;
        case 0x1405e4u: goto label_1405e4;
        case 0x1405e8u: goto label_1405e8;
        case 0x1405ecu: goto label_1405ec;
        case 0x1405f0u: goto label_1405f0;
        case 0x1405f4u: goto label_1405f4;
        case 0x1405f8u: goto label_1405f8;
        case 0x1405fcu: goto label_1405fc;
        case 0x140600u: goto label_140600;
        case 0x140604u: goto label_140604;
        case 0x140608u: goto label_140608;
        case 0x14060cu: goto label_14060c;
        case 0x140610u: goto label_140610;
        case 0x140614u: goto label_140614;
        case 0x140618u: goto label_140618;
        case 0x14061cu: goto label_14061c;
        case 0x140620u: goto label_140620;
        case 0x140624u: goto label_140624;
        case 0x140628u: goto label_140628;
        case 0x14062cu: goto label_14062c;
        case 0x140630u: goto label_140630;
        case 0x140634u: goto label_140634;
        case 0x140638u: goto label_140638;
        case 0x14063cu: goto label_14063c;
        case 0x140640u: goto label_140640;
        case 0x140644u: goto label_140644;
        case 0x140648u: goto label_140648;
        case 0x14064cu: goto label_14064c;
        default: break;
    }

    ctx->pc = 0x1404d0u;

label_1404d0:
    // 0x1404d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1404d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1404d4:
    // 0x1404d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1404d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1404d8:
    // 0x1404d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1404d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1404dc:
    // 0x1404dc: 0xc08ef50  jal         func_23BD40
label_1404e0:
    if (ctx->pc == 0x1404E0u) {
        ctx->pc = 0x1404E4u;
        goto label_1404e4;
    }
    ctx->pc = 0x1404DCu;
    SET_GPR_U32(ctx, 31, 0x1404E4u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x1404DCu, 0x1404E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404E4u;
label_1404e4:
    // 0x1404e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1404e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1404e8:
    // 0x1404e8: 0xc0406f0  jal         func_101BC0
label_1404ec:
    if (ctx->pc == 0x1404ECu) {
        ctx->pc = 0x1404F0u;
        goto label_1404f0;
    }
    ctx->pc = 0x1404E8u;
    SET_GPR_U32(ctx, 31, 0x1404F0u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x1404E8u, 0x1404F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404F0u;
label_1404f0:
    // 0x1404f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1404f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1404f4:
    // 0x1404f4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1404f8:
    if (ctx->pc == 0x1404F8u) {
        ctx->pc = 0x1404FCu;
        goto label_1404fc;
    }
    ctx->pc = 0x1404F4u;
    {
        const bool branch_taken_0x1404f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1404f4) {
            ctx->pc = 0x140508u;
            goto label_140508;
        }
    }
    ctx->pc = 0x1404FCu;
label_1404fc:
    // 0x1404fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1404fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140500:
    // 0x140500: 0x1000004e  b           . + 4 + (0x4E << 2)
label_140504:
    if (ctx->pc == 0x140504u) {
        ctx->pc = 0x140508u;
        goto label_140508;
    }
    ctx->pc = 0x140500u;
    {
        const bool branch_taken_0x140500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140500) {
            ctx->pc = 0x14063Cu;
            goto label_14063c;
        }
    }
    ctx->pc = 0x140508u;
label_140508:
    // 0x140508: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x140508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_14050c:
    // 0x14050c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14050cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140510:
    // 0x140510: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_140514:
    // 0x140514: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x140514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_140518:
    // 0x140518: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_14051c:
    // 0x14051c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x14051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_140520:
    // 0x140520: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x140520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_140524:
    // 0x140524: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_140528:
    // 0x140528: 0x320f809  jalr        $t9
label_14052c:
    if (ctx->pc == 0x14052Cu) {
        ctx->pc = 0x140530u;
        goto label_140530;
    }
    ctx->pc = 0x140528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x140530u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140528u, 0x140530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140530u;
label_140530:
    // 0x140530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140534:
    // 0x140534: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x140534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_140538:
    // 0x140538: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x140538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_14053c:
    // 0x14053c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x14053cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_140540:
    // 0x140540: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x140540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_140544:
    // 0x140544: 0xc103eaa  jal         func_40FAA8
label_140548:
    if (ctx->pc == 0x140548u) {
        ctx->pc = 0x14054Cu;
        goto label_14054c;
    }
    ctx->pc = 0x140544u;
    SET_GPR_U32(ctx, 31, 0x14054Cu);
    ctx->pc = 0x40FAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAA8u, 0x140544u, 0x14054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14054Cu;
label_14054c:
    // 0x14054c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x14054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140550:
    // 0x140550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140554:
    // 0x140554: 0x0  nop
    ctx->pc = 0x140554u;
    // NOP
label_140558:
    // 0x140558: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x140558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14055c:
    // 0x14055c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_140560:
    if (ctx->pc == 0x140560u) {
        ctx->pc = 0x140564u;
        goto label_140564;
    }
    ctx->pc = 0x14055Cu;
    {
        const bool branch_taken_0x14055c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14055c) {
            ctx->pc = 0x140578u;
            goto label_140578;
        }
    }
    ctx->pc = 0x140564u;
label_140564:
    // 0x140564: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x140564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140568:
    // 0x140568: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_14056c:
    // 0x14056c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x14056cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_140570:
    // 0x140570: 0x10000005  b           . + 4 + (0x5 << 2)
label_140574:
    if (ctx->pc == 0x140574u) {
        ctx->pc = 0x140578u;
        goto label_140578;
    }
    ctx->pc = 0x140570u;
    {
        const bool branch_taken_0x140570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140570) {
            ctx->pc = 0x140588u;
            goto label_140588;
        }
    }
    ctx->pc = 0x140578u;
label_140578:
    // 0x140578: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x140578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14057c:
    // 0x14057c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14057cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_140580:
    // 0x140580: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_140584:
    // 0x140584: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x140584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_140588:
    // 0x140588: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_14058c:
    // 0x14058c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x14058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140590:
    // 0x140590: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_140594:
    // 0x140594: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x140594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140598:
    // 0x140598: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x140598u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14059c:
    // 0x14059c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_1405a0:
    // 0x1405a0: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1405a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1405a4:
    // 0x1405a4: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1405a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_1405a8:
    // 0x1405a8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1405a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1405ac:
    // 0x1405ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1405acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1405b0:
    // 0x1405b0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1405b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_1405b4:
    // 0x1405b4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1405b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1405b8:
    // 0x1405b8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1405b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_1405bc:
    // 0x1405bc: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1405bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1405c0:
    // 0x1405c0: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1405c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_1405c4:
    // 0x1405c4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1405c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1405c8:
    // 0x1405c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1405c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1405cc:
    // 0x1405cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1405d0:
    if (ctx->pc == 0x1405D0u) {
        ctx->pc = 0x1405D4u;
        goto label_1405d4;
    }
    ctx->pc = 0x1405CCu;
    {
        const bool branch_taken_0x1405cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1405cc) {
            ctx->pc = 0x1405E0u;
            goto label_1405e0;
        }
    }
    ctx->pc = 0x1405D4u;
label_1405d4:
    // 0x1405d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1405d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1405d8:
    // 0x1405d8: 0x0  nop
    ctx->pc = 0x1405d8u;
    // NOP
label_1405dc:
    // 0x1405dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1405dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1405e0:
    // 0x1405e0: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1405e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_1405e4:
    // 0x1405e4: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1405e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1405e8:
    // 0x1405e8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1405e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_1405ec:
    // 0x1405ec: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1405ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1405f0:
    // 0x1405f0: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1405f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1405f4:
    // 0x1405f4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1405f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1405f8:
    // 0x1405f8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1405f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_1405fc:
    // 0x1405fc: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1405fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140600:
    // 0x140600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140604:
    // 0x140604: 0x0  nop
    ctx->pc = 0x140604u;
    // NOP
label_140608:
    // 0x140608: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x140608u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_14060c:
    // 0x14060c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14060cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_140610:
    // 0x140610: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_140614:
    // 0x140614: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x140614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_140618:
    // 0x140618: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
label_14061c:
    // 0x14061c: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x14061cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_140620:
    // 0x140620: 0xc097444  jal         func_25D110
label_140624:
    if (ctx->pc == 0x140624u) {
        ctx->pc = 0x140628u;
        goto label_140628;
    }
    ctx->pc = 0x140620u;
    SET_GPR_U32(ctx, 31, 0x140628u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x140620u, 0x140628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140628u;
label_140628:
    // 0x140628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14062c:
    // 0x14062c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140630:
    // 0x140630: 0xc089ad8  jal         func_226B60
label_140634:
    if (ctx->pc == 0x140634u) {
        ctx->pc = 0x140638u;
        goto label_140638;
    }
    ctx->pc = 0x140630u;
    SET_GPR_U32(ctx, 31, 0x140638u);
    ctx->pc = 0x226B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B60u, 0x140630u, 0x140638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140638u;
label_140638:
    // 0x140638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14063c:
    // 0x14063c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140640:
    // 0x140640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_140644:
    // 0x140644: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x140644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_140648:
    // 0x140648: 0x3e00008  jr          $ra
label_14064c:
    if (ctx->pc == 0x14064Cu) {
        ctx->pc = 0x140650u;
        goto label_fallthrough_0x140648;
    }
    ctx->pc = 0x140648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140648:
    ctx->pc = 0x140650u;
}
