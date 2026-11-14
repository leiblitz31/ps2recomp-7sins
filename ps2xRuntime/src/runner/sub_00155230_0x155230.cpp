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

// Function: sub_00155230
// Address: 0x155230 - 0x155670
void sub_00155230_0x155230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155230_0x155230");
#endif

    switch (ctx->pc) {
        case 0x155230u: goto label_155230;
        case 0x155234u: goto label_155234;
        case 0x155238u: goto label_155238;
        case 0x15523cu: goto label_15523c;
        case 0x155240u: goto label_155240;
        case 0x155244u: goto label_155244;
        case 0x155248u: goto label_155248;
        case 0x15524cu: goto label_15524c;
        case 0x155250u: goto label_155250;
        case 0x155254u: goto label_155254;
        case 0x155258u: goto label_155258;
        case 0x15525cu: goto label_15525c;
        case 0x155260u: goto label_155260;
        case 0x155264u: goto label_155264;
        case 0x155268u: goto label_155268;
        case 0x15526cu: goto label_15526c;
        case 0x155270u: goto label_155270;
        case 0x155274u: goto label_155274;
        case 0x155278u: goto label_155278;
        case 0x15527cu: goto label_15527c;
        case 0x155280u: goto label_155280;
        case 0x155284u: goto label_155284;
        case 0x155288u: goto label_155288;
        case 0x15528cu: goto label_15528c;
        case 0x155290u: goto label_155290;
        case 0x155294u: goto label_155294;
        case 0x155298u: goto label_155298;
        case 0x15529cu: goto label_15529c;
        case 0x1552a0u: goto label_1552a0;
        case 0x1552a4u: goto label_1552a4;
        case 0x1552a8u: goto label_1552a8;
        case 0x1552acu: goto label_1552ac;
        case 0x1552b0u: goto label_1552b0;
        case 0x1552b4u: goto label_1552b4;
        case 0x1552b8u: goto label_1552b8;
        case 0x1552bcu: goto label_1552bc;
        case 0x1552c0u: goto label_1552c0;
        case 0x1552c4u: goto label_1552c4;
        case 0x1552c8u: goto label_1552c8;
        case 0x1552ccu: goto label_1552cc;
        case 0x1552d0u: goto label_1552d0;
        case 0x1552d4u: goto label_1552d4;
        case 0x1552d8u: goto label_1552d8;
        case 0x1552dcu: goto label_1552dc;
        case 0x1552e0u: goto label_1552e0;
        case 0x1552e4u: goto label_1552e4;
        case 0x1552e8u: goto label_1552e8;
        case 0x1552ecu: goto label_1552ec;
        case 0x1552f0u: goto label_1552f0;
        case 0x1552f4u: goto label_1552f4;
        case 0x1552f8u: goto label_1552f8;
        case 0x1552fcu: goto label_1552fc;
        case 0x155300u: goto label_155300;
        case 0x155304u: goto label_155304;
        case 0x155308u: goto label_155308;
        case 0x15530cu: goto label_15530c;
        case 0x155310u: goto label_155310;
        case 0x155314u: goto label_155314;
        case 0x155318u: goto label_155318;
        case 0x15531cu: goto label_15531c;
        case 0x155320u: goto label_155320;
        case 0x155324u: goto label_155324;
        case 0x155328u: goto label_155328;
        case 0x15532cu: goto label_15532c;
        case 0x155330u: goto label_155330;
        case 0x155334u: goto label_155334;
        case 0x155338u: goto label_155338;
        case 0x15533cu: goto label_15533c;
        case 0x155340u: goto label_155340;
        case 0x155344u: goto label_155344;
        case 0x155348u: goto label_155348;
        case 0x15534cu: goto label_15534c;
        case 0x155350u: goto label_155350;
        case 0x155354u: goto label_155354;
        case 0x155358u: goto label_155358;
        case 0x15535cu: goto label_15535c;
        case 0x155360u: goto label_155360;
        case 0x155364u: goto label_155364;
        case 0x155368u: goto label_155368;
        case 0x15536cu: goto label_15536c;
        case 0x155370u: goto label_155370;
        case 0x155374u: goto label_155374;
        case 0x155378u: goto label_155378;
        case 0x15537cu: goto label_15537c;
        case 0x155380u: goto label_155380;
        case 0x155384u: goto label_155384;
        case 0x155388u: goto label_155388;
        case 0x15538cu: goto label_15538c;
        case 0x155390u: goto label_155390;
        case 0x155394u: goto label_155394;
        case 0x155398u: goto label_155398;
        case 0x15539cu: goto label_15539c;
        case 0x1553a0u: goto label_1553a0;
        case 0x1553a4u: goto label_1553a4;
        case 0x1553a8u: goto label_1553a8;
        case 0x1553acu: goto label_1553ac;
        case 0x1553b0u: goto label_1553b0;
        case 0x1553b4u: goto label_1553b4;
        case 0x1553b8u: goto label_1553b8;
        case 0x1553bcu: goto label_1553bc;
        case 0x1553c0u: goto label_1553c0;
        case 0x1553c4u: goto label_1553c4;
        case 0x1553c8u: goto label_1553c8;
        case 0x1553ccu: goto label_1553cc;
        case 0x1553d0u: goto label_1553d0;
        case 0x1553d4u: goto label_1553d4;
        case 0x1553d8u: goto label_1553d8;
        case 0x1553dcu: goto label_1553dc;
        case 0x1553e0u: goto label_1553e0;
        case 0x1553e4u: goto label_1553e4;
        case 0x1553e8u: goto label_1553e8;
        case 0x1553ecu: goto label_1553ec;
        case 0x1553f0u: goto label_1553f0;
        case 0x1553f4u: goto label_1553f4;
        case 0x1553f8u: goto label_1553f8;
        case 0x1553fcu: goto label_1553fc;
        case 0x155400u: goto label_155400;
        case 0x155404u: goto label_155404;
        case 0x155408u: goto label_155408;
        case 0x15540cu: goto label_15540c;
        case 0x155410u: goto label_155410;
        case 0x155414u: goto label_155414;
        case 0x155418u: goto label_155418;
        case 0x15541cu: goto label_15541c;
        case 0x155420u: goto label_155420;
        case 0x155424u: goto label_155424;
        case 0x155428u: goto label_155428;
        case 0x15542cu: goto label_15542c;
        case 0x155430u: goto label_155430;
        case 0x155434u: goto label_155434;
        case 0x155438u: goto label_155438;
        case 0x15543cu: goto label_15543c;
        case 0x155440u: goto label_155440;
        case 0x155444u: goto label_155444;
        case 0x155448u: goto label_155448;
        case 0x15544cu: goto label_15544c;
        case 0x155450u: goto label_155450;
        case 0x155454u: goto label_155454;
        case 0x155458u: goto label_155458;
        case 0x15545cu: goto label_15545c;
        case 0x155460u: goto label_155460;
        case 0x155464u: goto label_155464;
        case 0x155468u: goto label_155468;
        case 0x15546cu: goto label_15546c;
        case 0x155470u: goto label_155470;
        case 0x155474u: goto label_155474;
        case 0x155478u: goto label_155478;
        case 0x15547cu: goto label_15547c;
        case 0x155480u: goto label_155480;
        case 0x155484u: goto label_155484;
        case 0x155488u: goto label_155488;
        case 0x15548cu: goto label_15548c;
        case 0x155490u: goto label_155490;
        case 0x155494u: goto label_155494;
        case 0x155498u: goto label_155498;
        case 0x15549cu: goto label_15549c;
        case 0x1554a0u: goto label_1554a0;
        case 0x1554a4u: goto label_1554a4;
        case 0x1554a8u: goto label_1554a8;
        case 0x1554acu: goto label_1554ac;
        case 0x1554b0u: goto label_1554b0;
        case 0x1554b4u: goto label_1554b4;
        case 0x1554b8u: goto label_1554b8;
        case 0x1554bcu: goto label_1554bc;
        case 0x1554c0u: goto label_1554c0;
        case 0x1554c4u: goto label_1554c4;
        case 0x1554c8u: goto label_1554c8;
        case 0x1554ccu: goto label_1554cc;
        case 0x1554d0u: goto label_1554d0;
        case 0x1554d4u: goto label_1554d4;
        case 0x1554d8u: goto label_1554d8;
        case 0x1554dcu: goto label_1554dc;
        case 0x1554e0u: goto label_1554e0;
        case 0x1554e4u: goto label_1554e4;
        case 0x1554e8u: goto label_1554e8;
        case 0x1554ecu: goto label_1554ec;
        case 0x1554f0u: goto label_1554f0;
        case 0x1554f4u: goto label_1554f4;
        case 0x1554f8u: goto label_1554f8;
        case 0x1554fcu: goto label_1554fc;
        case 0x155500u: goto label_155500;
        case 0x155504u: goto label_155504;
        case 0x155508u: goto label_155508;
        case 0x15550cu: goto label_15550c;
        case 0x155510u: goto label_155510;
        case 0x155514u: goto label_155514;
        case 0x155518u: goto label_155518;
        case 0x15551cu: goto label_15551c;
        case 0x155520u: goto label_155520;
        case 0x155524u: goto label_155524;
        case 0x155528u: goto label_155528;
        case 0x15552cu: goto label_15552c;
        case 0x155530u: goto label_155530;
        case 0x155534u: goto label_155534;
        case 0x155538u: goto label_155538;
        case 0x15553cu: goto label_15553c;
        case 0x155540u: goto label_155540;
        case 0x155544u: goto label_155544;
        case 0x155548u: goto label_155548;
        case 0x15554cu: goto label_15554c;
        case 0x155550u: goto label_155550;
        case 0x155554u: goto label_155554;
        case 0x155558u: goto label_155558;
        case 0x15555cu: goto label_15555c;
        case 0x155560u: goto label_155560;
        case 0x155564u: goto label_155564;
        case 0x155568u: goto label_155568;
        case 0x15556cu: goto label_15556c;
        case 0x155570u: goto label_155570;
        case 0x155574u: goto label_155574;
        case 0x155578u: goto label_155578;
        case 0x15557cu: goto label_15557c;
        case 0x155580u: goto label_155580;
        case 0x155584u: goto label_155584;
        case 0x155588u: goto label_155588;
        case 0x15558cu: goto label_15558c;
        case 0x155590u: goto label_155590;
        case 0x155594u: goto label_155594;
        case 0x155598u: goto label_155598;
        case 0x15559cu: goto label_15559c;
        case 0x1555a0u: goto label_1555a0;
        case 0x1555a4u: goto label_1555a4;
        case 0x1555a8u: goto label_1555a8;
        case 0x1555acu: goto label_1555ac;
        case 0x1555b0u: goto label_1555b0;
        case 0x1555b4u: goto label_1555b4;
        case 0x1555b8u: goto label_1555b8;
        case 0x1555bcu: goto label_1555bc;
        case 0x1555c0u: goto label_1555c0;
        case 0x1555c4u: goto label_1555c4;
        case 0x1555c8u: goto label_1555c8;
        case 0x1555ccu: goto label_1555cc;
        case 0x1555d0u: goto label_1555d0;
        case 0x1555d4u: goto label_1555d4;
        case 0x1555d8u: goto label_1555d8;
        case 0x1555dcu: goto label_1555dc;
        case 0x1555e0u: goto label_1555e0;
        case 0x1555e4u: goto label_1555e4;
        case 0x1555e8u: goto label_1555e8;
        case 0x1555ecu: goto label_1555ec;
        case 0x1555f0u: goto label_1555f0;
        case 0x1555f4u: goto label_1555f4;
        case 0x1555f8u: goto label_1555f8;
        case 0x1555fcu: goto label_1555fc;
        case 0x155600u: goto label_155600;
        case 0x155604u: goto label_155604;
        case 0x155608u: goto label_155608;
        case 0x15560cu: goto label_15560c;
        case 0x155610u: goto label_155610;
        case 0x155614u: goto label_155614;
        case 0x155618u: goto label_155618;
        case 0x15561cu: goto label_15561c;
        case 0x155620u: goto label_155620;
        case 0x155624u: goto label_155624;
        case 0x155628u: goto label_155628;
        case 0x15562cu: goto label_15562c;
        case 0x155630u: goto label_155630;
        case 0x155634u: goto label_155634;
        case 0x155638u: goto label_155638;
        case 0x15563cu: goto label_15563c;
        case 0x155640u: goto label_155640;
        case 0x155644u: goto label_155644;
        case 0x155648u: goto label_155648;
        case 0x15564cu: goto label_15564c;
        case 0x155650u: goto label_155650;
        case 0x155654u: goto label_155654;
        case 0x155658u: goto label_155658;
        case 0x15565cu: goto label_15565c;
        case 0x155660u: goto label_155660;
        case 0x155664u: goto label_155664;
        case 0x155668u: goto label_155668;
        case 0x15566cu: goto label_15566c;
        default: break;
    }

    ctx->pc = 0x155230u;

