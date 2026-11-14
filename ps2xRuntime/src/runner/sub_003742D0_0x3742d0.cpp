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

// Function: sub_003742D0
// Address: 0x3742d0 - 0x3746e0
void sub_003742D0_0x3742d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003742D0_0x3742d0");
#endif

    switch (ctx->pc) {
        case 0x3742d0u: goto label_3742d0;
        case 0x3742d4u: goto label_3742d4;
        case 0x3742d8u: goto label_3742d8;
        case 0x3742dcu: goto label_3742dc;
        case 0x3742e0u: goto label_3742e0;
        case 0x3742e4u: goto label_3742e4;
        case 0x3742e8u: goto label_3742e8;
        case 0x3742ecu: goto label_3742ec;
        case 0x3742f0u: goto label_3742f0;
        case 0x3742f4u: goto label_3742f4;
        case 0x3742f8u: goto label_3742f8;
        case 0x3742fcu: goto label_3742fc;
        case 0x374300u: goto label_374300;
        case 0x374304u: goto label_374304;
        case 0x374308u: goto label_374308;
        case 0x37430cu: goto label_37430c;
        case 0x374310u: goto label_374310;
        case 0x374314u: goto label_374314;
        case 0x374318u: goto label_374318;
        case 0x37431cu: goto label_37431c;
        case 0x374320u: goto label_374320;
        case 0x374324u: goto label_374324;
        case 0x374328u: goto label_374328;
        case 0x37432cu: goto label_37432c;
        case 0x374330u: goto label_374330;
        case 0x374334u: goto label_374334;
        case 0x374338u: goto label_374338;
        case 0x37433cu: goto label_37433c;
        case 0x374340u: goto label_374340;
        case 0x374344u: goto label_374344;
        case 0x374348u: goto label_374348;
        case 0x37434cu: goto label_37434c;
        case 0x374350u: goto label_374350;
        case 0x374354u: goto label_374354;
        case 0x374358u: goto label_374358;
        case 0x37435cu: goto label_37435c;
        case 0x374360u: goto label_374360;
        case 0x374364u: goto label_374364;
        case 0x374368u: goto label_374368;
        case 0x37436cu: goto label_37436c;
        case 0x374370u: goto label_374370;
        case 0x374374u: goto label_374374;
        case 0x374378u: goto label_374378;
        case 0x37437cu: goto label_37437c;
        case 0x374380u: goto label_374380;
        case 0x374384u: goto label_374384;
        case 0x374388u: goto label_374388;
        case 0x37438cu: goto label_37438c;
        case 0x374390u: goto label_374390;
        case 0x374394u: goto label_374394;
        case 0x374398u: goto label_374398;
        case 0x37439cu: goto label_37439c;
        case 0x3743a0u: goto label_3743a0;
        case 0x3743a4u: goto label_3743a4;
        case 0x3743a8u: goto label_3743a8;
        case 0x3743acu: goto label_3743ac;
        case 0x3743b0u: goto label_3743b0;
        case 0x3743b4u: goto label_3743b4;
        case 0x3743b8u: goto label_3743b8;
        case 0x3743bcu: goto label_3743bc;
        case 0x3743c0u: goto label_3743c0;
        case 0x3743c4u: goto label_3743c4;
        case 0x3743c8u: goto label_3743c8;
        case 0x3743ccu: goto label_3743cc;
        case 0x3743d0u: goto label_3743d0;
        case 0x3743d4u: goto label_3743d4;
        case 0x3743d8u: goto label_3743d8;
        case 0x3743dcu: goto label_3743dc;
        case 0x3743e0u: goto label_3743e0;
        case 0x3743e4u: goto label_3743e4;
        case 0x3743e8u: goto label_3743e8;
        case 0x3743ecu: goto label_3743ec;
        case 0x3743f0u: goto label_3743f0;
        case 0x3743f4u: goto label_3743f4;
        case 0x3743f8u: goto label_3743f8;
        case 0x3743fcu: goto label_3743fc;
        case 0x374400u: goto label_374400;
        case 0x374404u: goto label_374404;
        case 0x374408u: goto label_374408;
        case 0x37440cu: goto label_37440c;
        case 0x374410u: goto label_374410;
        case 0x374414u: goto label_374414;
        case 0x374418u: goto label_374418;
        case 0x37441cu: goto label_37441c;
        case 0x374420u: goto label_374420;
        case 0x374424u: goto label_374424;
        case 0x374428u: goto label_374428;
        case 0x37442cu: goto label_37442c;
        case 0x374430u: goto label_374430;
        case 0x374434u: goto label_374434;
        case 0x374438u: goto label_374438;
        case 0x37443cu: goto label_37443c;
        case 0x374440u: goto label_374440;
        case 0x374444u: goto label_374444;
        case 0x374448u: goto label_374448;
        case 0x37444cu: goto label_37444c;
        case 0x374450u: goto label_374450;
        case 0x374454u: goto label_374454;
        case 0x374458u: goto label_374458;
        case 0x37445cu: goto label_37445c;
        case 0x374460u: goto label_374460;
        case 0x374464u: goto label_374464;
        case 0x374468u: goto label_374468;
        case 0x37446cu: goto label_37446c;
        case 0x374470u: goto label_374470;
        case 0x374474u: goto label_374474;
        case 0x374478u: goto label_374478;
        case 0x37447cu: goto label_37447c;
        case 0x374480u: goto label_374480;
        case 0x374484u: goto label_374484;
        case 0x374488u: goto label_374488;
        case 0x37448cu: goto label_37448c;
        case 0x374490u: goto label_374490;
        case 0x374494u: goto label_374494;
        case 0x374498u: goto label_374498;
        case 0x37449cu: goto label_37449c;
        case 0x3744a0u: goto label_3744a0;
        case 0x3744a4u: goto label_3744a4;
        case 0x3744a8u: goto label_3744a8;
        case 0x3744acu: goto label_3744ac;
        case 0x3744b0u: goto label_3744b0;
        case 0x3744b4u: goto label_3744b4;
        case 0x3744b8u: goto label_3744b8;
        case 0x3744bcu: goto label_3744bc;
        case 0x3744c0u: goto label_3744c0;
        case 0x3744c4u: goto label_3744c4;
        case 0x3744c8u: goto label_3744c8;
        case 0x3744ccu: goto label_3744cc;
        case 0x3744d0u: goto label_3744d0;
        case 0x3744d4u: goto label_3744d4;
        case 0x3744d8u: goto label_3744d8;
        case 0x3744dcu: goto label_3744dc;
        case 0x3744e0u: goto label_3744e0;
        case 0x3744e4u: goto label_3744e4;
        case 0x3744e8u: goto label_3744e8;
        case 0x3744ecu: goto label_3744ec;
        case 0x3744f0u: goto label_3744f0;
        case 0x3744f4u: goto label_3744f4;
        case 0x3744f8u: goto label_3744f8;
        case 0x3744fcu: goto label_3744fc;
        case 0x374500u: goto label_374500;
        case 0x374504u: goto label_374504;
        case 0x374508u: goto label_374508;
        case 0x37450cu: goto label_37450c;
        case 0x374510u: goto label_374510;
        case 0x374514u: goto label_374514;
        case 0x374518u: goto label_374518;
        case 0x37451cu: goto label_37451c;
        case 0x374520u: goto label_374520;
        case 0x374524u: goto label_374524;
        case 0x374528u: goto label_374528;
        case 0x37452cu: goto label_37452c;
        case 0x374530u: goto label_374530;
        case 0x374534u: goto label_374534;
        case 0x374538u: goto label_374538;
        case 0x37453cu: goto label_37453c;
        case 0x374540u: goto label_374540;
        case 0x374544u: goto label_374544;
        case 0x374548u: goto label_374548;
        case 0x37454cu: goto label_37454c;
        case 0x374550u: goto label_374550;
        case 0x374554u: goto label_374554;
        case 0x374558u: goto label_374558;
        case 0x37455cu: goto label_37455c;
        case 0x374560u: goto label_374560;
        case 0x374564u: goto label_374564;
        case 0x374568u: goto label_374568;
        case 0x37456cu: goto label_37456c;
        case 0x374570u: goto label_374570;
        case 0x374574u: goto label_374574;
        case 0x374578u: goto label_374578;
        case 0x37457cu: goto label_37457c;
        case 0x374580u: goto label_374580;
        case 0x374584u: goto label_374584;
        case 0x374588u: goto label_374588;
        case 0x37458cu: goto label_37458c;
        case 0x374590u: goto label_374590;
        case 0x374594u: goto label_374594;
        case 0x374598u: goto label_374598;
        case 0x37459cu: goto label_37459c;
        case 0x3745a0u: goto label_3745a0;
        case 0x3745a4u: goto label_3745a4;
        case 0x3745a8u: goto label_3745a8;
        case 0x3745acu: goto label_3745ac;
        case 0x3745b0u: goto label_3745b0;
        case 0x3745b4u: goto label_3745b4;
        case 0x3745b8u: goto label_3745b8;
        case 0x3745bcu: goto label_3745bc;
        case 0x3745c0u: goto label_3745c0;
        case 0x3745c4u: goto label_3745c4;
        case 0x3745c8u: goto label_3745c8;
        case 0x3745ccu: goto label_3745cc;
        case 0x3745d0u: goto label_3745d0;
        case 0x3745d4u: goto label_3745d4;
        case 0x3745d8u: goto label_3745d8;
        case 0x3745dcu: goto label_3745dc;
        case 0x3745e0u: goto label_3745e0;
        case 0x3745e4u: goto label_3745e4;
        case 0x3745e8u: goto label_3745e8;
        case 0x3745ecu: goto label_3745ec;
        case 0x3745f0u: goto label_3745f0;
        case 0x3745f4u: goto label_3745f4;
        case 0x3745f8u: goto label_3745f8;
        case 0x3745fcu: goto label_3745fc;
        case 0x374600u: goto label_374600;
        case 0x374604u: goto label_374604;
        case 0x374608u: goto label_374608;
        case 0x37460cu: goto label_37460c;
        case 0x374610u: goto label_374610;
        case 0x374614u: goto label_374614;
        case 0x374618u: goto label_374618;
        case 0x37461cu: goto label_37461c;
        case 0x374620u: goto label_374620;
        case 0x374624u: goto label_374624;
        case 0x374628u: goto label_374628;
        case 0x37462cu: goto label_37462c;
        case 0x374630u: goto label_374630;
        case 0x374634u: goto label_374634;
        case 0x374638u: goto label_374638;
        case 0x37463cu: goto label_37463c;
        case 0x374640u: goto label_374640;
        case 0x374644u: goto label_374644;
        case 0x374648u: goto label_374648;
        case 0x37464cu: goto label_37464c;
        case 0x374650u: goto label_374650;
        case 0x374654u: goto label_374654;
        case 0x374658u: goto label_374658;
        case 0x37465cu: goto label_37465c;
        case 0x374660u: goto label_374660;
        case 0x374664u: goto label_374664;
        case 0x374668u: goto label_374668;
        case 0x37466cu: goto label_37466c;
        case 0x374670u: goto label_374670;
        case 0x374674u: goto label_374674;
        case 0x374678u: goto label_374678;
        case 0x37467cu: goto label_37467c;
        case 0x374680u: goto label_374680;
        case 0x374684u: goto label_374684;
        case 0x374688u: goto label_374688;
        case 0x37468cu: goto label_37468c;
        case 0x374690u: goto label_374690;
        case 0x374694u: goto label_374694;
        case 0x374698u: goto label_374698;
        case 0x37469cu: goto label_37469c;
        case 0x3746a0u: goto label_3746a0;
        case 0x3746a4u: goto label_3746a4;
        case 0x3746a8u: goto label_3746a8;
        case 0x3746acu: goto label_3746ac;
        case 0x3746b0u: goto label_3746b0;
        case 0x3746b4u: goto label_3746b4;
        case 0x3746b8u: goto label_3746b8;
        case 0x3746bcu: goto label_3746bc;
        case 0x3746c0u: goto label_3746c0;
        case 0x3746c4u: goto label_3746c4;
        case 0x3746c8u: goto label_3746c8;
        case 0x3746ccu: goto label_3746cc;
        case 0x3746d0u: goto label_3746d0;
        case 0x3746d4u: goto label_3746d4;
        case 0x3746d8u: goto label_3746d8;
        case 0x3746dcu: goto label_3746dc;
        default: break;
    }

    ctx->pc = 0x3742d0u;

