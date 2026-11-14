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

// Function: sub_00450470
// Address: 0x450470 - 0x4507f0
void sub_00450470_0x450470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450470_0x450470");
#endif

    switch (ctx->pc) {
        case 0x450470u: goto label_450470;
        case 0x450474u: goto label_450474;
        case 0x450478u: goto label_450478;
        case 0x45047cu: goto label_45047c;
        case 0x450480u: goto label_450480;
        case 0x450484u: goto label_450484;
        case 0x450488u: goto label_450488;
        case 0x45048cu: goto label_45048c;
        case 0x450490u: goto label_450490;
        case 0x450494u: goto label_450494;
        case 0x450498u: goto label_450498;
        case 0x45049cu: goto label_45049c;
        case 0x4504a0u: goto label_4504a0;
        case 0x4504a4u: goto label_4504a4;
        case 0x4504a8u: goto label_4504a8;
        case 0x4504acu: goto label_4504ac;
        case 0x4504b0u: goto label_4504b0;
        case 0x4504b4u: goto label_4504b4;
        case 0x4504b8u: goto label_4504b8;
        case 0x4504bcu: goto label_4504bc;
        case 0x4504c0u: goto label_4504c0;
        case 0x4504c4u: goto label_4504c4;
        case 0x4504c8u: goto label_4504c8;
        case 0x4504ccu: goto label_4504cc;
        case 0x4504d0u: goto label_4504d0;
        case 0x4504d4u: goto label_4504d4;
        case 0x4504d8u: goto label_4504d8;
        case 0x4504dcu: goto label_4504dc;
        case 0x4504e0u: goto label_4504e0;
        case 0x4504e4u: goto label_4504e4;
        case 0x4504e8u: goto label_4504e8;
        case 0x4504ecu: goto label_4504ec;
        case 0x4504f0u: goto label_4504f0;
        case 0x4504f4u: goto label_4504f4;
        case 0x4504f8u: goto label_4504f8;
        case 0x4504fcu: goto label_4504fc;
        case 0x450500u: goto label_450500;
        case 0x450504u: goto label_450504;
        case 0x450508u: goto label_450508;
        case 0x45050cu: goto label_45050c;
        case 0x450510u: goto label_450510;
        case 0x450514u: goto label_450514;
        case 0x450518u: goto label_450518;
        case 0x45051cu: goto label_45051c;
        case 0x450520u: goto label_450520;
        case 0x450524u: goto label_450524;
        case 0x450528u: goto label_450528;
        case 0x45052cu: goto label_45052c;
        case 0x450530u: goto label_450530;
        case 0x450534u: goto label_450534;
        case 0x450538u: goto label_450538;
        case 0x45053cu: goto label_45053c;
        case 0x450540u: goto label_450540;
        case 0x450544u: goto label_450544;
        case 0x450548u: goto label_450548;
        case 0x45054cu: goto label_45054c;
        case 0x450550u: goto label_450550;
        case 0x450554u: goto label_450554;
        case 0x450558u: goto label_450558;
        case 0x45055cu: goto label_45055c;
        case 0x450560u: goto label_450560;
        case 0x450564u: goto label_450564;
        case 0x450568u: goto label_450568;
        case 0x45056cu: goto label_45056c;
        case 0x450570u: goto label_450570;
        case 0x450574u: goto label_450574;
        case 0x450578u: goto label_450578;
        case 0x45057cu: goto label_45057c;
        case 0x450580u: goto label_450580;
        case 0x450584u: goto label_450584;
        case 0x450588u: goto label_450588;
        case 0x45058cu: goto label_45058c;
        case 0x450590u: goto label_450590;
        case 0x450594u: goto label_450594;
        case 0x450598u: goto label_450598;
        case 0x45059cu: goto label_45059c;
        case 0x4505a0u: goto label_4505a0;
        case 0x4505a4u: goto label_4505a4;
        case 0x4505a8u: goto label_4505a8;
        case 0x4505acu: goto label_4505ac;
        case 0x4505b0u: goto label_4505b0;
        case 0x4505b4u: goto label_4505b4;
        case 0x4505b8u: goto label_4505b8;
        case 0x4505bcu: goto label_4505bc;
        case 0x4505c0u: goto label_4505c0;
        case 0x4505c4u: goto label_4505c4;
        case 0x4505c8u: goto label_4505c8;
        case 0x4505ccu: goto label_4505cc;
        case 0x4505d0u: goto label_4505d0;
        case 0x4505d4u: goto label_4505d4;
        case 0x4505d8u: goto label_4505d8;
        case 0x4505dcu: goto label_4505dc;
        case 0x4505e0u: goto label_4505e0;
        case 0x4505e4u: goto label_4505e4;
        case 0x4505e8u: goto label_4505e8;
        case 0x4505ecu: goto label_4505ec;
        case 0x4505f0u: goto label_4505f0;
        case 0x4505f4u: goto label_4505f4;
        case 0x4505f8u: goto label_4505f8;
        case 0x4505fcu: goto label_4505fc;
        case 0x450600u: goto label_450600;
        case 0x450604u: goto label_450604;
        case 0x450608u: goto label_450608;
        case 0x45060cu: goto label_45060c;
        case 0x450610u: goto label_450610;
        case 0x450614u: goto label_450614;
        case 0x450618u: goto label_450618;
        case 0x45061cu: goto label_45061c;
        case 0x450620u: goto label_450620;
        case 0x450624u: goto label_450624;
        case 0x450628u: goto label_450628;
        case 0x45062cu: goto label_45062c;
        case 0x450630u: goto label_450630;
        case 0x450634u: goto label_450634;
        case 0x450638u: goto label_450638;
        case 0x45063cu: goto label_45063c;
        case 0x450640u: goto label_450640;
        case 0x450644u: goto label_450644;
        case 0x450648u: goto label_450648;
        case 0x45064cu: goto label_45064c;
        case 0x450650u: goto label_450650;
        case 0x450654u: goto label_450654;
        case 0x450658u: goto label_450658;
        case 0x45065cu: goto label_45065c;
        case 0x450660u: goto label_450660;
        case 0x450664u: goto label_450664;
        case 0x450668u: goto label_450668;
        case 0x45066cu: goto label_45066c;
        case 0x450670u: goto label_450670;
        case 0x450674u: goto label_450674;
        case 0x450678u: goto label_450678;
        case 0x45067cu: goto label_45067c;
        case 0x450680u: goto label_450680;
        case 0x450684u: goto label_450684;
        case 0x450688u: goto label_450688;
        case 0x45068cu: goto label_45068c;
        case 0x450690u: goto label_450690;
        case 0x450694u: goto label_450694;
        case 0x450698u: goto label_450698;
        case 0x45069cu: goto label_45069c;
        case 0x4506a0u: goto label_4506a0;
        case 0x4506a4u: goto label_4506a4;
        case 0x4506a8u: goto label_4506a8;
        case 0x4506acu: goto label_4506ac;
        case 0x4506b0u: goto label_4506b0;
        case 0x4506b4u: goto label_4506b4;
        case 0x4506b8u: goto label_4506b8;
        case 0x4506bcu: goto label_4506bc;
        case 0x4506c0u: goto label_4506c0;
        case 0x4506c4u: goto label_4506c4;
        case 0x4506c8u: goto label_4506c8;
        case 0x4506ccu: goto label_4506cc;
        case 0x4506d0u: goto label_4506d0;
        case 0x4506d4u: goto label_4506d4;
        case 0x4506d8u: goto label_4506d8;
        case 0x4506dcu: goto label_4506dc;
        case 0x4506e0u: goto label_4506e0;
        case 0x4506e4u: goto label_4506e4;
        case 0x4506e8u: goto label_4506e8;
        case 0x4506ecu: goto label_4506ec;
        case 0x4506f0u: goto label_4506f0;
        case 0x4506f4u: goto label_4506f4;
        case 0x4506f8u: goto label_4506f8;
        case 0x4506fcu: goto label_4506fc;
        case 0x450700u: goto label_450700;
        case 0x450704u: goto label_450704;
        case 0x450708u: goto label_450708;
        case 0x45070cu: goto label_45070c;
        case 0x450710u: goto label_450710;
        case 0x450714u: goto label_450714;
        case 0x450718u: goto label_450718;
        case 0x45071cu: goto label_45071c;
        case 0x450720u: goto label_450720;
        case 0x450724u: goto label_450724;
        case 0x450728u: goto label_450728;
        case 0x45072cu: goto label_45072c;
        case 0x450730u: goto label_450730;
        case 0x450734u: goto label_450734;
        case 0x450738u: goto label_450738;
        case 0x45073cu: goto label_45073c;
        case 0x450740u: goto label_450740;
        case 0x450744u: goto label_450744;
        case 0x450748u: goto label_450748;
        case 0x45074cu: goto label_45074c;
        case 0x450750u: goto label_450750;
        case 0x450754u: goto label_450754;
        case 0x450758u: goto label_450758;
        case 0x45075cu: goto label_45075c;
        case 0x450760u: goto label_450760;
        case 0x450764u: goto label_450764;
        case 0x450768u: goto label_450768;
        case 0x45076cu: goto label_45076c;
        case 0x450770u: goto label_450770;
        case 0x450774u: goto label_450774;
        case 0x450778u: goto label_450778;
        case 0x45077cu: goto label_45077c;
        case 0x450780u: goto label_450780;
        case 0x450784u: goto label_450784;
        case 0x450788u: goto label_450788;
        case 0x45078cu: goto label_45078c;
        case 0x450790u: goto label_450790;
        case 0x450794u: goto label_450794;
        case 0x450798u: goto label_450798;
        case 0x45079cu: goto label_45079c;
        case 0x4507a0u: goto label_4507a0;
        case 0x4507a4u: goto label_4507a4;
        case 0x4507a8u: goto label_4507a8;
        case 0x4507acu: goto label_4507ac;
        case 0x4507b0u: goto label_4507b0;
        case 0x4507b4u: goto label_4507b4;
        case 0x4507b8u: goto label_4507b8;
        case 0x4507bcu: goto label_4507bc;
        case 0x4507c0u: goto label_4507c0;
        case 0x4507c4u: goto label_4507c4;
        case 0x4507c8u: goto label_4507c8;
        case 0x4507ccu: goto label_4507cc;
        case 0x4507d0u: goto label_4507d0;
        case 0x4507d4u: goto label_4507d4;
        case 0x4507d8u: goto label_4507d8;
        case 0x4507dcu: goto label_4507dc;
        case 0x4507e0u: goto label_4507e0;
        case 0x4507e4u: goto label_4507e4;
        case 0x4507e8u: goto label_4507e8;
        case 0x4507ecu: goto label_4507ec;
        default: break;
    }

    ctx->pc = 0x450470u;

