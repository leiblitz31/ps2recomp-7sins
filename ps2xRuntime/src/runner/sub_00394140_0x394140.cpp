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

// Function: sub_00394140
// Address: 0x394140 - 0x394678
void sub_00394140_0x394140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394140_0x394140");
#endif

    switch (ctx->pc) {
        case 0x394140u: goto label_394140;
        case 0x394144u: goto label_394144;
        case 0x394148u: goto label_394148;
        case 0x39414cu: goto label_39414c;
        case 0x394150u: goto label_394150;
        case 0x394154u: goto label_394154;
        case 0x394158u: goto label_394158;
        case 0x39415cu: goto label_39415c;
        case 0x394160u: goto label_394160;
        case 0x394164u: goto label_394164;
        case 0x394168u: goto label_394168;
        case 0x39416cu: goto label_39416c;
        case 0x394170u: goto label_394170;
        case 0x394174u: goto label_394174;
        case 0x394178u: goto label_394178;
        case 0x39417cu: goto label_39417c;
        case 0x394180u: goto label_394180;
        case 0x394184u: goto label_394184;
        case 0x394188u: goto label_394188;
        case 0x39418cu: goto label_39418c;
        case 0x394190u: goto label_394190;
        case 0x394194u: goto label_394194;
        case 0x394198u: goto label_394198;
        case 0x39419cu: goto label_39419c;
        case 0x3941a0u: goto label_3941a0;
        case 0x3941a4u: goto label_3941a4;
        case 0x3941a8u: goto label_3941a8;
        case 0x3941acu: goto label_3941ac;
        case 0x3941b0u: goto label_3941b0;
        case 0x3941b4u: goto label_3941b4;
        case 0x3941b8u: goto label_3941b8;
        case 0x3941bcu: goto label_3941bc;
        case 0x3941c0u: goto label_3941c0;
        case 0x3941c4u: goto label_3941c4;
        case 0x3941c8u: goto label_3941c8;
        case 0x3941ccu: goto label_3941cc;
        case 0x3941d0u: goto label_3941d0;
        case 0x3941d4u: goto label_3941d4;
        case 0x3941d8u: goto label_3941d8;
        case 0x3941dcu: goto label_3941dc;
        case 0x3941e0u: goto label_3941e0;
        case 0x3941e4u: goto label_3941e4;
        case 0x3941e8u: goto label_3941e8;
        case 0x3941ecu: goto label_3941ec;
        case 0x3941f0u: goto label_3941f0;
        case 0x3941f4u: goto label_3941f4;
        case 0x3941f8u: goto label_3941f8;
        case 0x3941fcu: goto label_3941fc;
        case 0x394200u: goto label_394200;
        case 0x394204u: goto label_394204;
        case 0x394208u: goto label_394208;
        case 0x39420cu: goto label_39420c;
        case 0x394210u: goto label_394210;
        case 0x394214u: goto label_394214;
        case 0x394218u: goto label_394218;
        case 0x39421cu: goto label_39421c;
        case 0x394220u: goto label_394220;
        case 0x394224u: goto label_394224;
        case 0x394228u: goto label_394228;
        case 0x39422cu: goto label_39422c;
        case 0x394230u: goto label_394230;
        case 0x394234u: goto label_394234;
        case 0x394238u: goto label_394238;
        case 0x39423cu: goto label_39423c;
        case 0x394240u: goto label_394240;
        case 0x394244u: goto label_394244;
        case 0x394248u: goto label_394248;
        case 0x39424cu: goto label_39424c;
        case 0x394250u: goto label_394250;
        case 0x394254u: goto label_394254;
        case 0x394258u: goto label_394258;
        case 0x39425cu: goto label_39425c;
        case 0x394260u: goto label_394260;
        case 0x394264u: goto label_394264;
        case 0x394268u: goto label_394268;
        case 0x39426cu: goto label_39426c;
        case 0x394270u: goto label_394270;
        case 0x394274u: goto label_394274;
        case 0x394278u: goto label_394278;
        case 0x39427cu: goto label_39427c;
        case 0x394280u: goto label_394280;
        case 0x394284u: goto label_394284;
        case 0x394288u: goto label_394288;
        case 0x39428cu: goto label_39428c;
        case 0x394290u: goto label_394290;
        case 0x394294u: goto label_394294;
        case 0x394298u: goto label_394298;
        case 0x39429cu: goto label_39429c;
        case 0x3942a0u: goto label_3942a0;
        case 0x3942a4u: goto label_3942a4;
        case 0x3942a8u: goto label_3942a8;
        case 0x3942acu: goto label_3942ac;
        case 0x3942b0u: goto label_3942b0;
        case 0x3942b4u: goto label_3942b4;
        case 0x3942b8u: goto label_3942b8;
        case 0x3942bcu: goto label_3942bc;
        case 0x3942c0u: goto label_3942c0;
        case 0x3942c4u: goto label_3942c4;
        case 0x3942c8u: goto label_3942c8;
        case 0x3942ccu: goto label_3942cc;
        case 0x3942d0u: goto label_3942d0;
        case 0x3942d4u: goto label_3942d4;
        case 0x3942d8u: goto label_3942d8;
        case 0x3942dcu: goto label_3942dc;
        case 0x3942e0u: goto label_3942e0;
        case 0x3942e4u: goto label_3942e4;
        case 0x3942e8u: goto label_3942e8;
        case 0x3942ecu: goto label_3942ec;
        case 0x3942f0u: goto label_3942f0;
        case 0x3942f4u: goto label_3942f4;
        case 0x3942f8u: goto label_3942f8;
        case 0x3942fcu: goto label_3942fc;
        case 0x394300u: goto label_394300;
        case 0x394304u: goto label_394304;
        case 0x394308u: goto label_394308;
        case 0x39430cu: goto label_39430c;
        case 0x394310u: goto label_394310;
        case 0x394314u: goto label_394314;
        case 0x394318u: goto label_394318;
        case 0x39431cu: goto label_39431c;
        case 0x394320u: goto label_394320;
        case 0x394324u: goto label_394324;
        case 0x394328u: goto label_394328;
        case 0x39432cu: goto label_39432c;
        case 0x394330u: goto label_394330;
        case 0x394334u: goto label_394334;
        case 0x394338u: goto label_394338;
        case 0x39433cu: goto label_39433c;
        case 0x394340u: goto label_394340;
        case 0x394344u: goto label_394344;
        case 0x394348u: goto label_394348;
        case 0x39434cu: goto label_39434c;
        case 0x394350u: goto label_394350;
        case 0x394354u: goto label_394354;
        case 0x394358u: goto label_394358;
        case 0x39435cu: goto label_39435c;
        case 0x394360u: goto label_394360;
        case 0x394364u: goto label_394364;
        case 0x394368u: goto label_394368;
        case 0x39436cu: goto label_39436c;
        case 0x394370u: goto label_394370;
        case 0x394374u: goto label_394374;
        case 0x394378u: goto label_394378;
        case 0x39437cu: goto label_39437c;
        case 0x394380u: goto label_394380;
        case 0x394384u: goto label_394384;
        case 0x394388u: goto label_394388;
        case 0x39438cu: goto label_39438c;
        case 0x394390u: goto label_394390;
        case 0x394394u: goto label_394394;
        case 0x394398u: goto label_394398;
        case 0x39439cu: goto label_39439c;
        case 0x3943a0u: goto label_3943a0;
        case 0x3943a4u: goto label_3943a4;
        case 0x3943a8u: goto label_3943a8;
        case 0x3943acu: goto label_3943ac;
        case 0x3943b0u: goto label_3943b0;
        case 0x3943b4u: goto label_3943b4;
        case 0x3943b8u: goto label_3943b8;
        case 0x3943bcu: goto label_3943bc;
        case 0x3943c0u: goto label_3943c0;
        case 0x3943c4u: goto label_3943c4;
        case 0x3943c8u: goto label_3943c8;
        case 0x3943ccu: goto label_3943cc;
        case 0x3943d0u: goto label_3943d0;
        case 0x3943d4u: goto label_3943d4;
        case 0x3943d8u: goto label_3943d8;
        case 0x3943dcu: goto label_3943dc;
        case 0x3943e0u: goto label_3943e0;
        case 0x3943e4u: goto label_3943e4;
        case 0x3943e8u: goto label_3943e8;
        case 0x3943ecu: goto label_3943ec;
        case 0x3943f0u: goto label_3943f0;
        case 0x3943f4u: goto label_3943f4;
        case 0x3943f8u: goto label_3943f8;
        case 0x3943fcu: goto label_3943fc;
        case 0x394400u: goto label_394400;
        case 0x394404u: goto label_394404;
        case 0x394408u: goto label_394408;
        case 0x39440cu: goto label_39440c;
        case 0x394410u: goto label_394410;
        case 0x394414u: goto label_394414;
        case 0x394418u: goto label_394418;
        case 0x39441cu: goto label_39441c;
        case 0x394420u: goto label_394420;
        case 0x394424u: goto label_394424;
        case 0x394428u: goto label_394428;
        case 0x39442cu: goto label_39442c;
        case 0x394430u: goto label_394430;
        case 0x394434u: goto label_394434;
        case 0x394438u: goto label_394438;
        case 0x39443cu: goto label_39443c;
        case 0x394440u: goto label_394440;
        case 0x394444u: goto label_394444;
        case 0x394448u: goto label_394448;
        case 0x39444cu: goto label_39444c;
        case 0x394450u: goto label_394450;
        case 0x394454u: goto label_394454;
        case 0x394458u: goto label_394458;
        case 0x39445cu: goto label_39445c;
        case 0x394460u: goto label_394460;
        case 0x394464u: goto label_394464;
        case 0x394468u: goto label_394468;
        case 0x39446cu: goto label_39446c;
        case 0x394470u: goto label_394470;
        case 0x394474u: goto label_394474;
        case 0x394478u: goto label_394478;
        case 0x39447cu: goto label_39447c;
        case 0x394480u: goto label_394480;
        case 0x394484u: goto label_394484;
        case 0x394488u: goto label_394488;
        case 0x39448cu: goto label_39448c;
        case 0x394490u: goto label_394490;
        case 0x394494u: goto label_394494;
        case 0x394498u: goto label_394498;
        case 0x39449cu: goto label_39449c;
        case 0x3944a0u: goto label_3944a0;
        case 0x3944a4u: goto label_3944a4;
        case 0x3944a8u: goto label_3944a8;
        case 0x3944acu: goto label_3944ac;
        case 0x3944b0u: goto label_3944b0;
        case 0x3944b4u: goto label_3944b4;
        case 0x3944b8u: goto label_3944b8;
        case 0x3944bcu: goto label_3944bc;
        case 0x3944c0u: goto label_3944c0;
        case 0x3944c4u: goto label_3944c4;
        case 0x3944c8u: goto label_3944c8;
        case 0x3944ccu: goto label_3944cc;
        case 0x3944d0u: goto label_3944d0;
        case 0x3944d4u: goto label_3944d4;
        case 0x3944d8u: goto label_3944d8;
        case 0x3944dcu: goto label_3944dc;
        case 0x3944e0u: goto label_3944e0;
        case 0x3944e4u: goto label_3944e4;
        case 0x3944e8u: goto label_3944e8;
        case 0x3944ecu: goto label_3944ec;
        case 0x3944f0u: goto label_3944f0;
        case 0x3944f4u: goto label_3944f4;
        case 0x3944f8u: goto label_3944f8;
        case 0x3944fcu: goto label_3944fc;
        case 0x394500u: goto label_394500;
        case 0x394504u: goto label_394504;
        case 0x394508u: goto label_394508;
        case 0x39450cu: goto label_39450c;
        case 0x394510u: goto label_394510;
        case 0x394514u: goto label_394514;
        case 0x394518u: goto label_394518;
        case 0x39451cu: goto label_39451c;
        case 0x394520u: goto label_394520;
        case 0x394524u: goto label_394524;
        case 0x394528u: goto label_394528;
        case 0x39452cu: goto label_39452c;
        case 0x394530u: goto label_394530;
        case 0x394534u: goto label_394534;
        case 0x394538u: goto label_394538;
        case 0x39453cu: goto label_39453c;
        case 0x394540u: goto label_394540;
        case 0x394544u: goto label_394544;
        case 0x394548u: goto label_394548;
        case 0x39454cu: goto label_39454c;
        case 0x394550u: goto label_394550;
        case 0x394554u: goto label_394554;
        case 0x394558u: goto label_394558;
        case 0x39455cu: goto label_39455c;
        case 0x394560u: goto label_394560;
        case 0x394564u: goto label_394564;
        case 0x394568u: goto label_394568;
        case 0x39456cu: goto label_39456c;
        case 0x394570u: goto label_394570;
        case 0x394574u: goto label_394574;
        case 0x394578u: goto label_394578;
        case 0x39457cu: goto label_39457c;
        case 0x394580u: goto label_394580;
        case 0x394584u: goto label_394584;
        case 0x394588u: goto label_394588;
        case 0x39458cu: goto label_39458c;
        case 0x394590u: goto label_394590;
        case 0x394594u: goto label_394594;
        case 0x394598u: goto label_394598;
        case 0x39459cu: goto label_39459c;
        case 0x3945a0u: goto label_3945a0;
        case 0x3945a4u: goto label_3945a4;
        case 0x3945a8u: goto label_3945a8;
        case 0x3945acu: goto label_3945ac;
        case 0x3945b0u: goto label_3945b0;
        case 0x3945b4u: goto label_3945b4;
        case 0x3945b8u: goto label_3945b8;
        case 0x3945bcu: goto label_3945bc;
        case 0x3945c0u: goto label_3945c0;
        case 0x3945c4u: goto label_3945c4;
        case 0x3945c8u: goto label_3945c8;
        case 0x3945ccu: goto label_3945cc;
        case 0x3945d0u: goto label_3945d0;
        case 0x3945d4u: goto label_3945d4;
        case 0x3945d8u: goto label_3945d8;
        case 0x3945dcu: goto label_3945dc;
        case 0x3945e0u: goto label_3945e0;
        case 0x3945e4u: goto label_3945e4;
        case 0x3945e8u: goto label_3945e8;
        case 0x3945ecu: goto label_3945ec;
        case 0x3945f0u: goto label_3945f0;
        case 0x3945f4u: goto label_3945f4;
        case 0x3945f8u: goto label_3945f8;
        case 0x3945fcu: goto label_3945fc;
        case 0x394600u: goto label_394600;
        case 0x394604u: goto label_394604;
        case 0x394608u: goto label_394608;
        case 0x39460cu: goto label_39460c;
        case 0x394610u: goto label_394610;
        case 0x394614u: goto label_394614;
        case 0x394618u: goto label_394618;
        case 0x39461cu: goto label_39461c;
        case 0x394620u: goto label_394620;
        case 0x394624u: goto label_394624;
        case 0x394628u: goto label_394628;
        case 0x39462cu: goto label_39462c;
        case 0x394630u: goto label_394630;
        case 0x394634u: goto label_394634;
        case 0x394638u: goto label_394638;
        case 0x39463cu: goto label_39463c;
        case 0x394640u: goto label_394640;
        case 0x394644u: goto label_394644;
        case 0x394648u: goto label_394648;
        case 0x39464cu: goto label_39464c;
        case 0x394650u: goto label_394650;
        case 0x394654u: goto label_394654;
        case 0x394658u: goto label_394658;
        case 0x39465cu: goto label_39465c;
        case 0x394660u: goto label_394660;
        case 0x394664u: goto label_394664;
        case 0x394668u: goto label_394668;
        case 0x39466cu: goto label_39466c;
        case 0x394670u: goto label_394670;
        case 0x394674u: goto label_394674;
        default: break;
    }

    ctx->pc = 0x394140u;

