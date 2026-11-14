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

// Function: sub_00145450
// Address: 0x145450 - 0x1456f0
void sub_00145450_0x145450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145450_0x145450");
#endif

    switch (ctx->pc) {
        case 0x145450u: goto label_145450;
        case 0x145454u: goto label_145454;
        case 0x145458u: goto label_145458;
        case 0x14545cu: goto label_14545c;
        case 0x145460u: goto label_145460;
        case 0x145464u: goto label_145464;
        case 0x145468u: goto label_145468;
        case 0x14546cu: goto label_14546c;
        case 0x145470u: goto label_145470;
        case 0x145474u: goto label_145474;
        case 0x145478u: goto label_145478;
        case 0x14547cu: goto label_14547c;
        case 0x145480u: goto label_145480;
        case 0x145484u: goto label_145484;
        case 0x145488u: goto label_145488;
        case 0x14548cu: goto label_14548c;
        case 0x145490u: goto label_145490;
        case 0x145494u: goto label_145494;
        case 0x145498u: goto label_145498;
        case 0x14549cu: goto label_14549c;
        case 0x1454a0u: goto label_1454a0;
        case 0x1454a4u: goto label_1454a4;
        case 0x1454a8u: goto label_1454a8;
        case 0x1454acu: goto label_1454ac;
        case 0x1454b0u: goto label_1454b0;
        case 0x1454b4u: goto label_1454b4;
        case 0x1454b8u: goto label_1454b8;
        case 0x1454bcu: goto label_1454bc;
        case 0x1454c0u: goto label_1454c0;
        case 0x1454c4u: goto label_1454c4;
        case 0x1454c8u: goto label_1454c8;
        case 0x1454ccu: goto label_1454cc;
        case 0x1454d0u: goto label_1454d0;
        case 0x1454d4u: goto label_1454d4;
        case 0x1454d8u: goto label_1454d8;
        case 0x1454dcu: goto label_1454dc;
        case 0x1454e0u: goto label_1454e0;
        case 0x1454e4u: goto label_1454e4;
        case 0x1454e8u: goto label_1454e8;
        case 0x1454ecu: goto label_1454ec;
        case 0x1454f0u: goto label_1454f0;
        case 0x1454f4u: goto label_1454f4;
        case 0x1454f8u: goto label_1454f8;
        case 0x1454fcu: goto label_1454fc;
        case 0x145500u: goto label_145500;
        case 0x145504u: goto label_145504;
        case 0x145508u: goto label_145508;
        case 0x14550cu: goto label_14550c;
        case 0x145510u: goto label_145510;
        case 0x145514u: goto label_145514;
        case 0x145518u: goto label_145518;
        case 0x14551cu: goto label_14551c;
        case 0x145520u: goto label_145520;
        case 0x145524u: goto label_145524;
        case 0x145528u: goto label_145528;
        case 0x14552cu: goto label_14552c;
        case 0x145530u: goto label_145530;
        case 0x145534u: goto label_145534;
        case 0x145538u: goto label_145538;
        case 0x14553cu: goto label_14553c;
        case 0x145540u: goto label_145540;
        case 0x145544u: goto label_145544;
        case 0x145548u: goto label_145548;
        case 0x14554cu: goto label_14554c;
        case 0x145550u: goto label_145550;
        case 0x145554u: goto label_145554;
        case 0x145558u: goto label_145558;
        case 0x14555cu: goto label_14555c;
        case 0x145560u: goto label_145560;
        case 0x145564u: goto label_145564;
        case 0x145568u: goto label_145568;
        case 0x14556cu: goto label_14556c;
        case 0x145570u: goto label_145570;
        case 0x145574u: goto label_145574;
        case 0x145578u: goto label_145578;
        case 0x14557cu: goto label_14557c;
        case 0x145580u: goto label_145580;
        case 0x145584u: goto label_145584;
        case 0x145588u: goto label_145588;
        case 0x14558cu: goto label_14558c;
        case 0x145590u: goto label_145590;
        case 0x145594u: goto label_145594;
        case 0x145598u: goto label_145598;
        case 0x14559cu: goto label_14559c;
        case 0x1455a0u: goto label_1455a0;
        case 0x1455a4u: goto label_1455a4;
        case 0x1455a8u: goto label_1455a8;
        case 0x1455acu: goto label_1455ac;
        case 0x1455b0u: goto label_1455b0;
        case 0x1455b4u: goto label_1455b4;
        case 0x1455b8u: goto label_1455b8;
        case 0x1455bcu: goto label_1455bc;
        case 0x1455c0u: goto label_1455c0;
        case 0x1455c4u: goto label_1455c4;
        case 0x1455c8u: goto label_1455c8;
        case 0x1455ccu: goto label_1455cc;
        case 0x1455d0u: goto label_1455d0;
        case 0x1455d4u: goto label_1455d4;
        case 0x1455d8u: goto label_1455d8;
        case 0x1455dcu: goto label_1455dc;
        case 0x1455e0u: goto label_1455e0;
        case 0x1455e4u: goto label_1455e4;
        case 0x1455e8u: goto label_1455e8;
        case 0x1455ecu: goto label_1455ec;
        case 0x1455f0u: goto label_1455f0;
        case 0x1455f4u: goto label_1455f4;
        case 0x1455f8u: goto label_1455f8;
        case 0x1455fcu: goto label_1455fc;
        case 0x145600u: goto label_145600;
        case 0x145604u: goto label_145604;
        case 0x145608u: goto label_145608;
        case 0x14560cu: goto label_14560c;
        case 0x145610u: goto label_145610;
        case 0x145614u: goto label_145614;
        case 0x145618u: goto label_145618;
        case 0x14561cu: goto label_14561c;
        case 0x145620u: goto label_145620;
        case 0x145624u: goto label_145624;
        case 0x145628u: goto label_145628;
        case 0x14562cu: goto label_14562c;
        case 0x145630u: goto label_145630;
        case 0x145634u: goto label_145634;
        case 0x145638u: goto label_145638;
        case 0x14563cu: goto label_14563c;
        case 0x145640u: goto label_145640;
        case 0x145644u: goto label_145644;
        case 0x145648u: goto label_145648;
        case 0x14564cu: goto label_14564c;
        case 0x145650u: goto label_145650;
        case 0x145654u: goto label_145654;
        case 0x145658u: goto label_145658;
        case 0x14565cu: goto label_14565c;
        case 0x145660u: goto label_145660;
        case 0x145664u: goto label_145664;
        case 0x145668u: goto label_145668;
        case 0x14566cu: goto label_14566c;
        case 0x145670u: goto label_145670;
        case 0x145674u: goto label_145674;
        case 0x145678u: goto label_145678;
        case 0x14567cu: goto label_14567c;
        case 0x145680u: goto label_145680;
        case 0x145684u: goto label_145684;
        case 0x145688u: goto label_145688;
        case 0x14568cu: goto label_14568c;
        case 0x145690u: goto label_145690;
        case 0x145694u: goto label_145694;
        case 0x145698u: goto label_145698;
        case 0x14569cu: goto label_14569c;
        case 0x1456a0u: goto label_1456a0;
        case 0x1456a4u: goto label_1456a4;
        case 0x1456a8u: goto label_1456a8;
        case 0x1456acu: goto label_1456ac;
        case 0x1456b0u: goto label_1456b0;
        case 0x1456b4u: goto label_1456b4;
        case 0x1456b8u: goto label_1456b8;
        case 0x1456bcu: goto label_1456bc;
        case 0x1456c0u: goto label_1456c0;
        case 0x1456c4u: goto label_1456c4;
        case 0x1456c8u: goto label_1456c8;
        case 0x1456ccu: goto label_1456cc;
        case 0x1456d0u: goto label_1456d0;
        case 0x1456d4u: goto label_1456d4;
        case 0x1456d8u: goto label_1456d8;
        case 0x1456dcu: goto label_1456dc;
        case 0x1456e0u: goto label_1456e0;
        case 0x1456e4u: goto label_1456e4;
        case 0x1456e8u: goto label_1456e8;
        case 0x1456ecu: goto label_1456ec;
        default: break;
    }

    ctx->pc = 0x145450u;