label_450470:
    // 0x450470: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x450470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_450474:
    // 0x450474: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x450474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_450478:
    // 0x450478: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x450478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_45047c:
    // 0x45047c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_450480:
    // 0x450480: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x450480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_450484:
    // 0x450484: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x450484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_450488:
    // 0x450488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x450488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45048c:
    // 0x45048c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_450490:
    // 0x450490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_450494:
    // 0x450494: 0xafa402e0  sw          $a0, 0x2E0($sp)
    ctx->pc = 0x450494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 4));
label_450498:
    // 0x450498: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x450498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45049c:
    // 0x45049c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x45049cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4504a0:
    // 0x4504a0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x4504a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4504a4:
    // 0x4504a4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4504a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4504a8:
    // 0x4504a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4504ac:
    if (ctx->pc == 0x4504ACu) {
        ctx->pc = 0x4504B0u;
        goto label_4504b0;
    }
    ctx->pc = 0x4504A8u;
    {
        const bool branch_taken_0x4504a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4504a8) {
            ctx->pc = 0x4504BCu;
            goto label_4504bc;
        }
    }
    ctx->pc = 0x4504B0u;
label_4504b0:
    // 0x4504b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4504b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4504b4:
    // 0x4504b4: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_4504b8:
    if (ctx->pc == 0x4504B8u) {
        ctx->pc = 0x4504BCu;
        goto label_4504bc;
    }
    ctx->pc = 0x4504B4u;
    {
        const bool branch_taken_0x4504b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4504b4) {
            ctx->pc = 0x4507BCu;
            goto label_4507bc;
        }
    }
    ctx->pc = 0x4504BCu;