label_394140:
    // 0x394140: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x394140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_394144:
    // 0x394144: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x394144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394148:
    // 0x394148: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x394148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_39414c:
    // 0x39414c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x39414cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_394150:
    // 0x394150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x394150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394154:
    // 0x394154: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x394154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_394158:
    // 0x394158: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x394158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_39415c:
    // 0x39415c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x39415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_394160:
    // 0x394160: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x394160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_394164:
    // 0x394164: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x394164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_394168:
    // 0x394168: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x394168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_39416c:
    // 0x39416c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x39416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_394170:
    // 0x394170: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x394170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_394174:
    // 0x394174: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x394174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_394178:
    // 0x394178: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_39417c:
    if (ctx->pc == 0x39417Cu) {
        ctx->pc = 0x39417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394178u;
        // 0x39417c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394180u;
        goto label_394180;
    }
    ctx->pc = 0x394178u;
    {
        const bool branch_taken_0x394178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394178u;
        // 0x39417c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394178) {
            ctx->pc = 0x3941D0u;
            goto label_3941d0;
        }
    }
    ctx->pc = 0x394180u;
label_394180:
    // 0x394180: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x394180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_394184:
    // 0x394184: 0x0  nop
    ctx->pc = 0x394184u;
    // NOP
label_394188:
    // 0x394188: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x394188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_39418c:
    // 0x39418c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_394190:
    // 0x394190: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x394190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_394194:
    // 0x394194: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x394194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_394198:
    // 0x394198: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x394198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39419c:
    // 0x39419c: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x39419cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3941a0:
    // 0x3941a0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3941a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3941a4:
    // 0x3941a4: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x3941a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_3941a8:
    // 0x3941a8: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x3941a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3941ac:
    // 0x3941ac: 0xc2800b  movn        $s0, $a2, $v0
    ctx->pc = 0x3941acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