label_3742d0:
    // 0x3742d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3742d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3742d4:
    // 0x3742d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3742d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3742d8:
    // 0x3742d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3742d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3742dc:
    // 0x3742dc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3742dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3742e0:
    // 0x3742e0: 0x2451c430  addiu       $s1, $v0, -0x3BD0
    ctx->pc = 0x3742e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_3742e4:
    // 0x3742e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3742e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3742e8:
    // 0x3742e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3742e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3742ec:
    // 0x3742ec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3742ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3742f0:
    // 0x3742f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3742f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3742f4:
    // 0x3742f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3742f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3742f8:
    // 0x3742f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3742f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3742fc:
    // 0x3742fc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3742fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_374300:
    // 0x374300: 0x8c46c430  lw          $a2, -0x3BD0($v0)
    ctx->pc = 0x374300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951984)));
label_374304:
    // 0x374304: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x374304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_374308:
    // 0x374308: 0x8f87a878  lw          $a3, -0x5788($gp)
    ctx->pc = 0x374308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944888)));
label_37430c:
    // 0x37430c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x37430cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_374310:
    // 0x374310: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_374314:
    if (ctx->pc == 0x374314u) {
        ctx->pc = 0x374314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374310u;
        // 0x374314: 0xc39821  addu        $s3, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374318u;
        goto label_374318;
    }
    ctx->pc = 0x374310u;
    {
        const bool branch_taken_0x374310 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x374314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374310u;
        // 0x374314: 0xc39821  addu        $s3, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374310) {
            ctx->pc = 0x374324u;
            goto label_374324;
        }
    }
    ctx->pc = 0x374318u;
