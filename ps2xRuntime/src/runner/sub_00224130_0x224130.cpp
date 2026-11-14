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

// Function: sub_00224130
// Address: 0x224130 - 0x224590
void sub_00224130_0x224130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224130_0x224130");
#endif

    switch (ctx->pc) {
        case 0x224130u: goto label_224130;
        case 0x224134u: goto label_224134;
        case 0x224138u: goto label_224138;
        case 0x22413cu: goto label_22413c;
        case 0x224140u: goto label_224140;
        case 0x224144u: goto label_224144;
        case 0x224148u: goto label_224148;
        case 0x22414cu: goto label_22414c;
        case 0x224150u: goto label_224150;
        case 0x224154u: goto label_224154;
        case 0x224158u: goto label_224158;
        case 0x22415cu: goto label_22415c;
        case 0x224160u: goto label_224160;
        case 0x224164u: goto label_224164;
        case 0x224168u: goto label_224168;
        case 0x22416cu: goto label_22416c;
        case 0x224170u: goto label_224170;
        case 0x224174u: goto label_224174;
        case 0x224178u: goto label_224178;
        case 0x22417cu: goto label_22417c;
        case 0x224180u: goto label_224180;
        case 0x224184u: goto label_224184;
        case 0x224188u: goto label_224188;
        case 0x22418cu: goto label_22418c;
        case 0x224190u: goto label_224190;
        case 0x224194u: goto label_224194;
        case 0x224198u: goto label_224198;
        case 0x22419cu: goto label_22419c;
        case 0x2241a0u: goto label_2241a0;
        case 0x2241a4u: goto label_2241a4;
        case 0x2241a8u: goto label_2241a8;
        case 0x2241acu: goto label_2241ac;
        case 0x2241b0u: goto label_2241b0;
        case 0x2241b4u: goto label_2241b4;
        case 0x2241b8u: goto label_2241b8;
        case 0x2241bcu: goto label_2241bc;
        case 0x2241c0u: goto label_2241c0;
        case 0x2241c4u: goto label_2241c4;
        case 0x2241c8u: goto label_2241c8;
        case 0x2241ccu: goto label_2241cc;
        case 0x2241d0u: goto label_2241d0;
        case 0x2241d4u: goto label_2241d4;
        case 0x2241d8u: goto label_2241d8;
        case 0x2241dcu: goto label_2241dc;
        case 0x2241e0u: goto label_2241e0;
        case 0x2241e4u: goto label_2241e4;
        case 0x2241e8u: goto label_2241e8;
        case 0x2241ecu: goto label_2241ec;
        case 0x2241f0u: goto label_2241f0;
        case 0x2241f4u: goto label_2241f4;
        case 0x2241f8u: goto label_2241f8;
        case 0x2241fcu: goto label_2241fc;
        case 0x224200u: goto label_224200;
        case 0x224204u: goto label_224204;
        case 0x224208u: goto label_224208;
        case 0x22420cu: goto label_22420c;
        case 0x224210u: goto label_224210;
        case 0x224214u: goto label_224214;
        case 0x224218u: goto label_224218;
        case 0x22421cu: goto label_22421c;
        case 0x224220u: goto label_224220;
        case 0x224224u: goto label_224224;
        case 0x224228u: goto label_224228;
        case 0x22422cu: goto label_22422c;
        case 0x224230u: goto label_224230;
        case 0x224234u: goto label_224234;
        case 0x224238u: goto label_224238;
        case 0x22423cu: goto label_22423c;
        case 0x224240u: goto label_224240;
        case 0x224244u: goto label_224244;
        case 0x224248u: goto label_224248;
        case 0x22424cu: goto label_22424c;
        case 0x224250u: goto label_224250;
        case 0x224254u: goto label_224254;
        case 0x224258u: goto label_224258;
        case 0x22425cu: goto label_22425c;
        case 0x224260u: goto label_224260;
        case 0x224264u: goto label_224264;
        case 0x224268u: goto label_224268;
        case 0x22426cu: goto label_22426c;
        case 0x224270u: goto label_224270;
        case 0x224274u: goto label_224274;
        case 0x224278u: goto label_224278;
        case 0x22427cu: goto label_22427c;
        case 0x224280u: goto label_224280;
        case 0x224284u: goto label_224284;
        case 0x224288u: goto label_224288;
        case 0x22428cu: goto label_22428c;
        case 0x224290u: goto label_224290;
        case 0x224294u: goto label_224294;
        case 0x224298u: goto label_224298;
        case 0x22429cu: goto label_22429c;
        case 0x2242a0u: goto label_2242a0;
        case 0x2242a4u: goto label_2242a4;
        case 0x2242a8u: goto label_2242a8;
        case 0x2242acu: goto label_2242ac;
        case 0x2242b0u: goto label_2242b0;
        case 0x2242b4u: goto label_2242b4;
        case 0x2242b8u: goto label_2242b8;
        case 0x2242bcu: goto label_2242bc;
        case 0x2242c0u: goto label_2242c0;
        case 0x2242c4u: goto label_2242c4;
        case 0x2242c8u: goto label_2242c8;
        case 0x2242ccu: goto label_2242cc;
        case 0x2242d0u: goto label_2242d0;
        case 0x2242d4u: goto label_2242d4;
        case 0x2242d8u: goto label_2242d8;
        case 0x2242dcu: goto label_2242dc;
        case 0x2242e0u: goto label_2242e0;
        case 0x2242e4u: goto label_2242e4;
        case 0x2242e8u: goto label_2242e8;
        case 0x2242ecu: goto label_2242ec;
        case 0x2242f0u: goto label_2242f0;
        case 0x2242f4u: goto label_2242f4;
        case 0x2242f8u: goto label_2242f8;
        case 0x2242fcu: goto label_2242fc;
        case 0x224300u: goto label_224300;
        case 0x224304u: goto label_224304;
        case 0x224308u: goto label_224308;
        case 0x22430cu: goto label_22430c;
        case 0x224310u: goto label_224310;
        case 0x224314u: goto label_224314;
        case 0x224318u: goto label_224318;
        case 0x22431cu: goto label_22431c;
        case 0x224320u: goto label_224320;
        case 0x224324u: goto label_224324;
        case 0x224328u: goto label_224328;
        case 0x22432cu: goto label_22432c;
        case 0x224330u: goto label_224330;
        case 0x224334u: goto label_224334;
        case 0x224338u: goto label_224338;
        case 0x22433cu: goto label_22433c;
        case 0x224340u: goto label_224340;
        case 0x224344u: goto label_224344;
        case 0x224348u: goto label_224348;
        case 0x22434cu: goto label_22434c;
        case 0x224350u: goto label_224350;
        case 0x224354u: goto label_224354;
        case 0x224358u: goto label_224358;
        case 0x22435cu: goto label_22435c;
        case 0x224360u: goto label_224360;
        case 0x224364u: goto label_224364;
        case 0x224368u: goto label_224368;
        case 0x22436cu: goto label_22436c;
        case 0x224370u: goto label_224370;
        case 0x224374u: goto label_224374;
        case 0x224378u: goto label_224378;
        case 0x22437cu: goto label_22437c;
        case 0x224380u: goto label_224380;
        case 0x224384u: goto label_224384;
        case 0x224388u: goto label_224388;
        case 0x22438cu: goto label_22438c;
        case 0x224390u: goto label_224390;
        case 0x224394u: goto label_224394;
        case 0x224398u: goto label_224398;
        case 0x22439cu: goto label_22439c;
        case 0x2243a0u: goto label_2243a0;
        case 0x2243a4u: goto label_2243a4;
        case 0x2243a8u: goto label_2243a8;
        case 0x2243acu: goto label_2243ac;
        case 0x2243b0u: goto label_2243b0;
        case 0x2243b4u: goto label_2243b4;
        case 0x2243b8u: goto label_2243b8;
        case 0x2243bcu: goto label_2243bc;
        case 0x2243c0u: goto label_2243c0;
        case 0x2243c4u: goto label_2243c4;
        case 0x2243c8u: goto label_2243c8;
        case 0x2243ccu: goto label_2243cc;
        case 0x2243d0u: goto label_2243d0;
        case 0x2243d4u: goto label_2243d4;
        case 0x2243d8u: goto label_2243d8;
        case 0x2243dcu: goto label_2243dc;
        case 0x2243e0u: goto label_2243e0;
        case 0x2243e4u: goto label_2243e4;
        case 0x2243e8u: goto label_2243e8;
        case 0x2243ecu: goto label_2243ec;
        case 0x2243f0u: goto label_2243f0;
        case 0x2243f4u: goto label_2243f4;
        case 0x2243f8u: goto label_2243f8;
        case 0x2243fcu: goto label_2243fc;
        case 0x224400u: goto label_224400;
        case 0x224404u: goto label_224404;
        case 0x224408u: goto label_224408;
        case 0x22440cu: goto label_22440c;
        case 0x224410u: goto label_224410;
        case 0x224414u: goto label_224414;
        case 0x224418u: goto label_224418;
        case 0x22441cu: goto label_22441c;
        case 0x224420u: goto label_224420;
        case 0x224424u: goto label_224424;
        case 0x224428u: goto label_224428;
        case 0x22442cu: goto label_22442c;
        case 0x224430u: goto label_224430;
        case 0x224434u: goto label_224434;
        case 0x224438u: goto label_224438;
        case 0x22443cu: goto label_22443c;
        case 0x224440u: goto label_224440;
        case 0x224444u: goto label_224444;
        case 0x224448u: goto label_224448;
        case 0x22444cu: goto label_22444c;
        case 0x224450u: goto label_224450;
        case 0x224454u: goto label_224454;
        case 0x224458u: goto label_224458;
        case 0x22445cu: goto label_22445c;
        case 0x224460u: goto label_224460;
        case 0x224464u: goto label_224464;
        case 0x224468u: goto label_224468;
        case 0x22446cu: goto label_22446c;
        case 0x224470u: goto label_224470;
        case 0x224474u: goto label_224474;
        case 0x224478u: goto label_224478;
        case 0x22447cu: goto label_22447c;
        case 0x224480u: goto label_224480;
        case 0x224484u: goto label_224484;
        case 0x224488u: goto label_224488;
        case 0x22448cu: goto label_22448c;
        case 0x224490u: goto label_224490;
        case 0x224494u: goto label_224494;
        case 0x224498u: goto label_224498;
        case 0x22449cu: goto label_22449c;
        case 0x2244a0u: goto label_2244a0;
        case 0x2244a4u: goto label_2244a4;
        case 0x2244a8u: goto label_2244a8;
        case 0x2244acu: goto label_2244ac;
        case 0x2244b0u: goto label_2244b0;
        case 0x2244b4u: goto label_2244b4;
        case 0x2244b8u: goto label_2244b8;
        case 0x2244bcu: goto label_2244bc;
        case 0x2244c0u: goto label_2244c0;
        case 0x2244c4u: goto label_2244c4;
        case 0x2244c8u: goto label_2244c8;
        case 0x2244ccu: goto label_2244cc;
        case 0x2244d0u: goto label_2244d0;
        case 0x2244d4u: goto label_2244d4;
        case 0x2244d8u: goto label_2244d8;
        case 0x2244dcu: goto label_2244dc;
        case 0x2244e0u: goto label_2244e0;
        case 0x2244e4u: goto label_2244e4;
        case 0x2244e8u: goto label_2244e8;
        case 0x2244ecu: goto label_2244ec;
        case 0x2244f0u: goto label_2244f0;
        case 0x2244f4u: goto label_2244f4;
        case 0x2244f8u: goto label_2244f8;
        case 0x2244fcu: goto label_2244fc;
        case 0x224500u: goto label_224500;
        case 0x224504u: goto label_224504;
        case 0x224508u: goto label_224508;
        case 0x22450cu: goto label_22450c;
        case 0x224510u: goto label_224510;
        case 0x224514u: goto label_224514;
        case 0x224518u: goto label_224518;
        case 0x22451cu: goto label_22451c;
        case 0x224520u: goto label_224520;
        case 0x224524u: goto label_224524;
        case 0x224528u: goto label_224528;
        case 0x22452cu: goto label_22452c;
        case 0x224530u: goto label_224530;
        case 0x224534u: goto label_224534;
        case 0x224538u: goto label_224538;
        case 0x22453cu: goto label_22453c;
        case 0x224540u: goto label_224540;
        case 0x224544u: goto label_224544;
        case 0x224548u: goto label_224548;
        case 0x22454cu: goto label_22454c;
        case 0x224550u: goto label_224550;
        case 0x224554u: goto label_224554;
        case 0x224558u: goto label_224558;
        case 0x22455cu: goto label_22455c;
        case 0x224560u: goto label_224560;
        case 0x224564u: goto label_224564;
        case 0x224568u: goto label_224568;
        case 0x22456cu: goto label_22456c;
        case 0x224570u: goto label_224570;
        case 0x224574u: goto label_224574;
        case 0x224578u: goto label_224578;
        case 0x22457cu: goto label_22457c;
        case 0x224580u: goto label_224580;
        case 0x224584u: goto label_224584;
        case 0x224588u: goto label_224588;
        case 0x22458cu: goto label_22458c;
        default: break;
    }

    ctx->pc = 0x224130u;