label_3941b0:
    // 0x3941b0: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x3941b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3941b4:
    // 0x3941b4: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x3941b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_3941b8:
    // 0x3941b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3941b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3941bc:
    // 0x3941bc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3941bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3941c0:
    // 0x3941c0: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x3941c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3941c4:
    // 0x3941c4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3941c8:
    if (ctx->pc == 0x3941C8u) {
        ctx->pc = 0x3941C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3941C4u;
        // 0x3941c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3941CCu;
        goto label_3941cc;
    }
    ctx->pc = 0x3941C4u;
    {
        const bool branch_taken_0x3941c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3941C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3941C4u;
        // 0x3941c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3941c4) {
            ctx->pc = 0x394188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394188;
        }
    }
    ctx->pc = 0x3941CCu;
label_3941cc:
    // 0x3941cc: 0x0  nop
    ctx->pc = 0x3941ccu;
    // NOP
label_3941d0:
    // 0x3941d0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3941d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3941d4:
    // 0x3941d4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3941d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3941d8:
    // 0x3941d8: 0x2040018  mult        $zero, $s0, $a0
    ctx->pc = 0x3941d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3941dc:
    // 0x3941dc: 0x24a3e880  addiu       $v1, $a1, -0x1780
    ctx->pc = 0x3941dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_3941e0:
    // 0x3941e0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3941e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3941e4:
    // 0x3941e4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3941e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3941e8:
    // 0x3941e8: 0x2012  mflo        $a0
    ctx->pc = 0x3941e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3941ec:
    // 0x3941ec: 0x40f809  jalr        $v0
label_3941f0:
    if (ctx->pc == 0x3941F0u) {
        ctx->pc = 0x3941F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3941ECu;
        // 0x3941f0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3941F4u;
        goto label_3941f4;
    }
    ctx->pc = 0x3941ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3941F4u);
        ctx->pc = 0x3941F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3941ECu;
        // 0x3941f0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3941ECu, 0x3941F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3941F4u;