label_374318:
    // 0x374318: 0x2784a878  addiu       $a0, $gp, -0x5788
    ctx->pc = 0x374318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944888));
label_37431c:
    // 0x37431c: 0xc0de08c  jal         func_378230
label_374320:
    if (ctx->pc == 0x374320u) {
        ctx->pc = 0x374324u;
        goto label_374324;
    }
    ctx->pc = 0x37431Cu;
    SET_GPR_U32(ctx, 31, 0x374324u);
    ctx->pc = 0x378230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378230u, 0x37431Cu, 0x374324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374324u;
label_374324:
    // 0x374324: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x374324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374328:
    // 0x374328: 0x26700024  addiu       $s0, $s3, 0x24
    ctx->pc = 0x374328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_37432c:
    // 0x37432c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_374330:
    // 0x374330: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x374330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_374334:
    // 0x374334: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x374334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_374338:
    // 0x374338: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x374338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37433c:
    // 0x37433c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x37433cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_374340:
    // 0x374340: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x374340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374344:
    // 0x374344: 0xc0dc7dc  jal         func_371F70
label_374348:
    if (ctx->pc == 0x374348u) {
        ctx->pc = 0x374348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374344u;
        // 0x374348: 0xe621002c  swc1        $f1, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37434Cu;
        goto label_37434c;
    }
    ctx->pc = 0x374344u;
    SET_GPR_U32(ctx, 31, 0x37434Cu);
    ctx->pc = 0x374348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374344u;
    // 0x374348: 0xe621002c  swc1        $f1, 0x2C($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x371F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371F70u, 0x374344u, 0x37434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37434Cu;
label_37434c:
    // 0x37434c: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x37434cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_374350:
    // 0x374350: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_374354:
    if (ctx->pc == 0x374354u) {
        ctx->pc = 0x374354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374350u;
        // 0x374354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374358u;
        goto label_374358;
    }
    ctx->pc = 0x374350u;
    {
        const bool branch_taken_0x374350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x374354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374350u;
        // 0x374354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374350) {
            ctx->pc = 0x374394u;
            goto label_374394;
        }
    }
    ctx->pc = 0x374358u;
label_374358:
    // 0x374358: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37435c:
    // 0x37435c: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x37435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_374360:
    // 0x374360: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_374364:
    if (ctx->pc == 0x374364u) {
        ctx->pc = 0x374364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374360u;
        // 0x374364: 0x8ca30028  lw          $v1, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374368u;
        goto label_374368;
    }
    ctx->pc = 0x374360u;
    {
        const bool branch_taken_0x374360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374360u;
        // 0x374364: 0x8ca30028  lw          $v1, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374360) {
            ctx->pc = 0x374374u;
            goto label_374374;
        }
    }
    ctx->pc = 0x374368u;
label_374368:
    // 0x374368: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x374368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_37436c:
    // 0x37436c: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_374370:
    if (ctx->pc == 0x374370u) {
        ctx->pc = 0x374370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37436Cu;
        // 0x374370: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374374u;
        goto label_374374;
    }
    ctx->pc = 0x37436Cu;
    {
        const bool branch_taken_0x37436c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x37436c) {
            ctx->pc = 0x374370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37436Cu;
            // 0x374370: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374388u;
            goto label_374388;
        }
    }
    ctx->pc = 0x374374u;
label_374374:
    // 0x374374: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x374374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_374378:
    // 0x374378: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x374378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_37437c:
    // 0x37437c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_374380:
    // 0x374380: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x374380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_374384:
    // 0x374384: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x374384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_374388:
    // 0x374388: 0x54a0fff5  bnel        $a1, $zero, . + 4 + (-0xB << 2)
label_37438c:
    if (ctx->pc == 0x37438Cu) {
        ctx->pc = 0x37438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374388u;
        // 0x37438c: 0x8ca20058  lw          $v0, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374390u;
        goto label_374390;
    }
    ctx->pc = 0x374388u;
    {
        const bool branch_taken_0x374388 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x374388) {
            ctx->pc = 0x37438Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374388u;
            // 0x37438c: 0x8ca20058  lw          $v0, 0x58($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374360;
        }
    }
    ctx->pc = 0x374390u;