label_4504bc:
    // 0x4504bc: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x4504bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4504c0:
    // 0x4504c0: 0xc113f4c  jal         func_44FD30
label_4504c4:
    if (ctx->pc == 0x4504C4u) {
        ctx->pc = 0x4504C8u;
        goto label_4504c8;
    }
    ctx->pc = 0x4504C0u;
    SET_GPR_U32(ctx, 31, 0x4504C8u);
    ctx->pc = 0x44FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD30u, 0x4504C0u, 0x4504C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4504C8u;
label_4504c8:
    // 0x4504c8: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x4504c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4504cc:
    // 0x4504cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4504ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4504d0:
    // 0x4504d0: 0xc113f54  jal         func_44FD50
label_4504d4:
    if (ctx->pc == 0x4504D4u) {
        ctx->pc = 0x4504D8u;
        goto label_4504d8;
    }
    ctx->pc = 0x4504D0u;
    SET_GPR_U32(ctx, 31, 0x4504D8u);
    ctx->pc = 0x44FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD50u, 0x4504D0u, 0x4504D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4504D8u;
label_4504d8:
    // 0x4504d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4504d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4504dc:
    // 0x4504dc: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x4504dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4504e0:
    // 0x4504e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4504e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4504e4:
    // 0x4504e4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4504e8:
    if (ctx->pc == 0x4504E8u) {
        ctx->pc = 0x4504ECu;
        goto label_4504ec;
    }
    ctx->pc = 0x4504E4u;
    {
        const bool branch_taken_0x4504e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4504e4) {
            ctx->pc = 0x450594u;
            goto label_450594;
        }
    }
    ctx->pc = 0x4504ECu;
label_4504ec:
    // 0x4504ec: 0x8f82afc4  lw          $v0, -0x503C($gp)
    ctx->pc = 0x4504ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946756)));
label_4504f0:
    // 0x4504f0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4504f4:
    if (ctx->pc == 0x4504F4u) {
        ctx->pc = 0x4504F8u;
        goto label_4504f8;
    }
    ctx->pc = 0x4504F0u;
    {
        const bool branch_taken_0x4504f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4504f0) {
            ctx->pc = 0x450594u;
            goto label_450594;
        }
    }
    ctx->pc = 0x4504F8u;