label_3941f4:
    // 0x3941f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3941f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3941f8:
    // 0x3941f8: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_3941fc:
    if (ctx->pc == 0x3941FCu) {
        ctx->pc = 0x3941FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3941F8u;
        // 0x3941fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394200u;
        goto label_394200;
    }
    ctx->pc = 0x3941F8u;
    {
        const bool branch_taken_0x3941f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3941FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3941F8u;
        // 0x3941fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3941f8) {
            ctx->pc = 0x3942C4u;
            goto label_3942c4;
        }
    }
    ctx->pc = 0x394200u;
label_394200:
    // 0x394200: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x394200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_394204:
    // 0x394204: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x394204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_394208:
    // 0x394208: 0x1a000013  blez        $s0, . + 4 + (0x13 << 2)
label_39420c:
    if (ctx->pc == 0x39420Cu) {
        ctx->pc = 0x39420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394208u;
        // 0x39420c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394210u;
        goto label_394210;
    }
    ctx->pc = 0x394208u;
    {
        const bool branch_taken_0x394208 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x39420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394208u;
        // 0x39420c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394208) {
            ctx->pc = 0x394258u;
            goto label_394258;
        }
    }
    ctx->pc = 0x394210u;
label_394210:
    // 0x394210: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_394214:
    if (ctx->pc == 0x394214u) {
        ctx->pc = 0x394214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394210u;
        // 0x394214: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x394218u;
        goto label_394218;
    }
    ctx->pc = 0x394210u;
    {
        const bool branch_taken_0x394210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x394214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394210u;
        // 0x394214: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394210) {
            ctx->pc = 0x394274u;
            goto label_394274;
        }
    }
    ctx->pc = 0x394218u;
label_394218:
    // 0x394218: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_39421c:
    if (ctx->pc == 0x39421Cu) {
        ctx->pc = 0x39421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394218u;
        // 0x39421c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394220u;
        goto label_394220;
    }
    ctx->pc = 0x394218u;
    {
        const bool branch_taken_0x394218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394218) {
            ctx->pc = 0x39421Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394218u;
            // 0x39421c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39425Cu;
            goto label_39425c;
        }
    }
    ctx->pc = 0x394220u;
label_394220:
    // 0x394220: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x394220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_394224:
    // 0x394224: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_394228:
    if (ctx->pc == 0x394228u) {
        ctx->pc = 0x394228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394224u;
        // 0x394228: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39422Cu;
        goto label_39422c;
    }
    ctx->pc = 0x394224u;
    {
        const bool branch_taken_0x394224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394224) {
            ctx->pc = 0x394228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394224u;
            // 0x394228: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394248u;
            goto label_394248;
        }
    }
    ctx->pc = 0x39422Cu;
label_39422c:
    // 0x39422c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x39422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_394230:
    // 0x394230: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x394230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394234:
    // 0x394234: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x394234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_394238:
    // 0x394238: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x394238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_39423c:
    // 0x39423c: 0xaca50004  sw          $a1, 0x4($a1)
    ctx->pc = 0x39423cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 5));
label_394240:
    // 0x394240: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x394240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_394244:
    // 0x394244: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x394244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_394248:
    // 0x394248: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x394248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_39424c:
    // 0x39424c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x39424cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_394250:
    // 0x394250: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x394250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_394254:
    // 0x394254: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x394254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_394258:
    // 0x394258: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x394258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_39425c:
    // 0x39425c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x39425cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_394260:
    // 0x394260: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x394260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_394264:
    // 0x394264: 0x110102b  sltu        $v0, $t0, $s0
    ctx->pc = 0x394264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_394268:
    // 0x394268: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x394268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_39426c:
    // 0x39426c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_394270:
    if (ctx->pc == 0x394270u) {
        ctx->pc = 0x394270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39426Cu;
        // 0x394270: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394274u;
        goto label_394274;
    }
    ctx->pc = 0x39426Cu;
    {
        const bool branch_taken_0x39426c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39426Cu;
        // 0x394270: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39426c) {
            ctx->pc = 0x3942C4u;
            goto label_3942c4;
        }
    }
    ctx->pc = 0x394274u;
label_394274:
    // 0x394274: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x394274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_394278:
    // 0x394278: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x394278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39427c:
    // 0x39427c: 0x0  nop
    ctx->pc = 0x39427cu;
    // NOP
label_394280:
    // 0x394280: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x394280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_394284:
    // 0x394284: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x394284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_394288:
    // 0x394288: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x394288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_39428c:
    // 0x39428c: 0x24a30018  addiu       $v1, $a1, 0x18
    ctx->pc = 0x39428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_394290:
    // 0x394290: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x394290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_394294:
    // 0x394294: 0x24a40024  addiu       $a0, $a1, 0x24
    ctx->pc = 0x394294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_394298:
    // 0x394298: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x394298u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_39429c:
    // 0x39429c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x39429cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3942a0:
    // 0x3942a0: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x3942a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_3942a4:
    // 0x3942a4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x3942a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_3942a8:
    // 0x3942a8: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x3942a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
label_3942ac:
    // 0x3942ac: 0x110102b  sltu        $v0, $t0, $s0
    ctx->pc = 0x3942acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3942b0:
    // 0x3942b0: 0xace40024  sw          $a0, 0x24($a3)
    ctx->pc = 0x3942b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 4));
label_3942b4:
    // 0x3942b4: 0xacc40028  sw          $a0, 0x28($a2)
    ctx->pc = 0x3942b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
label_3942b8:
    // 0x3942b8: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x3942b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_3942bc:
    // 0x3942bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3942c0:
    if (ctx->pc == 0x3942C0u) {
        ctx->pc = 0x3942C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942BCu;
        // 0x3942c0: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3942C4u;
        goto label_3942c4;
    }
    ctx->pc = 0x3942BCu;
    {
        const bool branch_taken_0x3942bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3942C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942BCu;
        // 0x3942c0: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942bc) {
            ctx->pc = 0x394280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394280;
        }
    }
    ctx->pc = 0x3942C4u;
label_3942c4:
    // 0x3942c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3942c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3942c8:
    // 0x3942c8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3942c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3942cc:
    // 0x3942cc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3942ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3942d0:
    // 0x3942d0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3942d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3942d4:
    // 0x3942d4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3942d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3942d8:
    // 0x3942d8: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x3942d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3942dc:
    // 0x3942dc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3942dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3942e0:
    // 0x3942e0: 0x2012  mflo        $a0
    ctx->pc = 0x3942e0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3942e4:
    // 0x3942e4: 0x40f809  jalr        $v0
