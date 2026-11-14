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

// Function: sub_0047D4D0
// Address: 0x47d4d0 - 0x47d900
void sub_0047D4D0_0x47d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D4D0_0x47d4d0");
#endif

    switch (ctx->pc) {
        case 0x47d4d0u: goto label_47d4d0;
        case 0x47d4d4u: goto label_47d4d4;
        case 0x47d4d8u: goto label_47d4d8;
        case 0x47d4dcu: goto label_47d4dc;
        case 0x47d4e0u: goto label_47d4e0;
        case 0x47d4e4u: goto label_47d4e4;
        case 0x47d4e8u: goto label_47d4e8;
        case 0x47d4ecu: goto label_47d4ec;
        case 0x47d4f0u: goto label_47d4f0;
        case 0x47d4f4u: goto label_47d4f4;
        case 0x47d4f8u: goto label_47d4f8;
        case 0x47d4fcu: goto label_47d4fc;
        case 0x47d500u: goto label_47d500;
        case 0x47d504u: goto label_47d504;
        case 0x47d508u: goto label_47d508;
        case 0x47d50cu: goto label_47d50c;
        case 0x47d510u: goto label_47d510;
        case 0x47d514u: goto label_47d514;
        case 0x47d518u: goto label_47d518;
        case 0x47d51cu: goto label_47d51c;
        case 0x47d520u: goto label_47d520;
        case 0x47d524u: goto label_47d524;
        case 0x47d528u: goto label_47d528;
        case 0x47d52cu: goto label_47d52c;
        case 0x47d530u: goto label_47d530;
        case 0x47d534u: goto label_47d534;
        case 0x47d538u: goto label_47d538;
        case 0x47d53cu: goto label_47d53c;
        case 0x47d540u: goto label_47d540;
        case 0x47d544u: goto label_47d544;
        case 0x47d548u: goto label_47d548;
        case 0x47d54cu: goto label_47d54c;
        case 0x47d550u: goto label_47d550;
        case 0x47d554u: goto label_47d554;
        case 0x47d558u: goto label_47d558;
        case 0x47d55cu: goto label_47d55c;
        case 0x47d560u: goto label_47d560;
        case 0x47d564u: goto label_47d564;
        case 0x47d568u: goto label_47d568;
        case 0x47d56cu: goto label_47d56c;
        case 0x47d570u: goto label_47d570;
        case 0x47d574u: goto label_47d574;
        case 0x47d578u: goto label_47d578;
        case 0x47d57cu: goto label_47d57c;
        case 0x47d580u: goto label_47d580;
        case 0x47d584u: goto label_47d584;
        case 0x47d588u: goto label_47d588;
        case 0x47d58cu: goto label_47d58c;
        case 0x47d590u: goto label_47d590;
        case 0x47d594u: goto label_47d594;
        case 0x47d598u: goto label_47d598;
        case 0x47d59cu: goto label_47d59c;
        case 0x47d5a0u: goto label_47d5a0;
        case 0x47d5a4u: goto label_47d5a4;
        case 0x47d5a8u: goto label_47d5a8;
        case 0x47d5acu: goto label_47d5ac;
        case 0x47d5b0u: goto label_47d5b0;
        case 0x47d5b4u: goto label_47d5b4;
        case 0x47d5b8u: goto label_47d5b8;
        case 0x47d5bcu: goto label_47d5bc;
        case 0x47d5c0u: goto label_47d5c0;
        case 0x47d5c4u: goto label_47d5c4;
        case 0x47d5c8u: goto label_47d5c8;
        case 0x47d5ccu: goto label_47d5cc;
        case 0x47d5d0u: goto label_47d5d0;
        case 0x47d5d4u: goto label_47d5d4;
        case 0x47d5d8u: goto label_47d5d8;
        case 0x47d5dcu: goto label_47d5dc;
        case 0x47d5e0u: goto label_47d5e0;
        case 0x47d5e4u: goto label_47d5e4;
        case 0x47d5e8u: goto label_47d5e8;
        case 0x47d5ecu: goto label_47d5ec;
        case 0x47d5f0u: goto label_47d5f0;
        case 0x47d5f4u: goto label_47d5f4;
        case 0x47d5f8u: goto label_47d5f8;
        case 0x47d5fcu: goto label_47d5fc;
        case 0x47d600u: goto label_47d600;
        case 0x47d604u: goto label_47d604;
        case 0x47d608u: goto label_47d608;
        case 0x47d60cu: goto label_47d60c;
        case 0x47d610u: goto label_47d610;
        case 0x47d614u: goto label_47d614;
        case 0x47d618u: goto label_47d618;
        case 0x47d61cu: goto label_47d61c;
        case 0x47d620u: goto label_47d620;
        case 0x47d624u: goto label_47d624;
        case 0x47d628u: goto label_47d628;
        case 0x47d62cu: goto label_47d62c;
        case 0x47d630u: goto label_47d630;
        case 0x47d634u: goto label_47d634;
        case 0x47d638u: goto label_47d638;
        case 0x47d63cu: goto label_47d63c;
        case 0x47d640u: goto label_47d640;
        case 0x47d644u: goto label_47d644;
        case 0x47d648u: goto label_47d648;
        case 0x47d64cu: goto label_47d64c;
        case 0x47d650u: goto label_47d650;
        case 0x47d654u: goto label_47d654;
        case 0x47d658u: goto label_47d658;
        case 0x47d65cu: goto label_47d65c;
        case 0x47d660u: goto label_47d660;
        case 0x47d664u: goto label_47d664;
        case 0x47d668u: goto label_47d668;
        case 0x47d66cu: goto label_47d66c;
        case 0x47d670u: goto label_47d670;
        case 0x47d674u: goto label_47d674;
        case 0x47d678u: goto label_47d678;
        case 0x47d67cu: goto label_47d67c;
        case 0x47d680u: goto label_47d680;
        case 0x47d684u: goto label_47d684;
        case 0x47d688u: goto label_47d688;
        case 0x47d68cu: goto label_47d68c;
        case 0x47d690u: goto label_47d690;
        case 0x47d694u: goto label_47d694;
        case 0x47d698u: goto label_47d698;
        case 0x47d69cu: goto label_47d69c;
        case 0x47d6a0u: goto label_47d6a0;
        case 0x47d6a4u: goto label_47d6a4;
        case 0x47d6a8u: goto label_47d6a8;
        case 0x47d6acu: goto label_47d6ac;
        case 0x47d6b0u: goto label_47d6b0;
        case 0x47d6b4u: goto label_47d6b4;
        case 0x47d6b8u: goto label_47d6b8;
        case 0x47d6bcu: goto label_47d6bc;
        case 0x47d6c0u: goto label_47d6c0;
        case 0x47d6c4u: goto label_47d6c4;
        case 0x47d6c8u: goto label_47d6c8;
        case 0x47d6ccu: goto label_47d6cc;
        case 0x47d6d0u: goto label_47d6d0;
        case 0x47d6d4u: goto label_47d6d4;
        case 0x47d6d8u: goto label_47d6d8;
        case 0x47d6dcu: goto label_47d6dc;
        case 0x47d6e0u: goto label_47d6e0;
        case 0x47d6e4u: goto label_47d6e4;
        case 0x47d6e8u: goto label_47d6e8;
        case 0x47d6ecu: goto label_47d6ec;
        case 0x47d6f0u: goto label_47d6f0;
        case 0x47d6f4u: goto label_47d6f4;
        case 0x47d6f8u: goto label_47d6f8;
        case 0x47d6fcu: goto label_47d6fc;
        case 0x47d700u: goto label_47d700;
        case 0x47d704u: goto label_47d704;
        case 0x47d708u: goto label_47d708;
        case 0x47d70cu: goto label_47d70c;
        case 0x47d710u: goto label_47d710;
        case 0x47d714u: goto label_47d714;
        case 0x47d718u: goto label_47d718;
        case 0x47d71cu: goto label_47d71c;
        case 0x47d720u: goto label_47d720;
        case 0x47d724u: goto label_47d724;
        case 0x47d728u: goto label_47d728;
        case 0x47d72cu: goto label_47d72c;
        case 0x47d730u: goto label_47d730;
        case 0x47d734u: goto label_47d734;
        case 0x47d738u: goto label_47d738;
        case 0x47d73cu: goto label_47d73c;
        case 0x47d740u: goto label_47d740;
        case 0x47d744u: goto label_47d744;
        case 0x47d748u: goto label_47d748;
        case 0x47d74cu: goto label_47d74c;
        case 0x47d750u: goto label_47d750;
        case 0x47d754u: goto label_47d754;
        case 0x47d758u: goto label_47d758;
        case 0x47d75cu: goto label_47d75c;
        case 0x47d760u: goto label_47d760;
        case 0x47d764u: goto label_47d764;
        case 0x47d768u: goto label_47d768;
        case 0x47d76cu: goto label_47d76c;
        case 0x47d770u: goto label_47d770;
        case 0x47d774u: goto label_47d774;
        case 0x47d778u: goto label_47d778;
        case 0x47d77cu: goto label_47d77c;
        case 0x47d780u: goto label_47d780;
        case 0x47d784u: goto label_47d784;
        case 0x47d788u: goto label_47d788;
        case 0x47d78cu: goto label_47d78c;
        case 0x47d790u: goto label_47d790;
        case 0x47d794u: goto label_47d794;
        case 0x47d798u: goto label_47d798;
        case 0x47d79cu: goto label_47d79c;
        case 0x47d7a0u: goto label_47d7a0;
        case 0x47d7a4u: goto label_47d7a4;
        case 0x47d7a8u: goto label_47d7a8;
        case 0x47d7acu: goto label_47d7ac;
        case 0x47d7b0u: goto label_47d7b0;
        case 0x47d7b4u: goto label_47d7b4;
        case 0x47d7b8u: goto label_47d7b8;
        case 0x47d7bcu: goto label_47d7bc;
        case 0x47d7c0u: goto label_47d7c0;
        case 0x47d7c4u: goto label_47d7c4;
        case 0x47d7c8u: goto label_47d7c8;
        case 0x47d7ccu: goto label_47d7cc;
        case 0x47d7d0u: goto label_47d7d0;
        case 0x47d7d4u: goto label_47d7d4;
        case 0x47d7d8u: goto label_47d7d8;
        case 0x47d7dcu: goto label_47d7dc;
        case 0x47d7e0u: goto label_47d7e0;
        case 0x47d7e4u: goto label_47d7e4;
        case 0x47d7e8u: goto label_47d7e8;
        case 0x47d7ecu: goto label_47d7ec;
        case 0x47d7f0u: goto label_47d7f0;
        case 0x47d7f4u: goto label_47d7f4;
        case 0x47d7f8u: goto label_47d7f8;
        case 0x47d7fcu: goto label_47d7fc;
        case 0x47d800u: goto label_47d800;
        case 0x47d804u: goto label_47d804;
        case 0x47d808u: goto label_47d808;
        case 0x47d80cu: goto label_47d80c;
        case 0x47d810u: goto label_47d810;
        case 0x47d814u: goto label_47d814;
        case 0x47d818u: goto label_47d818;
        case 0x47d81cu: goto label_47d81c;
        case 0x47d820u: goto label_47d820;
        case 0x47d824u: goto label_47d824;
        case 0x47d828u: goto label_47d828;
        case 0x47d82cu: goto label_47d82c;
        case 0x47d830u: goto label_47d830;
        case 0x47d834u: goto label_47d834;
        case 0x47d838u: goto label_47d838;
        case 0x47d83cu: goto label_47d83c;
        case 0x47d840u: goto label_47d840;
        case 0x47d844u: goto label_47d844;
        case 0x47d848u: goto label_47d848;
        case 0x47d84cu: goto label_47d84c;
        case 0x47d850u: goto label_47d850;
        case 0x47d854u: goto label_47d854;
        case 0x47d858u: goto label_47d858;
        case 0x47d85cu: goto label_47d85c;
        case 0x47d860u: goto label_47d860;
        case 0x47d864u: goto label_47d864;
        case 0x47d868u: goto label_47d868;
        case 0x47d86cu: goto label_47d86c;
        case 0x47d870u: goto label_47d870;
        case 0x47d874u: goto label_47d874;
        case 0x47d878u: goto label_47d878;
        case 0x47d87cu: goto label_47d87c;
        case 0x47d880u: goto label_47d880;
        case 0x47d884u: goto label_47d884;
        case 0x47d888u: goto label_47d888;
        case 0x47d88cu: goto label_47d88c;
        case 0x47d890u: goto label_47d890;
        case 0x47d894u: goto label_47d894;
        case 0x47d898u: goto label_47d898;
        case 0x47d89cu: goto label_47d89c;
        case 0x47d8a0u: goto label_47d8a0;
        case 0x47d8a4u: goto label_47d8a4;
        case 0x47d8a8u: goto label_47d8a8;
        case 0x47d8acu: goto label_47d8ac;
        case 0x47d8b0u: goto label_47d8b0;
        case 0x47d8b4u: goto label_47d8b4;
        case 0x47d8b8u: goto label_47d8b8;
        case 0x47d8bcu: goto label_47d8bc;
        case 0x47d8c0u: goto label_47d8c0;
        case 0x47d8c4u: goto label_47d8c4;
        case 0x47d8c8u: goto label_47d8c8;
        case 0x47d8ccu: goto label_47d8cc;
        case 0x47d8d0u: goto label_47d8d0;
        case 0x47d8d4u: goto label_47d8d4;
        case 0x47d8d8u: goto label_47d8d8;
        case 0x47d8dcu: goto label_47d8dc;
        case 0x47d8e0u: goto label_47d8e0;
        case 0x47d8e4u: goto label_47d8e4;
        case 0x47d8e8u: goto label_47d8e8;
        case 0x47d8ecu: goto label_47d8ec;
        case 0x47d8f0u: goto label_47d8f0;
        case 0x47d8f4u: goto label_47d8f4;
        case 0x47d8f8u: goto label_47d8f8;
        case 0x47d8fcu: goto label_47d8fc;
        default: break;
    }

    ctx->pc = 0x47d4d0u;