label_374390:
    // 0x374390: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x374390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_374394:
    // 0x374394: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_374398:
    if (ctx->pc == 0x374398u) {
        ctx->pc = 0x374398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374394u;
        // 0x374398: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37439Cu;
        goto label_37439c;
    }
    ctx->pc = 0x374394u;
    {
        const bool branch_taken_0x374394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x374398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374394u;
        // 0x374398: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374394) {
            ctx->pc = 0x3743C4u;
            goto label_3743c4;
        }
    }
    ctx->pc = 0x37439Cu;
label_37439c:
    // 0x37439c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x37439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3743a0:
    // 0x3743a0: 0x8c46c438  lw          $a2, -0x3BC8($v0)
    ctx->pc = 0x3743a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951992)));
label_3743a4:
    // 0x3743a4: 0x0  nop
    ctx->pc = 0x3743a4u;
    // NOP
label_3743a8:
    // 0x3743a8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x3743a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3743ac:
    // 0x3743ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3743acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3743b0:
    // 0x3743b0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3743b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3743b4:
    // 0x3743b4: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x3743b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_3743b8:
    // 0x3743b8: 0x0  nop
    ctx->pc = 0x3743b8u;
    // NOP
label_3743bc:
    // 0x3743bc: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_3743c0:
    if (ctx->pc == 0x3743C0u) {
        ctx->pc = 0x3743C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743BCu;
        // 0x3743c0: 0xa5500b  movn        $t2, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3743C4u;
        goto label_3743c4;
    }
    ctx->pc = 0x3743BCu;
    {
        const bool branch_taken_0x3743bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3743C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743BCu;
        // 0x3743c0: 0xa5500b  movn        $t2, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3743bc) {
            ctx->pc = 0x3743A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3743a8;
        }
    }
    ctx->pc = 0x3743C4u;
label_3743c4:
    // 0x3743c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3743c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3743c8:
    // 0x3743c8: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x3743c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3743cc:
    // 0x3743cc: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x3743ccu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3743d0:
    // 0x3743d0: 0x244ec430  addiu       $t6, $v0, -0x3BD0
    ctx->pc = 0x3743d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_3743d4:
    // 0x3743d4: 0x0  nop
    ctx->pc = 0x3743d4u;
    // NOP
label_3743d8:
    // 0x3743d8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3743d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3743dc:
    // 0x3743dc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3743dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3743e0:
    // 0x3743e0: 0x10aa0027  beq         $a1, $t2, . + 4 + (0x27 << 2)
label_3743e4:
    if (ctx->pc == 0x3743E4u) {
        ctx->pc = 0x3743E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743E0u;
        // 0x3743e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3743E8u;
        goto label_3743e8;
    }
    ctx->pc = 0x3743E0u;
    {
        const bool branch_taken_0x3743e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        ctx->pc = 0x3743E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743E0u;
        // 0x3743e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3743e0) {
            ctx->pc = 0x374480u;
            goto label_374480;
        }
    }
    ctx->pc = 0x3743E8u;
label_3743e8:
    // 0x3743e8: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x3743e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
label_3743ec:
    // 0x3743ec: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x3743ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3743f0:
    // 0x3743f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3743f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3743f4:
    // 0x3743f4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x3743f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3743f8:
    // 0x3743f8: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x3743f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_3743fc:
    // 0x3743fc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_374400:
    if (ctx->pc == 0x374400u) {
        ctx->pc = 0x374404u;
        goto label_374404;
    }
    ctx->pc = 0x3743FCu;
    {
        const bool branch_taken_0x3743fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3743fc) {
            ctx->pc = 0x374480u;
            goto label_374480;
        }
    }
    ctx->pc = 0x374404u;
label_374404:
    // 0x374404: 0x25ebc430  addiu       $t3, $t7, -0x3BD0
    ctx->pc = 0x374404u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951984));
label_374408:
    // 0x374408: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x374408u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_37440c:
    // 0x37440c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x37440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_374410:
    // 0x374410: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x374410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374414:
    // 0x374414: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x374414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374418:
    // 0x374418: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x374418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_37441c:
    // 0x37441c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x37441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_374420:
    // 0x374420: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x374420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374424:
    // 0x374424: 0x0  nop
    ctx->pc = 0x374424u;
    // NOP
label_374428:
    // 0x374428: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_37442c:
    if (ctx->pc == 0x37442Cu) {
        ctx->pc = 0x37442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374428u;
        // 0x37442c: 0x8c470058  lw          $a3, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374430u;
        goto label_374430;
    }
    ctx->pc = 0x374428u;
    {
        const bool branch_taken_0x374428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374428u;
        // 0x37442c: 0x8c470058  lw          $a3, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374428) {
            ctx->pc = 0x374454u;
            goto label_374454;
        }
    }
    ctx->pc = 0x374430u;
label_374430:
    // 0x374430: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_374434:
    if (ctx->pc == 0x374434u) {
        ctx->pc = 0x374434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374430u;
        // 0x374434: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374438u;
        goto label_374438;
    }
    ctx->pc = 0x374430u;
    {
        const bool branch_taken_0x374430 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x374434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374430u;
        // 0x374434: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374430) {
            ctx->pc = 0x374440u;
            goto label_374440;
        }
    }
    ctx->pc = 0x374438u;
label_374438:
    // 0x374438: 0x10000002  b           . + 4 + (0x2 << 2)
label_37443c:
    if (ctx->pc == 0x37443Cu) {
        ctx->pc = 0x37443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374438u;
        // 0x37443c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374440u;
        goto label_374440;
    }
    ctx->pc = 0x374438u;
    {
        const bool branch_taken_0x374438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374438u;
        // 0x37443c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374438) {
            ctx->pc = 0x374444u;
            goto label_374444;
        }
    }
    ctx->pc = 0x374440u;
label_374440:
    // 0x374440: 0xad030058  sw          $v1, 0x58($t0)
    ctx->pc = 0x374440u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 3));
label_374444:
    // 0x374444: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x374444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
label_374448:
    // 0x374448: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x374448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37444c:
    // 0x37444c: 0x10000003  b           . + 4 + (0x3 << 2)