label_3942e8:
    if (ctx->pc == 0x3942E8u) {
        ctx->pc = 0x3942E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942E4u;
        // 0x3942e8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3942ECu;
        goto label_3942ec;
    }
    ctx->pc = 0x3942E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3942ECu);
        ctx->pc = 0x3942E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942E4u;
        // 0x3942e8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3942E4u, 0x3942ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3942ECu;
label_3942ec:
    // 0x3942ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3942ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3942f0:
    // 0x3942f0: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x3942f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_3942f4:
    // 0x3942f4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3942f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3942f8:
    // 0x3942f8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3942f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3942fc:
    // 0x3942fc: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x3942fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_394300:
    // 0x394300: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x394300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_394304:
    // 0x394304: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x394304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_394308:
    // 0x394308: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x394308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_39430c:
    // 0x39430c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x39430cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_394310:
    // 0x394310: 0x40f809  jalr        $v0
label_394314:
    if (ctx->pc == 0x394314u) {
        ctx->pc = 0x394314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394310u;
        // 0x394314: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394318u;
        goto label_394318;
    }
    ctx->pc = 0x394310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394318u);
        ctx->pc = 0x394314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394310u;
        // 0x394314: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394310u, 0x394318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394318u;
label_394318:
    // 0x394318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x394318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39431c:
    // 0x39431c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_394320:
    // 0x394320: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x394320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_394324:
    // 0x394324: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x394324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_394328:
    // 0x394328: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x394328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_39432c:
    // 0x39432c: 0x262e002c  addiu       $t6, $s1, 0x2C
    ctx->pc = 0x39432cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_394330:
    // 0x394330: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x394330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_394334:
    // 0x394334: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x394334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_394338:
    // 0x394338: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x394338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_39433c:
    // 0x39433c: 0x26270004  addiu       $a3, $s1, 0x4
    ctx->pc = 0x39433cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_394340:
    // 0x394340: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x394340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_394344:
    // 0x394344: 0x2626001c  addiu       $a2, $s1, 0x1C
    ctx->pc = 0x394344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_394348:
    // 0x394348: 0x1c2b821  addu        $s7, $t6, $v0
    ctx->pc = 0x394348u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_39434c:
    // 0x39434c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39434cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394350:
    // 0x394350: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x394350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_394354:
    // 0x394354: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x394354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
label_394358:
    // 0x394358: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x394358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_39435c:
    // 0x39435c: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x39435cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
label_394360:
    // 0x394360: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x394360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_394364:
    // 0x394364: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x394364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_394368:
    // 0x394368: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x394368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
label_39436c:
    // 0x39436c: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x39436cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
label_394370:
    // 0x394370: 0xae26001c  sw          $a2, 0x1C($s1)
    ctx->pc = 0x394370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 6));
label_394374:
    // 0x394374: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
label_394378:
    if (ctx->pc == 0x394378u) {
        ctx->pc = 0x394378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394374u;
        // 0x394378: 0xae260020  sw          $a2, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39437Cu;
        goto label_39437c;
    }
    ctx->pc = 0x394374u;
    {
        const bool branch_taken_0x394374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394374u;
        // 0x394378: 0xae260020  sw          $a2, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394374) {
            ctx->pc = 0x394624u;
            goto label_394624;
        }
    }
    ctx->pc = 0x39437Cu;
label_39437c:
    // 0x39437c: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x39437cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_394380:
    // 0x394380: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x394380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_394384:
    // 0x394384: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x394384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
label_394388:
    // 0x394388: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x394388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_39438c:
    // 0x39438c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x39438cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_394390:
    // 0x394390: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x394390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_394394:
    // 0x394394: 0x25c60028  addiu       $a2, $t6, 0x28
    ctx->pc = 0x394394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 40));
label_394398:
    // 0x394398: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x394398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_39439c:
    // 0x39439c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x39439cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3943a0:
    // 0x3943a0: 0xadc5000c  sw          $a1, 0xC($t6)
    ctx->pc = 0x3943a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 5));
label_3943a4:
    // 0x3943a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3943a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3943a8:
    // 0x3943a8: 0xadc30008  sw          $v1, 0x8($t6)
    ctx->pc = 0x3943a8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
label_3943ac:
    // 0x3943ac: 0x25c50008  addiu       $a1, $t6, 0x8
    ctx->pc = 0x3943acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_3943b0:
    // 0x3943b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3943b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3943b4:
    // 0x3943b4: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x3943b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3943b8:
    // 0x3943b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3943b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3943bc:
    // 0x3943bc: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x3943bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
label_3943c0:
    // 0x3943c0: 0x247e0004  addiu       $fp, $v1, 0x4
    ctx->pc = 0x3943c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3943c4:
    // 0x3943c4: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x3943c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3943c8:
    // 0x3943c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3943c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3943cc:
    // 0x3943cc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3943ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3943d0:
    // 0x3943d0: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x3943d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
label_3943d4:
    // 0x3943d4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3943d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_3943d8:
    // 0x3943d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3943d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3943dc:
    // 0x3943dc: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x3943dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
label_3943e0:
    // 0x3943e0: 0xa5c30028  sh          $v1, 0x28($t6)
    ctx->pc = 0x3943e0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 40), (uint16_t)GPR_U32(ctx, 3));
label_3943e4:
    // 0x3943e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3943e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3943e8:
    // 0x3943e8: 0x25c30034  addiu       $v1, $t6, 0x34
    ctx->pc = 0x3943e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 52));
label_3943ec:
    // 0x3943ec: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x3943ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_3943f0:
    // 0x3943f0: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x3943f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_3943f4:
    // 0x3943f4: 0x25c5001c  addiu       $a1, $t6, 0x1C
    ctx->pc = 0x3943f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 28));
label_3943f8:
    // 0x3943f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3943f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_3943fc:
    // 0x3943fc: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x3943fcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
label_394400:
    // 0x394400: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x394400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_394404:
    // 0x394404: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x394404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_394408:
    // 0x394408: 0xa5c3002a  sh          $v1, 0x2A($t6)
    ctx->pc = 0x394408u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 42), (uint16_t)GPR_U32(ctx, 3));
label_39440c:
    // 0x39440c: 0xadc20004  sw          $v0, 0x4($t6)
    ctx->pc = 0x39440cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 2));
label_394410:
    // 0x394410: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x394410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_394414:
    // 0x394414: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x394414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_394418:
    // 0x394418: 0xa5c3002c  sh          $v1, 0x2C($t6)
    ctx->pc = 0x394418u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 44), (uint16_t)GPR_U32(ctx, 3));