label_155230:
    // 0x155230: 0x8f82bbb0  lw          $v0, -0x4450($gp)
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949808)));
label_155234:
    // 0x155234: 0x3e00008  jr          $ra
label_155238:
    if (ctx->pc == 0x155238u) {
        ctx->pc = 0x15523Cu;
        goto label_15523c;
    }
    ctx->pc = 0x155234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15523Cu;
label_15523c:
    // 0x15523c: 0x0  nop
    ctx->pc = 0x15523cu;
    // NOP
label_155240:
    // 0x155240: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x155240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_155244:
    // 0x155244: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x155244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_155248:
    // 0x155248: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x155248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15524c:
    // 0x15524c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_155250:
    // 0x155250: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x155250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_155254:
    // 0x155254: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x155254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_155258:
    // 0x155258: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15525c:
    // 0x15525c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_155260:
    // 0x155260: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_155264:
    // 0x155264: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_155268:
    // 0x155268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15526c:
    // 0x15526c: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x15526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_155270:
    // 0x155270: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x155270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
label_155274:
    // 0x155274: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x155274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
label_155278:
    // 0x155278: 0xafa70150  sw          $a3, 0x150($sp)
    ctx->pc = 0x155278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
label_15527c:
    // 0x15527c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x15527cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_155280:
    // 0x155280: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x155280u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_155284:
    // 0x155284: 0x102000e8  beqz        $at, . + 4 + (0xE8 << 2)