label_47d4d0:
    // 0x47d4d0: 0x27bdf5a0  addiu       $sp, $sp, -0xA60
    ctx->pc = 0x47d4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964640));
label_47d4d4:
    // 0x47d4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47d4d8:
    // 0x47d4d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47d4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47d4dc:
    // 0x47d4dc: 0xafa40a00  sw          $a0, 0xA00($sp)
    ctx->pc = 0x47d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2560), GPR_U32(ctx, 4));
label_47d4e0:
    // 0x47d4e0: 0xe7ac0a10  swc1        $f12, 0xA10($sp)
    ctx->pc = 0x47d4e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2576), bits); }
label_47d4e4:
    // 0x47d4e4: 0xafa50a20  sw          $a1, 0xA20($sp)
    ctx->pc = 0x47d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2592), GPR_U32(ctx, 5));
label_47d4e8:
    // 0x47d4e8: 0xafa60a30  sw          $a2, 0xA30($sp)
    ctx->pc = 0x47d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2608), GPR_U32(ctx, 6));
label_47d4ec:
    // 0x47d4ec: 0xe7ad0a40  swc1        $f13, 0xA40($sp)
    ctx->pc = 0x47d4ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2624), bits); }
label_47d4f0:
    // 0x47d4f0: 0xafa70a50  sw          $a3, 0xA50($sp)
    ctx->pc = 0x47d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2640), GPR_U32(ctx, 7));