label_39441c:
    // 0x39441c: 0xac4e0004  sw          $t6, 0x4($v0)
    ctx->pc = 0x39441cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 14));
label_394420:
    // 0x394420: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x394420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_394424:
    // 0x394424: 0xae2e0004  sw          $t6, 0x4($s1)
    ctx->pc = 0x394424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
label_394428:
    // 0x394428: 0xadc30018  sw          $v1, 0x18($t6)
    ctx->pc = 0x394428u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 3));
label_39442c:
    // 0x39442c: 0xadc00030  sw          $zero, 0x30($t6)
    ctx->pc = 0x39442cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
label_394430:
    // 0x394430: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x394430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_394434:
    // 0x394434: 0x0  nop
    ctx->pc = 0x394434u;
    // NOP
label_394438:
    // 0x394438: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x394438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39443c:
    // 0x39443c: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x39443cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_394440:
    // 0x394440: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x394440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_394444:
    // 0x394444: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x394444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_394448:
    // 0x394448: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x394448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_39444c:
    // 0x39444c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_394450:
    if (ctx->pc == 0x394450u) {
        ctx->pc = 0x394450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39444Cu;
        // 0x394450: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x394454u;
        goto label_394454;
    }
    ctx->pc = 0x39444Cu;
    {
        const bool branch_taken_0x39444c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39444c) {
            ctx->pc = 0x394450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39444Cu;
            // 0x394450: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x394454u;
            goto label_394454;
        }
    }
    ctx->pc = 0x394454u;
label_394454:
    // 0x394454: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x394454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_394458:
    // 0x394458: 0x94920000  lhu         $s2, 0x0($a0)
    ctx->pc = 0x394458u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_39445c:
    // 0x39445c: 0x1810  mfhi        $v1
    ctx->pc = 0x39445cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_394460:
    // 0x394460: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x394460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_394464:
    // 0x394464: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x394464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_394468:
    // 0x394468: 0x94790000  lhu         $t9, 0x0($v1)
    ctx->pc = 0x394468u;
    SET_GPR_ZE32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_39446c:
    // 0x39446c: 0x332102b  sltu        $v0, $t9, $s2
    ctx->pc = 0x39446cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_394470:
    // 0x394470: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_394474:
    if (ctx->pc == 0x394474u) {
        ctx->pc = 0x394474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394470u;
        // 0x394474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394478u;
        goto label_394478;
    }
    ctx->pc = 0x394470u;
    {
        const bool branch_taken_0x394470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394470u;
        // 0x394474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394470) {
            ctx->pc = 0x394480u;
            goto label_394480;
        }
    }
    ctx->pc = 0x394478u;
label_394478:
    // 0x394478: 0x320902d  daddu       $s2, $t9, $zero
    ctx->pc = 0x394478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_39447c:
    // 0x39447c: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x39447cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394480:
    // 0x394480: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x394480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_394484:
    // 0x394484: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x394484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_394488:
    // 0x394488: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x394488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_39448c:
    // 0x39448c: 0x400013  mtlo        $v0
    ctx->pc = 0x39448cu;
    ctx->lo = GPR_U64(ctx, 2);
label_394490:
    // 0x394490: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x394490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_394494:
    // 0x394494: 0x72428000  madd        $s0, $s2, $v0
    ctx->pc = 0x394494u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_394498:
    // 0x394498: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x394498u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39449c:
    // 0x39449c: 0x26150004  addiu       $s5, $s0, 0x4
    ctx->pc = 0x39449cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3944a0:
    // 0x3944a0: 0x11350039  beq         $t1, $s5, . + 4 + (0x39 << 2)
label_3944a4:
    if (ctx->pc == 0x3944A4u) {
        ctx->pc = 0x3944A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944A0u;
        // 0x3944a4: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944A8u;
        goto label_3944a8;
    }
    ctx->pc = 0x3944A0u;
    {
        const bool branch_taken_0x3944a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 21));
        ctx->pc = 0x3944A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944A0u;
        // 0x3944a4: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3944a0) {
            ctx->pc = 0x394588u;
            goto label_394588;
        }
    }
    ctx->pc = 0x3944A8u;
label_3944a8:
    // 0x3944a8: 0x8d2bfffc  lw          $t3, -0x4($t1)
    ctx->pc = 0x3944a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967292)));
label_3944ac:
    // 0x3944ac: 0x0  nop
    ctx->pc = 0x3944acu;
    // NOP
label_3944b0:
    // 0x3944b0: 0x9562001a  lhu         $v0, 0x1A($t3)
    ctx->pc = 0x3944b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26)));
label_3944b4:
    // 0x3944b4: 0x5722002a  bnel        $t9, $v0, . + 4 + (0x2A << 2)
label_3944b8:
    if (ctx->pc == 0x3944B8u) {
        ctx->pc = 0x3944B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944B4u;
        // 0x3944b8: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944BCu;
        goto label_3944bc;
    }
    ctx->pc = 0x3944B4u;
    {
        const bool branch_taken_0x3944b4 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 2));
        if (branch_taken_0x3944b4) {
            ctx->pc = 0x3944B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3944B4u;
            // 0x3944b8: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394560u;
            goto label_394560;
        }
    }
    ctx->pc = 0x3944BCu;
label_3944bc:
    // 0x3944bc: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x3944bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
label_3944c0:
    // 0x3944c0: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_3944c4:
    if (ctx->pc == 0x3944C4u) {
        ctx->pc = 0x3944C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944C0u;
        // 0x3944c4: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944C8u;
        goto label_3944c8;
    }
    ctx->pc = 0x3944C0u;
    {
        const bool branch_taken_0x3944c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3944c0) {
            ctx->pc = 0x3944C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3944C0u;
            // 0x3944c4: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394560u;
            goto label_394560;
        }
    }
    ctx->pc = 0x3944C8u;
label_3944c8:
    // 0x3944c8: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x3944c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
label_3944cc:
    // 0x3944cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3944ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3944d0:
    // 0x3944d0: 0x8d6a0010  lw          $t2, 0x10($t3)
    ctx->pc = 0x3944d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_3944d4:
    // 0x3944d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3944d8:
    if (ctx->pc == 0x3944D8u) {
        ctx->pc = 0x3944D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944D4u;
        // 0x3944d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944DCu;
        goto label_3944dc;
    }
    ctx->pc = 0x3944D4u;
    {
        const bool branch_taken_0x3944d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3944D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944D4u;
        // 0x3944d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3944d4) {
            ctx->pc = 0x394550u;
            goto label_394550;
        }
    }
    ctx->pc = 0x3944DCu;