label_4504f8:
    // 0x4504f8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4504f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4504fc:
    // 0x4504fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4504fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_450500:
    // 0x450500: 0x27a602d0  addiu       $a2, $sp, 0x2D0
    ctx->pc = 0x450500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_450504:
    // 0x450504: 0xc115ee8  jal         func_457BA0
label_450508:
    if (ctx->pc == 0x450508u) {
        ctx->pc = 0x45050Cu;
        goto label_45050c;
    }
    ctx->pc = 0x450504u;
    SET_GPR_U32(ctx, 31, 0x45050Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x450504u, 0x45050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45050Cu;
label_45050c:
    // 0x45050c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_450510:
    if (ctx->pc == 0x450510u) {
        ctx->pc = 0x450514u;
        goto label_450514;
    }
    ctx->pc = 0x45050Cu;
    {
        const bool branch_taken_0x45050c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45050c) {
            ctx->pc = 0x450594u;
            goto label_450594;
        }
    }
    ctx->pc = 0x450514u;
label_450514:
    // 0x450514: 0x8fa202d8  lw          $v0, 0x2D8($sp)
    ctx->pc = 0x450514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_450518:
    // 0x450518: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45051c:
    if (ctx->pc == 0x45051Cu) {
        ctx->pc = 0x450520u;
        goto label_450520;
    }
    ctx->pc = 0x450518u;
    {
        const bool branch_taken_0x450518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450518) {
            ctx->pc = 0x450594u;
            goto label_450594;
        }
    }
    ctx->pc = 0x450520u;
label_450520:
    // 0x450520: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x450520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_450524:
    // 0x450524: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x450524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_450528:
    // 0x450528: 0x8fa602d4  lw          $a2, 0x2D4($sp)
    ctx->pc = 0x450528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_45052c:
    // 0x45052c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45052cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_450530:
    // 0x450530: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x450530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_450534:
    // 0x450534: 0x240800dc  addiu       $t0, $zero, 0xDC
    ctx->pc = 0x450534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_450538:
    // 0x450538: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x450538u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45053c:
    // 0x45053c: 0x2529da50  addiu       $t1, $t1, -0x25B0
    ctx->pc = 0x45053cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957648));
label_450540:
    // 0x450540: 0xc113940  jal         func_44E500
label_450544:
    if (ctx->pc == 0x450544u) {
        ctx->pc = 0x450548u;
        goto label_450548;
    }
    ctx->pc = 0x450540u;
    SET_GPR_U32(ctx, 31, 0x450548u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x450540u, 0x450548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450548u;
label_450548:
    // 0x450548: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x450548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_45054c:
    // 0x45054c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45054cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_450550:
    // 0x450550: 0x24a5da70  addiu       $a1, $a1, -0x2590
    ctx->pc = 0x450550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957680));
label_450554:
    // 0x450554: 0xc115c24  jal         func_457090
label_450558:
    if (ctx->pc == 0x450558u) {
        ctx->pc = 0x45055Cu;
        goto label_45055c;
    }
    ctx->pc = 0x450554u;
    SET_GPR_U32(ctx, 31, 0x45055Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x450554u, 0x45055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45055Cu;
label_45055c:
    // 0x45055c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x45055cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_450560:
    // 0x450560: 0x8fa202d8  lw          $v0, 0x2D8($sp)
    ctx->pc = 0x450560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_450564:
    // 0x450564: 0x40f809  jalr        $v0
label_450568:
    if (ctx->pc == 0x450568u) {
        ctx->pc = 0x45056Cu;
        goto label_45056c;
    }
    ctx->pc = 0x450564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45056Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450564u, 0x45056Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45056Cu;
label_45056c:
    // 0x45056c: 0xaf82afc4  sw          $v0, -0x503C($gp)
    ctx->pc = 0x45056cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946756), GPR_U32(ctx, 2));
label_450570:
    // 0x450570: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x450570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_450574:
    // 0x450574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_450578:
    if (ctx->pc == 0x450578u) {
        ctx->pc = 0x45057Cu;
        goto label_45057c;
    }
    ctx->pc = 0x450574u;
    {
        const bool branch_taken_0x450574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450574) {
            ctx->pc = 0x450584u;
            goto label_450584;
        }
    }
    ctx->pc = 0x45057Cu;
label_45057c:
    // 0x45057c: 0xd  break       0
    ctx->pc = 0x45057cu;
    runtime->handleBreak(rdram, ctx);
label_450580:
    // 0x450580: 0x0  nop
    ctx->pc = 0x450580u;
    // NOP
label_450584:
    // 0x450584: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x450584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_450588:
    // 0x450588: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x450588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45058c:
    // 0x45058c: 0xc11392c  jal         func_44E4B0