label_224130:
    // 0x224130: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x224130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_224134:
    // 0x224134: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x224134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_224138:
    // 0x224138: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x224138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22413c:
    // 0x22413c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_224140:
    // 0x224140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_224144:
    // 0x224144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224148:
    // 0x224148: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x224148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_22414c:
    // 0x22414c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x22414cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_224150:
    // 0x224150: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_224154:
    // 0x224154: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x224154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_224158:
    // 0x224158: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_22415c:
    // 0x22415c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x22415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_224160:
    // 0x224160: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_224164:
    // 0x224164: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x224164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_224168:
    // 0x224168: 0x320f809  jalr        $t9
label_22416c:
    if (ctx->pc == 0x22416Cu) {
        ctx->pc = 0x224170u;
        goto label_224170;
    }
    ctx->pc = 0x224168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224170u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224168u, 0x224170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224170u;
label_224170:
    // 0x224170: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x224170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224174:
    // 0x224174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224178:
    // 0x224178: 0xc08ec98  jal         func_23B260
label_22417c:
    if (ctx->pc == 0x22417Cu) {
        ctx->pc = 0x224180u;
        goto label_224180;
    }
    ctx->pc = 0x224178u;
    SET_GPR_U32(ctx, 31, 0x224180u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x224178u, 0x224180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224180u;
label_224180:
    // 0x224180: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x224180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_224184:
    // 0x224184: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x224184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_224188:
    // 0x224188: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x224188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_22418c:
    // 0x22418c: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x22418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_224190:
    // 0x224190: 0xc0422a8  jal         func_108AA0
label_224194:
    if (ctx->pc == 0x224194u) {
        ctx->pc = 0x224198u;
        goto label_224198;
    }
    ctx->pc = 0x224190u;
    SET_GPR_U32(ctx, 31, 0x224198u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x224190u, 0x224198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224198u;
label_224198:
    // 0x224198: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_22419c:
    // 0x22419c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22419cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2241a0:
    // 0x2241a0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2241a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2241a4:
    // 0x2241a4: 0x320f809  jalr        $t9
label_2241a8:
    if (ctx->pc == 0x2241A8u) {
        ctx->pc = 0x2241ACu;
        goto label_2241ac;
    }
    ctx->pc = 0x2241A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2241ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2241A4u, 0x2241ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2241ACu;
label_2241ac:
    // 0x2241ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2241acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2241b0:
    // 0x2241b0: 0x1443008e  bne         $v0, $v1, . + 4 + (0x8E << 2)
label_2241b4:
    if (ctx->pc == 0x2241B4u) {
        ctx->pc = 0x2241B8u;
        goto label_2241b8;
    }
    ctx->pc = 0x2241B0u;
    {
        const bool branch_taken_0x2241b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2241b0) {
            ctx->pc = 0x2243ECu;
            goto label_2243ec;
        }
    }
    ctx->pc = 0x2241B8u;
label_2241b8:
    // 0x2241b8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2241b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2241bc:
    // 0x2241bc: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x2241bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_2241c0:
    // 0x2241c0: 0xc0422a8  jal         func_108AA0
label_2241c4:
    if (ctx->pc == 0x2241C4u) {
        ctx->pc = 0x2241C8u;
        goto label_2241c8;
    }
    ctx->pc = 0x2241C0u;
    SET_GPR_U32(ctx, 31, 0x2241C8u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2241C0u, 0x2241C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241C8u;
label_2241c8:
    // 0x2241c8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2241c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2241cc:
    // 0x2241cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2241ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2241d0:
    // 0x2241d0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2241d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2241d4:
    // 0x2241d4: 0x320f809  jalr        $t9
label_2241d8:
    if (ctx->pc == 0x2241D8u) {
        ctx->pc = 0x2241DCu;
        goto label_2241dc;
    }
    ctx->pc = 0x2241D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2241DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2241D4u, 0x2241DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2241DCu;
label_2241dc:
    // 0x2241dc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2241dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2241e0:
    // 0x2241e0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2241e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2241e4:
    // 0x2241e4: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
label_2241e8:
    if (ctx->pc == 0x2241E8u) {
        ctx->pc = 0x2241ECu;
        goto label_2241ec;
    }
    ctx->pc = 0x2241E4u;
    {
        const bool branch_taken_0x2241e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2241e4) {
            ctx->pc = 0x2243D0u;
            goto label_2243d0;
        }
    }
    ctx->pc = 0x2241ECu;
label_2241ec:
    // 0x2241ec: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2241ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_2241f0:
    // 0x2241f0: 0xc041b48  jal         func_106D20
label_2241f4:
    if (ctx->pc == 0x2241F4u) {
        ctx->pc = 0x2241F8u;
        goto label_2241f8;
    }
    ctx->pc = 0x2241F0u;
    SET_GPR_U32(ctx, 31, 0x2241F8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2241F0u, 0x2241F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241F8u;
label_2241f8:
    // 0x2241f8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2241f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_2241fc:
    // 0x2241fc: 0xc041b48  jal         func_106D20
label_224200:
    if (ctx->pc == 0x224200u) {
        ctx->pc = 0x224204u;
        goto label_224204;
    }
    ctx->pc = 0x2241FCu;
    SET_GPR_U32(ctx, 31, 0x224204u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2241FCu, 0x224204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224204u;
label_224204:
    // 0x224204: 0x1000002b  b           . + 4 + (0x2B << 2)
label_224208:
    if (ctx->pc == 0x224208u) {
        ctx->pc = 0x22420Cu;
        goto label_22420c;
    }
    ctx->pc = 0x224204u;
    {
        const bool branch_taken_0x224204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224204) {
            ctx->pc = 0x2242B4u;
            goto label_2242b4;
        }
    }
    ctx->pc = 0x22420Cu;
label_22420c:
    // 0x22420c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x22420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_224210:
    // 0x224210: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x224210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224214:
    // 0x224214: 0xc045a48  jal         func_116920
label_224218:
    if (ctx->pc == 0x224218u) {
        ctx->pc = 0x22421Cu;
        goto label_22421c;
    }
    ctx->pc = 0x224214u;
    SET_GPR_U32(ctx, 31, 0x22421Cu);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x224214u, 0x22421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22421Cu;
label_22421c:
    // 0x22421c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x22421cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_224220:
    // 0x224220: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x224220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224224:
    // 0x224224: 0xc045a48  jal         func_116920
label_224228:
    if (ctx->pc == 0x224228u) {
        ctx->pc = 0x22422Cu;
        goto label_22422c;
    }
    ctx->pc = 0x224224u;
    SET_GPR_U32(ctx, 31, 0x22422Cu);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x224224u, 0x22422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22422Cu;
label_22422c:
    // 0x22422c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224230:
    // 0x224230: 0xc119b68  jal         func_466DA0
label_224234:
    if (ctx->pc == 0x224234u) {
        ctx->pc = 0x224238u;
        goto label_224238;
    }
    ctx->pc = 0x224230u;
    SET_GPR_U32(ctx, 31, 0x224238u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x224230u, 0x224238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224238u;
label_224238:
    // 0x224238: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x224238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22423c:
    // 0x22423c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22423cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224240:
    // 0x224240: 0xc0400e0  jal         func_100380
label_224244:
    if (ctx->pc == 0x224244u) {
        ctx->pc = 0x224248u;
        goto label_224248;
    }
    ctx->pc = 0x224240u;
    SET_GPR_U32(ctx, 31, 0x224248u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x224240u, 0x224248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224248u;
label_224248:
    // 0x224248: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x224248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22424c:
    // 0x22424c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_224250:
    if (ctx->pc == 0x224250u) {
        ctx->pc = 0x224254u;
        goto label_224254;
    }
    ctx->pc = 0x22424Cu;
    {
        const bool branch_taken_0x22424c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22424c) {
            ctx->pc = 0x224264u;
            goto label_224264;
        }
    }
    ctx->pc = 0x224254u;
label_224254:
    // 0x224254: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224258:
    // 0x224258: 0xc088ecc  jal         func_223B30
label_22425c:
    if (ctx->pc == 0x22425Cu) {
        ctx->pc = 0x224260u;
        goto label_224260;
    }
    ctx->pc = 0x224258u;
    SET_GPR_U32(ctx, 31, 0x224260u);
    ctx->pc = 0x223B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B30u, 0x224258u, 0x224260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224260u;
label_224260:
    // 0x224260: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x224260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224264:
    // 0x224264: 0xafb200a0  sw          $s2, 0xA0($sp)
    ctx->pc = 0x224264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 18));
label_224268:
    // 0x224268: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x224268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_22426c:
    // 0x22426c: 0xc041b38  jal         func_106CE0
label_224270:
    if (ctx->pc == 0x224270u) {
        ctx->pc = 0x224274u;
        goto label_224274;
    }
    ctx->pc = 0x22426Cu;
    SET_GPR_U32(ctx, 31, 0x224274u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x22426Cu, 0x224274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224274u;
label_224274:
    // 0x224274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x224274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224278:
    // 0x224278: 0xc086230  jal         func_2188C0
label_22427c:
    if (ctx->pc == 0x22427Cu) {
        ctx->pc = 0x224280u;
        goto label_224280;
    }
    ctx->pc = 0x224278u;
    SET_GPR_U32(ctx, 31, 0x224280u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x224278u, 0x224280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224280u;
label_224280:
    // 0x224280: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x224280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224284:
    // 0x224284: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x224284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_224288:
    // 0x224288: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x224288u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_22428c:
    // 0x22428c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x22428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_224290:
    // 0x224290: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224294:
    // 0x224294: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x224294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_224298:
    // 0x224298: 0xc0430e4  jal         func_10C390
label_22429c:
    if (ctx->pc == 0x22429Cu) {
        ctx->pc = 0x2242A0u;
        goto label_2242a0;
    }
    ctx->pc = 0x224298u;
    SET_GPR_U32(ctx, 31, 0x2242A0u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x224298u, 0x2242A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242A0u;
label_2242a0:
    // 0x2242a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2242a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2242a4:
    // 0x2242a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2242a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2242a8:
    // 0x2242a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2242a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2242ac:
    // 0x2242ac: 0xc088c8c  jal         func_223230
label_2242b0:
    if (ctx->pc == 0x2242B0u) {
        ctx->pc = 0x2242B4u;
        goto label_2242b4;
    }
    ctx->pc = 0x2242ACu;
    SET_GPR_U32(ctx, 31, 0x2242B4u);
    ctx->pc = 0x223230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223230u, 0x2242ACu, 0x2242B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242B4u;
label_2242b4:
    // 0x2242b4: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2242b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2242b8:
    // 0x2242b8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2242b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2242bc:
    // 0x2242bc: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x2242bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_2242c0:
    // 0x2242c0: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_2242c4:
    if (ctx->pc == 0x2242C4u) {
        ctx->pc = 0x2242C8u;
        goto label_2242c8;
    }
    ctx->pc = 0x2242C0u;
    {
        const bool branch_taken_0x2242c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2242c0) {
            ctx->pc = 0x22420Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22420c;
        }
    }
    ctx->pc = 0x2242C8u;
label_2242c8:
    // 0x2242c8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2242c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_2242cc:
    // 0x2242cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2242ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2242d0:
    // 0x2242d0: 0xc0402d4  jal         func_100B50
label_2242d4:
    if (ctx->pc == 0x2242D4u) {
        ctx->pc = 0x2242D8u;
        goto label_2242d8;
    }
    ctx->pc = 0x2242D0u;
    SET_GPR_U32(ctx, 31, 0x2242D8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2242D0u, 0x2242D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242D8u;
label_2242d8:
    // 0x2242d8: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2242d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_2242dc:
    // 0x2242dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2242dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2242e0:
    // 0x2242e0: 0xc0402d4  jal         func_100B50
label_2242e4:
    if (ctx->pc == 0x2242E4u) {
        ctx->pc = 0x2242E8u;
        goto label_2242e8;
    }
    ctx->pc = 0x2242E0u;
    SET_GPR_U32(ctx, 31, 0x2242E8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2242E0u, 0x2242E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242E8u;
label_2242e8:
    // 0x2242e8: 0x10000095  b           . + 4 + (0x95 << 2)
label_2242ec:
    if (ctx->pc == 0x2242ECu) {
        ctx->pc = 0x2242F0u;
        goto label_2242f0;
    }
    ctx->pc = 0x2242E8u;
    {
        const bool branch_taken_0x2242e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2242e8) {
            ctx->pc = 0x224540u;
            goto label_224540;
        }
    }
    ctx->pc = 0x2242F0u;
label_2242f0:
    // 0x2242f0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2242f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2242f4:
    // 0x2242f4: 0xc119b68  jal         func_466DA0
label_2242f8:
    if (ctx->pc == 0x2242F8u) {
        ctx->pc = 0x2242FCu;
        goto label_2242fc;
    }
    ctx->pc = 0x2242F4u;
    SET_GPR_U32(ctx, 31, 0x2242FCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2242F4u, 0x2242FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242FCu;
label_2242fc:
    // 0x2242fc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2242fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224300:
    // 0x224300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x224300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224304:
    // 0x224304: 0xc0400e0  jal         func_100380
label_224308:
    if (ctx->pc == 0x224308u) {
        ctx->pc = 0x22430Cu;
        goto label_22430c;
    }
    ctx->pc = 0x224304u;
    SET_GPR_U32(ctx, 31, 0x22430Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x224304u, 0x22430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22430Cu;
label_22430c:
    // 0x22430c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22430cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224310:
    // 0x224310: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_224314:
    if (ctx->pc == 0x224314u) {
        ctx->pc = 0x224318u;
        goto label_224318;
    }
    ctx->pc = 0x224310u;
    {
        const bool branch_taken_0x224310 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x224310) {
            ctx->pc = 0x224328u;
            goto label_224328;
        }
    }
    ctx->pc = 0x224318u;
label_224318:
    // 0x224318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22431c:
    // 0x22431c: 0xc088ecc  jal         func_223B30
label_224320:
    if (ctx->pc == 0x224320u) {
        ctx->pc = 0x224324u;
        goto label_224324;
    }
    ctx->pc = 0x22431Cu;
    SET_GPR_U32(ctx, 31, 0x224324u);
    ctx->pc = 0x223B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B30u, 0x22431Cu, 0x224324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224324u;
label_224324:
    // 0x224324: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224328:
    // 0x224328: 0xafb1009c  sw          $s1, 0x9C($sp)
    ctx->pc = 0x224328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 17));
label_22432c:
    // 0x22432c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x22432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224330:
    // 0x224330: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x224330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_224334:
    // 0x224334: 0xc089164  jal         func_224590
label_224338:
    if (ctx->pc == 0x224338u) {
        ctx->pc = 0x22433Cu;
        goto label_22433c;
    }
    ctx->pc = 0x224334u;
    SET_GPR_U32(ctx, 31, 0x22433Cu);
    ctx->pc = 0x224590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224590u, 0x224334u, 0x22433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22433Cu;
label_22433c:
    // 0x22433c: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x22433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_224340:
    // 0x224340: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224344:
    // 0x224344: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x224344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224348:
    // 0x224348: 0xc045a48  jal         func_116920
label_22434c:
    if (ctx->pc == 0x22434Cu) {
        ctx->pc = 0x224350u;
        goto label_224350;
    }
    ctx->pc = 0x224348u;
    SET_GPR_U32(ctx, 31, 0x224350u);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x224348u, 0x224350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224350u;
label_224350:
    // 0x224350: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x224350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_224354:
    // 0x224354: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_224358:
    // 0x224358: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x224358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_22435c:
    // 0x22435c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x22435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_224360:
    // 0x224360: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x224360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_224364:
    // 0x224364: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_224368:
    if (ctx->pc == 0x224368u) {
        ctx->pc = 0x22436Cu;
        goto label_22436c;
    }
    ctx->pc = 0x224364u;
    {
        const bool branch_taken_0x224364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224364) {
            ctx->pc = 0x2243BCu;
            goto label_2243bc;
        }
    }
    ctx->pc = 0x22436Cu;
label_22436c:
    // 0x22436c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x22436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_224370:
    // 0x224370: 0xc041b48  jal         func_106D20
label_224374:
    if (ctx->pc == 0x224374u) {
        ctx->pc = 0x224378u;
        goto label_224378;
    }
    ctx->pc = 0x224370u;
    SET_GPR_U32(ctx, 31, 0x224378u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x224370u, 0x224378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224378u;
label_224378:
    // 0x224378: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x224378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_22437c:
    // 0x22437c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22437cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224380:
    // 0x224380: 0xc045a48  jal         func_116920
label_224384:
    if (ctx->pc == 0x224384u) {
        ctx->pc = 0x224388u;
        goto label_224388;
    }
    ctx->pc = 0x224380u;
    SET_GPR_U32(ctx, 31, 0x224388u);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x224380u, 0x224388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224388u;
label_224388:
    // 0x224388: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x224388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_22438c:
    // 0x22438c: 0xc041b38  jal         func_106CE0
label_224390:
    if (ctx->pc == 0x224390u) {
        ctx->pc = 0x224394u;
        goto label_224394;
    }
    ctx->pc = 0x22438Cu;
    SET_GPR_U32(ctx, 31, 0x224394u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x22438Cu, 0x224394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224394u;
label_224394:
    // 0x224394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x224394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224398:
    // 0x224398: 0xc086230  jal         func_2188C0
label_22439c:
    if (ctx->pc == 0x22439Cu) {
        ctx->pc = 0x2243A0u;
        goto label_2243a0;
    }
    ctx->pc = 0x224398u;
    SET_GPR_U32(ctx, 31, 0x2243A0u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x224398u, 0x2243A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243A0u;
label_2243a0:
    // 0x2243a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2243a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2243a4:
    // 0x2243a4: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2243a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2243a8:
    // 0x2243a8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2243a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_2243ac:
    // 0x2243ac: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2243acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_2243b0:
    // 0x2243b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2243b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2243b4:
    // 0x2243b4: 0xc0402d4  jal         func_100B50
label_2243b8:
    if (ctx->pc == 0x2243B8u) {
        ctx->pc = 0x2243BCu;
        goto label_2243bc;
    }
    ctx->pc = 0x2243B4u;
    SET_GPR_U32(ctx, 31, 0x2243BCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2243B4u, 0x2243BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243BCu;
label_2243bc:
    // 0x2243bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2243bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2243c0:
    // 0x2243c0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2243c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2243c4:
    // 0x2243c4: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x2243c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2243c8:
    // 0x2243c8: 0xc088c8c  jal         func_223230
label_2243cc:
    if (ctx->pc == 0x2243CCu) {
        ctx->pc = 0x2243D0u;
        goto label_2243d0;
    }
    ctx->pc = 0x2243C8u;
    SET_GPR_U32(ctx, 31, 0x2243D0u);
    ctx->pc = 0x223230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223230u, 0x2243C8u, 0x2243D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243D0u;
label_2243d0:
    // 0x2243d0: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2243d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2243d4:
    // 0x2243d4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2243d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2243d8:
    // 0x2243d8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x2243d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_2243dc:
    // 0x2243dc: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_2243e0:
    if (ctx->pc == 0x2243E0u) {
        ctx->pc = 0x2243E4u;
        goto label_2243e4;
    }
    ctx->pc = 0x2243DCu;
    {
        const bool branch_taken_0x2243dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2243dc) {
            ctx->pc = 0x2242F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2242f0;
        }
    }
    ctx->pc = 0x2243E4u;
label_2243e4:
    // 0x2243e4: 0x10000056  b           . + 4 + (0x56 << 2)
label_2243e8:
    if (ctx->pc == 0x2243E8u) {
        ctx->pc = 0x2243ECu;
        goto label_2243ec;
    }
    ctx->pc = 0x2243E4u;
    {
        const bool branch_taken_0x2243e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2243e4) {
            ctx->pc = 0x224540u;
            goto label_224540;
        }
    }
    ctx->pc = 0x2243ECu;
label_2243ec:
    // 0x2243ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2243ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2243f0:
    // 0x2243f0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2243f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2243f4:
    // 0x2243f4: 0xc088d44  jal         func_223510
label_2243f8:
    if (ctx->pc == 0x2243F8u) {
        ctx->pc = 0x2243FCu;
        goto label_2243fc;
    }
    ctx->pc = 0x2243F4u;
    SET_GPR_U32(ctx, 31, 0x2243FCu);
    ctx->pc = 0x223510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223510u, 0x2243F4u, 0x2243FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243FCu;
label_2243fc:
    // 0x2243fc: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2243fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_224400:
    // 0x224400: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x224400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224404:
    // 0x224404: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x224404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_224408:
    // 0x224408: 0xc0422a8  jal         func_108AA0
label_22440c:
    if (ctx->pc == 0x22440Cu) {
        ctx->pc = 0x224410u;
        goto label_224410;
    }
    ctx->pc = 0x224408u;
    SET_GPR_U32(ctx, 31, 0x224410u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x224408u, 0x224410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224410u;
label_224410:
    // 0x224410: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x224410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_224414:
    // 0x224414: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224418:
    // 0x224418: 0xc088708  jal         func_221C20
label_22441c:
    if (ctx->pc == 0x22441Cu) {
        ctx->pc = 0x224420u;
        goto label_224420;
    }
    ctx->pc = 0x224418u;
    SET_GPR_U32(ctx, 31, 0x224420u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224418u, 0x224420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224420u;
label_224420:
    // 0x224420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224424:
    // 0x224424: 0x10000040  b           . + 4 + (0x40 << 2)
label_224428:
    if (ctx->pc == 0x224428u) {
        ctx->pc = 0x22442Cu;
        goto label_22442c;
    }
    ctx->pc = 0x224424u;
    {
        const bool branch_taken_0x224424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224424) {
            ctx->pc = 0x224528u;
            goto label_224528;
        }
    }
    ctx->pc = 0x22442Cu;
label_22442c:
    // 0x22442c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x22442cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224430:
    // 0x224430: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x224430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224434:
    // 0x224434: 0xc089164  jal         func_224590
label_224438:
    if (ctx->pc == 0x224438u) {
        ctx->pc = 0x22443Cu;
        goto label_22443c;
    }
    ctx->pc = 0x224434u;
    SET_GPR_U32(ctx, 31, 0x22443Cu);
    ctx->pc = 0x224590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224590u, 0x224434u, 0x22443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22443Cu;
label_22443c:
    // 0x22443c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224440:
    // 0x224440: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224444:
    // 0x224444: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x224444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224448:
    // 0x224448: 0xc045a48  jal         func_116920
label_22444c:
    if (ctx->pc == 0x22444Cu) {
        ctx->pc = 0x224450u;
        goto label_224450;
    }
    ctx->pc = 0x224448u;
    SET_GPR_U32(ctx, 31, 0x224450u);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x224448u, 0x224450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224450u;
label_224450:
    // 0x224450: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224454:
    // 0x224454: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_224458:
    // 0x224458: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x224458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_22445c:
    // 0x22445c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x22445cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_224460:
    // 0x224460: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x224460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_224464:
    // 0x224464: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_224468:
    if (ctx->pc == 0x224468u) {
        ctx->pc = 0x22446Cu;
        goto label_22446c;
    }
    ctx->pc = 0x224464u;
    {
        const bool branch_taken_0x224464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224464) {
            ctx->pc = 0x224524u;
            goto label_224524;
        }
    }
    ctx->pc = 0x22446Cu;
label_22446c:
    // 0x22446c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x22446cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_224470:
    // 0x224470: 0x8f85bb78  lw          $a1, -0x4488($gp)
    ctx->pc = 0x224470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949752)));
label_224474:
    // 0x224474: 0xc086208  jal         func_218820
label_224478:
    if (ctx->pc == 0x224478u) {
        ctx->pc = 0x22447Cu;
        goto label_22447c;
    }
    ctx->pc = 0x224474u;
    SET_GPR_U32(ctx, 31, 0x22447Cu);
    ctx->pc = 0x218820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218820u, 0x224474u, 0x22447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22447Cu;
label_22447c:
    // 0x22447c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_224480:
    if (ctx->pc == 0x224480u) {
        ctx->pc = 0x224484u;
        goto label_224484;
    }
    ctx->pc = 0x22447Cu;
    {
        const bool branch_taken_0x22447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22447c) {
            ctx->pc = 0x2244FCu;
            goto label_2244fc;
        }
    }
    ctx->pc = 0x224484u;