label_47d4f4:
    // 0x47d4f4: 0x8fa20a00  lw          $v0, 0xA00($sp)
    ctx->pc = 0x47d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2560)));
label_47d4f8:
    // 0x47d4f8: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x47d4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_47d4fc:
    // 0x47d4fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47d500:
    // 0x47d500: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47d504:
    if (ctx->pc == 0x47D504u) {
        ctx->pc = 0x47D508u;
        goto label_47d508;
    }
    ctx->pc = 0x47D500u;
    {
        const bool branch_taken_0x47d500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d500) {
            ctx->pc = 0x47D5ACu;
            goto label_47d5ac;
        }
    }
    ctx->pc = 0x47D508u;
label_47d508:
    // 0x47d508: 0x8f82b4f8  lw          $v0, -0x4B08($gp)
    ctx->pc = 0x47d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948088)));
label_47d50c:
    // 0x47d50c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47d510:
    if (ctx->pc == 0x47D510u) {
        ctx->pc = 0x47D514u;
        goto label_47d514;
    }
    ctx->pc = 0x47D50Cu;
    {
        const bool branch_taken_0x47d50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d50c) {
            ctx->pc = 0x47D5ACu;
            goto label_47d5ac;
        }
    }
    ctx->pc = 0x47D514u;
label_47d514:
    // 0x47d514: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47d514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47d518:
    // 0x47d518: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d51c:
    // 0x47d51c: 0x27a609e8  addiu       $a2, $sp, 0x9E8
    ctx->pc = 0x47d51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2536));
label_47d520:
    // 0x47d520: 0xc115ee8  jal         func_457BA0
label_47d524:
    if (ctx->pc == 0x47D524u) {
        ctx->pc = 0x47D528u;
        goto label_47d528;
    }
    ctx->pc = 0x47D520u;
    SET_GPR_U32(ctx, 31, 0x47D528u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47D520u, 0x47D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D528u;
label_47d528:
    // 0x47d528: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47d52c:
    if (ctx->pc == 0x47D52Cu) {
        ctx->pc = 0x47D530u;
        goto label_47d530;
    }
    ctx->pc = 0x47D528u;
    {
        const bool branch_taken_0x47d528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d528) {
            ctx->pc = 0x47D5ACu;
            goto label_47d5ac;
        }
    }
    ctx->pc = 0x47D530u;
label_47d530:
    // 0x47d530: 0x8fa209f0  lw          $v0, 0x9F0($sp)
    ctx->pc = 0x47d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2544)));
label_47d534:
    // 0x47d534: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47d538:
    if (ctx->pc == 0x47D538u) {
        ctx->pc = 0x47D53Cu;
        goto label_47d53c;
    }
    ctx->pc = 0x47D534u;
    {
        const bool branch_taken_0x47d534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d534) {
            ctx->pc = 0x47D5ACu;
            goto label_47d5ac;
        }
    }
    ctx->pc = 0x47D53Cu;
label_47d53c:
    // 0x47d53c: 0x27a408a0  addiu       $a0, $sp, 0x8A0
    ctx->pc = 0x47d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_47d540:
    // 0x47d540: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d544:
    // 0x47d544: 0x8fa609ec  lw          $a2, 0x9EC($sp)
    ctx->pc = 0x47d544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2540)));
label_47d548:
    // 0x47d548: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47d548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47d54c:
    // 0x47d54c: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47d54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47d550:
    // 0x47d550: 0x2408038b  addiu       $t0, $zero, 0x38B
    ctx->pc = 0x47d550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 907));
label_47d554:
    // 0x47d554: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47d554u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47d558:
    // 0x47d558: 0x252917c0  addiu       $t1, $t1, 0x17C0
    ctx->pc = 0x47d558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6080));
label_47d55c:
    // 0x47d55c: 0xc113940  jal         func_44E500