label_450590:
    if (ctx->pc == 0x450590u) {
        ctx->pc = 0x450594u;
        goto label_450594;
    }
    ctx->pc = 0x45058Cu;
    SET_GPR_U32(ctx, 31, 0x450594u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45058Cu, 0x450594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450594u;
label_450594:
    // 0x450594: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x450594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_450598:
    // 0x450598: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_45059c:
    if (ctx->pc == 0x45059Cu) {
        ctx->pc = 0x4505A0u;
        goto label_4505a0;
    }
    ctx->pc = 0x450598u;
    {
        const bool branch_taken_0x450598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450598) {
            ctx->pc = 0x4505C0u;
            goto label_4505c0;
        }
    }
    ctx->pc = 0x4505A0u;
label_4505a0:
    // 0x4505a0: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x4505a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4505a4:
    // 0x4505a4: 0xc11410c  jal         func_450430
label_4505a8:
    if (ctx->pc == 0x4505A8u) {
        ctx->pc = 0x4505ACu;
        goto label_4505ac;
    }
    ctx->pc = 0x4505A4u;
    SET_GPR_U32(ctx, 31, 0x4505ACu);
    ctx->pc = 0x450430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450430u, 0x4505A4u, 0x4505ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4505ACu;
label_4505ac:
    // 0x4505ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4505acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4505b0:
    // 0x4505b0: 0xc115a8c  jal         func_456A30
label_4505b4:
    if (ctx->pc == 0x4505B4u) {
        ctx->pc = 0x4505B8u;
        goto label_4505b8;
    }
    ctx->pc = 0x4505B0u;
    SET_GPR_U32(ctx, 31, 0x4505B8u);
    ctx->pc = 0x456A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456A30u, 0x4505B0u, 0x4505B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4505B8u;
label_4505b8:
    // 0x4505b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4505b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4505bc:
    // 0x4505bc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4505bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4505c0:
    // 0x4505c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4505c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4505c4:
    // 0x4505c4: 0x10000053  b           . + 4 + (0x53 << 2)
label_4505c8:
    if (ctx->pc == 0x4505C8u) {
        ctx->pc = 0x4505CCu;
        goto label_4505cc;
    }
    ctx->pc = 0x4505C4u;
    {
        const bool branch_taken_0x4505c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4505c4) {
            ctx->pc = 0x450714u;
            goto label_450714;
        }
    }
    ctx->pc = 0x4505CCu;
label_4505cc:
    // 0x4505cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4505ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4505d0:
    // 0x4505d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4505d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4505d4:
    // 0x4505d4: 0xc1159d0  jal         func_456740
label_4505d8:
    if (ctx->pc == 0x4505D8u) {
        ctx->pc = 0x4505DCu;
        goto label_4505dc;
    }
    ctx->pc = 0x4505D4u;
    SET_GPR_U32(ctx, 31, 0x4505DCu);
    ctx->pc = 0x456740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456740u, 0x4505D4u, 0x4505DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4505DCu;
label_4505dc:
    // 0x4505dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4505dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4505e0:
    // 0x4505e0: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x4505e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4505e4:
    // 0x4505e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4505e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4505e8:
    // 0x4505e8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4505ec:
    if (ctx->pc == 0x4505ECu) {
        ctx->pc = 0x4505F0u;
        goto label_4505f0;
    }
    ctx->pc = 0x4505E8u;
    {
        const bool branch_taken_0x4505e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4505e8) {
            ctx->pc = 0x450694u;
            goto label_450694;
        }
    }
    ctx->pc = 0x4505F0u;
label_4505f0:
    // 0x4505f0: 0x8f82afc8  lw          $v0, -0x5038($gp)
    ctx->pc = 0x4505f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946760)));
label_4505f4:
    // 0x4505f4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4505f8:
    if (ctx->pc == 0x4505F8u) {
        ctx->pc = 0x4505FCu;
        goto label_4505fc;
    }
    ctx->pc = 0x4505F4u;
    {
        const bool branch_taken_0x4505f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4505f4) {
            ctx->pc = 0x450694u;
            goto label_450694;
        }
    }
    ctx->pc = 0x4505FCu;
label_4505fc:
    // 0x4505fc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4505fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_450600:
    // 0x450600: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x450600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_450604:
    // 0x450604: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x450604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_450608:
    // 0x450608: 0xc115ee8  jal         func_457BA0
label_45060c:
    if (ctx->pc == 0x45060Cu) {
        ctx->pc = 0x450610u;
        goto label_450610;
    }
    ctx->pc = 0x450608u;
    SET_GPR_U32(ctx, 31, 0x450610u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x450608u, 0x450610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450610u;
label_450610:
    // 0x450610: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_450614:
    if (ctx->pc == 0x450614u) {
        ctx->pc = 0x450618u;
        goto label_450618;
    }
    ctx->pc = 0x450610u;
    {
        const bool branch_taken_0x450610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450610) {
            ctx->pc = 0x450694u;
            goto label_450694;
        }
    }
    ctx->pc = 0x450618u;