label_224484:
    // 0x224484: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224488:
    // 0x224488: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22448c:
    // 0x22448c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x22448cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224490:
    // 0x224490: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x224490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_224494:
    // 0x224494: 0xc0861f4  jal         func_2187D0
label_224498:
    if (ctx->pc == 0x224498u) {
        ctx->pc = 0x22449Cu;
        goto label_22449c;
    }
    ctx->pc = 0x224494u;
    SET_GPR_U32(ctx, 31, 0x22449Cu);
    ctx->pc = 0x2187D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2187D0u, 0x224494u, 0x22449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22449Cu;
label_22449c:
    // 0x22449c: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x22449cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_2244a0:
    // 0x2244a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2244a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2244a4:
    // 0x2244a4: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
label_2244a8:
    if (ctx->pc == 0x2244A8u) {
        ctx->pc = 0x2244ACu;
        goto label_2244ac;
    }
    ctx->pc = 0x2244A4u;
    {
        const bool branch_taken_0x2244a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2244a4) {
            ctx->pc = 0x2244F0u;
            goto label_2244f0;
        }
    }
    ctx->pc = 0x2244ACu;
label_2244ac:
    // 0x2244ac: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2244acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2244b0:
    // 0x2244b0: 0xc0861f4  jal         func_2187D0