label_47d560:
    if (ctx->pc == 0x47D560u) {
        ctx->pc = 0x47D564u;
        goto label_47d564;
    }
    ctx->pc = 0x47D55Cu;
    SET_GPR_U32(ctx, 31, 0x47D564u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47D55Cu, 0x47D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D564u;
label_47d564:
    // 0x47d564: 0x27a408a0  addiu       $a0, $sp, 0x8A0
    ctx->pc = 0x47d564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_47d568:
    // 0x47d568: 0x2785b4e8  addiu       $a1, $gp, -0x4B18
    ctx->pc = 0x47d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948072));
label_47d56c:
    // 0x47d56c: 0xc115c24  jal         func_457090
label_47d570:
    if (ctx->pc == 0x47D570u) {
        ctx->pc = 0x47D574u;
        goto label_47d574;
    }
    ctx->pc = 0x47D56Cu;
    SET_GPR_U32(ctx, 31, 0x47D574u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47D56Cu, 0x47D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D574u;
label_47d574:
    // 0x47d574: 0x27a408a0  addiu       $a0, $sp, 0x8A0
    ctx->pc = 0x47d574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_47d578:
    // 0x47d578: 0x8fa209f0  lw          $v0, 0x9F0($sp)
    ctx->pc = 0x47d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2544)));
label_47d57c:
    // 0x47d57c: 0x40f809  jalr        $v0
label_47d580:
    if (ctx->pc == 0x47D580u) {
        ctx->pc = 0x47D584u;
        goto label_47d584;
    }
    ctx->pc = 0x47D57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47D584u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D57Cu, 0x47D584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47D584u;
label_47d584:
    // 0x47d584: 0xaf82b4f8  sw          $v0, -0x4B08($gp)
    ctx->pc = 0x47d584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948088), GPR_U32(ctx, 2));
label_47d588:
    // 0x47d588: 0x8fa208a0  lw          $v0, 0x8A0($sp)
    ctx->pc = 0x47d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2208)));
label_47d58c:
    // 0x47d58c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47d590:
    if (ctx->pc == 0x47D590u) {
        ctx->pc = 0x47D594u;
        goto label_47d594;
    }
    ctx->pc = 0x47D58Cu;
    {
        const bool branch_taken_0x47d58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d58c) {
            ctx->pc = 0x47D59Cu;
            goto label_47d59c;
        }
    }
    ctx->pc = 0x47D594u;
label_47d594:
    // 0x47d594: 0xd  break       0
    ctx->pc = 0x47d594u;
    runtime->handleBreak(rdram, ctx);
label_47d598:
    // 0x47d598: 0x0  nop
    ctx->pc = 0x47d598u;
    // NOP
label_47d59c:
    // 0x47d59c: 0x27a408a0  addiu       $a0, $sp, 0x8A0
    ctx->pc = 0x47d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_47d5a0:
    // 0x47d5a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47d5a4:
    // 0x47d5a4: 0xc11392c  jal         func_44E4B0
label_47d5a8:
    if (ctx->pc == 0x47D5A8u) {
        ctx->pc = 0x47D5ACu;
        goto label_47d5ac;
    }
    ctx->pc = 0x47D5A4u;
    SET_GPR_U32(ctx, 31, 0x47D5ACu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47D5A4u, 0x47D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D5ACu;
label_47d5ac:
    // 0x47d5ac: 0x8fa20a20  lw          $v0, 0xA20($sp)
    ctx->pc = 0x47d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2592)));
label_47d5b0:
    // 0x47d5b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47d5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47d5b4:
    // 0x47d5b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47d5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47d5b8:
    // 0x47d5b8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47d5bc:
    if (ctx->pc == 0x47D5BCu) {
        ctx->pc = 0x47D5C0u;
        goto label_47d5c0;
    }
    ctx->pc = 0x47D5B8u;
    {
        const bool branch_taken_0x47d5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d5b8) {
            ctx->pc = 0x47D664u;
            goto label_47d664;
        }
    }
    ctx->pc = 0x47D5C0u;
label_47d5c0:
    // 0x47d5c0: 0x8f82b4fc  lw          $v0, -0x4B04($gp)
    ctx->pc = 0x47d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948092)));
label_47d5c4:
    // 0x47d5c4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47d5c8:
    if (ctx->pc == 0x47D5C8u) {
        ctx->pc = 0x47D5CCu;
        goto label_47d5cc;
    }
    ctx->pc = 0x47D5C4u;
    {
        const bool branch_taken_0x47d5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d5c4) {
            ctx->pc = 0x47D664u;
            goto label_47d664;
        }
    }
    ctx->pc = 0x47D5CCu;
label_47d5cc:
    // 0x47d5cc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47d5d0:
    // 0x47d5d0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d5d4:
    // 0x47d5d4: 0x27a609d8  addiu       $a2, $sp, 0x9D8
    ctx->pc = 0x47d5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2520));
label_47d5d8:
    // 0x47d5d8: 0xc115ee8  jal         func_457BA0
label_47d5dc:
    if (ctx->pc == 0x47D5DCu) {
        ctx->pc = 0x47D5E0u;
        goto label_47d5e0;
    }
    ctx->pc = 0x47D5D8u;
    SET_GPR_U32(ctx, 31, 0x47D5E0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47D5D8u, 0x47D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D5E0u;
label_47d5e0:
    // 0x47d5e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47d5e4:
    if (ctx->pc == 0x47D5E4u) {
        ctx->pc = 0x47D5E8u;
        goto label_47d5e8;
    }
    ctx->pc = 0x47D5E0u;
    {
        const bool branch_taken_0x47d5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d5e0) {
            ctx->pc = 0x47D664u;
            goto label_47d664;
        }
    }
    ctx->pc = 0x47D5E8u;
label_47d5e8:
    // 0x47d5e8: 0x8fa209e0  lw          $v0, 0x9E0($sp)
    ctx->pc = 0x47d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2528)));
label_47d5ec:
    // 0x47d5ec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47d5f0:
    if (ctx->pc == 0x47D5F0u) {
        ctx->pc = 0x47D5F4u;
        goto label_47d5f4;
    }
    ctx->pc = 0x47D5ECu;
    {
        const bool branch_taken_0x47d5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d5ec) {
            ctx->pc = 0x47D664u;
            goto label_47d664;
        }
    }
    ctx->pc = 0x47D5F4u;
label_47d5f4:
    // 0x47d5f4: 0x27a40780  addiu       $a0, $sp, 0x780
    ctx->pc = 0x47d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_47d5f8:
    // 0x47d5f8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d5fc:
    // 0x47d5fc: 0x8fa609dc  lw          $a2, 0x9DC($sp)
    ctx->pc = 0x47d5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2524)));