label_155288:
    if (ctx->pc == 0x155288u) {
        ctx->pc = 0x15528Cu;
        goto label_15528c;
    }
    ctx->pc = 0x155284u;
    {
        const bool branch_taken_0x155284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155284) {
            ctx->pc = 0x155628u;
            goto label_155628;
        }
    }
    ctx->pc = 0x15528Cu;
label_15528c:
    // 0x15528c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x15528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_155290:
    // 0x155290: 0x24638380  addiu       $v1, $v1, -0x7C80
    ctx->pc = 0x155290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935424));
label_155294:
    // 0x155294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_155298:
    // 0x155298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15529c:
    // 0x15529c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1552a0:
    // 0x1552a0: 0x400008  jr          $v0
label_1552a4:
    if (ctx->pc == 0x1552A4u) {
        ctx->pc = 0x1552A8u;
        goto label_1552a8;
    }
    ctx->pc = 0x1552A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1552A8u: goto label_1552a8;
            case 0x1552CCu: goto label_1552cc;
            case 0x155334u: goto label_155334;
            case 0x155368u: goto label_155368;
            case 0x15539Cu: goto label_15539c;
            case 0x1553D4u: goto label_1553d4;
            case 0x15540Cu: goto label_15540c;
            case 0x155628u: goto label_155628;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1552A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1552A8u;
label_1552a8:
    // 0x1552a8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1552a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1552ac:
    // 0x1552ac: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1552acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_1552b0:
    // 0x1552b0: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x1552b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1552b4:
    // 0x1552b4: 0x8f84bae8  lw          $a0, -0x4518($gp)
    ctx->pc = 0x1552b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949608)));
label_1552b8:
    // 0x1552b8: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x1552b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_1552bc:
    // 0x1552bc: 0xc0628dc  jal         func_18A370
label_1552c0:
    if (ctx->pc == 0x1552C0u) {
        ctx->pc = 0x1552C4u;
        goto label_1552c4;
    }
    ctx->pc = 0x1552BCu;
    SET_GPR_U32(ctx, 31, 0x1552C4u);
    ctx->pc = 0x18A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A370u, 0x1552BCu, 0x1552C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552C4u;
label_1552c4:
    // 0x1552c4: 0x100000db  b           . + 4 + (0xDB << 2)
label_1552c8:
    if (ctx->pc == 0x1552C8u) {
        ctx->pc = 0x1552CCu;
        goto label_1552cc;
    }
    ctx->pc = 0x1552C4u;
    {
        const bool branch_taken_0x1552c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1552c4) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x1552CCu;