label_2244b4:
    if (ctx->pc == 0x2244B4u) {
        ctx->pc = 0x2244B8u;
        goto label_2244b8;
    }
    ctx->pc = 0x2244B0u;
    SET_GPR_U32(ctx, 31, 0x2244B8u);
    ctx->pc = 0x2187D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2187D0u, 0x2244B0u, 0x2244B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244B8u;
label_2244b8:
    // 0x2244b8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2244b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_2244bc:
    // 0x2244bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2244bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2244c0:
    // 0x2244c0: 0xc042844  jal         func_10A110
label_2244c4:
    if (ctx->pc == 0x2244C4u) {
        ctx->pc = 0x2244C8u;
        goto label_2244c8;
    }
    ctx->pc = 0x2244C0u;
    SET_GPR_U32(ctx, 31, 0x2244C8u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x2244C0u, 0x2244C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244C8u;
label_2244c8:
    // 0x2244c8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_2244cc:
    // 0x2244cc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2244ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2244d0:
    // 0x2244d0: 0xc045a48  jal         func_116920
label_2244d4:
    if (ctx->pc == 0x2244D4u) {
        ctx->pc = 0x2244D8u;
        goto label_2244d8;
    }
    ctx->pc = 0x2244D0u;
    SET_GPR_U32(ctx, 31, 0x2244D8u);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x2244D0u, 0x2244D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244D8u;
label_2244d8:
    // 0x2244d8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2244d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_2244dc:
    // 0x2244dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2244dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2244e0:
    // 0x2244e0: 0xc0402d4  jal         func_100B50
label_2244e4:
    if (ctx->pc == 0x2244E4u) {
        ctx->pc = 0x2244E8u;
        goto label_2244e8;
    }
    ctx->pc = 0x2244E0u;
    SET_GPR_U32(ctx, 31, 0x2244E8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2244E0u, 0x2244E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244E8u;
label_2244e8:
    // 0x2244e8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2244ec:
    if (ctx->pc == 0x2244ECu) {
        ctx->pc = 0x2244F0u;
        goto label_2244f0;
    }
    ctx->pc = 0x2244E8u;
    {
        const bool branch_taken_0x2244e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2244e8) {
            ctx->pc = 0x224524u;
            goto label_224524;
        }
    }
    ctx->pc = 0x2244F0u;
label_2244f0:
    // 0x2244f0: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2244f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2244f4:
    // 0x2244f4: 0xc0861e4  jal         func_218790
label_2244f8:
    if (ctx->pc == 0x2244F8u) {
        ctx->pc = 0x2244FCu;
        goto label_2244fc;
    }
    ctx->pc = 0x2244F4u;
    SET_GPR_U32(ctx, 31, 0x2244FCu);
    ctx->pc = 0x218790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218790u, 0x2244F4u, 0x2244FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244FCu;
label_2244fc:
    // 0x2244fc: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x2244fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_224500:
    // 0x224500: 0x8f85bb78  lw          $a1, -0x4488($gp)
    ctx->pc = 0x224500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949752)));