label_145450:
    // 0x145450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x145450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_145454:
    // 0x145454: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x145454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_145458:
    // 0x145458: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x145458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_14545c:
    // 0x14545c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_145460:
    // 0x145460: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_145464:
    // 0x145464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_145468:
    // 0x145468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14546c:
    // 0x14546c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x14546cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_145470:
    // 0x145470: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_145474:
    // 0x145474: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x145474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145478:
    // 0x145478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14547c:
    // 0x14547c: 0x0  nop
    ctx->pc = 0x14547cu;
    // NOP
label_145480:
    // 0x145480: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x145480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_145484:
    // 0x145484: 0x4501008f  bc1t        . + 4 + (0x8F << 2)
label_145488:
    if (ctx->pc == 0x145488u) {
        ctx->pc = 0x14548Cu;
        goto label_14548c;
    }
    ctx->pc = 0x145484u;
    {
        const bool branch_taken_0x145484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145484) {
            ctx->pc = 0x1456C4u;
            goto label_1456c4;
        }
    }
    ctx->pc = 0x14548Cu;
label_14548c:
    // 0x14548c: 0xc08ef50  jal         func_23BD40
label_145490:
    if (ctx->pc == 0x145490u) {
        ctx->pc = 0x145494u;
        goto label_145494;
    }
    ctx->pc = 0x14548Cu;
    SET_GPR_U32(ctx, 31, 0x145494u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x14548Cu, 0x145494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145494u;
label_145494:
    // 0x145494: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x145494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145498:
    // 0x145498: 0x1014008a  beq         $zero, $s4, . + 4 + (0x8A << 2)
label_14549c:
    if (ctx->pc == 0x14549Cu) {
        ctx->pc = 0x1454A0u;
        goto label_1454a0;
    }
    ctx->pc = 0x145498u;
    {
        const bool branch_taken_0x145498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x145498) {
            ctx->pc = 0x1456C4u;
            goto label_1456c4;
        }
    }
    ctx->pc = 0x1454A0u;