label_1552cc:
    // 0x1552cc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1552ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1552d0:
    // 0x1552d0: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x1552d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_1552d4:
    // 0x1552d4: 0x8f82bae8  lw          $v0, -0x4518($gp)
    ctx->pc = 0x1552d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949608)));
label_1552d8:
    // 0x1552d8: 0x100200d6  beq         $zero, $v0, . + 4 + (0xD6 << 2)
label_1552dc:
    if (ctx->pc == 0x1552DCu) {
        ctx->pc = 0x1552E0u;
        goto label_1552e0;
    }
    ctx->pc = 0x1552D8u;
    {
        const bool branch_taken_0x1552d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1552d8) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x1552E0u;
label_1552e0:
    // 0x1552e0: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x1552e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1552e4:
    // 0x1552e4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1552e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1552e8:
    // 0x1552e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1552e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1552ec:
    // 0x1552ec: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1552f0:
    if (ctx->pc == 0x1552F0u) {
        ctx->pc = 0x1552F4u;
        goto label_1552f4;
    }
    ctx->pc = 0x1552ECu;
    {
        const bool branch_taken_0x1552ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1552ec) {
            ctx->pc = 0x155314u;
            goto label_155314;
        }
    }
    ctx->pc = 0x1552F4u;
label_1552f4:
    // 0x1552f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1552f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1552f8:
    // 0x1552f8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1552fc:
    if (ctx->pc == 0x1552FCu) {
        ctx->pc = 0x155300u;
        goto label_155300;
    }
    ctx->pc = 0x1552F8u;
    {
        const bool branch_taken_0x1552f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1552f8) {
            ctx->pc = 0x155314u;
            goto label_155314;
        }
    }
    ctx->pc = 0x155300u;
label_155300:
    // 0x155300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155304:
    // 0x155304: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_155308:
    if (ctx->pc == 0x155308u) {
        ctx->pc = 0x15530Cu;
        goto label_15530c;
    }
    ctx->pc = 0x155304u;
    {
        const bool branch_taken_0x155304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155304) {
            ctx->pc = 0x155314u;
            goto label_155314;
        }
    }
    ctx->pc = 0x15530Cu;
label_15530c:
    // 0x15530c: 0x10600001  beqz        $v1, . + 4 + (0x1 << 2)
label_155310:
    if (ctx->pc == 0x155310u) {
        ctx->pc = 0x155314u;
        goto label_155314;
    }
    ctx->pc = 0x15530Cu;
    {
        const bool branch_taken_0x15530c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15530c) {
            ctx->pc = 0x155314u;
            goto label_155314;
        }
    }
    ctx->pc = 0x155314u;
label_155314:
    // 0x155314: 0x8fb70140  lw          $s7, 0x140($sp)
    ctx->pc = 0x155314u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_155318:
    // 0x155318: 0x8f84bae8  lw          $a0, -0x4518($gp)
    ctx->pc = 0x155318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949608)));
label_15531c:
    // 0x15531c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x15531cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_155320:
    // 0x155320: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x155320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_155324:
    // 0x155324: 0xc0626f0  jal         func_189BC0
label_155328:
    if (ctx->pc == 0x155328u) {
        ctx->pc = 0x15532Cu;
        goto label_15532c;
    }
    ctx->pc = 0x155324u;
    SET_GPR_U32(ctx, 31, 0x15532Cu);
    ctx->pc = 0x189BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189BC0u, 0x155324u, 0x15532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15532Cu;
label_15532c:
    // 0x15532c: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_155330:
    if (ctx->pc == 0x155330u) {
        ctx->pc = 0x155334u;
        goto label_155334;
    }
    ctx->pc = 0x15532Cu;
    {
        const bool branch_taken_0x15532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15532c) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x155334u;
label_155334:
    // 0x155334: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x155334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_155338:
    // 0x155338: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x155338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15533c:
    // 0x15533c: 0xc0553d4  jal         func_154F50