label_224504:
    // 0x224504: 0xc0861b8  jal         func_2186E0
label_224508:
    if (ctx->pc == 0x224508u) {
        ctx->pc = 0x22450Cu;
        goto label_22450c;
    }
    ctx->pc = 0x224504u;
    SET_GPR_U32(ctx, 31, 0x22450Cu);
    ctx->pc = 0x2186E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2186E0u, 0x224504u, 0x22450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22450Cu;
label_22450c:
    // 0x22450c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x22450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_224510:
    // 0x224510: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x224510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_224514:
    // 0x224514: 0xc041998  jal         func_106660
label_224518:
    if (ctx->pc == 0x224518u) {
        ctx->pc = 0x22451Cu;
        goto label_22451c;
    }
    ctx->pc = 0x224514u;
    SET_GPR_U32(ctx, 31, 0x22451Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x224514u, 0x22451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22451Cu;
label_22451c:
    // 0x22451c: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_224520:
    if (ctx->pc == 0x224520u) {
        ctx->pc = 0x224524u;
        goto label_224524;
    }
    ctx->pc = 0x22451Cu;
    {
        const bool branch_taken_0x22451c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22451c) {
            ctx->pc = 0x224484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224484;
        }
    }
    ctx->pc = 0x224524u;
label_224524:
    // 0x224524: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x224524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_224528:
    // 0x224528: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x224528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_22452c:
    // 0x22452c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x22452cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224530:
    // 0x224530: 0xc088700  jal         func_221C00