label_47d600:
    // 0x47d600: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47d600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47d604:
    // 0x47d604: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47d604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47d608:
    // 0x47d608: 0x2408038c  addiu       $t0, $zero, 0x38C
    ctx->pc = 0x47d608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
label_47d60c:
    // 0x47d60c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47d60cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47d610:
    // 0x47d610: 0x252917e0  addiu       $t1, $t1, 0x17E0
    ctx->pc = 0x47d610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6112));
label_47d614:
    // 0x47d614: 0xc113940  jal         func_44E500
label_47d618:
    if (ctx->pc == 0x47D618u) {
        ctx->pc = 0x47D61Cu;
        goto label_47d61c;
    }
    ctx->pc = 0x47D614u;
    SET_GPR_U32(ctx, 31, 0x47D61Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47D614u, 0x47D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D61Cu;
label_47d61c:
    // 0x47d61c: 0x27a40780  addiu       $a0, $sp, 0x780
    ctx->pc = 0x47d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_47d620:
    // 0x47d620: 0x2785b4e8  addiu       $a1, $gp, -0x4B18
    ctx->pc = 0x47d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948072));
label_47d624:
    // 0x47d624: 0xc115c24  jal         func_457090
label_47d628:
    if (ctx->pc == 0x47D628u) {
        ctx->pc = 0x47D62Cu;
        goto label_47d62c;
    }
    ctx->pc = 0x47D624u;
    SET_GPR_U32(ctx, 31, 0x47D62Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47D624u, 0x47D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D62Cu;
label_47d62c:
    // 0x47d62c: 0x27a40780  addiu       $a0, $sp, 0x780
    ctx->pc = 0x47d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_47d630:
    // 0x47d630: 0x8fa209e0  lw          $v0, 0x9E0($sp)
    ctx->pc = 0x47d630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2528)));
label_47d634:
    // 0x47d634: 0x40f809  jalr        $v0
label_47d638:
    if (ctx->pc == 0x47D638u) {
        ctx->pc = 0x47D63Cu;
        goto label_47d63c;
    }
    ctx->pc = 0x47D634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47D63Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D634u, 0x47D63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47D63Cu;
label_47d63c:
    // 0x47d63c: 0xaf82b4fc  sw          $v0, -0x4B04($gp)
    ctx->pc = 0x47d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948092), GPR_U32(ctx, 2));
label_47d640:
    // 0x47d640: 0x8fa20780  lw          $v0, 0x780($sp)
    ctx->pc = 0x47d640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1920)));
label_47d644:
    // 0x47d644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47d648:
    if (ctx->pc == 0x47D648u) {
        ctx->pc = 0x47D64Cu;
        goto label_47d64c;
    }
    ctx->pc = 0x47D644u;
    {
        const bool branch_taken_0x47d644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d644) {
            ctx->pc = 0x47D654u;
            goto label_47d654;
        }
    }
    ctx->pc = 0x47D64Cu;
label_47d64c:
    // 0x47d64c: 0xd  break       0
    ctx->pc = 0x47d64cu;
    runtime->handleBreak(rdram, ctx);
label_47d650:
    // 0x47d650: 0x0  nop
    ctx->pc = 0x47d650u;
    // NOP
label_47d654:
    // 0x47d654: 0x27a40780  addiu       $a0, $sp, 0x780
    ctx->pc = 0x47d654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_47d658:
    // 0x47d658: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47d658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47d65c:
    // 0x47d65c: 0xc11392c  jal         func_44E4B0
label_47d660:
    if (ctx->pc == 0x47D660u) {
        ctx->pc = 0x47D664u;
        goto label_47d664;
    }
    ctx->pc = 0x47D65Cu;
    SET_GPR_U32(ctx, 31, 0x47D664u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47D65Cu, 0x47D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D664u;
label_47d664:
    // 0x47d664: 0x8fa20a30  lw          $v0, 0xA30($sp)
    ctx->pc = 0x47d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2608)));
label_47d668:
    // 0x47d668: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47d668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47d66c:
    // 0x47d66c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47d66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47d670:
    // 0x47d670: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47d674:
    if (ctx->pc == 0x47D674u) {
        ctx->pc = 0x47D678u;
        goto label_47d678;
    }
    ctx->pc = 0x47D670u;
    {
        const bool branch_taken_0x47d670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d670) {
            ctx->pc = 0x47D71Cu;
            goto label_47d71c;
        }
    }
    ctx->pc = 0x47D678u;
label_47d678:
    // 0x47d678: 0x8f82b500  lw          $v0, -0x4B00($gp)
    ctx->pc = 0x47d678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948096)));
label_47d67c:
    // 0x47d67c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47d680:
    if (ctx->pc == 0x47D680u) {
        ctx->pc = 0x47D684u;
        goto label_47d684;
    }
    ctx->pc = 0x47D67Cu;
    {
        const bool branch_taken_0x47d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d67c) {
            ctx->pc = 0x47D71Cu;
            goto label_47d71c;
        }
    }
    ctx->pc = 0x47D684u;
label_47d684:
    // 0x47d684: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47d684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47d688:
    // 0x47d688: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d68c:
    // 0x47d68c: 0x27a609c8  addiu       $a2, $sp, 0x9C8
    ctx->pc = 0x47d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2504));
label_47d690:
    // 0x47d690: 0xc115ee8  jal         func_457BA0
label_47d694:
    if (ctx->pc == 0x47D694u) {
        ctx->pc = 0x47D698u;
        goto label_47d698;
    }
    ctx->pc = 0x47D690u;
    SET_GPR_U32(ctx, 31, 0x47D698u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47D690u, 0x47D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D698u;
label_47d698:
    // 0x47d698: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47d69c:
    if (ctx->pc == 0x47D69Cu) {
        ctx->pc = 0x47D6A0u;
        goto label_47d6a0;
    }
    ctx->pc = 0x47D698u;
    {
        const bool branch_taken_0x47d698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d698) {
            ctx->pc = 0x47D71Cu;
            goto label_47d71c;
        }
    }
    ctx->pc = 0x47D6A0u;
label_47d6a0:
    // 0x47d6a0: 0x8fa209d0  lw          $v0, 0x9D0($sp)
    ctx->pc = 0x47d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2512)));