label_155340:
    if (ctx->pc == 0x155340u) {
        ctx->pc = 0x155344u;
        goto label_155344;
    }
    ctx->pc = 0x15533Cu;
    SET_GPR_U32(ctx, 31, 0x155344u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x15533Cu, 0x155344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155344u;
label_155344:
    // 0x155344: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x155344u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155348:
    // 0x155348: 0x12c000ba  beqz        $s6, . + 4 + (0xBA << 2)
label_15534c:
    if (ctx->pc == 0x15534Cu) {
        ctx->pc = 0x155350u;
        goto label_155350;
    }
    ctx->pc = 0x155348u;
    {
        const bool branch_taken_0x155348 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x155348) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x155350u;
label_155350:
    // 0x155350: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_155354:
    // 0x155354: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x155354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_155358:
    // 0x155358: 0xc05e070  jal         func_1781C0
label_15535c:
    if (ctx->pc == 0x15535Cu) {
        ctx->pc = 0x155360u;
        goto label_155360;
    }
    ctx->pc = 0x155358u;
    SET_GPR_U32(ctx, 31, 0x155360u);
    ctx->pc = 0x1781C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1781C0u, 0x155358u, 0x155360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155360u;
label_155360:
    // 0x155360: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_155364:
    if (ctx->pc == 0x155364u) {
        ctx->pc = 0x155368u;
        goto label_155368;
    }
    ctx->pc = 0x155360u;
    {
        const bool branch_taken_0x155360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155360) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x155368u;
label_155368:
    // 0x155368: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_15536c:
    // 0x15536c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15536cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155370:
    // 0x155370: 0xc0553d4  jal         func_154F50
label_155374:
    if (ctx->pc == 0x155374u) {
        ctx->pc = 0x155378u;
        goto label_155378;
    }
    ctx->pc = 0x155370u;
    SET_GPR_U32(ctx, 31, 0x155378u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x155370u, 0x155378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155378u;
label_155378:
    // 0x155378: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x155378u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15537c:
    // 0x15537c: 0x12a000ad  beqz        $s5, . + 4 + (0xAD << 2)
label_155380:
    if (ctx->pc == 0x155380u) {
        ctx->pc = 0x155384u;
        goto label_155384;
    }
    ctx->pc = 0x15537Cu;
    {
        const bool branch_taken_0x15537c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x15537c) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x155384u;
label_155384:
    // 0x155384: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x155384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_155388:
    // 0x155388: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x155388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_15538c:
    // 0x15538c: 0xc05fb54  jal         func_17ED50
label_155390:
    if (ctx->pc == 0x155390u) {
        ctx->pc = 0x155394u;
        goto label_155394;
    }
    ctx->pc = 0x15538Cu;
    SET_GPR_U32(ctx, 31, 0x155394u);
    ctx->pc = 0x17ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ED50u, 0x15538Cu, 0x155394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155394u;
label_155394:
    // 0x155394: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_155398:
    if (ctx->pc == 0x155398u) {
        ctx->pc = 0x15539Cu;
        goto label_15539c;
    }
    ctx->pc = 0x155394u;
    {
        const bool branch_taken_0x155394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155394) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x15539Cu;
label_15539c:
    // 0x15539c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x15539cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1553a0:
    // 0x1553a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1553a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1553a4:
    // 0x1553a4: 0xc0553d4  jal         func_154F50
label_1553a8:
    if (ctx->pc == 0x1553A8u) {
        ctx->pc = 0x1553ACu;
        goto label_1553ac;
    }
    ctx->pc = 0x1553A4u;
    SET_GPR_U32(ctx, 31, 0x1553ACu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1553A4u, 0x1553ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553ACu;
label_1553ac:
    // 0x1553ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1553acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1553b0:
    // 0x1553b0: 0x128000a0  beqz        $s4, . + 4 + (0xA0 << 2)
label_1553b4:
    if (ctx->pc == 0x1553B4u) {
        ctx->pc = 0x1553B8u;
        goto label_1553b8;
    }
    ctx->pc = 0x1553B0u;
    {
        const bool branch_taken_0x1553b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1553b0) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x1553B8u;
label_1553b8:
    // 0x1553b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1553b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1553bc:
    // 0x1553bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1553bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1553c0:
    // 0x1553c0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1553c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1553c4:
    // 0x1553c4: 0x320f809  jalr        $t9
label_1553c8:
    if (ctx->pc == 0x1553C8u) {
        ctx->pc = 0x1553CCu;
        goto label_1553cc;
    }
    ctx->pc = 0x1553C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1553CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1553C4u, 0x1553CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1553CCu;
label_1553cc:
    // 0x1553cc: 0x10000099  b           . + 4 + (0x99 << 2)
label_1553d0:
    if (ctx->pc == 0x1553D0u) {
        ctx->pc = 0x1553D4u;
        goto label_1553d4;
    }
    ctx->pc = 0x1553CCu;
    {
        const bool branch_taken_0x1553cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1553cc) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x1553D4u;
label_1553d4:
    // 0x1553d4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1553d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1553d8:
    // 0x1553d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1553d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1553dc:
    // 0x1553dc: 0xc0553d4  jal         func_154F50
label_1553e0:
    if (ctx->pc == 0x1553E0u) {
        ctx->pc = 0x1553E4u;
        goto label_1553e4;
    }
    ctx->pc = 0x1553DCu;
    SET_GPR_U32(ctx, 31, 0x1553E4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1553DCu, 0x1553E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553E4u;
label_1553e4:
    // 0x1553e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1553e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1553e8:
    // 0x1553e8: 0x10130092  beq         $zero, $s3, . + 4 + (0x92 << 2)
label_1553ec:
    if (ctx->pc == 0x1553ECu) {
        ctx->pc = 0x1553F0u;
        goto label_1553f0;
    }
    ctx->pc = 0x1553E8u;
    {
        const bool branch_taken_0x1553e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x1553e8) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x1553F0u;
label_1553f0:
    // 0x1553f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1553f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1553f4:
    // 0x1553f4: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1553f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1553f8:
    // 0x1553f8: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x1553f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1553fc:
    // 0x1553fc: 0xc047e9c  jal         func_11FA70
label_155400:
    if (ctx->pc == 0x155400u) {
        ctx->pc = 0x155404u;
        goto label_155404;
    }
    ctx->pc = 0x1553FCu;
    SET_GPR_U32(ctx, 31, 0x155404u);
    ctx->pc = 0x11FA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA70u, 0x1553FCu, 0x155404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155404u;
label_155404:
    // 0x155404: 0x1000008b  b           . + 4 + (0x8B << 2)
label_155408:
    if (ctx->pc == 0x155408u) {
        ctx->pc = 0x15540Cu;
        goto label_15540c;
    }
    ctx->pc = 0x155404u;
    {
        const bool branch_taken_0x155404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155404) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x15540Cu;
label_15540c:
    // 0x15540c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x15540cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_155410:
    // 0x155410: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x155410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_155414:
    // 0x155414: 0xc0553d4  jal         func_154F50
label_155418:
    if (ctx->pc == 0x155418u) {
        ctx->pc = 0x15541Cu;
        goto label_15541c;
    }
    ctx->pc = 0x155414u;
    SET_GPR_U32(ctx, 31, 0x15541Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x155414u, 0x15541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15541Cu;
label_15541c:
    // 0x15541c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15541cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155420:
    // 0x155420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155424:
    // 0x155424: 0xc0413bc  jal         func_104EF0
label_155428:
    if (ctx->pc == 0x155428u) {
        ctx->pc = 0x15542Cu;
        goto label_15542c;
    }
    ctx->pc = 0x155424u;
    SET_GPR_U32(ctx, 31, 0x15542Cu);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x155424u, 0x15542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15542Cu;
label_15542c:
    // 0x15542c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15542cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_155430:
    // 0x155430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155434:
    // 0x155434: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_155438:
    if (ctx->pc == 0x155438u) {
        ctx->pc = 0x15543Cu;
        goto label_15543c;
    }
    ctx->pc = 0x155434u;
    {
        const bool branch_taken_0x155434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x155434) {
            ctx->pc = 0x155464u;
            goto label_155464;
        }
    }
    ctx->pc = 0x15543Cu;
label_15543c:
    // 0x15543c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x15543cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_155440:
    // 0x155440: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_155444:
    // 0x155444: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x155444u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_155448:
    // 0x155448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15544c:
    // 0x15544c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15544cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_155450:
    // 0x155450: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x155450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_155454:
    // 0x155454: 0x320f809  jalr        $t9
label_155458:
    if (ctx->pc == 0x155458u) {
        ctx->pc = 0x15545Cu;
        goto label_15545c;
    }
    ctx->pc = 0x155454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15545Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155454u, 0x15545Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15545Cu;
label_15545c:
    // 0x15545c: 0x10000075  b           . + 4 + (0x75 << 2)
label_155460:
    if (ctx->pc == 0x155460u) {
        ctx->pc = 0x155464u;
        goto label_155464;
    }
    ctx->pc = 0x15545Cu;
    {
        const bool branch_taken_0x15545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15545c) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x155464u;
label_155464:
    // 0x155464: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x155464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_155468:
    // 0x155468: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x155468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_15546c:
    // 0x15546c: 0xc0553d4  jal         func_154F50
label_155470:
    if (ctx->pc == 0x155470u) {
        ctx->pc = 0x155474u;
        goto label_155474;
    }
    ctx->pc = 0x15546Cu;
    SET_GPR_U32(ctx, 31, 0x155474u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x15546Cu, 0x155474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155474u;
label_155474:
    // 0x155474: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x155474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155478:
    // 0x155478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15547c:
    // 0x15547c: 0xc0413bc  jal         func_104EF0
label_155480:
    if (ctx->pc == 0x155480u) {
        ctx->pc = 0x155484u;
        goto label_155484;
    }
    ctx->pc = 0x15547Cu;
    SET_GPR_U32(ctx, 31, 0x155484u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x15547Cu, 0x155484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155484u;
label_155484:
    // 0x155484: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_155488:
    // 0x155488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15548c:
    // 0x15548c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_155490:
    if (ctx->pc == 0x155490u) {
        ctx->pc = 0x155494u;
        goto label_155494;
    }
    ctx->pc = 0x15548Cu;
    {
        const bool branch_taken_0x15548c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15548c) {
            ctx->pc = 0x1554BCu;
            goto label_1554bc;
        }
    }
    ctx->pc = 0x155494u;
label_155494:
    // 0x155494: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x155494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_155498:
    // 0x155498: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x155498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_15549c:
    // 0x15549c: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x15549cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1554a0:
    // 0x1554a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1554a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1554a4:
    // 0x1554a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1554a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1554a8:
    // 0x1554a8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1554ac:
    // 0x1554ac: 0x320f809  jalr        $t9
label_1554b0:
    if (ctx->pc == 0x1554B0u) {
        ctx->pc = 0x1554B4u;
        goto label_1554b4;
    }
    ctx->pc = 0x1554ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1554B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1554ACu, 0x1554B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1554B4u;
label_1554b4:
    // 0x1554b4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1554b8:
    if (ctx->pc == 0x1554B8u) {
        ctx->pc = 0x1554BCu;
        goto label_1554bc;
    }
    ctx->pc = 0x1554B4u;
    {
        const bool branch_taken_0x1554b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554b4) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x1554BCu;
label_1554bc:
    // 0x1554bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1554bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1554c0:
    // 0x1554c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1554c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1554c4:
    // 0x1554c4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1554c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1554c8:
    // 0x1554c8: 0xc0bb7e6  jal         func_2EDF98
label_1554cc:
    if (ctx->pc == 0x1554CCu) {
        ctx->pc = 0x1554D0u;
        goto label_1554d0;
    }
    ctx->pc = 0x1554C8u;
    SET_GPR_U32(ctx, 31, 0x1554D0u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x1554C8u, 0x1554D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554D0u;
label_1554d0:
    // 0x1554d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1554d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1554d4:
    // 0x1554d4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1554d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1554d8:
    // 0x1554d8: 0x27a40114  addiu       $a0, $sp, 0x114
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1554dc:
    // 0x1554dc: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1554dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1554e0:
    // 0x1554e0: 0xc055008  jal         func_154020
label_1554e4:
    if (ctx->pc == 0x1554E4u) {
        ctx->pc = 0x1554E8u;
        goto label_1554e8;
    }
    ctx->pc = 0x1554E0u;
    SET_GPR_U32(ctx, 31, 0x1554E8u);
    ctx->pc = 0x154020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154020u, 0x1554E0u, 0x1554E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554E8u;
label_1554e8:
    // 0x1554e8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1554ec:
    if (ctx->pc == 0x1554ECu) {
        ctx->pc = 0x1554F0u;
        goto label_1554f0;
    }
    ctx->pc = 0x1554E8u;
    {
        const bool branch_taken_0x1554e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554e8) {
            ctx->pc = 0x155534u;
            goto label_155534;
        }
    }
    ctx->pc = 0x1554F0u;
label_1554f0:
    // 0x1554f0: 0x27a40114  addiu       $a0, $sp, 0x114
    ctx->pc = 0x1554f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1554f4:
    // 0x1554f4: 0xc054ff0  jal         func_153FC0
label_1554f8:
    if (ctx->pc == 0x1554F8u) {
        ctx->pc = 0x1554FCu;
        goto label_1554fc;
    }
    ctx->pc = 0x1554F4u;
    SET_GPR_U32(ctx, 31, 0x1554FCu);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x1554F4u, 0x1554FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554FCu;
label_1554fc:
    // 0x1554fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1554fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_155500:
    // 0x155500: 0xc0413bc  jal         func_104EF0
label_155504:
    if (ctx->pc == 0x155504u) {
        ctx->pc = 0x155508u;
        goto label_155508;
    }
    ctx->pc = 0x155500u;
    SET_GPR_U32(ctx, 31, 0x155508u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x155500u, 0x155508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155508u;
label_155508:
    // 0x155508: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15550c:
    // 0x15550c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155510:
    // 0x155510: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_155514:
    if (ctx->pc == 0x155514u) {
        ctx->pc = 0x155518u;
        goto label_155518;
    }
    ctx->pc = 0x155510u;
    {
        const bool branch_taken_0x155510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x155510) {
            ctx->pc = 0x155524u;
            goto label_155524;
        }
    }
    ctx->pc = 0x155518u;
label_155518:
    // 0x155518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15551c:
    // 0x15551c: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x15551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_155520:
    // 0x155520: 0xa04300a0  sb          $v1, 0xA0($v0)
    ctx->pc = 0x155520u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 3));
label_155524:
    // 0x155524: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x155524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_155528:
    // 0x155528: 0x27a40114  addiu       $a0, $sp, 0x114
    ctx->pc = 0x155528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_15552c:
    // 0x15552c: 0xc054fd0  jal         func_153F40
label_155530:
    if (ctx->pc == 0x155530u) {
        ctx->pc = 0x155534u;
        goto label_155534;
    }
    ctx->pc = 0x15552Cu;
    SET_GPR_U32(ctx, 31, 0x155534u);
    ctx->pc = 0x153F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F40u, 0x15552Cu, 0x155534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155534u;
label_155534:
    // 0x155534: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x155534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_155538:
    // 0x155538: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x155538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_15553c:
    // 0x15553c: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x15553cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_155540:
    // 0x155540: 0xc054fa4  jal         func_153E90
label_155544:
    if (ctx->pc == 0x155544u) {
        ctx->pc = 0x155548u;
        goto label_155548;
    }
    ctx->pc = 0x155540u;
    SET_GPR_U32(ctx, 31, 0x155548u);
    ctx->pc = 0x153E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E90u, 0x155540u, 0x155548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155548u;
label_155548:
    // 0x155548: 0x27a40114  addiu       $a0, $sp, 0x114
    ctx->pc = 0x155548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_15554c:
    // 0x15554c: 0x27a5010c  addiu       $a1, $sp, 0x10C
    ctx->pc = 0x15554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_155550:
    // 0x155550: 0xc041998  jal         func_106660
label_155554:
    if (ctx->pc == 0x155554u) {
        ctx->pc = 0x155558u;
        goto label_155558;
    }
    ctx->pc = 0x155550u;
    SET_GPR_U32(ctx, 31, 0x155558u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x155550u, 0x155558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155558u;
label_155558:
    // 0x155558: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_15555c:
    if (ctx->pc == 0x15555Cu) {
        ctx->pc = 0x155560u;
        goto label_155560;
    }
    ctx->pc = 0x155558u;
    {
        const bool branch_taken_0x155558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155558) {
            ctx->pc = 0x1554F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1554f0;
        }
    }
    ctx->pc = 0x155560u;
label_155560:
    // 0x155560: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x155560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155564:
    // 0x155564: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x155564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_155568:
    // 0x155568: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x155568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_15556c:
    // 0x15556c: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_155570:
    // 0x155570: 0xc055008  jal         func_154020
label_155574:
    if (ctx->pc == 0x155574u) {
        ctx->pc = 0x155578u;
        goto label_155578;
    }
    ctx->pc = 0x155570u;
    SET_GPR_U32(ctx, 31, 0x155578u);
    ctx->pc = 0x154020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154020u, 0x155570u, 0x155578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155578u;
label_155578:
    // 0x155578: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15557c:
    if (ctx->pc == 0x15557Cu) {
        ctx->pc = 0x155580u;
        goto label_155580;
    }
    ctx->pc = 0x155578u;
    {
        const bool branch_taken_0x155578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155578) {
            ctx->pc = 0x1555F4u;
            goto label_1555f4;
        }
    }
    ctx->pc = 0x155580u;
label_155580:
    // 0x155580: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x155580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_155584:
    // 0x155584: 0x904200a0  lbu         $v0, 0xA0($v0)
    ctx->pc = 0x155584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
label_155588:
    // 0x155588: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_15558c:
    if (ctx->pc == 0x15558Cu) {
        ctx->pc = 0x155590u;
        goto label_155590;
    }
    ctx->pc = 0x155588u;
    {
        const bool branch_taken_0x155588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155588) {
            ctx->pc = 0x1555E4u;
            goto label_1555e4;
        }
    }
    ctx->pc = 0x155590u;
label_155590:
    // 0x155590: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_155594:
    // 0x155594: 0xc054ff0  jal         func_153FC0
label_155598:
    if (ctx->pc == 0x155598u) {
        ctx->pc = 0x15559Cu;
        goto label_15559c;
    }
    ctx->pc = 0x155594u;
    SET_GPR_U32(ctx, 31, 0x15559Cu);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x155594u, 0x15559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15559Cu;
label_15559c:
    // 0x15559c: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x15559cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1555a0:
    // 0x1555a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1555a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1555a4:
    // 0x1555a4: 0xc055fa4  jal         func_157E90
label_1555a8:
    if (ctx->pc == 0x1555A8u) {
        ctx->pc = 0x1555ACu;
        goto label_1555ac;
    }
    ctx->pc = 0x1555A4u;
    SET_GPR_U32(ctx, 31, 0x1555ACu);
    ctx->pc = 0x157E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157E90u, 0x1555A4u, 0x1555ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555ACu;
label_1555ac:
    // 0x1555ac: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x1555acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1555b0:
    // 0x1555b0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_1555b4:
    if (ctx->pc == 0x1555B4u) {
        ctx->pc = 0x1555B8u;
        goto label_1555b8;
    }
    ctx->pc = 0x1555B0u;
    {
        const bool branch_taken_0x1555b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1555b0) {
            ctx->pc = 0x1555E4u;
            goto label_1555e4;
        }
    }
    ctx->pc = 0x1555B8u;