label_1454a0:
    // 0x1454a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1454a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1454a4:
    // 0x1454a4: 0xc0406f0  jal         func_101BC0
label_1454a8:
    if (ctx->pc == 0x1454A8u) {
        ctx->pc = 0x1454ACu;
        goto label_1454ac;
    }
    ctx->pc = 0x1454A4u;
    SET_GPR_U32(ctx, 31, 0x1454ACu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x1454A4u, 0x1454ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454ACu;
label_1454ac:
    // 0x1454ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1454acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1454b0:
    // 0x1454b0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1454b4:
    if (ctx->pc == 0x1454B4u) {
        ctx->pc = 0x1454B8u;
        goto label_1454b8;
    }
    ctx->pc = 0x1454B0u;
    {
        const bool branch_taken_0x1454b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1454b0) {
            ctx->pc = 0x1454C8u;
            goto label_1454c8;
        }
    }
    ctx->pc = 0x1454B8u;
label_1454b8:
    // 0x1454b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1454bc:
    if (ctx->pc == 0x1454BCu) {
        ctx->pc = 0x1454C0u;
        goto label_1454c0;
    }
    ctx->pc = 0x1454B8u;
    {
        const bool branch_taken_0x1454b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1454b8) {
            ctx->pc = 0x1454C8u;
            goto label_1454c8;
        }
    }
    ctx->pc = 0x1454C0u;
label_1454c0:
    // 0x1454c0: 0x10000080  b           . + 4 + (0x80 << 2)