label_47d6a4:
    // 0x47d6a4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47d6a8:
    if (ctx->pc == 0x47D6A8u) {
        ctx->pc = 0x47D6ACu;
        goto label_47d6ac;
    }
    ctx->pc = 0x47D6A4u;
    {
        const bool branch_taken_0x47d6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d6a4) {
            ctx->pc = 0x47D71Cu;
            goto label_47d71c;
        }
    }
    ctx->pc = 0x47D6ACu;
label_47d6ac:
    // 0x47d6ac: 0x27a40660  addiu       $a0, $sp, 0x660
    ctx->pc = 0x47d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_47d6b0:
    // 0x47d6b0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47d6b4:
    // 0x47d6b4: 0x8fa609cc  lw          $a2, 0x9CC($sp)
    ctx->pc = 0x47d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2508)));
label_47d6b8:
    // 0x47d6b8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47d6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47d6bc:
    // 0x47d6bc: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47d6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47d6c0:
    // 0x47d6c0: 0x2408038d  addiu       $t0, $zero, 0x38D
    ctx->pc = 0x47d6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 909));
label_47d6c4:
    // 0x47d6c4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47d6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47d6c8:
    // 0x47d6c8: 0x25291750  addiu       $t1, $t1, 0x1750
    ctx->pc = 0x47d6c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5968));
label_47d6cc:
    // 0x47d6cc: 0xc113940  jal         func_44E500
label_47d6d0:
    if (ctx->pc == 0x47D6D0u) {
        ctx->pc = 0x47D6D4u;
        goto label_47d6d4;
    }
    ctx->pc = 0x47D6CCu;
    SET_GPR_U32(ctx, 31, 0x47D6D4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47D6CCu, 0x47D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D6D4u;
label_47d6d4:
    // 0x47d6d4: 0x27a40660  addiu       $a0, $sp, 0x660
    ctx->pc = 0x47d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_47d6d8:
    // 0x47d6d8: 0x2785b4e8  addiu       $a1, $gp, -0x4B18
    ctx->pc = 0x47d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948072));
label_47d6dc:
    // 0x47d6dc: 0xc115c24  jal         func_457090
label_47d6e0:
    if (ctx->pc == 0x47D6E0u) {
        ctx->pc = 0x47D6E4u;
        goto label_47d6e4;
    }
    ctx->pc = 0x47D6DCu;
    SET_GPR_U32(ctx, 31, 0x47D6E4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47D6DCu, 0x47D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D6E4u;
label_47d6e4:
    // 0x47d6e4: 0x27a40660  addiu       $a0, $sp, 0x660
    ctx->pc = 0x47d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_47d6e8:
    // 0x47d6e8: 0x8fa209d0  lw          $v0, 0x9D0($sp)
    ctx->pc = 0x47d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2512)));
label_47d6ec:
    // 0x47d6ec: 0x40f809  jalr        $v0
label_47d6f0:
    if (ctx->pc == 0x47D6F0u) {
        ctx->pc = 0x47D6F4u;
        goto label_47d6f4;
    }
    ctx->pc = 0x47D6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47D6F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D6ECu, 0x47D6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47D6F4u;
label_47d6f4:
    // 0x47d6f4: 0xaf82b500  sw          $v0, -0x4B00($gp)
    ctx->pc = 0x47d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948096), GPR_U32(ctx, 2));
label_47d6f8:
    // 0x47d6f8: 0x8fa20660  lw          $v0, 0x660($sp)
    ctx->pc = 0x47d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_47d6fc:
    // 0x47d6fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47d700:
    if (ctx->pc == 0x47D700u) {
        ctx->pc = 0x47D704u;
        goto label_47d704;
    }
    ctx->pc = 0x47D6FCu;
    {
        const bool branch_taken_0x47d6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d6fc) {
            ctx->pc = 0x47D70Cu;
            goto label_47d70c;
        }
    }
    ctx->pc = 0x47D704u;
label_47d704:
    // 0x47d704: 0xd  break       0
    ctx->pc = 0x47d704u;
    runtime->handleBreak(rdram, ctx);
label_47d708:
    // 0x47d708: 0x0  nop
    ctx->pc = 0x47d708u;
    // NOP
label_47d70c:
    // 0x47d70c: 0x27a40660  addiu       $a0, $sp, 0x660
    ctx->pc = 0x47d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_47d710:
    // 0x47d710: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47d710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47d714:
    // 0x47d714: 0xc11392c  jal         func_44E4B0
label_47d718:
    if (ctx->pc == 0x47D718u) {
        ctx->pc = 0x47D71Cu;
        goto label_47d71c;
    }
    ctx->pc = 0x47D714u;
    SET_GPR_U32(ctx, 31, 0x47D71Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47D714u, 0x47D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D71Cu;
label_47d71c:
    // 0x47d71c: 0x8fa20a00  lw          $v0, 0xA00($sp)
    ctx->pc = 0x47d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2560)));
label_47d720:
    // 0x47d720: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x47d720u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_47d724:
    // 0x47d724: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_47d728:
    if (ctx->pc == 0x47D728u) {
        ctx->pc = 0x47D72Cu;
        goto label_47d72c;
    }
    ctx->pc = 0x47D724u;
    {
        const bool branch_taken_0x47d724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d724) {
            ctx->pc = 0x47D738u;
            goto label_47d738;
        }
    }
    ctx->pc = 0x47D72Cu;
label_47d72c:
    // 0x47d72c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47d730:
    // 0x47d730: 0x1000006e  b           . + 4 + (0x6E << 2)
label_47d734:
    if (ctx->pc == 0x47D734u) {
        ctx->pc = 0x47D738u;
        goto label_47d738;
    }
    ctx->pc = 0x47D730u;
    {
        const bool branch_taken_0x47d730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d730) {
            ctx->pc = 0x47D8ECu;
            goto label_47d8ec;
        }
    }
    ctx->pc = 0x47D738u;
label_47d738:
    // 0x47d738: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x47d738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_47d73c:
    // 0x47d73c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x47d73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47d740:
    // 0x47d740: 0x8fa20a00  lw          $v0, 0xA00($sp)
    ctx->pc = 0x47d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2560)));
label_47d744:
    // 0x47d744: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_47d748:
    if (ctx->pc == 0x47D748u) {
        ctx->pc = 0x47D74Cu;
        goto label_47d74c;
    }
    ctx->pc = 0x47D744u;
    {
        const bool branch_taken_0x47d744 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x47d744) {
            ctx->pc = 0x47D760u;
            goto label_47d760;
        }
    }
    ctx->pc = 0x47D74Cu;
label_47d74c:
    // 0x47d74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47d74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47d750:
    // 0x47d750: 0x0  nop
    ctx->pc = 0x47d750u;
    // NOP