label_374450:
    if (ctx->pc == 0x374450u) {
        ctx->pc = 0x374450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37444Cu;
        // 0x374450: 0xacc70058  sw          $a3, 0x58($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374454u;
        goto label_374454;
    }
    ctx->pc = 0x37444Cu;
    {
        const bool branch_taken_0x37444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37444Cu;
        // 0x374450: 0xacc70058  sw          $a3, 0x58($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37444c) {
            ctx->pc = 0x37445Cu;
            goto label_37445c;
        }
    }
    ctx->pc = 0x374454u;
label_374454:
    // 0x374454: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x374454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_374458:
    // 0x374458: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x374458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37445c:
    // 0x37445c: 0x10aa0008  beq         $a1, $t2, . + 4 + (0x8 << 2)
label_374460:
    if (ctx->pc == 0x374460u) {
        ctx->pc = 0x374464u;
        goto label_374464;
    }
    ctx->pc = 0x37445Cu;
    {
        const bool branch_taken_0x37445c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x37445c) {
            ctx->pc = 0x374480u;
            goto label_374480;
        }
    }
    ctx->pc = 0x374464u;
label_374464:
    // 0x374464: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x374464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_374468:
    // 0x374468: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x374468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_37446c:
    // 0x37446c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_374470:
    // 0x374470: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x374470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_374474:
    // 0x374474: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x374474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_374478:
    // 0x374478: 0x5460ffe5  bnel        $v1, $zero, . + 4 + (-0x1B << 2)
label_37447c:
    if (ctx->pc == 0x37447Cu) {
        ctx->pc = 0x37447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374478u;
        // 0x37447c: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374480u;
        goto label_374480;
    }
    ctx->pc = 0x374478u;
    {
        const bool branch_taken_0x374478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374478) {
            ctx->pc = 0x37447Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374478u;
            // 0x37447c: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374410;
        }
    }
    ctx->pc = 0x374480u;
label_374480:
    // 0x374480: 0x1180ffd5  beqz        $t4, . + 4 + (-0x2B << 2)
label_374484:
    if (ctx->pc == 0x374484u) {
        ctx->pc = 0x374484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374480u;
        // 0x374484: 0x1a0502d  daddu       $t2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374488u;
        goto label_374488;
    }
    ctx->pc = 0x374480u;
    {
        const bool branch_taken_0x374480 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x374484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374480u;
        // 0x374484: 0x1a0502d  daddu       $t2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374480) {
            ctx->pc = 0x3743D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3743d8;
        }
    }
    ctx->pc = 0x374488u;
label_374488:
    // 0x374488: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x374488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_37448c:
    // 0x37448c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_374490:
    if (ctx->pc == 0x374490u) {
        ctx->pc = 0x374490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37448Cu;
        // 0x374490: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374494u;
        goto label_374494;
    }
    ctx->pc = 0x37448Cu;
    {
        const bool branch_taken_0x37448c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x374490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37448Cu;
        // 0x374490: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37448c) {
            ctx->pc = 0x3744D0u;
            goto label_3744d0;
        }
    }
    ctx->pc = 0x374494u;
label_374494:
    // 0x374494: 0x2446c430  addiu       $a2, $v0, -0x3BD0
    ctx->pc = 0x374494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_374498:
    // 0x374498: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x374498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_37449c:
    // 0x37449c: 0x0  nop
    ctx->pc = 0x37449cu;
    // NOP
label_3744a0:
    // 0x3744a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3744a4:
    if (ctx->pc == 0x3744A4u) {
        ctx->pc = 0x3744A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744A0u;
        // 0x3744a4: 0x8ca30028  lw          $v1, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3744A8u;
        goto label_3744a8;
    }
    ctx->pc = 0x3744A0u;
    {
        const bool branch_taken_0x3744a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3744A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744A0u;
        // 0x3744a4: 0x8ca30028  lw          $v1, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3744a0) {
            ctx->pc = 0x3744B4u;
            goto label_3744b4;
        }
    }
    ctx->pc = 0x3744A8u;
label_3744a8:
    // 0x3744a8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3744a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3744ac:
    // 0x3744ac: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_3744b0:
    if (ctx->pc == 0x3744B0u) {
        ctx->pc = 0x3744B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744ACu;
        // 0x3744b0: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3744B4u;
        goto label_3744b4;
    }
    ctx->pc = 0x3744ACu;
    {
        const bool branch_taken_0x3744ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3744ac) {
            ctx->pc = 0x3744B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3744ACu;
            // 0x3744b0: 0x8ca50058  lw          $a1, 0x58($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3744C8u;
            goto label_3744c8;
        }
    }
    ctx->pc = 0x3744B4u;
label_3744b4:
    // 0x3744b4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x3744b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3744b8:
    // 0x3744b8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3744b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3744bc:
    // 0x3744bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3744bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3744c0:
    // 0x3744c0: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x3744c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_3744c4:
    // 0x3744c4: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x3744c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_3744c8:
    // 0x3744c8: 0x54a0fff5  bnel        $a1, $zero, . + 4 + (-0xB << 2)
label_3744cc:
    if (ctx->pc == 0x3744CCu) {
        ctx->pc = 0x3744CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744C8u;
        // 0x3744cc: 0x8ca20058  lw          $v0, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3744D0u;
        goto label_3744d0;
    }
    ctx->pc = 0x3744C8u;
    {
        const bool branch_taken_0x3744c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3744c8) {
            ctx->pc = 0x3744CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3744C8u;
            // 0x3744cc: 0x8ca20058  lw          $v0, 0x58($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3744A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3744a0;
        }
    }
    ctx->pc = 0x3744D0u;
label_3744d0:
    // 0x3744d0: 0xc0dc840  jal         func_372100
label_3744d4:
    if (ctx->pc == 0x3744D4u) {
        ctx->pc = 0x3744D8u;
        goto label_3744d8;
    }
    ctx->pc = 0x3744D0u;
    SET_GPR_U32(ctx, 31, 0x3744D8u);
    ctx->pc = 0x372100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372100u, 0x3744D0u, 0x3744D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744D8u;
label_3744d8:
    // 0x3744d8: 0x8e700024  lw          $s0, 0x24($s3)
    ctx->pc = 0x3744d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3744dc:
    // 0x3744dc: 0xaf80a878  sw          $zero, -0x5788($gp)
    ctx->pc = 0x3744dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944888), GPR_U32(ctx, 0));