label_1454c4:
    if (ctx->pc == 0x1454C4u) {
        ctx->pc = 0x1454C8u;
        goto label_1454c8;
    }
    ctx->pc = 0x1454C0u;
    {
        const bool branch_taken_0x1454c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1454c0) {
            ctx->pc = 0x1456C4u;
            goto label_1456c4;
        }
    }
    ctx->pc = 0x1454C8u;
label_1454c8:
    // 0x1454c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1454c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1454cc:
    // 0x1454cc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x1454ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1454d0:
    // 0x1454d0: 0xc05167c  jal         func_1459F0
label_1454d4:
    if (ctx->pc == 0x1454D4u) {
        ctx->pc = 0x1454D8u;
        goto label_1454d8;
    }
    ctx->pc = 0x1454D0u;
    SET_GPR_U32(ctx, 31, 0x1454D8u);
    ctx->pc = 0x1459F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1459F0u, 0x1454D0u, 0x1454D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454D8u;
label_1454d8:
    // 0x1454d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1454d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1454dc:
    // 0x1454dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1454e0:
    if (ctx->pc == 0x1454E0u) {
        ctx->pc = 0x1454E4u;
        goto label_1454e4;
    }
    ctx->pc = 0x1454DCu;
    {
        const bool branch_taken_0x1454dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1454dc) {
            ctx->pc = 0x14550Cu;
            goto label_14550c;
        }
    }
    ctx->pc = 0x1454E4u;
label_1454e4:
    // 0x1454e4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1454e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1454e8:
    // 0x1454e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1454e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1454ec:
    // 0x1454ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1454ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1454f0:
    // 0x1454f0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1454f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1454f4:
    // 0x1454f4: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x1454f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1454f8:
    // 0x1454f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1454f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1454fc:
    // 0x1454fc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1454fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_145500:
    // 0x145500: 0x320f809  jalr        $t9
label_145504:
    if (ctx->pc == 0x145504u) {
        ctx->pc = 0x145508u;
        goto label_145508;
    }
    ctx->pc = 0x145500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x145508u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145500u, 0x145508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145508u;
label_145508:
    // 0x145508: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x145508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_14550c:
    // 0x14550c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x14550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_145510:
    // 0x145510: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x145510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_145514:
    // 0x145514: 0xc051674  jal         func_1459D0
label_145518:
    if (ctx->pc == 0x145518u) {
        ctx->pc = 0x14551Cu;
        goto label_14551c;
    }
    ctx->pc = 0x145514u;
    SET_GPR_U32(ctx, 31, 0x14551Cu);
    ctx->pc = 0x1459D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1459D0u, 0x145514u, 0x14551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14551Cu;
label_14551c:
    // 0x14551c: 0x1662fff1  bne         $s3, $v0, . + 4 + (-0xF << 2)
label_145520:
    if (ctx->pc == 0x145520u) {
        ctx->pc = 0x145524u;
        goto label_145524;
    }
    ctx->pc = 0x14551Cu;
    {
        const bool branch_taken_0x14551c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14551c) {
            ctx->pc = 0x1454E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1454e4;
        }
    }
    ctx->pc = 0x145524u;
label_145524:
    // 0x145524: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x145524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_145528:
    // 0x145528: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x145528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_14552c:
    // 0x14552c: 0xc0515bc  jal         func_1456F0
label_145530:
    if (ctx->pc == 0x145530u) {
        ctx->pc = 0x145534u;
        goto label_145534;
    }
    ctx->pc = 0x14552Cu;
    SET_GPR_U32(ctx, 31, 0x145534u);
    ctx->pc = 0x1456F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1456F0u, 0x14552Cu, 0x145534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145534u;
label_145534:
    // 0x145534: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x145534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_145538:
    // 0x145538: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x145538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_14553c:
    // 0x14553c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14553cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_145540:
    // 0x145540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145544:
    // 0x145544: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
label_145548:
    if (ctx->pc == 0x145548u) {
        ctx->pc = 0x14554Cu;
        goto label_14554c;
    }
    ctx->pc = 0x145544u;
    {
        const bool branch_taken_0x145544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x145544) {
            ctx->pc = 0x1456A8u;
            goto label_1456a8;
        }
    }
    ctx->pc = 0x14554Cu;