label_1555b8:
    // 0x1555b8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1555b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1555bc:
    // 0x1555bc: 0xc054ff0  jal         func_153FC0
label_1555c0:
    if (ctx->pc == 0x1555C0u) {
        ctx->pc = 0x1555C4u;
        goto label_1555c4;
    }
    ctx->pc = 0x1555BCu;
    SET_GPR_U32(ctx, 31, 0x1555C4u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x1555BCu, 0x1555C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555C4u;
label_1555c4:
    // 0x1555c4: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1555c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1555c8:
    // 0x1555c8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1555cc:
    // 0x1555cc: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1555ccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1555d0:
    // 0x1555d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1555d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1555d4:
    // 0x1555d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1555d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1555d8:
    // 0x1555d8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1555d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1555dc:
    // 0x1555dc: 0x320f809  jalr        $t9
label_1555e0:
    if (ctx->pc == 0x1555E0u) {
        ctx->pc = 0x1555E4u;
        goto label_1555e4;
    }
    ctx->pc = 0x1555DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1555E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1555DCu, 0x1555E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1555E4u;
label_1555e4:
    // 0x1555e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1555e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1555e8:
    // 0x1555e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1555e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1555ec:
    // 0x1555ec: 0xc054fd0  jal         func_153F40
label_1555f0:
    if (ctx->pc == 0x1555F0u) {
        ctx->pc = 0x1555F4u;
        goto label_1555f4;
    }
    ctx->pc = 0x1555ECu;
    SET_GPR_U32(ctx, 31, 0x1555F4u);
    ctx->pc = 0x153F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F40u, 0x1555ECu, 0x1555F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555F4u;
label_1555f4:
    // 0x1555f4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1555f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1555f8:
    // 0x1555f8: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x1555f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1555fc:
    // 0x1555fc: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1555fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_155600:
    // 0x155600: 0xc054fa4  jal         func_153E90
label_155604:
    if (ctx->pc == 0x155604u) {
        ctx->pc = 0x155608u;
        goto label_155608;
    }
    ctx->pc = 0x155600u;
    SET_GPR_U32(ctx, 31, 0x155608u);
    ctx->pc = 0x153E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E90u, 0x155600u, 0x155608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155608u;
label_155608:
    // 0x155608: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x155608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_15560c:
    // 0x15560c: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x15560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_155610:
    // 0x155610: 0xc041998  jal         func_106660
label_155614:
    if (ctx->pc == 0x155614u) {
        ctx->pc = 0x155618u;
        goto label_155618;
    }
    ctx->pc = 0x155610u;
    SET_GPR_U32(ctx, 31, 0x155618u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x155610u, 0x155618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155618u;
label_155618:
    // 0x155618: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_15561c:
    if (ctx->pc == 0x15561Cu) {
        ctx->pc = 0x155620u;
        goto label_155620;
    }
    ctx->pc = 0x155618u;
    {
        const bool branch_taken_0x155618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155618) {
            ctx->pc = 0x155580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155580;
        }
    }
    ctx->pc = 0x155620u;
label_155620:
    // 0x155620: 0x10000004  b           . + 4 + (0x4 << 2)
label_155624:
    if (ctx->pc == 0x155624u) {
        ctx->pc = 0x155628u;
        goto label_155628;
    }
    ctx->pc = 0x155620u;
    {
        const bool branch_taken_0x155620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155620) {
            ctx->pc = 0x155634u;
            goto label_155634;
        }
    }
    ctx->pc = 0x155628u;