label_3744e0:
    // 0x3744e0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_3744e4:
    if (ctx->pc == 0x3744E4u) {
        ctx->pc = 0x3744E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744E0u;
        // 0x3744e4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3744E8u;
        goto label_3744e8;
    }
    ctx->pc = 0x3744E0u;
    {
        const bool branch_taken_0x3744e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3744E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744E0u;
        // 0x3744e4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3744e0) {
            ctx->pc = 0x37451Cu;
            goto label_37451c;
        }
    }
    ctx->pc = 0x3744E8u;
label_3744e8:
    // 0x3744e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3744e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3744ec:
    // 0x3744ec: 0x0  nop
    ctx->pc = 0x3744ecu;
    // NOP
label_3744f0:
    // 0x3744f0: 0xc0ddfdc  jal         func_377F70
label_3744f4:
    if (ctx->pc == 0x3744F4u) {
        ctx->pc = 0x3744F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744F0u;
        // 0x3744f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3744F8u;
        goto label_3744f8;
    }
    ctx->pc = 0x3744F0u;
    SET_GPR_U32(ctx, 31, 0x3744F8u);
    ctx->pc = 0x3744F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744F0u;
    // 0x3744f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377F70u, 0x3744F0u, 0x3744F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744F8u;
label_3744f8:
    // 0x3744f8: 0x8f82a878  lw          $v0, -0x5788($gp)
    ctx->pc = 0x3744f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944888)));
label_3744fc:
    // 0x3744fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_374500:
    if (ctx->pc == 0x374500u) {
        ctx->pc = 0x374500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744FCu;
        // 0x374500: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374504u;
        goto label_374504;
    }
    ctx->pc = 0x3744FCu;
    {
        const bool branch_taken_0x3744fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3744fc) {
            ctx->pc = 0x374500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3744FCu;
            // 0x374500: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374510u;
            goto label_374510;
        }
    }
    ctx->pc = 0x374504u;
label_374504:
    // 0x374504: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x374504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_374508:
    // 0x374508: 0xaf82a878  sw          $v0, -0x5788($gp)
    ctx->pc = 0x374508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944888), GPR_U32(ctx, 2));
label_37450c:
    // 0x37450c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x37450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_374510:
    // 0x374510: 0x8e100058  lw          $s0, 0x58($s0)
    ctx->pc = 0x374510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_374514:
    // 0x374514: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_374518:
    if (ctx->pc == 0x374518u) {
        ctx->pc = 0x374518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374514u;
        // 0x374518: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37451Cu;
        goto label_37451c;
    }
    ctx->pc = 0x374514u;
    {
        const bool branch_taken_0x374514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x374518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374514u;
        // 0x374518: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374514) {
            ctx->pc = 0x3744F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3744f0;
        }
    }
    ctx->pc = 0x37451Cu;
label_37451c:
    // 0x37451c: 0x8f84a878  lw          $a0, -0x5788($gp)
    ctx->pc = 0x37451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944888)));
label_374520:
    // 0x374520: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_374524:
    if (ctx->pc == 0x374524u) {
        ctx->pc = 0x374524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374520u;
        // 0x374524: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374528u;
        goto label_374528;
    }
    ctx->pc = 0x374520u;
    {
        const bool branch_taken_0x374520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x374524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374520u;
        // 0x374524: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374520) {
            ctx->pc = 0x3745ACu;
            goto label_3745ac;
        }
    }
    ctx->pc = 0x374528u;
label_374528:
    // 0x374528: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x374528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_37452c:
    // 0x37452c: 0xc7948110  lwc1        $f20, -0x7EF0($gp)
    ctx->pc = 0x37452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_374530:
    // 0x374530: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x374530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_374534:
    // 0x374534: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x374534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374538:
    // 0x374538: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x374538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37453c:
    // 0x37453c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x37453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374540:
    // 0x374540: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x374540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_374544:
    // 0x374544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x374544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_374548:
    // 0x374548: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x374548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37454c:
    // 0x37454c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x37454cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_374550:
    // 0x374550: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x374550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374554:
    // 0x374554: 0xc484001c  lwc1        $f4, 0x1C($a0)
    ctx->pc = 0x374554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_374558:
    // 0x374558: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x374558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_37455c:
    // 0x37455c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x37455cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_374560:
    // 0x374560: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x374560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_374564:
    // 0x374564: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x374564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_374568:
    // 0x374568: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x374568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37456c:
    // 0x37456c: 0x0  nop
    ctx->pc = 0x37456cu;
    // NOP
label_374570:
    // 0x374570: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_374574:
    if (ctx->pc == 0x374574u) {
        ctx->pc = 0x374574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374570u;
        // 0x374574: 0x8c900058  lw          $s0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374578u;
        goto label_374578;
    }
    ctx->pc = 0x374570u;
    {
        const bool branch_taken_0x374570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x374574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374570u;
        // 0x374574: 0x8c900058  lw          $s0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374570) {
            ctx->pc = 0x374598u;
            goto label_374598;
        }
    }
    ctx->pc = 0x374578u;
label_374578:
    // 0x374578: 0x52200002  beql        $s1, $zero, . + 4 + (0x2 << 2)
label_37457c:
    if (ctx->pc == 0x37457Cu) {
        ctx->pc = 0x37457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374578u;
        // 0x37457c: 0xaf90a878  sw          $s0, -0x5788($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944888), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374580u;
        goto label_374580;
    }
    ctx->pc = 0x374578u;
    {
        const bool branch_taken_0x374578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x374578) {
            ctx->pc = 0x37457Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374578u;
            // 0x37457c: 0xaf90a878  sw          $s0, -0x5788($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294944888), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374584u;
            goto label_374584;
        }
    }
    ctx->pc = 0x374580u;
label_374580:
    // 0x374580: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x374580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
label_374584:
    // 0x374584: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x374584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_374588:
    // 0x374588: 0x40f809  jalr        $v0
label_37458c:
    if (ctx->pc == 0x37458Cu) {
        ctx->pc = 0x374590u;
        goto label_374590;
    }
    ctx->pc = 0x374588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x374590u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374588u, 0x374590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x374590u;