label_3944dc:
    // 0x3944dc: 0x8d4d0018  lw          $t5, 0x18($t2)
    ctx->pc = 0x3944dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_3944e0:
    // 0x3944e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3944e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3944e4:
    // 0x3944e4: 0x8fac0034  lw          $t4, 0x34($sp)
    ctx->pc = 0x3944e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3944e8:
    // 0x3944e8: 0x25580028  addiu       $t8, $t2, 0x28
    ctx->pc = 0x3944e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
label_3944ec:
    // 0x3944ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3944ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3944f0:
    // 0x3944f0: 0x11a00013  beqz        $t5, . + 4 + (0x13 << 2)
label_3944f4:
    if (ctx->pc == 0x3944F4u) {
        ctx->pc = 0x3944F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944F0u;
        // 0x3944f4: 0x246f0001  addiu       $t7, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944F8u;
        goto label_3944f8;
    }
    ctx->pc = 0x3944F0u;
    {
        const bool branch_taken_0x3944f0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3944F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944F0u;
        // 0x3944f4: 0x246f0001  addiu       $t7, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3944f0) {
            ctx->pc = 0x394540u;
            goto label_394540;
        }
    }
    ctx->pc = 0x3944F8u;
label_3944f8:
    // 0x3944f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3944f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3944fc:
    // 0x3944fc: 0x95440028  lhu         $a0, 0x28($t2)
    ctx->pc = 0x3944fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
label_394500:
    // 0x394500: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x394500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394504:
    // 0x394504: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x394504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_394508:
    // 0x394508: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x394508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_39450c:
    // 0x39450c: 0x5064000c  beql        $v1, $a0, . + 4 + (0xC << 2)
label_394510:
    if (ctx->pc == 0x394510u) {
        ctx->pc = 0x394510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39450Cu;
        // 0x394510: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394514u;
        goto label_394514;
    }
    ctx->pc = 0x39450Cu;
    {
        const bool branch_taken_0x39450c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x39450c) {
            ctx->pc = 0x394510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39450Cu;
            // 0x394510: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394540u;
            goto label_394540;
        }
    }
    ctx->pc = 0x394514u;
label_394514:
    // 0x394514: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x394514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_394518:
    // 0x394518: 0xcd102b  sltu        $v0, $a2, $t5
    ctx->pc = 0x394518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_39451c:
    // 0x39451c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_394520:
    if (ctx->pc == 0x394520u) {
        ctx->pc = 0x394520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39451Cu;
        // 0x394520: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394524u;
        goto label_394524;
    }
    ctx->pc = 0x39451Cu;
    {
        const bool branch_taken_0x39451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39451Cu;
        // 0x394520: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39451c) {
            ctx->pc = 0x394540u;
            goto label_394540;
        }
    }
    ctx->pc = 0x394524u;
label_394524:
    // 0x394524: 0x1882021  addu        $a0, $t4, $t0
    ctx->pc = 0x394524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_394528:
    // 0x394528: 0x3031821  addu        $v1, $t8, $v1
    ctx->pc = 0x394528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
label_39452c:
    // 0x39452c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x39452cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_394530:
    // 0x394530: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x394530u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_394534:
    // 0x394534: 0x54a2fff8  bnel        $a1, $v0, . + 4 + (-0x8 << 2)
label_394538:
    if (ctx->pc == 0x394538u) {
        ctx->pc = 0x394538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394534u;
        // 0x394538: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39453Cu;
        goto label_39453c;
    }
    ctx->pc = 0x394534u;
    {
        const bool branch_taken_0x394534 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x394534) {
            ctx->pc = 0x394538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394534u;
            // 0x394538: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394518;
        }
    }
    ctx->pc = 0x39453Cu;
label_39453c:
    // 0x39453c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x39453cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_394540:
    // 0x394540: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x394540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_394544:
    // 0x394544: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x394544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_394548:
    // 0x394548: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
label_39454c:
    if (ctx->pc == 0x39454Cu) {
        ctx->pc = 0x39454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394548u;
        // 0x39454c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394550u;
        goto label_394550;
    }
    ctx->pc = 0x394548u;
    {
        const bool branch_taken_0x394548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394548) {
            ctx->pc = 0x39454Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394548u;
            // 0x39454c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3944F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3944f0;
        }
    }
    ctx->pc = 0x394550u;
label_394550:
    // 0x394550: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x394550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_394554:
    // 0x394554: 0x10e30004  beq         $a3, $v1, . + 4 + (0x4 << 2)
label_394558:
    if (ctx->pc == 0x394558u) {
        ctx->pc = 0x39455Cu;
        goto label_39455c;
    }
    ctx->pc = 0x394554u;
    {
        const bool branch_taken_0x394554 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x394554) {
            ctx->pc = 0x394568u;
            goto label_394568;
        }
    }
    ctx->pc = 0x39455Cu;
label_39455c:
    // 0x39455c: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x39455cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_394560:
    // 0x394560: 0x5535ffd3  bnel        $t1, $s5, . + 4 + (-0x2D << 2)
label_394564:
    if (ctx->pc == 0x394564u) {
        ctx->pc = 0x394564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394560u;
        // 0x394564: 0x8d2bfffc  lw          $t3, -0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394568u;
        goto label_394568;
    }
    ctx->pc = 0x394560u;
    {
        const bool branch_taken_0x394560 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 21));
        if (branch_taken_0x394560) {
            ctx->pc = 0x394564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394560u;
            // 0x394564: 0x8d2bfffc  lw          $t3, -0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3944B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3944b0;
        }
    }
    ctx->pc = 0x394568u;
label_394568:
    // 0x394568: 0x11350006  beq         $t1, $s5, . + 4 + (0x6 << 2)
label_39456c:
    if (ctx->pc == 0x39456Cu) {
        ctx->pc = 0x39456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394568u;
        // 0x39456c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394570u;
        goto label_394570;
    }
    ctx->pc = 0x394568u;
    {
        const bool branch_taken_0x394568 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 21));
        ctx->pc = 0x39456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394568u;
        // 0x39456c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394568) {
            ctx->pc = 0x394584u;
            goto label_394584;
        }
    }
    ctx->pc = 0x394570u;
label_394570:
    // 0x394570: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x394570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_394574:
    // 0x394574: 0xad6e0014  sw          $t6, 0x14($t3)
    ctx->pc = 0x394574u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 14));
label_394578:
    // 0x394578: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x394578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_39457c:
    // 0x39457c: 0x10000020  b           . + 4 + (0x20 << 2)