label_155628:
    // 0x155628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15562c:
    // 0x15562c: 0x10000002  b           . + 4 + (0x2 << 2)
label_155630:
    if (ctx->pc == 0x155630u) {
        ctx->pc = 0x155634u;
        goto label_155634;
    }
    ctx->pc = 0x15562Cu;
    {
        const bool branch_taken_0x15562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15562c) {
            ctx->pc = 0x155638u;
            goto label_155638;
        }
    }
    ctx->pc = 0x155634u;
label_155634:
    // 0x155634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155638:
    // 0x155638: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x155638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15563c:
    // 0x15563c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15563cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_155640:
    // 0x155640: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x155640u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_155644:
    // 0x155644: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x155644u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_155648:
    // 0x155648: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x155648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15564c:
    // 0x15564c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15564cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_155650:
    // 0x155650: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_155654:
    // 0x155654: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_155658:
    // 0x155658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15565c:
    // 0x15565c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15565cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_155660:
    // 0x155660: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x155660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_155664:
    // 0x155664: 0x3e00008  jr          $ra
label_155668:
    if (ctx->pc == 0x155668u) {
        ctx->pc = 0x15566Cu;
        goto label_15566c;
    }
    ctx->pc = 0x155664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15566Cu;
label_15566c:
    // 0x15566c: 0x0  nop
    ctx->pc = 0x15566cu;
    // NOP
    ctx->pc = 0x155670u;
}