label_374590:
    // 0x374590: 0x10000003  b           . + 4 + (0x3 << 2)
label_374594:
    if (ctx->pc == 0x374594u) {
        ctx->pc = 0x374594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374590u;
        // 0x374594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374598u;
        goto label_374598;
    }
    ctx->pc = 0x374590u;
    {
        const bool branch_taken_0x374590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374590u;
        // 0x374594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374590) {
            ctx->pc = 0x3745A0u;
            goto label_3745a0;
        }
    }
    ctx->pc = 0x374598u;
label_374598:
    // 0x374598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x374598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37459c:
    // 0x37459c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37459cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3745a0:
    // 0x3745a0: 0x5480ffe5  bnel        $a0, $zero, . + 4 + (-0x1B << 2)
label_3745a4:
    if (ctx->pc == 0x3745A4u) {
        ctx->pc = 0x3745A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745A0u;
        // 0x3745a4: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3745A8u;
        goto label_3745a8;
    }
    ctx->pc = 0x3745A0u;
    {
        const bool branch_taken_0x3745a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3745a0) {
            ctx->pc = 0x3745A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3745A0u;
            // 0x3745a4: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x374538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374538;
        }
    }
    ctx->pc = 0x3745A8u;
label_3745a8:
    // 0x3745a8: 0x8f84a878  lw          $a0, -0x5788($gp)
    ctx->pc = 0x3745a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944888)));
label_3745ac:
    // 0x3745ac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_3745b0:
    if (ctx->pc == 0x3745B0u) {
        ctx->pc = 0x3745B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745ACu;
        // 0x3745b0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3745B4u;
        goto label_3745b4;
    }
    ctx->pc = 0x3745ACu;
    {
        const bool branch_taken_0x3745ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3745B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745ACu;
        // 0x3745b0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3745ac) {
            ctx->pc = 0x3745F0u;
            goto label_3745f0;
        }
    }
    ctx->pc = 0x3745B4u;
label_3745b4:
    // 0x3745b4: 0x2445c430  addiu       $a1, $v0, -0x3BD0
    ctx->pc = 0x3745b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_3745b8:
    // 0x3745b8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x3745b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3745bc:
    // 0x3745bc: 0x0  nop
    ctx->pc = 0x3745bcu;
    // NOP
label_3745c0:
    // 0x3745c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3745c4:
    if (ctx->pc == 0x3745C4u) {
        ctx->pc = 0x3745C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745C0u;
        // 0x3745c4: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3745C8u;
        goto label_3745c8;
    }
    ctx->pc = 0x3745C0u;
    {
        const bool branch_taken_0x3745c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3745C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745C0u;
        // 0x3745c4: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3745c0) {
            ctx->pc = 0x3745D4u;
            goto label_3745d4;
        }
    }
    ctx->pc = 0x3745C8u;
label_3745c8:
    // 0x3745c8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3745c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3745cc:
    // 0x3745cc: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_3745d0:
    if (ctx->pc == 0x3745D0u) {
        ctx->pc = 0x3745D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745CCu;
        // 0x3745d0: 0x8c840058  lw          $a0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3745D4u;
        goto label_3745d4;
    }
    ctx->pc = 0x3745CCu;
    {
        const bool branch_taken_0x3745cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3745cc) {
            ctx->pc = 0x3745D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3745CCu;
            // 0x3745d0: 0x8c840058  lw          $a0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3745E8u;
            goto label_3745e8;
        }
    }
    ctx->pc = 0x3745D4u;
label_3745d4:
    // 0x3745d4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x3745d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_3745d8:
    // 0x3745d8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3745d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3745dc:
    // 0x3745dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3745dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3745e0:
    // 0x3745e0: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x3745e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_3745e4:
    // 0x3745e4: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x3745e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3745e8:
    // 0x3745e8: 0x5480fff5  bnel        $a0, $zero, . + 4 + (-0xB << 2)
label_3745ec:
    if (ctx->pc == 0x3745ECu) {
        ctx->pc = 0x3745ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745E8u;
        // 0x3745ec: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3745F0u;
        goto label_3745f0;
    }
    ctx->pc = 0x3745E8u;
    {
        const bool branch_taken_0x3745e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3745e8) {
            ctx->pc = 0x3745ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3745E8u;
            // 0x3745ec: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3745C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3745c0;
        }
    }
    ctx->pc = 0x3745F0u;
label_3745f0:
    // 0x3745f0: 0x2784a878  addiu       $a0, $gp, -0x5788
    ctx->pc = 0x3745f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944888));
label_3745f4:
    // 0x3745f4: 0xc0dd02a  jal         func_3740A8
label_3745f8:
    if (ctx->pc == 0x3745F8u) {
        ctx->pc = 0x3745F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745F4u;
        // 0x3745f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3745FCu;
        goto label_3745fc;
    }
    ctx->pc = 0x3745F4u;
    SET_GPR_U32(ctx, 31, 0x3745FCu);
    ctx->pc = 0x3745F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3745F4u;
    // 0x3745f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3740A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3740A8u, 0x3745F4u, 0x3745FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3745FCu;
label_3745fc:
    // 0x3745fc: 0x8f90a878  lw          $s0, -0x5788($gp)
    ctx->pc = 0x3745fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944888)));
label_374600:
    // 0x374600: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_374604:
    if (ctx->pc == 0x374604u) {
        ctx->pc = 0x374604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374600u;
        // 0x374604: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374608u;
        goto label_374608;
    }
    ctx->pc = 0x374600u;
    {
        const bool branch_taken_0x374600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x374604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374600u;
        // 0x374604: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374600) {
            ctx->pc = 0x3746B0u;
            goto label_3746b0;
        }
    }
    ctx->pc = 0x374608u;
label_374608:
    // 0x374608: 0xc7948100  lwc1        $f20, -0x7F00($gp)
    ctx->pc = 0x374608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37460c:
    // 0x37460c: 0x2451c430  addiu       $s1, $v0, -0x3BD0
    ctx->pc = 0x37460cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_374610:
    // 0x374610: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x374610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_374614:
    // 0x374614: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x374614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_374618:
    // 0x374618: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x374618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_37461c:
    // 0x37461c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x37461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_374620:
    // 0x374620: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x374620u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