label_14554c:
    // 0x14554c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_145550:
    // 0x145550: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x145550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145554:
    // 0x145554: 0xc7808ca0  lwc1        $f0, -0x7360($gp)
    ctx->pc = 0x145554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145558:
    // 0x145558: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x145558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14555c:
    // 0x14555c: 0xe7808ca0  swc1        $f0, -0x7360($gp)
    ctx->pc = 0x14555cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), bits); }
label_145560:
    // 0x145560: 0xc7818ca0  lwc1        $f1, -0x7360($gp)
    ctx->pc = 0x145560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145564:
    // 0x145564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_145568:
    // 0x145568: 0x0  nop
    ctx->pc = 0x145568u;
    // NOP
label_14556c:
    // 0x14556c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14556cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_145570:
    // 0x145570: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
label_145574:
    if (ctx->pc == 0x145574u) {
        ctx->pc = 0x145578u;
        goto label_145578;
    }
    ctx->pc = 0x145570u;
    {
        const bool branch_taken_0x145570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145570) {
            ctx->pc = 0x1456A8u;
            goto label_1456a8;
        }
    }
    ctx->pc = 0x145578u;
label_145578:
    // 0x145578: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x145578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_14557c:
    // 0x14557c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14557cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_145580:
    // 0x145580: 0x0  nop
    ctx->pc = 0x145580u;
    // NOP
label_145584:
    // 0x145584: 0xe7808ca0  swc1        $f0, -0x7360($gp)
    ctx->pc = 0x145584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), bits); }
label_145588:
    // 0x145588: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x145588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_14558c:
    // 0x14558c: 0xc047eb8  jal         func_11FAE0
label_145590:
    if (ctx->pc == 0x145590u) {
        ctx->pc = 0x145594u;
        goto label_145594;
    }
    ctx->pc = 0x14558Cu;
    SET_GPR_U32(ctx, 31, 0x145594u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x14558Cu, 0x145594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145594u;
label_145594:
    // 0x145594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145598:
    // 0x145598: 0xc047eb0  jal         func_11FAC0
label_14559c:
    if (ctx->pc == 0x14559Cu) {
        ctx->pc = 0x1455A0u;
        goto label_1455a0;
    }
    ctx->pc = 0x145598u;
    SET_GPR_U32(ctx, 31, 0x1455A0u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x145598u, 0x1455A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455A0u;
label_1455a0:
    // 0x1455a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1455a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1455a4:
    // 0x1455a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1455a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1455a8:
    // 0x1455a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1455a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1455ac:
    // 0x1455ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1455acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1455b0:
    // 0x1455b0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1455b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1455b4:
    // 0x1455b4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1455b8:
    if (ctx->pc == 0x1455B8u) {
        ctx->pc = 0x1455BCu;
        goto label_1455bc;
    }
    ctx->pc = 0x1455B4u;
    {
        const bool branch_taken_0x1455b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1455b4) {
            ctx->pc = 0x1455E4u;
            goto label_1455e4;
        }
    }
    ctx->pc = 0x1455BCu;
label_1455bc:
    // 0x1455bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1455bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1455c0:
    // 0x1455c0: 0xc0ba892  jal         func_2EA248
label_1455c4:
    if (ctx->pc == 0x1455C4u) {
        ctx->pc = 0x1455C8u;
        goto label_1455c8;
    }
    ctx->pc = 0x1455C0u;
    SET_GPR_U32(ctx, 31, 0x1455C8u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x1455C0u, 0x1455C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455C8u;
label_1455c8:
    // 0x1455c8: 0x22823  negu        $a1, $v0
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1455cc:
    // 0x1455cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1455ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1455d0:
    // 0x1455d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1455d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1455d4:
    // 0x1455d4: 0xc08d4a4  jal         func_235290
label_1455d8:
    if (ctx->pc == 0x1455D8u) {
        ctx->pc = 0x1455DCu;
        goto label_1455dc;
    }
    ctx->pc = 0x1455D4u;
    SET_GPR_U32(ctx, 31, 0x1455DCu);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x1455D4u, 0x1455DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455DCu;
label_1455dc:
    // 0x1455dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1455e0:
    // 0x1455e0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1455e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1455e4:
    // 0x1455e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1455e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1455e8:
    // 0x1455e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1455ec:
    // 0x1455ec: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1455f0:
    // 0x1455f0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1455f4:
    if (ctx->pc == 0x1455F4u) {
        ctx->pc = 0x1455F8u;
        goto label_1455f8;
    }
    ctx->pc = 0x1455F0u;
    {
        const bool branch_taken_0x1455f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1455f0) {
            ctx->pc = 0x145638u;
            goto label_145638;
        }
    }
    ctx->pc = 0x1455F8u;
label_1455f8:
    // 0x1455f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1455f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1455fc:
    // 0x1455fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_145600:
    if (ctx->pc == 0x145600u) {
        ctx->pc = 0x145604u;
        goto label_145604;
    }
    ctx->pc = 0x1455FCu;
    {
        const bool branch_taken_0x1455fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1455fc) {
            ctx->pc = 0x145618u;
            goto label_145618;
        }
    }
    ctx->pc = 0x145604u;