label_47d754:
    // 0x47d754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47d754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47d758:
    // 0x47d758: 0x10000008  b           . + 4 + (0x8 << 2)
label_47d75c:
    if (ctx->pc == 0x47D75Cu) {
        ctx->pc = 0x47D760u;
        goto label_47d760;
    }
    ctx->pc = 0x47D758u;
    {
        const bool branch_taken_0x47d758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d758) {
            ctx->pc = 0x47D77Cu;
            goto label_47d77c;
        }
    }
    ctx->pc = 0x47D760u;
label_47d760:
    // 0x47d760: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x47d760u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_47d764:
    // 0x47d764: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x47d764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_47d768:
    // 0x47d768: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47d768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_47d76c:
    // 0x47d76c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47d76cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47d770:
    // 0x47d770: 0x0  nop
    ctx->pc = 0x47d770u;
    // NOP
label_47d774:
    // 0x47d774: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47d774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47d778:
    // 0x47d778: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x47d778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_47d77c:
    // 0x47d77c: 0x0  nop
    ctx->pc = 0x47d77cu;
    // NOP
label_47d780:
    // 0x47d780: 0x0  nop
    ctx->pc = 0x47d780u;
    // NOP
label_47d784:
    // 0x47d784: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x47d784u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_47d788:
    // 0x47d788: 0xe7a009fc  swc1        $f0, 0x9FC($sp)
    ctx->pc = 0x47d788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2556), bits); }
label_47d78c:
    // 0x47d78c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47d78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47d790:
    // 0x47d790: 0x0  nop
    ctx->pc = 0x47d790u;
    // NOP
label_47d794:
    // 0x47d794: 0xe7a009f8  swc1        $f0, 0x9F8($sp)
    ctx->pc = 0x47d794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2552), bits); }
label_47d798:
    // 0x47d798: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47d798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47d79c:
    // 0x47d79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47d79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47d7a0:
    // 0x47d7a0: 0x0  nop
    ctx->pc = 0x47d7a0u;
    // NOP
label_47d7a4:
    // 0x47d7a4: 0xe7a009b8  swc1        $f0, 0x9B8($sp)
    ctx->pc = 0x47d7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2488), bits); }
label_47d7a8:
    // 0x47d7a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47d7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47d7ac:
    // 0x47d7ac: 0x0  nop
    ctx->pc = 0x47d7acu;
    // NOP
label_47d7b0:
    // 0x47d7b0: 0xe7a009bc  swc1        $f0, 0x9BC($sp)
    ctx->pc = 0x47d7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2492), bits); }
label_47d7b4:
    // 0x47d7b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47d7b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47d7b8:
    // 0x47d7b8: 0x0  nop
    ctx->pc = 0x47d7b8u;
    // NOP
label_47d7bc:
    // 0x47d7bc: 0xe7a009c0  swc1        $f0, 0x9C0($sp)
    ctx->pc = 0x47d7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2496), bits); }
label_47d7c0:
    // 0x47d7c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x47d7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47d7c4:
    // 0x47d7c4: 0xc7a00a40  lwc1        $f0, 0xA40($sp)
    ctx->pc = 0x47d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d7c8:
    // 0x47d7c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x47d7c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47d7cc:
    // 0x47d7cc: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_47d7d0:
    if (ctx->pc == 0x47D7D0u) {
        ctx->pc = 0x47D7D4u;
        goto label_47d7d4;
    }
    ctx->pc = 0x47D7CCu;
    {
        const bool branch_taken_0x47d7cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47d7cc) {
            ctx->pc = 0x47D808u;
            goto label_47d808;
        }
    }
    ctx->pc = 0x47D7D4u;
label_47d7d4:
    // 0x47d7d4: 0xc7a00a40  lwc1        $f0, 0xA40($sp)
    ctx->pc = 0x47d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d7d8:
    // 0x47d7d8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x47d7d8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_47d7dc:
    // 0x47d7dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47d7e0:
    // 0x47d7e0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x47d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_47d7e4:
    // 0x47d7e4: 0x24a51b58  addiu       $a1, $a1, 0x1B58
    ctx->pc = 0x47d7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7000));
label_47d7e8:
    // 0x47d7e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47d7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47d7ec:
    // 0x47d7ec: 0xc103e6c  jal         func_40F9B0
label_47d7f0:
    if (ctx->pc == 0x47D7F0u) {
        ctx->pc = 0x47D7F4u;
        goto label_47d7f4;
    }
    ctx->pc = 0x47D7ECu;
    SET_GPR_U32(ctx, 31, 0x47D7F4u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x47D7ECu, 0x47D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D7F4u;
label_47d7f4:
    // 0x47d7f4: 0x27a409b8  addiu       $a0, $sp, 0x9B8
    ctx->pc = 0x47d7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2488));
label_47d7f8:
    // 0x47d7f8: 0x27a509b8  addiu       $a1, $sp, 0x9B8
    ctx->pc = 0x47d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2488));
label_47d7fc:
    // 0x47d7fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x47d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47d800:
    // 0x47d800: 0xc104d84  jal         func_413610
label_47d804:
    if (ctx->pc == 0x47D804u) {
        ctx->pc = 0x47D808u;
        goto label_47d808;
    }
    ctx->pc = 0x47D800u;
    SET_GPR_U32(ctx, 31, 0x47D808u);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x47D800u, 0x47D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D808u;
label_47d808:
    // 0x47d808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47d808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47d80c:
    // 0x47d80c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_47d810:
    if (ctx->pc == 0x47D810u) {
        ctx->pc = 0x47D814u;
        goto label_47d814;
    }
    ctx->pc = 0x47D80Cu;
    {
        const bool branch_taken_0x47d80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d80c) {
            ctx->pc = 0x47D8B8u;
            goto label_47d8b8;
        }
    }
    ctx->pc = 0x47D814u;
label_47d814:
    // 0x47d814: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47d814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47d818:
    // 0x47d818: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x47d818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_47d81c:
    // 0x47d81c: 0x24a51b58  addiu       $a1, $a1, 0x1B58
    ctx->pc = 0x47d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7000));
label_47d820:
    // 0x47d820: 0xc7ac09f8  lwc1        $f12, 0x9F8($sp)
    ctx->pc = 0x47d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_47d824:
    // 0x47d824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47d824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47d828:
    // 0x47d828: 0xc103e6c  jal         func_40F9B0