label_450618:
    // 0x450618: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x450618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_45061c:
    // 0x45061c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_450620:
    if (ctx->pc == 0x450620u) {
        ctx->pc = 0x450624u;
        goto label_450624;
    }
    ctx->pc = 0x45061Cu;
    {
        const bool branch_taken_0x45061c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45061c) {
            ctx->pc = 0x450694u;
            goto label_450694;
        }
    }
    ctx->pc = 0x450624u;
label_450624:
    // 0x450624: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x450624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_450628:
    // 0x450628: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x450628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45062c:
    // 0x45062c: 0x8fa602c4  lw          $a2, 0x2C4($sp)
    ctx->pc = 0x45062cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_450630:
    // 0x450630: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x450630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_450634:
    // 0x450634: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x450634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_450638:
    // 0x450638: 0x240800eb  addiu       $t0, $zero, 0xEB
    ctx->pc = 0x450638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
label_45063c:
    // 0x45063c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45063cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_450640:
    // 0x450640: 0x2529dab0  addiu       $t1, $t1, -0x2550
    ctx->pc = 0x450640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957744));
label_450644:
    // 0x450644: 0xc113940  jal         func_44E500
label_450648:
    if (ctx->pc == 0x450648u) {
        ctx->pc = 0x45064Cu;
        goto label_45064c;
    }
    ctx->pc = 0x450644u;
    SET_GPR_U32(ctx, 31, 0x45064Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x450644u, 0x45064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45064Cu;
label_45064c:
    // 0x45064c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x45064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_450650:
    // 0x450650: 0x2785afcc  addiu       $a1, $gp, -0x5034
    ctx->pc = 0x450650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946764));
label_450654:
    // 0x450654: 0xc115c24  jal         func_457090
label_450658:
    if (ctx->pc == 0x450658u) {
        ctx->pc = 0x45065Cu;
        goto label_45065c;
    }
    ctx->pc = 0x450654u;
    SET_GPR_U32(ctx, 31, 0x45065Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x450654u, 0x45065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45065Cu;
label_45065c:
    // 0x45065c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x45065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_450660:
    // 0x450660: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x450660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_450664:
    // 0x450664: 0x40f809  jalr        $v0
label_450668:
    if (ctx->pc == 0x450668u) {
        ctx->pc = 0x45066Cu;
        goto label_45066c;
    }
    ctx->pc = 0x450664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45066Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450664u, 0x45066Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45066Cu;
label_45066c:
    // 0x45066c: 0xaf82afc8  sw          $v0, -0x5038($gp)
    ctx->pc = 0x45066cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946760), GPR_U32(ctx, 2));
label_450670:
    // 0x450670: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x450670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_450674:
    // 0x450674: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_450678:
    if (ctx->pc == 0x450678u) {
        ctx->pc = 0x45067Cu;
        goto label_45067c;
    }
    ctx->pc = 0x450674u;
    {
        const bool branch_taken_0x450674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450674) {
            ctx->pc = 0x450684u;
            goto label_450684;
        }
    }
    ctx->pc = 0x45067Cu;
label_45067c:
    // 0x45067c: 0xd  break       0
    ctx->pc = 0x45067cu;
    runtime->handleBreak(rdram, ctx);
label_450680:
    // 0x450680: 0x0  nop
    ctx->pc = 0x450680u;
    // NOP
label_450684:
    // 0x450684: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x450684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_450688:
    // 0x450688: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x450688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45068c:
    // 0x45068c: 0xc11392c  jal         func_44E4B0
label_450690:
    if (ctx->pc == 0x450690u) {
        ctx->pc = 0x450694u;
        goto label_450694;
    }
    ctx->pc = 0x45068Cu;
    SET_GPR_U32(ctx, 31, 0x450694u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45068Cu, 0x450694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450694u;
label_450694:
    // 0x450694: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x450694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_450698:
    // 0x450698: 0xc042514  jal         func_109450
label_45069c:
    if (ctx->pc == 0x45069Cu) {
        ctx->pc = 0x4506A0u;
        goto label_4506a0;
    }
    ctx->pc = 0x450698u;
    SET_GPR_U32(ctx, 31, 0x4506A0u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x450698u, 0x4506A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4506A0u;
label_4506a0:
    // 0x4506a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4506a4:
    if (ctx->pc == 0x4506A4u) {
        ctx->pc = 0x4506A8u;
        goto label_4506a8;
    }
    ctx->pc = 0x4506A0u;
    {
        const bool branch_taken_0x4506a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4506a0) {
            ctx->pc = 0x4506B8u;
            goto label_4506b8;
        }
    }
    ctx->pc = 0x4506A8u;
label_4506a8:
    // 0x4506a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4506a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4506ac:
    // 0x4506ac: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x4506acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4506b0:
    // 0x4506b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4506b4:
    if (ctx->pc == 0x4506B4u) {
        ctx->pc = 0x4506B8u;
        goto label_4506b8;
    }
    ctx->pc = 0x4506B0u;
    {
        const bool branch_taken_0x4506b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4506b0) {
            ctx->pc = 0x4506BCu;
            goto label_4506bc;
        }
    }
    ctx->pc = 0x4506B8u;