label_145604:
    // 0x145604: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x145604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_145608:
    // 0x145608: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x145608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_14560c:
    // 0x14560c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14560cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_145610:
    // 0x145610: 0x10000009  b           . + 4 + (0x9 << 2)
label_145614:
    if (ctx->pc == 0x145614u) {
        ctx->pc = 0x145618u;
        goto label_145618;
    }
    ctx->pc = 0x145610u;
    {
        const bool branch_taken_0x145610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145610) {
            ctx->pc = 0x145638u;
            goto label_145638;
        }
    }
    ctx->pc = 0x145618u;
label_145618:
    // 0x145618: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x145618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14561c:
    // 0x14561c: 0x22823  negu        $a1, $v0
    ctx->pc = 0x14561cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_145620:
    // 0x145620: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x145620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_145624:
    // 0x145624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145628:
    // 0x145628: 0xc08d4a4  jal         func_235290
label_14562c:
    if (ctx->pc == 0x14562Cu) {
        ctx->pc = 0x145630u;
        goto label_145630;
    }
    ctx->pc = 0x145628u;
    SET_GPR_U32(ctx, 31, 0x145630u);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x145628u, 0x145630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145630u;
label_145630:
    // 0x145630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145634:
    // 0x145634: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x145634u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_145638:
    // 0x145638: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x145638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_14563c:
    // 0x14563c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x14563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_145640:
    // 0x145640: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x145640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_145644:
    // 0x145644: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_145648:
    if (ctx->pc == 0x145648u) {
        ctx->pc = 0x14564Cu;
        goto label_14564c;
    }
    ctx->pc = 0x145644u;
    {
        const bool branch_taken_0x145644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x145644) {
            ctx->pc = 0x145654u;
            goto label_145654;
        }
    }
    ctx->pc = 0x14564Cu;
label_14564c:
    // 0x14564c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145650:
    // 0x145650: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x145650u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_145654:
    // 0x145654: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x145654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_145658:
    // 0x145658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14565c:
    // 0x14565c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_145660:
    if (ctx->pc == 0x145660u) {
        ctx->pc = 0x145664u;
        goto label_145664;
    }
    ctx->pc = 0x14565Cu;
    {
        const bool branch_taken_0x14565c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14565c) {
            ctx->pc = 0x1456A8u;
            goto label_1456a8;
        }
    }
    ctx->pc = 0x145664u;
label_145664:
    // 0x145664: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x145664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_145668:
    // 0x145668: 0xc051704  jal         func_145C10
label_14566c:
    if (ctx->pc == 0x14566Cu) {
        ctx->pc = 0x145670u;
        goto label_145670;
    }
    ctx->pc = 0x145668u;
    SET_GPR_U32(ctx, 31, 0x145670u);
    ctx->pc = 0x145C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145C10u, 0x145668u, 0x145670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145670u;