label_224534:
    if (ctx->pc == 0x224534u) {
        ctx->pc = 0x224538u;
        goto label_224538;
    }
    ctx->pc = 0x224530u;
    SET_GPR_U32(ctx, 31, 0x224538u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x224530u, 0x224538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224538u;
label_224538:
    // 0x224538: 0x1602ffbc  bne         $s0, $v0, . + 4 + (-0x44 << 2)
label_22453c:
    if (ctx->pc == 0x22453Cu) {
        ctx->pc = 0x224540u;
        goto label_224540;
    }
    ctx->pc = 0x224538u;
    {
        const bool branch_taken_0x224538 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x224538) {
            ctx->pc = 0x22442Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22442c;
        }
    }
    ctx->pc = 0x224540u;
label_224540:
    // 0x224540: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x224540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_224544:
    // 0x224544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x224544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224548:
    // 0x224548: 0xc08ec98  jal         func_23B260
label_22454c:
    if (ctx->pc == 0x22454Cu) {
        ctx->pc = 0x224550u;
        goto label_224550;
    }
    ctx->pc = 0x224548u;
    SET_GPR_U32(ctx, 31, 0x224550u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x224548u, 0x224550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224550u;
label_224550:
    // 0x224550: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x224550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_224554:
    // 0x224554: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x224554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_224558:
    // 0x224558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x224558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22455c:
    // 0x22455c: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x22455cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_224560:
    // 0x224560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224564:
    // 0x224564: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x224564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_224568:
    // 0x224568: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x224568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22456c:
    // 0x22456c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22456cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224570:
    // 0x224570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224574:
    // 0x224574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224578:
    // 0x224578: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x224578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_22457c:
    // 0x22457c: 0x3e00008  jr          $ra
label_224580:
    if (ctx->pc == 0x224580u) {
        ctx->pc = 0x224584u;
        goto label_224584;
    }
    ctx->pc = 0x22457Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22457Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224584u;
label_224584:
    // 0x224584: 0x0  nop
    ctx->pc = 0x224584u;
    // NOP
label_224588:
    // 0x224588: 0x0  nop
    ctx->pc = 0x224588u;
    // NOP
label_22458c:
    // 0x22458c: 0x0  nop
    ctx->pc = 0x22458cu;
    // NOP
    ctx->pc = 0x224590u;
}