label_4506b8:
    // 0x4506b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4506b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4506bc:
    // 0x4506bc: 0x329500ff  andi        $s5, $s4, 0xFF
    ctx->pc = 0x4506bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_4506c0:
    // 0x4506c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4506c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4506c4:
    // 0x4506c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4506c8:
    if (ctx->pc == 0x4506C8u) {
        ctx->pc = 0x4506CCu;
        goto label_4506cc;
    }
    ctx->pc = 0x4506C4u;
    {
        const bool branch_taken_0x4506c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4506c4) {
            ctx->pc = 0x4506E4u;
            goto label_4506e4;
        }
    }
    ctx->pc = 0x4506CCu;
label_4506cc:
    // 0x4506cc: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x4506ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4506d0:
    // 0x4506d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4506d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4506d4:
    // 0x4506d4: 0xc11420c  jal         func_450830
label_4506d8:
    if (ctx->pc == 0x4506D8u) {
        ctx->pc = 0x4506DCu;
        goto label_4506dc;
    }
    ctx->pc = 0x4506D4u;
    SET_GPR_U32(ctx, 31, 0x4506DCu);
    ctx->pc = 0x450830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450830u, 0x4506D4u, 0x4506DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4506DCu;
label_4506dc:
    // 0x4506dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_4506e0:
    if (ctx->pc == 0x4506E0u) {
        ctx->pc = 0x4506E4u;
        goto label_4506e4;
    }
    ctx->pc = 0x4506DCu;
    {
        const bool branch_taken_0x4506dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4506dc) {
            ctx->pc = 0x450700u;
            goto label_450700;
        }
    }
    ctx->pc = 0x4506E4u;
label_4506e4:
    // 0x4506e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4506e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4506e8:
    // 0x4506e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4506ec:
    if (ctx->pc == 0x4506ECu) {
        ctx->pc = 0x4506F0u;
        goto label_4506f0;
    }
    ctx->pc = 0x4506E8u;
    {
        const bool branch_taken_0x4506e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4506e8) {
            ctx->pc = 0x450700u;
            goto label_450700;
        }
    }
    ctx->pc = 0x4506F0u;
label_4506f0:
    // 0x4506f0: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x4506f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4506f4:
    // 0x4506f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4506f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4506f8:
    // 0x4506f8: 0xc11436c  jal         func_450DB0
label_4506fc:
    if (ctx->pc == 0x4506FCu) {
        ctx->pc = 0x450700u;
        goto label_450700;
    }
    ctx->pc = 0x4506F8u;
    SET_GPR_U32(ctx, 31, 0x450700u);
    ctx->pc = 0x450DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450DB0u, 0x4506F8u, 0x450700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450700u;
label_450700:
    // 0x450700: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_450704:
    if (ctx->pc == 0x450704u) {
        ctx->pc = 0x450708u;
        goto label_450708;
    }
    ctx->pc = 0x450700u;
    {
        const bool branch_taken_0x450700 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x450700) {
            ctx->pc = 0x450710u;
            goto label_450710;
        }
    }
    ctx->pc = 0x450708u;
label_450708:
    // 0x450708: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x450708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_45070c:
    // 0x45070c: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x45070cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_450710:
    // 0x450710: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x450710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_450714:
    // 0x450714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x450714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_450718:
    // 0x450718: 0xc1159c4  jal         func_456710
label_45071c:
    if (ctx->pc == 0x45071Cu) {
        ctx->pc = 0x450720u;
        goto label_450720;
    }
    ctx->pc = 0x450718u;
    SET_GPR_U32(ctx, 31, 0x450720u);
    ctx->pc = 0x456710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456710u, 0x450718u, 0x450720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450720u;
label_450720:
    // 0x450720: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x450720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_450724:
    // 0x450724: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_450728:
    if (ctx->pc == 0x450728u) {
        ctx->pc = 0x45072Cu;
        goto label_45072c;
    }
    ctx->pc = 0x450724u;
    {
        const bool branch_taken_0x450724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450724) {
            ctx->pc = 0x4505CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4505cc;
        }
    }
    ctx->pc = 0x45072Cu;
label_45072c:
    // 0x45072c: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x45072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_450730:
    // 0x450730: 0xc1144bc  jal         func_4512F0
label_450734:
    if (ctx->pc == 0x450734u) {
        ctx->pc = 0x450738u;
        goto label_450738;
    }
    ctx->pc = 0x450730u;
    SET_GPR_U32(ctx, 31, 0x450738u);
    ctx->pc = 0x4512F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4512F0u, 0x450730u, 0x450738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450738u;