label_374624:
    // 0x374624: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x374624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_374628:
    // 0x374628: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x374628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_37462c:
    // 0x37462c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x37462cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_374630:
    // 0x374630: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x374630u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_374634:
    // 0x374634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x374634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_374638:
    // 0x374638: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_37463c:
    if (ctx->pc == 0x37463Cu) {
        ctx->pc = 0x37463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374638u;
        // 0x37463c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374640u;
        goto label_374640;
    }
    ctx->pc = 0x374638u;
    {
        const bool branch_taken_0x374638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374638u;
        // 0x37463c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374638) {
            ctx->pc = 0x374694u;
            goto label_374694;
        }
    }
    ctx->pc = 0x374640u;
label_374640:
    // 0x374640: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_374644:
    if (ctx->pc == 0x374644u) {
        ctx->pc = 0x374644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374640u;
        // 0x374644: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374648u;
        goto label_374648;
    }
    ctx->pc = 0x374640u;
    {
        const bool branch_taken_0x374640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374640) {
            ctx->pc = 0x374644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374640u;
            // 0x374644: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37466Cu;
            goto label_37466c;
        }
    }
    ctx->pc = 0x374648u;
label_374648:
    // 0x374648: 0xc0dc1aa  jal         func_3706A8
label_37464c:
    if (ctx->pc == 0x37464Cu) {
        ctx->pc = 0x37464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374648u;
        // 0x37464c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374650u;
        goto label_374650;
    }
    ctx->pc = 0x374648u;
    SET_GPR_U32(ctx, 31, 0x374650u);
    ctx->pc = 0x37464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374648u;
    // 0x37464c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3706A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3706A8u, 0x374648u, 0x374650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374650u;
label_374650:
    // 0x374650: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x374650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_374654:
    // 0x374654: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x374654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_374658:
    // 0x374658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x374658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37465c:
    // 0x37465c: 0x0  nop
    ctx->pc = 0x37465cu;
    // NOP
label_374660:
    // 0x374660: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_374664:
    if (ctx->pc == 0x374664u) {
        ctx->pc = 0x374664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374660u;
        // 0x374664: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374668u;
        goto label_374668;
    }
    ctx->pc = 0x374660u;
    {
        const bool branch_taken_0x374660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374660) {
            ctx->pc = 0x374664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374660u;
            // 0x374664: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374694u;
            goto label_374694;
        }
    }
    ctx->pc = 0x374668u;
label_374668:
    // 0x374668: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x374668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_37466c:
    // 0x37466c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x37466cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_374670:
    // 0x374670: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x374670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_374674:
    // 0x374674: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x374674u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
label_374678:
    // 0x374678: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x374678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_37467c:
    // 0x37467c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x37467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_374680:
    // 0x374680: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x374680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_374684:
    // 0x374684: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x374684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
label_374688:
    // 0x374688: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x374688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_37468c:
    // 0x37468c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x37468cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_374690:
    // 0x374690: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x374690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_374694:
    // 0x374694: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_374698:
    if (ctx->pc == 0x374698u) {
        ctx->pc = 0x374698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374694u;
        // 0x374698: 0x8e100058  lw          $s0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37469Cu;
        goto label_37469c;
    }
    ctx->pc = 0x374694u;
    {
        const bool branch_taken_0x374694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374694) {
            ctx->pc = 0x374698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374694u;
            // 0x374698: 0x8e100058  lw          $s0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3746A8u;
            goto label_3746a8;
        }
    }
    ctx->pc = 0x37469Cu;
label_37469c:
    // 0x37469c: 0xc0ddfae  jal         func_377EB8
label_3746a0:
    if (ctx->pc == 0x3746A0u) {
        ctx->pc = 0x3746A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37469Cu;
        // 0x3746a0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3746A4u;
        goto label_3746a4;
    }
    ctx->pc = 0x37469Cu;
    SET_GPR_U32(ctx, 31, 0x3746A4u);
    ctx->pc = 0x3746A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37469Cu;
    // 0x3746a0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x37469Cu, 0x3746A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746A4u;
label_3746a4:
    // 0x3746a4: 0x8e100058  lw          $s0, 0x58($s0)
    ctx->pc = 0x3746a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3746a8:
    // 0x3746a8: 0x5600ffdb  bnel        $s0, $zero, . + 4 + (-0x25 << 2)
label_3746ac:
    if (ctx->pc == 0x3746ACu) {
        ctx->pc = 0x3746ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746A8u;
        // 0x3746ac: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3746B0u;
        goto label_3746b0;
    }
    ctx->pc = 0x3746A8u;
    {
        const bool branch_taken_0x3746a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3746a8) {
            ctx->pc = 0x3746ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3746A8u;
            // 0x3746ac: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374618;
        }
    }
    ctx->pc = 0x3746B0u;
label_3746b0:
    // 0x3746b0: 0x2784a878  addiu       $a0, $gp, -0x5788
    ctx->pc = 0x3746b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944888));
label_3746b4:
    // 0x3746b4: 0xc0de08c  jal         func_378230
label_3746b8:
    if (ctx->pc == 0x3746B8u) {
        ctx->pc = 0x3746BCu;
        goto label_3746bc;
    }
    ctx->pc = 0x3746B4u;
    SET_GPR_U32(ctx, 31, 0x3746BCu);
    ctx->pc = 0x378230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378230u, 0x3746B4u, 0x3746BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746BCu;
label_3746bc:
    // 0x3746bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3746bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3746c0:
    // 0x3746c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3746c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3746c4:
    // 0x3746c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3746c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3746c8:
    // 0x3746c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3746c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3746cc:
    // 0x3746cc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3746ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3746d0:
    // 0x3746d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3746d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3746d4:
    // 0x3746d4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3746d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3746d8:
    // 0x3746d8: 0x3e00008  jr          $ra
label_3746dc:
    if (ctx->pc == 0x3746DCu) {
        ctx->pc = 0x3746DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746D8u;
        // 0x3746dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3746E0u;
        goto label_fallthrough_0x3746d8;
    }
    ctx->pc = 0x3746D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3746DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746D8u;
        // 0x3746dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3746D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3746d8:
    ctx->pc = 0x3746E0u;
}