label_394580:
    if (ctx->pc == 0x394580u) {
        ctx->pc = 0x394580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39457Cu;
        // 0x394580: 0xac4b0000  sw          $t3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394584u;
        goto label_394584;
    }
    ctx->pc = 0x39457Cu;
    {
        const bool branch_taken_0x39457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39457Cu;
        // 0x394580: 0xac4b0000  sw          $t3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39457c) {
            ctx->pc = 0x394600u;
            goto label_394600;
        }
    }
    ctx->pc = 0x394584u;
label_394584:
    // 0x394584: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x394584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_394588:
    // 0x394588: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x394588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_39458c:
    // 0x39458c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x39458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_394590:
    // 0x394590: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x394590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_394594:
    // 0x394594: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x394594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_394598:
    // 0x394598: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x394598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39459c:
    // 0x39459c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x39459cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3945a0:
    // 0x3945a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3945a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3945a4:
    // 0x3945a4: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x3945a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3945a8:
    // 0x3945a8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3945a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_3945ac:
    // 0x3945ac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3945acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3945b0:
    // 0x3945b0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3945b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3945b4:
    // 0x3945b4: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x3945b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_3945b8:
    // 0x3945b8: 0xac570004  sw          $s7, 0x4($v0)
    ctx->pc = 0x3945b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 23));
label_3945bc:
    // 0x3945bc: 0xae37001c  sw          $s7, 0x1C($s1)
    ctx->pc = 0x3945bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
label_3945c0:
    // 0x3945c0: 0xaed7fffc  sw          $s7, -0x4($s6)
    ctx->pc = 0x3945c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294967292), GPR_U32(ctx, 23));
label_3945c4:
    // 0x3945c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3945c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3945c8:
    // 0x3945c8: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x3945c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_3945cc:
    // 0x3945cc: 0xaec40004  sw          $a0, 0x4($s6)
    ctx->pc = 0x3945ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 4));
label_3945d0:
    // 0x3945d0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3945d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_3945d4:
    // 0x3945d4: 0xa6720018  sh          $s2, 0x18($s3)
    ctx->pc = 0x3945d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 18));
label_3945d8:
    // 0x3945d8: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x3945d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_3945dc:
    // 0x3945dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3945dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3945e0:
    // 0x3945e0: 0xa679001a  sh          $t9, 0x1A($s3)
    ctx->pc = 0x3945e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 26), (uint16_t)GPR_U32(ctx, 25));
label_3945e4:
    // 0x3945e4: 0xac5e0004  sw          $fp, 0x4($v0)
    ctx->pc = 0x3945e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 30));
label_3945e8:
    // 0x3945e8: 0xae6e0010  sw          $t6, 0x10($s3)
    ctx->pc = 0x3945e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 14));
label_3945ec:
    // 0x3945ec: 0xae1e0004  sw          $fp, 0x4($s0)
    ctx->pc = 0x3945ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 30));
label_3945f0:
    // 0x3945f0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3945f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_3945f4:
    // 0x3945f4: 0x27de000c  addiu       $fp, $fp, 0xC
    ctx->pc = 0x3945f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_3945f8:
    // 0x3945f8: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x3945f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_3945fc:
    // 0x3945fc: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x3945fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_394600:
    // 0x394600: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x394600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_394604:
    // 0x394604: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x394604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_394608:
    // 0x394608: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
label_39460c:
    if (ctx->pc == 0x39460Cu) {
        ctx->pc = 0x39460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394608u;
        // 0x39460c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394610u;
        goto label_394610;
    }
    ctx->pc = 0x394608u;
    {
        const bool branch_taken_0x394608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394608u;
        // 0x39460c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394608) {
            ctx->pc = 0x394438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394438;
        }
    }
    ctx->pc = 0x394610u;
label_394610:
    // 0x394610: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x394610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_394614:
    // 0x394614: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x394614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_394618:
    // 0x394618: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x394618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39461c:
    // 0x39461c: 0x1440ff5a  bnez        $v0, . + 4 + (-0xA6 << 2)
label_394620:
    if (ctx->pc == 0x394620u) {
        ctx->pc = 0x394620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39461Cu;
        // 0x394620: 0x8fae0038  lw          $t6, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394624u;
        goto label_394624;
    }
    ctx->pc = 0x39461Cu;
    {
        const bool branch_taken_0x39461c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39461Cu;
        // 0x394620: 0x8fae0038  lw          $t6, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39461c) {
            ctx->pc = 0x394388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394388;
        }
    }
    ctx->pc = 0x394624u;
label_394624:
    // 0x394624: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x394624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_394628:
    // 0x394628: 0x2490e880  addiu       $s0, $a0, -0x1780
    ctx->pc = 0x394628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_39462c:
    // 0x39462c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x39462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_394630:
    // 0x394630: 0x40f809  jalr        $v0
label_394634:
    if (ctx->pc == 0x394634u) {
        ctx->pc = 0x394634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394630u;
        // 0x394634: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394638u;
        goto label_394638;
    }
    ctx->pc = 0x394630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394638u);
        ctx->pc = 0x394634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394630u;
        // 0x394634: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394630u, 0x394638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394638u;
label_394638:
    // 0x394638: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x394638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_39463c:
    // 0x39463c: 0x60f809  jalr        $v1
label_394640:
    if (ctx->pc == 0x394640u) {
        ctx->pc = 0x394640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39463Cu;
        // 0x394640: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394644u;
        goto label_394644;
    }
    ctx->pc = 0x39463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x394644u);
        ctx->pc = 0x394640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39463Cu;
        // 0x394640: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39463Cu, 0x394644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394644u;
label_394644:
    // 0x394644: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x394644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394648:
    // 0x394648: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x394648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_39464c:
    // 0x39464c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x39464cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_394650:
    // 0x394650: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x394650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_394654:
    // 0x394654: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x394654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_394658:
    // 0x394658: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x394658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39465c:
    // 0x39465c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x39465cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_394660:
    // 0x394660: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x394660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_394664:
    // 0x394664: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x394664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_394668:
    // 0x394668: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x394668u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39466c:
    // 0x39466c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39466cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_394670:
    // 0x394670: 0x3e00008  jr          $ra
label_394674:
    if (ctx->pc == 0x394674u) {
        ctx->pc = 0x394674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394670u;
        // 0x394674: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394678u;
        goto label_fallthrough_0x394670;
    }
    ctx->pc = 0x394670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394670u;
        // 0x394674: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x394670:
    ctx->pc = 0x394678u;
}