label_450738:
    // 0x450738: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_45073c:
    if (ctx->pc == 0x45073Cu) {
        ctx->pc = 0x450740u;
        goto label_450740;
    }
    ctx->pc = 0x450738u;
    {
        const bool branch_taken_0x450738 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x450738) {
            ctx->pc = 0x45078Cu;
            goto label_45078c;
        }
    }
    ctx->pc = 0x450740u;
label_450740:
    // 0x450740: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x450740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_450744:
    // 0x450744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x450744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_450748:
    // 0x450748: 0xc1146f4  jal         func_451BD0
label_45074c:
    if (ctx->pc == 0x45074Cu) {
        ctx->pc = 0x450750u;
        goto label_450750;
    }
    ctx->pc = 0x450748u;
    SET_GPR_U32(ctx, 31, 0x450750u);
    ctx->pc = 0x451BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451BD0u, 0x450748u, 0x450750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450750u;
label_450750:
    // 0x450750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x450750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_450754:
    // 0x450754: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x450754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_450758:
    // 0x450758: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x450758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_45075c:
    // 0x45075c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x45075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_450760:
    // 0x450760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x450760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_450764:
    // 0x450764: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x450764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_450768:
    // 0x450768: 0x27a402b8  addiu       $a0, $sp, 0x2B8
    ctx->pc = 0x450768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_45076c:
    // 0x45076c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x45076cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_450770:
    // 0x450770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x450770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450774:
    // 0x450774: 0xc1141fc  jal         func_4507F0
label_450778:
    if (ctx->pc == 0x450778u) {
        ctx->pc = 0x45077Cu;
        goto label_45077c;
    }
    ctx->pc = 0x450774u;
    SET_GPR_U32(ctx, 31, 0x45077Cu);
    ctx->pc = 0x4507F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4507F0u, 0x450774u, 0x45077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45077Cu;
label_45077c:
    // 0x45077c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45077cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_450780:
    // 0x450780: 0x8f82bf24  lw          $v0, -0x40DC($gp)
    ctx->pc = 0x450780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950692)));
label_450784:
    // 0x450784: 0x40f809  jalr        $v0
label_450788:
    if (ctx->pc == 0x450788u) {
        ctx->pc = 0x45078Cu;
        goto label_45078c;
    }
    ctx->pc = 0x450784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45078Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450784u, 0x45078Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45078Cu;
label_45078c:
    // 0x45078c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x45078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_450790:
    // 0x450790: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x450790u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_450794:
    // 0x450794: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x450794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_450798:
    // 0x450798: 0xc113f40  jal         func_44FD00
label_45079c:
    if (ctx->pc == 0x45079Cu) {
        ctx->pc = 0x4507A0u;
        goto label_4507a0;
    }
    ctx->pc = 0x450798u;
    SET_GPR_U32(ctx, 31, 0x4507A0u);
    ctx->pc = 0x44FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD00u, 0x450798u, 0x4507A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4507A0u;
label_4507a0:
    // 0x4507a0: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x4507a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4507a4:
    // 0x4507a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4507a8:
    if (ctx->pc == 0x4507A8u) {
        ctx->pc = 0x4507ACu;
        goto label_4507ac;
    }
    ctx->pc = 0x4507A4u;
    {
        const bool branch_taken_0x4507a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4507a4) {
            ctx->pc = 0x4507B8u;
            goto label_4507b8;
        }
    }
    ctx->pc = 0x4507ACu;
label_4507ac:
    // 0x4507ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4507acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4507b0:
    // 0x4507b0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x4507b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4507b4:
    // 0x4507b4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4507b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4507b8:
    // 0x4507b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4507b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4507bc:
    // 0x4507bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4507bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4507c0:
    // 0x4507c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4507c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4507c4:
    // 0x4507c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4507c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4507c8:
    // 0x4507c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4507c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4507cc:
    // 0x4507cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4507ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4507d0:
    // 0x4507d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4507d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4507d4:
    // 0x4507d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4507d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4507d8:
    // 0x4507d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4507d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4507dc:
    // 0x4507dc: 0x27bd02f0  addiu       $sp, $sp, 0x2F0
    ctx->pc = 0x4507dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_4507e0:
    // 0x4507e0: 0x3e00008  jr          $ra
label_4507e4:
    if (ctx->pc == 0x4507E4u) {
        ctx->pc = 0x4507E8u;
        goto label_4507e8;
    }
    ctx->pc = 0x4507E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4507E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4507E8u;
label_4507e8:
    // 0x4507e8: 0x0  nop
    ctx->pc = 0x4507e8u;
    // NOP
label_4507ec:
    // 0x4507ec: 0x0  nop
    ctx->pc = 0x4507ecu;
    // NOP
    ctx->pc = 0x4507f0u;
}