label_145670:
    // 0x145670: 0xc05548c  jal         func_155230
label_145674:
    if (ctx->pc == 0x145674u) {
        ctx->pc = 0x145678u;
        goto label_145678;
    }
    ctx->pc = 0x145670u;
    SET_GPR_U32(ctx, 31, 0x145678u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x145670u, 0x145678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145678u;
label_145678:
    // 0x145678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14567c:
    // 0x14567c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x14567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_145680:
    // 0x145680: 0xc0553d4  jal         func_154F50
label_145684:
    if (ctx->pc == 0x145684u) {
        ctx->pc = 0x145688u;
        goto label_145688;
    }
    ctx->pc = 0x145680u;
    SET_GPR_U32(ctx, 31, 0x145688u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x145680u, 0x145688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145688u;
label_145688:
    // 0x145688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14568c:
    // 0x14568c: 0xc05cf44  jal         func_173D10
label_145690:
    if (ctx->pc == 0x145690u) {
        ctx->pc = 0x145694u;
        goto label_145694;
    }
    ctx->pc = 0x14568Cu;
    SET_GPR_U32(ctx, 31, 0x145694u);
    ctx->pc = 0x173D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D10u, 0x14568Cu, 0x145694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145694u;
label_145694:
    // 0x145694: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x145694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_145698:
    // 0x145698: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x145698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_14569c:
    // 0x14569c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14569cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1456a0:
    // 0x1456a0: 0xc049b80  jal         func_126E00
label_1456a4:
    if (ctx->pc == 0x1456A4u) {
        ctx->pc = 0x1456A8u;
        goto label_1456a8;
    }
    ctx->pc = 0x1456A0u;
    SET_GPR_U32(ctx, 31, 0x1456A8u);
    ctx->pc = 0x126E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E00u, 0x1456A0u, 0x1456A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456A8u;
label_1456a8:
    // 0x1456a8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1456a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1456ac:
    // 0x1456ac: 0xc051684  jal         func_145A10
label_1456b0:
    if (ctx->pc == 0x1456B0u) {
        ctx->pc = 0x1456B4u;
        goto label_1456b4;
    }
    ctx->pc = 0x1456ACu;
    SET_GPR_U32(ctx, 31, 0x1456B4u);
    ctx->pc = 0x145A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145A10u, 0x1456ACu, 0x1456B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456B4u;
label_1456b4:
    // 0x1456b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1456b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1456b8:
    // 0x1456b8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1456b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1456bc:
    // 0x1456bc: 0xc04d968  jal         func_1365A0
label_1456c0:
    if (ctx->pc == 0x1456C0u) {
        ctx->pc = 0x1456C4u;
        goto label_1456c4;
    }
    ctx->pc = 0x1456BCu;
    SET_GPR_U32(ctx, 31, 0x1456C4u);
    ctx->pc = 0x1365A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365A0u, 0x1456BCu, 0x1456C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456C4u;
label_1456c4:
    // 0x1456c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1456c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1456c8:
    // 0x1456c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1456c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1456cc:
    // 0x1456cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1456ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1456d0:
    // 0x1456d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1456d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1456d4:
    // 0x1456d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1456d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1456d8:
    // 0x1456d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1456d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1456dc:
    // 0x1456dc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1456dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1456e0:
    // 0x1456e0: 0x3e00008  jr          $ra
label_1456e4:
    if (ctx->pc == 0x1456E4u) {
        ctx->pc = 0x1456E8u;
        goto label_1456e8;
    }
    ctx->pc = 0x1456E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1456E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1456E8u;
label_1456e8:
    // 0x1456e8: 0x0  nop
    ctx->pc = 0x1456e8u;
    // NOP
label_1456ec:
    // 0x1456ec: 0x0  nop
    ctx->pc = 0x1456ecu;
    // NOP
    ctx->pc = 0x1456f0u;
}