label_47d82c:
    if (ctx->pc == 0x47D82Cu) {
        ctx->pc = 0x47D830u;
        goto label_47d830;
    }
    ctx->pc = 0x47D828u;
    SET_GPR_U32(ctx, 31, 0x47D830u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x47D828u, 0x47D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D830u;
label_47d830:
    // 0x47d830: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47d830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47d834:
    // 0x47d834: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47d838:
    // 0x47d838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47d838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47d83c:
    // 0x47d83c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x47d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_47d840:
    // 0x47d840: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x47d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_47d844:
    // 0x47d844: 0xaf82c0b0  sw          $v0, -0x3F50($gp)
    ctx->pc = 0x47d844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951088), GPR_U32(ctx, 2));
label_47d848:
    // 0x47d848: 0x8f84c0b0  lw          $a0, -0x3F50($gp)
    ctx->pc = 0x47d848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951088)));
label_47d84c:
    // 0x47d84c: 0x27a509b8  addiu       $a1, $sp, 0x9B8
    ctx->pc = 0x47d84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2488));
label_47d850:
    // 0x47d850: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x47d850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47d854:
    // 0x47d854: 0xc104d84  jal         func_413610
label_47d858:
    if (ctx->pc == 0x47D858u) {
        ctx->pc = 0x47D85Cu;
        goto label_47d85c;
    }
    ctx->pc = 0x47D854u;
    SET_GPR_U32(ctx, 31, 0x47D85Cu);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x47D854u, 0x47D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D85Cu;
label_47d85c:
    // 0x47d85c: 0x8f82c0b0  lw          $v0, -0x3F50($gp)
    ctx->pc = 0x47d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951088)));
label_47d860:
    // 0x47d860: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x47d860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47d864:
    // 0x47d864: 0xc7a00a10  lwc1        $f0, 0xA10($sp)
    ctx->pc = 0x47d864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d868:
    // 0x47d868: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47d868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47d86c:
    // 0x47d86c: 0x8f82c0b0  lw          $v0, -0x3F50($gp)
    ctx->pc = 0x47d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951088)));
label_47d870:
    // 0x47d870: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x47d870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_47d874:
    // 0x47d874: 0x8f82c0b0  lw          $v0, -0x3F50($gp)
    ctx->pc = 0x47d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951088)));
label_47d878:
    // 0x47d878: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x47d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47d87c:
    // 0x47d87c: 0xc7a00a10  lwc1        $f0, 0xA10($sp)
    ctx->pc = 0x47d87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d880:
    // 0x47d880: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47d880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47d884:
    // 0x47d884: 0x8f82c0b0  lw          $v0, -0x3F50($gp)
    ctx->pc = 0x47d884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951088)));
label_47d888:
    // 0x47d888: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x47d888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_47d88c:
    // 0x47d88c: 0x8f82c0b0  lw          $v0, -0x3F50($gp)
    ctx->pc = 0x47d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951088)));
label_47d890:
    // 0x47d890: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x47d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47d894:
    // 0x47d894: 0xc7a00a10  lwc1        $f0, 0xA10($sp)
    ctx->pc = 0x47d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d898:
    // 0x47d898: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47d898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47d89c:
    // 0x47d89c: 0x8f82c0b0  lw          $v0, -0x3F50($gp)
    ctx->pc = 0x47d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951088)));
label_47d8a0:
    // 0x47d8a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x47d8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_47d8a4:
    // 0x47d8a4: 0xc7a109f8  lwc1        $f1, 0x9F8($sp)
    ctx->pc = 0x47d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47d8a8:
    // 0x47d8a8: 0xc7a009fc  lwc1        $f0, 0x9FC($sp)
    ctx->pc = 0x47d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d8ac:
    // 0x47d8ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47d8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47d8b0:
    // 0x47d8b0: 0xe7a009f8  swc1        $f0, 0x9F8($sp)
    ctx->pc = 0x47d8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2552), bits); }
label_47d8b4:
    // 0x47d8b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47d8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47d8b8:
    // 0x47d8b8: 0x8fa20a00  lw          $v0, 0xA00($sp)
    ctx->pc = 0x47d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2560)));
label_47d8bc:
    // 0x47d8bc: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x47d8bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_47d8c0:
    // 0x47d8c0: 0x1020ffd4  beqz        $at, . + 4 + (-0x2C << 2)
label_47d8c4:
    if (ctx->pc == 0x47D8C4u) {
        ctx->pc = 0x47D8C8u;
        goto label_47d8c8;
    }
    ctx->pc = 0x47D8C0u;
    {
        const bool branch_taken_0x47d8c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d8c0) {
            ctx->pc = 0x47D814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47d814;
        }
    }
    ctx->pc = 0x47D8C8u;
label_47d8c8:
    // 0x47d8c8: 0x8fa40a00  lw          $a0, 0xA00($sp)
    ctx->pc = 0x47d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2560)));
label_47d8cc:
    // 0x47d8cc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x47d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_47d8d0:
    // 0x47d8d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47d8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47d8d4:
    // 0x47d8d4: 0x8fa70a20  lw          $a3, 0xA20($sp)
    ctx->pc = 0x47d8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2592)));
label_47d8d8:
    // 0x47d8d8: 0x8fa80a30  lw          $t0, 0xA30($sp)
    ctx->pc = 0x47d8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2608)));
label_47d8dc:
    // 0x47d8dc: 0x8fa90a50  lw          $t1, 0xA50($sp)
    ctx->pc = 0x47d8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
label_47d8e0:
    // 0x47d8e0: 0xc11f378  jal         func_47CDE0
label_47d8e4:
    if (ctx->pc == 0x47D8E4u) {
        ctx->pc = 0x47D8E8u;
        goto label_47d8e8;
    }
    ctx->pc = 0x47D8E0u;
    SET_GPR_U32(ctx, 31, 0x47D8E8u);
    ctx->pc = 0x47CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CDE0u, 0x47D8E0u, 0x47D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D8E8u;
label_47d8e8:
    // 0x47d8e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_47d8ec:
    // 0x47d8ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47d8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47d8f0:
    // 0x47d8f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47d8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47d8f4:
    // 0x47d8f4: 0x27bd0a60  addiu       $sp, $sp, 0xA60
    ctx->pc = 0x47d8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2656));
label_47d8f8:
    // 0x47d8f8: 0x3e00008  jr          $ra
label_47d8fc:
    if (ctx->pc == 0x47D8FCu) {
        ctx->pc = 0x47D900u;
        goto label_fallthrough_0x47d8f8;
    }
    ctx->pc = 0x47D8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47d8f8:
    ctx->pc = 0x47D900u;
}
