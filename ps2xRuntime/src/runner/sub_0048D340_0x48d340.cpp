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

// Function: sub_0048D340
// Address: 0x48d340 - 0x48d810
void sub_0048D340_0x48d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D340_0x48d340");
#endif

    switch (ctx->pc) {
        case 0x48d340u: goto label_48d340;
        case 0x48d344u: goto label_48d344;
        case 0x48d348u: goto label_48d348;
        case 0x48d34cu: goto label_48d34c;
        case 0x48d350u: goto label_48d350;
        case 0x48d354u: goto label_48d354;
        case 0x48d358u: goto label_48d358;
        case 0x48d35cu: goto label_48d35c;
        case 0x48d360u: goto label_48d360;
        case 0x48d364u: goto label_48d364;
        case 0x48d368u: goto label_48d368;
        case 0x48d36cu: goto label_48d36c;
        case 0x48d370u: goto label_48d370;
        case 0x48d374u: goto label_48d374;
        case 0x48d378u: goto label_48d378;
        case 0x48d37cu: goto label_48d37c;
        case 0x48d380u: goto label_48d380;
        case 0x48d384u: goto label_48d384;
        case 0x48d388u: goto label_48d388;
        case 0x48d38cu: goto label_48d38c;
        case 0x48d390u: goto label_48d390;
        case 0x48d394u: goto label_48d394;
        case 0x48d398u: goto label_48d398;
        case 0x48d39cu: goto label_48d39c;
        case 0x48d3a0u: goto label_48d3a0;
        case 0x48d3a4u: goto label_48d3a4;
        case 0x48d3a8u: goto label_48d3a8;
        case 0x48d3acu: goto label_48d3ac;
        case 0x48d3b0u: goto label_48d3b0;
        case 0x48d3b4u: goto label_48d3b4;
        case 0x48d3b8u: goto label_48d3b8;
        case 0x48d3bcu: goto label_48d3bc;
        case 0x48d3c0u: goto label_48d3c0;
        case 0x48d3c4u: goto label_48d3c4;
        case 0x48d3c8u: goto label_48d3c8;
        case 0x48d3ccu: goto label_48d3cc;
        case 0x48d3d0u: goto label_48d3d0;
        case 0x48d3d4u: goto label_48d3d4;
        case 0x48d3d8u: goto label_48d3d8;
        case 0x48d3dcu: goto label_48d3dc;
        case 0x48d3e0u: goto label_48d3e0;
        case 0x48d3e4u: goto label_48d3e4;
        case 0x48d3e8u: goto label_48d3e8;
        case 0x48d3ecu: goto label_48d3ec;
        case 0x48d3f0u: goto label_48d3f0;
        case 0x48d3f4u: goto label_48d3f4;
        case 0x48d3f8u: goto label_48d3f8;
        case 0x48d3fcu: goto label_48d3fc;
        case 0x48d400u: goto label_48d400;
        case 0x48d404u: goto label_48d404;
        case 0x48d408u: goto label_48d408;
        case 0x48d40cu: goto label_48d40c;
        case 0x48d410u: goto label_48d410;
        case 0x48d414u: goto label_48d414;
        case 0x48d418u: goto label_48d418;
        case 0x48d41cu: goto label_48d41c;
        case 0x48d420u: goto label_48d420;
        case 0x48d424u: goto label_48d424;
        case 0x48d428u: goto label_48d428;
        case 0x48d42cu: goto label_48d42c;
        case 0x48d430u: goto label_48d430;
        case 0x48d434u: goto label_48d434;
        case 0x48d438u: goto label_48d438;
        case 0x48d43cu: goto label_48d43c;
        case 0x48d440u: goto label_48d440;
        case 0x48d444u: goto label_48d444;
        case 0x48d448u: goto label_48d448;
        case 0x48d44cu: goto label_48d44c;
        case 0x48d450u: goto label_48d450;
        case 0x48d454u: goto label_48d454;
        case 0x48d458u: goto label_48d458;
        case 0x48d45cu: goto label_48d45c;
        case 0x48d460u: goto label_48d460;
        case 0x48d464u: goto label_48d464;
        case 0x48d468u: goto label_48d468;
        case 0x48d46cu: goto label_48d46c;
        case 0x48d470u: goto label_48d470;
        case 0x48d474u: goto label_48d474;
        case 0x48d478u: goto label_48d478;
        case 0x48d47cu: goto label_48d47c;
        case 0x48d480u: goto label_48d480;
        case 0x48d484u: goto label_48d484;
        case 0x48d488u: goto label_48d488;
        case 0x48d48cu: goto label_48d48c;
        case 0x48d490u: goto label_48d490;
        case 0x48d494u: goto label_48d494;
        case 0x48d498u: goto label_48d498;
        case 0x48d49cu: goto label_48d49c;
        case 0x48d4a0u: goto label_48d4a0;
        case 0x48d4a4u: goto label_48d4a4;
        case 0x48d4a8u: goto label_48d4a8;
        case 0x48d4acu: goto label_48d4ac;
        case 0x48d4b0u: goto label_48d4b0;
        case 0x48d4b4u: goto label_48d4b4;
        case 0x48d4b8u: goto label_48d4b8;
        case 0x48d4bcu: goto label_48d4bc;
        case 0x48d4c0u: goto label_48d4c0;
        case 0x48d4c4u: goto label_48d4c4;
        case 0x48d4c8u: goto label_48d4c8;
        case 0x48d4ccu: goto label_48d4cc;
        case 0x48d4d0u: goto label_48d4d0;
        case 0x48d4d4u: goto label_48d4d4;
        case 0x48d4d8u: goto label_48d4d8;
        case 0x48d4dcu: goto label_48d4dc;
        case 0x48d4e0u: goto label_48d4e0;
        case 0x48d4e4u: goto label_48d4e4;
        case 0x48d4e8u: goto label_48d4e8;
        case 0x48d4ecu: goto label_48d4ec;
        case 0x48d4f0u: goto label_48d4f0;
        case 0x48d4f4u: goto label_48d4f4;
        case 0x48d4f8u: goto label_48d4f8;
        case 0x48d4fcu: goto label_48d4fc;
        case 0x48d500u: goto label_48d500;
        case 0x48d504u: goto label_48d504;
        case 0x48d508u: goto label_48d508;
        case 0x48d50cu: goto label_48d50c;
        case 0x48d510u: goto label_48d510;
        case 0x48d514u: goto label_48d514;
        case 0x48d518u: goto label_48d518;
        case 0x48d51cu: goto label_48d51c;
        case 0x48d520u: goto label_48d520;
        case 0x48d524u: goto label_48d524;
        case 0x48d528u: goto label_48d528;
        case 0x48d52cu: goto label_48d52c;
        case 0x48d530u: goto label_48d530;
        case 0x48d534u: goto label_48d534;
        case 0x48d538u: goto label_48d538;
        case 0x48d53cu: goto label_48d53c;
        case 0x48d540u: goto label_48d540;
        case 0x48d544u: goto label_48d544;
        case 0x48d548u: goto label_48d548;
        case 0x48d54cu: goto label_48d54c;
        case 0x48d550u: goto label_48d550;
        case 0x48d554u: goto label_48d554;
        case 0x48d558u: goto label_48d558;
        case 0x48d55cu: goto label_48d55c;
        case 0x48d560u: goto label_48d560;
        case 0x48d564u: goto label_48d564;
        case 0x48d568u: goto label_48d568;
        case 0x48d56cu: goto label_48d56c;
        case 0x48d570u: goto label_48d570;
        case 0x48d574u: goto label_48d574;
        case 0x48d578u: goto label_48d578;
        case 0x48d57cu: goto label_48d57c;
        case 0x48d580u: goto label_48d580;
        case 0x48d584u: goto label_48d584;
        case 0x48d588u: goto label_48d588;
        case 0x48d58cu: goto label_48d58c;
        case 0x48d590u: goto label_48d590;
        case 0x48d594u: goto label_48d594;
        case 0x48d598u: goto label_48d598;
        case 0x48d59cu: goto label_48d59c;
        case 0x48d5a0u: goto label_48d5a0;
        case 0x48d5a4u: goto label_48d5a4;
        case 0x48d5a8u: goto label_48d5a8;
        case 0x48d5acu: goto label_48d5ac;
        case 0x48d5b0u: goto label_48d5b0;
        case 0x48d5b4u: goto label_48d5b4;
        case 0x48d5b8u: goto label_48d5b8;
        case 0x48d5bcu: goto label_48d5bc;
        case 0x48d5c0u: goto label_48d5c0;
        case 0x48d5c4u: goto label_48d5c4;
        case 0x48d5c8u: goto label_48d5c8;
        case 0x48d5ccu: goto label_48d5cc;
        case 0x48d5d0u: goto label_48d5d0;
        case 0x48d5d4u: goto label_48d5d4;
        case 0x48d5d8u: goto label_48d5d8;
        case 0x48d5dcu: goto label_48d5dc;
        case 0x48d5e0u: goto label_48d5e0;
        case 0x48d5e4u: goto label_48d5e4;
        case 0x48d5e8u: goto label_48d5e8;
        case 0x48d5ecu: goto label_48d5ec;
        case 0x48d5f0u: goto label_48d5f0;
        case 0x48d5f4u: goto label_48d5f4;
        case 0x48d5f8u: goto label_48d5f8;
        case 0x48d5fcu: goto label_48d5fc;
        case 0x48d600u: goto label_48d600;
        case 0x48d604u: goto label_48d604;
        case 0x48d608u: goto label_48d608;
        case 0x48d60cu: goto label_48d60c;
        case 0x48d610u: goto label_48d610;
        case 0x48d614u: goto label_48d614;
        case 0x48d618u: goto label_48d618;
        case 0x48d61cu: goto label_48d61c;
        case 0x48d620u: goto label_48d620;
        case 0x48d624u: goto label_48d624;
        case 0x48d628u: goto label_48d628;
        case 0x48d62cu: goto label_48d62c;
        case 0x48d630u: goto label_48d630;
        case 0x48d634u: goto label_48d634;
        case 0x48d638u: goto label_48d638;
        case 0x48d63cu: goto label_48d63c;
        case 0x48d640u: goto label_48d640;
        case 0x48d644u: goto label_48d644;
        case 0x48d648u: goto label_48d648;
        case 0x48d64cu: goto label_48d64c;
        case 0x48d650u: goto label_48d650;
        case 0x48d654u: goto label_48d654;
        case 0x48d658u: goto label_48d658;
        case 0x48d65cu: goto label_48d65c;
        case 0x48d660u: goto label_48d660;
        case 0x48d664u: goto label_48d664;
        case 0x48d668u: goto label_48d668;
        case 0x48d66cu: goto label_48d66c;
        case 0x48d670u: goto label_48d670;
        case 0x48d674u: goto label_48d674;
        case 0x48d678u: goto label_48d678;
        case 0x48d67cu: goto label_48d67c;
        case 0x48d680u: goto label_48d680;
        case 0x48d684u: goto label_48d684;
        case 0x48d688u: goto label_48d688;
        case 0x48d68cu: goto label_48d68c;
        case 0x48d690u: goto label_48d690;
        case 0x48d694u: goto label_48d694;
        case 0x48d698u: goto label_48d698;
        case 0x48d69cu: goto label_48d69c;
        case 0x48d6a0u: goto label_48d6a0;
        case 0x48d6a4u: goto label_48d6a4;
        case 0x48d6a8u: goto label_48d6a8;
        case 0x48d6acu: goto label_48d6ac;
        case 0x48d6b0u: goto label_48d6b0;
        case 0x48d6b4u: goto label_48d6b4;
        case 0x48d6b8u: goto label_48d6b8;
        case 0x48d6bcu: goto label_48d6bc;
        case 0x48d6c0u: goto label_48d6c0;
        case 0x48d6c4u: goto label_48d6c4;
        case 0x48d6c8u: goto label_48d6c8;
        case 0x48d6ccu: goto label_48d6cc;
        case 0x48d6d0u: goto label_48d6d0;
        case 0x48d6d4u: goto label_48d6d4;
        case 0x48d6d8u: goto label_48d6d8;
        case 0x48d6dcu: goto label_48d6dc;
        case 0x48d6e0u: goto label_48d6e0;
        case 0x48d6e4u: goto label_48d6e4;
        case 0x48d6e8u: goto label_48d6e8;
        case 0x48d6ecu: goto label_48d6ec;
        case 0x48d6f0u: goto label_48d6f0;
        case 0x48d6f4u: goto label_48d6f4;
        case 0x48d6f8u: goto label_48d6f8;
        case 0x48d6fcu: goto label_48d6fc;
        case 0x48d700u: goto label_48d700;
        case 0x48d704u: goto label_48d704;
        case 0x48d708u: goto label_48d708;
        case 0x48d70cu: goto label_48d70c;
        case 0x48d710u: goto label_48d710;
        case 0x48d714u: goto label_48d714;
        case 0x48d718u: goto label_48d718;
        case 0x48d71cu: goto label_48d71c;
        case 0x48d720u: goto label_48d720;
        case 0x48d724u: goto label_48d724;
        case 0x48d728u: goto label_48d728;
        case 0x48d72cu: goto label_48d72c;
        case 0x48d730u: goto label_48d730;
        case 0x48d734u: goto label_48d734;
        case 0x48d738u: goto label_48d738;
        case 0x48d73cu: goto label_48d73c;
        case 0x48d740u: goto label_48d740;
        case 0x48d744u: goto label_48d744;
        case 0x48d748u: goto label_48d748;
        case 0x48d74cu: goto label_48d74c;
        case 0x48d750u: goto label_48d750;
        case 0x48d754u: goto label_48d754;
        case 0x48d758u: goto label_48d758;
        case 0x48d75cu: goto label_48d75c;
        case 0x48d760u: goto label_48d760;
        case 0x48d764u: goto label_48d764;
        case 0x48d768u: goto label_48d768;
        case 0x48d76cu: goto label_48d76c;
        case 0x48d770u: goto label_48d770;
        case 0x48d774u: goto label_48d774;
        case 0x48d778u: goto label_48d778;
        case 0x48d77cu: goto label_48d77c;
        case 0x48d780u: goto label_48d780;
        case 0x48d784u: goto label_48d784;
        case 0x48d788u: goto label_48d788;
        case 0x48d78cu: goto label_48d78c;
        case 0x48d790u: goto label_48d790;
        case 0x48d794u: goto label_48d794;
        case 0x48d798u: goto label_48d798;
        case 0x48d79cu: goto label_48d79c;
        case 0x48d7a0u: goto label_48d7a0;
        case 0x48d7a4u: goto label_48d7a4;
        case 0x48d7a8u: goto label_48d7a8;
        case 0x48d7acu: goto label_48d7ac;
        case 0x48d7b0u: goto label_48d7b0;
        case 0x48d7b4u: goto label_48d7b4;
        case 0x48d7b8u: goto label_48d7b8;
        case 0x48d7bcu: goto label_48d7bc;
        case 0x48d7c0u: goto label_48d7c0;
        case 0x48d7c4u: goto label_48d7c4;
        case 0x48d7c8u: goto label_48d7c8;
        case 0x48d7ccu: goto label_48d7cc;
        case 0x48d7d0u: goto label_48d7d0;
        case 0x48d7d4u: goto label_48d7d4;
        case 0x48d7d8u: goto label_48d7d8;
        case 0x48d7dcu: goto label_48d7dc;
        case 0x48d7e0u: goto label_48d7e0;
        case 0x48d7e4u: goto label_48d7e4;
        case 0x48d7e8u: goto label_48d7e8;
        case 0x48d7ecu: goto label_48d7ec;
        case 0x48d7f0u: goto label_48d7f0;
        case 0x48d7f4u: goto label_48d7f4;
        case 0x48d7f8u: goto label_48d7f8;
        case 0x48d7fcu: goto label_48d7fc;
        case 0x48d800u: goto label_48d800;
        case 0x48d804u: goto label_48d804;
        case 0x48d808u: goto label_48d808;
        case 0x48d80cu: goto label_48d80c;
        default: break;
    }

    ctx->pc = 0x48d340u;

label_48d340:
    // 0x48d340: 0x27bdfa80  addiu       $sp, $sp, -0x580
    ctx->pc = 0x48d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965888));
label_48d344:
    // 0x48d344: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x48d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_48d348:
    // 0x48d348: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48d34c:
    // 0x48d34c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48d350:
    // 0x48d350: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48d354:
    // 0x48d354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48d358:
    // 0x48d358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48d35c:
    // 0x48d35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48d360:
    // 0x48d360: 0xafa40560  sw          $a0, 0x560($sp)
    ctx->pc = 0x48d360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 4));
label_48d364:
    // 0x48d364: 0xafa50570  sw          $a1, 0x570($sp)
    ctx->pc = 0x48d364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 5));
label_48d368:
    // 0x48d368: 0x8fa20570  lw          $v0, 0x570($sp)
    ctx->pc = 0x48d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_48d36c:
    // 0x48d36c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48d36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48d370:
    // 0x48d370: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48d374:
    // 0x48d374: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48d378:
    if (ctx->pc == 0x48D378u) {
        ctx->pc = 0x48D37Cu;
        goto label_48d37c;
    }
    ctx->pc = 0x48D374u;
    {
        const bool branch_taken_0x48d374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d374) {
            ctx->pc = 0x48D424u;
            goto label_48d424;
        }
    }
    ctx->pc = 0x48D37Cu;
label_48d37c:
    // 0x48d37c: 0x8f82b664  lw          $v0, -0x499C($gp)
    ctx->pc = 0x48d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948452)));
label_48d380:
    // 0x48d380: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48d384:
    if (ctx->pc == 0x48D384u) {
        ctx->pc = 0x48D388u;
        goto label_48d388;
    }
    ctx->pc = 0x48D380u;
    {
        const bool branch_taken_0x48d380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d380) {
            ctx->pc = 0x48D424u;
            goto label_48d424;
        }
    }
    ctx->pc = 0x48D388u;
label_48d388:
    // 0x48d388: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48d388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48d38c:
    // 0x48d38c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d390:
    // 0x48d390: 0x27a60550  addiu       $a2, $sp, 0x550
    ctx->pc = 0x48d390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_48d394:
    // 0x48d394: 0xc115ee8  jal         func_457BA0
label_48d398:
    if (ctx->pc == 0x48D398u) {
        ctx->pc = 0x48D39Cu;
        goto label_48d39c;
    }
    ctx->pc = 0x48D394u;
    SET_GPR_U32(ctx, 31, 0x48D39Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48D394u, 0x48D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D39Cu;
label_48d39c:
    // 0x48d39c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48d3a0:
    if (ctx->pc == 0x48D3A0u) {
        ctx->pc = 0x48D3A4u;
        goto label_48d3a4;
    }
    ctx->pc = 0x48D39Cu;
    {
        const bool branch_taken_0x48d39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d39c) {
            ctx->pc = 0x48D424u;
            goto label_48d424;
        }
    }
    ctx->pc = 0x48D3A4u;
label_48d3a4:
    // 0x48d3a4: 0x8fa20558  lw          $v0, 0x558($sp)
    ctx->pc = 0x48d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1368)));
label_48d3a8:
    // 0x48d3a8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48d3ac:
    if (ctx->pc == 0x48D3ACu) {
        ctx->pc = 0x48D3B0u;
        goto label_48d3b0;
    }
    ctx->pc = 0x48D3A8u;
    {
        const bool branch_taken_0x48d3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d3a8) {
            ctx->pc = 0x48D424u;
            goto label_48d424;
        }
    }
    ctx->pc = 0x48D3B0u;
label_48d3b0:
    // 0x48d3b0: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x48d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_48d3b4:
    // 0x48d3b4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d3b8:
    // 0x48d3b8: 0x8fa60554  lw          $a2, 0x554($sp)
    ctx->pc = 0x48d3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1364)));
label_48d3bc:
    // 0x48d3bc: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48d3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48d3c0:
    // 0x48d3c0: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48d3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48d3c4:
    // 0x48d3c4: 0x24080231  addiu       $t0, $zero, 0x231
    ctx->pc = 0x48d3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
label_48d3c8:
    // 0x48d3c8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48d3c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48d3cc:
    // 0x48d3cc: 0x25294bf0  addiu       $t1, $t1, 0x4BF0
    ctx->pc = 0x48d3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19440));
label_48d3d0:
    // 0x48d3d0: 0xc113940  jal         func_44E500
label_48d3d4:
    if (ctx->pc == 0x48D3D4u) {
        ctx->pc = 0x48D3D8u;
        goto label_48d3d8;
    }
    ctx->pc = 0x48D3D0u;
    SET_GPR_U32(ctx, 31, 0x48D3D8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48D3D0u, 0x48D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D3D8u;
label_48d3d8:
    // 0x48d3d8: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x48d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_48d3dc:
    // 0x48d3dc: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48d3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48d3e0:
    // 0x48d3e0: 0x24a548e8  addiu       $a1, $a1, 0x48E8
    ctx->pc = 0x48d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18664));
label_48d3e4:
    // 0x48d3e4: 0xc115c24  jal         func_457090
label_48d3e8:
    if (ctx->pc == 0x48D3E8u) {
        ctx->pc = 0x48D3ECu;
        goto label_48d3ec;
    }
    ctx->pc = 0x48D3E4u;
    SET_GPR_U32(ctx, 31, 0x48D3ECu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48D3E4u, 0x48D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D3ECu;
label_48d3ec:
    // 0x48d3ec: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x48d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_48d3f0:
    // 0x48d3f0: 0x8fa20558  lw          $v0, 0x558($sp)
    ctx->pc = 0x48d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1368)));
label_48d3f4:
    // 0x48d3f4: 0x40f809  jalr        $v0
label_48d3f8:
    if (ctx->pc == 0x48D3F8u) {
        ctx->pc = 0x48D3FCu;
        goto label_48d3fc;
    }
    ctx->pc = 0x48D3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48D3FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D3F4u, 0x48D3FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48D3FCu;
label_48d3fc:
    // 0x48d3fc: 0xaf82b664  sw          $v0, -0x499C($gp)
    ctx->pc = 0x48d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948452), GPR_U32(ctx, 2));
label_48d400:
    // 0x48d400: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x48d400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_48d404:
    // 0x48d404: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48d408:
    if (ctx->pc == 0x48D408u) {
        ctx->pc = 0x48D40Cu;
        goto label_48d40c;
    }
    ctx->pc = 0x48D404u;
    {
        const bool branch_taken_0x48d404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d404) {
            ctx->pc = 0x48D414u;
            goto label_48d414;
        }
    }
    ctx->pc = 0x48D40Cu;
label_48d40c:
    // 0x48d40c: 0xd  break       0
    ctx->pc = 0x48d40cu;
    runtime->handleBreak(rdram, ctx);
label_48d410:
    // 0x48d410: 0x0  nop
    ctx->pc = 0x48d410u;
    // NOP
label_48d414:
    // 0x48d414: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x48d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_48d418:
    // 0x48d418: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48d418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48d41c:
    // 0x48d41c: 0xc11392c  jal         func_44E4B0
label_48d420:
    if (ctx->pc == 0x48D420u) {
        ctx->pc = 0x48D424u;
        goto label_48d424;
    }
    ctx->pc = 0x48D41Cu;
    SET_GPR_U32(ctx, 31, 0x48D424u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48D41Cu, 0x48D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D424u;
label_48d424:
    // 0x48d424: 0x8fb40570  lw          $s4, 0x570($sp)
    ctx->pc = 0x48d424u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_48d428:
    // 0x48d428: 0x8fa40560  lw          $a0, 0x560($sp)
    ctx->pc = 0x48d428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_48d42c:
    // 0x48d42c: 0xc0d2616  jal         func_349858
label_48d430:
    if (ctx->pc == 0x48D430u) {
        ctx->pc = 0x48D434u;
        goto label_48d434;
    }
    ctx->pc = 0x48D42Cu;
    SET_GPR_U32(ctx, 31, 0x48D434u);
    ctx->pc = 0x349858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349858u, 0x48D42Cu, 0x48D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D434u;
label_48d434:
    // 0x48d434: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_48d438:
    if (ctx->pc == 0x48D438u) {
        ctx->pc = 0x48D43Cu;
        goto label_48d43c;
    }
    ctx->pc = 0x48D434u;
    {
        const bool branch_taken_0x48d434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d434) {
            ctx->pc = 0x48D7E4u;
            goto label_48d7e4;
        }
    }
    ctx->pc = 0x48D43Cu;
label_48d43c:
    // 0x48d43c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48d43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d440:
    // 0x48d440: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x48d440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_48d444:
    // 0x48d444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48d444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d448:
    // 0x48d448: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x48d448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_48d44c:
    // 0x48d44c: 0xc0bb7e6  jal         func_2EDF98
label_48d450:
    if (ctx->pc == 0x48D450u) {
        ctx->pc = 0x48D454u;
        goto label_48d454;
    }
    ctx->pc = 0x48D44Cu;
    SET_GPR_U32(ctx, 31, 0x48D454u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x48D44Cu, 0x48D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D454u;
label_48d454:
    // 0x48d454: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x48d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_48d458:
    // 0x48d458: 0xafa203d0  sw          $v0, 0x3D0($sp)
    ctx->pc = 0x48d458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 2));
label_48d45c:
    // 0x48d45c: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x48d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_48d460:
    // 0x48d460: 0xc0d26a2  jal         func_349A88
label_48d464:
    if (ctx->pc == 0x48D464u) {
        ctx->pc = 0x48D468u;
        goto label_48d468;
    }
    ctx->pc = 0x48D460u;
    SET_GPR_U32(ctx, 31, 0x48D468u);
    ctx->pc = 0x349A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349A88u, 0x48D460u, 0x48D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D468u;
label_48d468:
    // 0x48d468: 0xafa203d4  sw          $v0, 0x3D4($sp)
    ctx->pc = 0x48d468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 980), GPR_U32(ctx, 2));
label_48d46c:
    // 0x48d46c: 0x8fa203d4  lw          $v0, 0x3D4($sp)
    ctx->pc = 0x48d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_48d470:
    // 0x48d470: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48d470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48d474:
    // 0x48d474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48d474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48d478:
    // 0x48d478: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48d47c:
    if (ctx->pc == 0x48D47Cu) {
        ctx->pc = 0x48D480u;
        goto label_48d480;
    }
    ctx->pc = 0x48D478u;
    {
        const bool branch_taken_0x48d478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d478) {
            ctx->pc = 0x48D528u;
            goto label_48d528;
        }
    }
    ctx->pc = 0x48D480u;
label_48d480:
    // 0x48d480: 0x8f82b668  lw          $v0, -0x4998($gp)
    ctx->pc = 0x48d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948456)));
label_48d484:
    // 0x48d484: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48d488:
    if (ctx->pc == 0x48D488u) {
        ctx->pc = 0x48D48Cu;
        goto label_48d48c;
    }
    ctx->pc = 0x48D484u;
    {
        const bool branch_taken_0x48d484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d484) {
            ctx->pc = 0x48D528u;
            goto label_48d528;
        }
    }
    ctx->pc = 0x48D48Cu;
label_48d48c:
    // 0x48d48c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48d490:
    // 0x48d490: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d494:
    // 0x48d494: 0x27a60540  addiu       $a2, $sp, 0x540
    ctx->pc = 0x48d494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_48d498:
    // 0x48d498: 0xc115ee8  jal         func_457BA0
label_48d49c:
    if (ctx->pc == 0x48D49Cu) {
        ctx->pc = 0x48D4A0u;
        goto label_48d4a0;
    }
    ctx->pc = 0x48D498u;
    SET_GPR_U32(ctx, 31, 0x48D4A0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48D498u, 0x48D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D4A0u;
label_48d4a0:
    // 0x48d4a0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48d4a4:
    if (ctx->pc == 0x48D4A4u) {
        ctx->pc = 0x48D4A8u;
        goto label_48d4a8;
    }
    ctx->pc = 0x48D4A0u;
    {
        const bool branch_taken_0x48d4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d4a0) {
            ctx->pc = 0x48D528u;
            goto label_48d528;
        }
    }
    ctx->pc = 0x48D4A8u;
label_48d4a8:
    // 0x48d4a8: 0x8fa20548  lw          $v0, 0x548($sp)
    ctx->pc = 0x48d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
label_48d4ac:
    // 0x48d4ac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48d4b0:
    if (ctx->pc == 0x48D4B0u) {
        ctx->pc = 0x48D4B4u;
        goto label_48d4b4;
    }
    ctx->pc = 0x48D4ACu;
    {
        const bool branch_taken_0x48d4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d4ac) {
            ctx->pc = 0x48D528u;
            goto label_48d528;
        }
    }
    ctx->pc = 0x48D4B4u;
label_48d4b4:
    // 0x48d4b4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x48d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_48d4b8:
    // 0x48d4b8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d4bc:
    // 0x48d4bc: 0x8fa60544  lw          $a2, 0x544($sp)
    ctx->pc = 0x48d4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1348)));
label_48d4c0:
    // 0x48d4c0: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48d4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48d4c4:
    // 0x48d4c4: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48d4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48d4c8:
    // 0x48d4c8: 0x24080243  addiu       $t0, $zero, 0x243
    ctx->pc = 0x48d4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
label_48d4cc:
    // 0x48d4cc: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48d4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48d4d0:
    // 0x48d4d0: 0x25294c00  addiu       $t1, $t1, 0x4C00
    ctx->pc = 0x48d4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19456));
label_48d4d4:
    // 0x48d4d4: 0xc113940  jal         func_44E500
label_48d4d8:
    if (ctx->pc == 0x48D4D8u) {
        ctx->pc = 0x48D4DCu;
        goto label_48d4dc;
    }
    ctx->pc = 0x48D4D4u;
    SET_GPR_U32(ctx, 31, 0x48D4DCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48D4D4u, 0x48D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D4DCu;
label_48d4dc:
    // 0x48d4dc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x48d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_48d4e0:
    // 0x48d4e0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48d4e4:
    // 0x48d4e4: 0x24a54c20  addiu       $a1, $a1, 0x4C20
    ctx->pc = 0x48d4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19488));
label_48d4e8:
    // 0x48d4e8: 0xc115c24  jal         func_457090
label_48d4ec:
    if (ctx->pc == 0x48D4ECu) {
        ctx->pc = 0x48D4F0u;
        goto label_48d4f0;
    }
    ctx->pc = 0x48D4E8u;
    SET_GPR_U32(ctx, 31, 0x48D4F0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48D4E8u, 0x48D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D4F0u;
label_48d4f0:
    // 0x48d4f0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x48d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_48d4f4:
    // 0x48d4f4: 0x8fa20548  lw          $v0, 0x548($sp)
    ctx->pc = 0x48d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
label_48d4f8:
    // 0x48d4f8: 0x40f809  jalr        $v0
label_48d4fc:
    if (ctx->pc == 0x48D4FCu) {
        ctx->pc = 0x48D500u;
        goto label_48d500;
    }
    ctx->pc = 0x48D4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48D500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D4F8u, 0x48D500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48D500u;
label_48d500:
    // 0x48d500: 0xaf82b668  sw          $v0, -0x4998($gp)
    ctx->pc = 0x48d500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948456), GPR_U32(ctx, 2));
label_48d504:
    // 0x48d504: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x48d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48d508:
    // 0x48d508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48d50c:
    if (ctx->pc == 0x48D50Cu) {
        ctx->pc = 0x48D510u;
        goto label_48d510;
    }
    ctx->pc = 0x48D508u;
    {
        const bool branch_taken_0x48d508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d508) {
            ctx->pc = 0x48D518u;
            goto label_48d518;
        }
    }
    ctx->pc = 0x48D510u;
label_48d510:
    // 0x48d510: 0xd  break       0
    ctx->pc = 0x48d510u;
    runtime->handleBreak(rdram, ctx);
label_48d514:
    // 0x48d514: 0x0  nop
    ctx->pc = 0x48d514u;
    // NOP
label_48d518:
    // 0x48d518: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x48d518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_48d51c:
    // 0x48d51c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48d520:
    // 0x48d520: 0xc11392c  jal         func_44E4B0
label_48d524:
    if (ctx->pc == 0x48D524u) {
        ctx->pc = 0x48D528u;
        goto label_48d528;
    }
    ctx->pc = 0x48D520u;
    SET_GPR_U32(ctx, 31, 0x48D528u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48D520u, 0x48D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D528u;
label_48d528:
    // 0x48d528: 0x8fa403d4  lw          $a0, 0x3D4($sp)
    ctx->pc = 0x48d528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_48d52c:
    // 0x48d52c: 0x27a503d8  addiu       $a1, $sp, 0x3D8
    ctx->pc = 0x48d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 984));
label_48d530:
    // 0x48d530: 0x27a603dc  addiu       $a2, $sp, 0x3DC
    ctx->pc = 0x48d530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 988));
label_48d534:
    // 0x48d534: 0xc0d0b14  jal         func_342C50
label_48d538:
    if (ctx->pc == 0x48D538u) {
        ctx->pc = 0x48D53Cu;
        goto label_48d53c;
    }
    ctx->pc = 0x48D534u;
    SET_GPR_U32(ctx, 31, 0x48D53Cu);
    ctx->pc = 0x342C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C50u, 0x48D534u, 0x48D53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D53Cu;
label_48d53c:
    // 0x48d53c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48d53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48d540:
    // 0x48d540: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x48d540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_48d544:
    // 0x48d544: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48d548:
    // 0x48d548: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48d54c:
    if (ctx->pc == 0x48D54Cu) {
        ctx->pc = 0x48D550u;
        goto label_48d550;
    }
    ctx->pc = 0x48D548u;
    {
        const bool branch_taken_0x48d548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d548) {
            ctx->pc = 0x48D5F8u;
            goto label_48d5f8;
        }
    }
    ctx->pc = 0x48D550u;
label_48d550:
    // 0x48d550: 0x8f82b66c  lw          $v0, -0x4994($gp)
    ctx->pc = 0x48d550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948460)));
label_48d554:
    // 0x48d554: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48d558:
    if (ctx->pc == 0x48D558u) {
        ctx->pc = 0x48D55Cu;
        goto label_48d55c;
    }
    ctx->pc = 0x48D554u;
    {
        const bool branch_taken_0x48d554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d554) {
            ctx->pc = 0x48D5F8u;
            goto label_48d5f8;
        }
    }
    ctx->pc = 0x48D55Cu;
label_48d55c:
    // 0x48d55c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48d560:
    // 0x48d560: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d564:
    // 0x48d564: 0x27a60530  addiu       $a2, $sp, 0x530
    ctx->pc = 0x48d564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_48d568:
    // 0x48d568: 0xc115ee8  jal         func_457BA0
label_48d56c:
    if (ctx->pc == 0x48D56Cu) {
        ctx->pc = 0x48D570u;
        goto label_48d570;
    }
    ctx->pc = 0x48D568u;
    SET_GPR_U32(ctx, 31, 0x48D570u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48D568u, 0x48D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D570u;
label_48d570:
    // 0x48d570: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48d574:
    if (ctx->pc == 0x48D574u) {
        ctx->pc = 0x48D578u;
        goto label_48d578;
    }
    ctx->pc = 0x48D570u;
    {
        const bool branch_taken_0x48d570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d570) {
            ctx->pc = 0x48D5F8u;
            goto label_48d5f8;
        }
    }
    ctx->pc = 0x48D578u;
label_48d578:
    // 0x48d578: 0x8fa20538  lw          $v0, 0x538($sp)
    ctx->pc = 0x48d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
label_48d57c:
    // 0x48d57c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48d580:
    if (ctx->pc == 0x48D580u) {
        ctx->pc = 0x48D584u;
        goto label_48d584;
    }
    ctx->pc = 0x48D57Cu;
    {
        const bool branch_taken_0x48d57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d57c) {
            ctx->pc = 0x48D5F8u;
            goto label_48d5f8;
        }
    }
    ctx->pc = 0x48D584u;
label_48d584:
    // 0x48d584: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x48d584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_48d588:
    // 0x48d588: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d58c:
    // 0x48d58c: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x48d58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_48d590:
    // 0x48d590: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48d590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48d594:
    // 0x48d594: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48d594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48d598:
    // 0x48d598: 0x24080248  addiu       $t0, $zero, 0x248
    ctx->pc = 0x48d598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
label_48d59c:
    // 0x48d59c: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48d59cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48d5a0:
    // 0x48d5a0: 0x25294c80  addiu       $t1, $t1, 0x4C80
    ctx->pc = 0x48d5a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19584));
label_48d5a4:
    // 0x48d5a4: 0xc113940  jal         func_44E500
label_48d5a8:
    if (ctx->pc == 0x48D5A8u) {
        ctx->pc = 0x48D5ACu;
        goto label_48d5ac;
    }
    ctx->pc = 0x48D5A4u;
    SET_GPR_U32(ctx, 31, 0x48D5ACu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48D5A4u, 0x48D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D5ACu;
label_48d5ac:
    // 0x48d5ac: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x48d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_48d5b0:
    // 0x48d5b0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48d5b4:
    // 0x48d5b4: 0x24a54ca0  addiu       $a1, $a1, 0x4CA0
    ctx->pc = 0x48d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19616));
label_48d5b8:
    // 0x48d5b8: 0xc115c24  jal         func_457090
label_48d5bc:
    if (ctx->pc == 0x48D5BCu) {
        ctx->pc = 0x48D5C0u;
        goto label_48d5c0;
    }
    ctx->pc = 0x48D5B8u;
    SET_GPR_U32(ctx, 31, 0x48D5C0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48D5B8u, 0x48D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D5C0u;
label_48d5c0:
    // 0x48d5c0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x48d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_48d5c4:
    // 0x48d5c4: 0x8fa20538  lw          $v0, 0x538($sp)
    ctx->pc = 0x48d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
label_48d5c8:
    // 0x48d5c8: 0x40f809  jalr        $v0
label_48d5cc:
    if (ctx->pc == 0x48D5CCu) {
        ctx->pc = 0x48D5D0u;
        goto label_48d5d0;
    }
    ctx->pc = 0x48D5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48D5D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D5C8u, 0x48D5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48D5D0u;
label_48d5d0:
    // 0x48d5d0: 0xaf82b66c  sw          $v0, -0x4994($gp)
    ctx->pc = 0x48d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948460), GPR_U32(ctx, 2));
label_48d5d4:
    // 0x48d5d4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x48d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_48d5d8:
    // 0x48d5d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48d5dc:
    if (ctx->pc == 0x48D5DCu) {
        ctx->pc = 0x48D5E0u;
        goto label_48d5e0;
    }
    ctx->pc = 0x48D5D8u;
    {
        const bool branch_taken_0x48d5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d5d8) {
            ctx->pc = 0x48D5E8u;
            goto label_48d5e8;
        }
    }
    ctx->pc = 0x48D5E0u;
label_48d5e0:
    // 0x48d5e0: 0xd  break       0
    ctx->pc = 0x48d5e0u;
    runtime->handleBreak(rdram, ctx);
label_48d5e4:
    // 0x48d5e4: 0x0  nop
    ctx->pc = 0x48d5e4u;
    // NOP
label_48d5e8:
    // 0x48d5e8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x48d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_48d5ec:
    // 0x48d5ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48d5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48d5f0:
    // 0x48d5f0: 0xc11392c  jal         func_44E4B0
label_48d5f4:
    if (ctx->pc == 0x48D5F4u) {
        ctx->pc = 0x48D5F8u;
        goto label_48d5f8;
    }
    ctx->pc = 0x48D5F0u;
    SET_GPR_U32(ctx, 31, 0x48D5F8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48D5F0u, 0x48D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D5F8u;
label_48d5f8:
    // 0x48d5f8: 0x8fa403d4  lw          $a0, 0x3D4($sp)
    ctx->pc = 0x48d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_48d5fc:
    // 0x48d5fc: 0xc0d12ee  jal         func_344BB8
label_48d600:
    if (ctx->pc == 0x48D600u) {
        ctx->pc = 0x48D604u;
        goto label_48d604;
    }
    ctx->pc = 0x48D5FCu;
    SET_GPR_U32(ctx, 31, 0x48D604u);
    ctx->pc = 0x344BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344BB8u, 0x48D5FCu, 0x48D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D604u;
label_48d604:
    // 0x48d604: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48d604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48d608:
    // 0x48d608: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x48d608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_48d60c:
    // 0x48d60c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48d60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48d610:
    // 0x48d610: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48d614:
    if (ctx->pc == 0x48D614u) {
        ctx->pc = 0x48D618u;
        goto label_48d618;
    }
    ctx->pc = 0x48D610u;
    {
        const bool branch_taken_0x48d610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d610) {
            ctx->pc = 0x48D6C0u;
            goto label_48d6c0;
        }
    }
    ctx->pc = 0x48D618u;
label_48d618:
    // 0x48d618: 0x8f82b670  lw          $v0, -0x4990($gp)
    ctx->pc = 0x48d618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948464)));
label_48d61c:
    // 0x48d61c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48d620:
    if (ctx->pc == 0x48D620u) {
        ctx->pc = 0x48D624u;
        goto label_48d624;
    }
    ctx->pc = 0x48D61Cu;
    {
        const bool branch_taken_0x48d61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d61c) {
            ctx->pc = 0x48D6C0u;
            goto label_48d6c0;
        }
    }
    ctx->pc = 0x48D624u;
label_48d624:
    // 0x48d624: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48d624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48d628:
    // 0x48d628: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d62c:
    // 0x48d62c: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x48d62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_48d630:
    // 0x48d630: 0xc115ee8  jal         func_457BA0
label_48d634:
    if (ctx->pc == 0x48D634u) {
        ctx->pc = 0x48D638u;
        goto label_48d638;
    }
    ctx->pc = 0x48D630u;
    SET_GPR_U32(ctx, 31, 0x48D638u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48D630u, 0x48D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D638u;
label_48d638:
    // 0x48d638: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48d63c:
    if (ctx->pc == 0x48D63Cu) {
        ctx->pc = 0x48D640u;
        goto label_48d640;
    }
    ctx->pc = 0x48D638u;
    {
        const bool branch_taken_0x48d638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d638) {
            ctx->pc = 0x48D6C0u;
            goto label_48d6c0;
        }
    }
    ctx->pc = 0x48D640u;
label_48d640:
    // 0x48d640: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x48d640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_48d644:
    // 0x48d644: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48d648:
    if (ctx->pc == 0x48D648u) {
        ctx->pc = 0x48D64Cu;
        goto label_48d64c;
    }
    ctx->pc = 0x48D644u;
    {
        const bool branch_taken_0x48d644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d644) {
            ctx->pc = 0x48D6C0u;
            goto label_48d6c0;
        }
    }
    ctx->pc = 0x48D64Cu;
label_48d64c:
    // 0x48d64c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x48d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_48d650:
    // 0x48d650: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48d650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48d654:
    // 0x48d654: 0x8fa60524  lw          $a2, 0x524($sp)
    ctx->pc = 0x48d654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
label_48d658:
    // 0x48d658: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48d658u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48d65c:
    // 0x48d65c: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48d65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48d660:
    // 0x48d660: 0x2408025d  addiu       $t0, $zero, 0x25D
    ctx->pc = 0x48d660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 605));
label_48d664:
    // 0x48d664: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48d664u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48d668:
    // 0x48d668: 0x25294c80  addiu       $t1, $t1, 0x4C80
    ctx->pc = 0x48d668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19584));
label_48d66c:
    // 0x48d66c: 0xc113940  jal         func_44E500
label_48d670:
    if (ctx->pc == 0x48D670u) {
        ctx->pc = 0x48D674u;
        goto label_48d674;
    }
    ctx->pc = 0x48D66Cu;
    SET_GPR_U32(ctx, 31, 0x48D674u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48D66Cu, 0x48D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D674u;
label_48d674:
    // 0x48d674: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x48d674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_48d678:
    // 0x48d678: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48d678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48d67c:
    // 0x48d67c: 0x24a54d10  addiu       $a1, $a1, 0x4D10
    ctx->pc = 0x48d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19728));
label_48d680:
    // 0x48d680: 0xc115c24  jal         func_457090
label_48d684:
    if (ctx->pc == 0x48D684u) {
        ctx->pc = 0x48D688u;
        goto label_48d688;
    }
    ctx->pc = 0x48D680u;
    SET_GPR_U32(ctx, 31, 0x48D688u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48D680u, 0x48D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D688u;
label_48d688:
    // 0x48d688: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x48d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_48d68c:
    // 0x48d68c: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x48d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_48d690:
    // 0x48d690: 0x40f809  jalr        $v0
label_48d694:
    if (ctx->pc == 0x48D694u) {
        ctx->pc = 0x48D698u;
        goto label_48d698;
    }
    ctx->pc = 0x48D690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48D698u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D690u, 0x48D698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48D698u;
label_48d698:
    // 0x48d698: 0xaf82b670  sw          $v0, -0x4990($gp)
    ctx->pc = 0x48d698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948464), GPR_U32(ctx, 2));
label_48d69c:
    // 0x48d69c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x48d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_48d6a0:
    // 0x48d6a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48d6a4:
    if (ctx->pc == 0x48D6A4u) {
        ctx->pc = 0x48D6A8u;
        goto label_48d6a8;
    }
    ctx->pc = 0x48D6A0u;
    {
        const bool branch_taken_0x48d6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d6a0) {
            ctx->pc = 0x48D6B0u;
            goto label_48d6b0;
        }
    }
    ctx->pc = 0x48D6A8u;
label_48d6a8:
    // 0x48d6a8: 0xd  break       0
    ctx->pc = 0x48d6a8u;
    runtime->handleBreak(rdram, ctx);
label_48d6ac:
    // 0x48d6ac: 0x0  nop
    ctx->pc = 0x48d6acu;
    // NOP
label_48d6b0:
    // 0x48d6b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x48d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_48d6b4:
    // 0x48d6b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48d6b8:
    // 0x48d6b8: 0xc11392c  jal         func_44E4B0
label_48d6bc:
    if (ctx->pc == 0x48D6BCu) {
        ctx->pc = 0x48D6C0u;
        goto label_48d6c0;
    }
    ctx->pc = 0x48D6B8u;
    SET_GPR_U32(ctx, 31, 0x48D6C0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48D6B8u, 0x48D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D6C0u;
label_48d6c0:
    // 0x48d6c0: 0x8fa203d4  lw          $v0, 0x3D4($sp)
    ctx->pc = 0x48d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_48d6c4:
    // 0x48d6c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x48d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_48d6c8:
    // 0x48d6c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x48d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_48d6cc:
    // 0x48d6cc: 0xafa203e4  sw          $v0, 0x3E4($sp)
    ctx->pc = 0x48d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 2));
label_48d6d0:
    // 0x48d6d0: 0x8fa403e4  lw          $a0, 0x3E4($sp)
    ctx->pc = 0x48d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
label_48d6d4:
    // 0x48d6d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x48d6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_48d6d8:
    // 0x48d6d8: 0xc0d120c  jal         func_344830
label_48d6dc:
    if (ctx->pc == 0x48D6DCu) {
        ctx->pc = 0x48D6E0u;
        goto label_48d6e0;
    }
    ctx->pc = 0x48D6D8u;
    SET_GPR_U32(ctx, 31, 0x48D6E0u);
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x48D6D8u, 0x48D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D6E0u;
label_48d6e0:
    // 0x48d6e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x48d6e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48d6e4:
    // 0x48d6e4: 0x8fa203d4  lw          $v0, 0x3D4($sp)
    ctx->pc = 0x48d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_48d6e8:
    // 0x48d6e8: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x48d6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_48d6ec:
    // 0x48d6ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x48d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_48d6f0:
    // 0x48d6f0: 0xafa203e0  sw          $v0, 0x3E0($sp)
    ctx->pc = 0x48d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 2));
label_48d6f4:
    // 0x48d6f4: 0x8fa403e4  lw          $a0, 0x3E4($sp)
    ctx->pc = 0x48d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
label_48d6f8:
    // 0x48d6f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48d6fc:
    // 0x48d6fc: 0xc0d120c  jal         func_344830
label_48d700:
    if (ctx->pc == 0x48D700u) {
        ctx->pc = 0x48D704u;
        goto label_48d704;
    }
    ctx->pc = 0x48D6FCu;
    SET_GPR_U32(ctx, 31, 0x48D704u);
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x48D6FCu, 0x48D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D704u;
label_48d704:
    // 0x48d704: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x48d704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48d708:
    // 0x48d708: 0x8fa203d4  lw          $v0, 0x3D4($sp)
    ctx->pc = 0x48d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_48d70c:
    // 0x48d70c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x48d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_48d710:
    // 0x48d710: 0xafa203e8  sw          $v0, 0x3E8($sp)
    ctx->pc = 0x48d710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 2));
label_48d714:
    // 0x48d714: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x48d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_48d718:
    // 0x48d718: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x48d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_48d71c:
    // 0x48d71c: 0xafa203ec  sw          $v0, 0x3EC($sp)
    ctx->pc = 0x48d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 2));
label_48d720:
    // 0x48d720: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x48d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_48d724:
    // 0x48d724: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x48d724u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48d728:
    // 0x48d728: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48d72c:
    // 0x48d72c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48d72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d730:
    // 0x48d730: 0xc0e0c2e  jal         func_3830B8
label_48d734:
    if (ctx->pc == 0x48D734u) {
        ctx->pc = 0x48D738u;
        goto label_48d738;
    }
    ctx->pc = 0x48D730u;
    SET_GPR_U32(ctx, 31, 0x48D738u);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x48D730u, 0x48D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D738u;
label_48d738:
    // 0x48d738: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x48d738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48d73c:
    // 0x48d73c: 0x10130025  beq         $zero, $s3, . + 4 + (0x25 << 2)
label_48d740:
    if (ctx->pc == 0x48D740u) {
        ctx->pc = 0x48D744u;
        goto label_48d744;
    }
    ctx->pc = 0x48D73Cu;
    {
        const bool branch_taken_0x48d73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x48d73c) {
            ctx->pc = 0x48D7D4u;
            goto label_48d7d4;
        }
    }
    ctx->pc = 0x48D744u;
label_48d744:
    // 0x48d744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x48d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48d748:
    // 0x48d748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48d748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d74c:
    // 0x48d74c: 0xc0e0dc6  jal         func_383718
label_48d750:
    if (ctx->pc == 0x48D750u) {
        ctx->pc = 0x48D754u;
        goto label_48d754;
    }
    ctx->pc = 0x48D74Cu;
    SET_GPR_U32(ctx, 31, 0x48D754u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x48D74Cu, 0x48D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D754u;
label_48d754:
    // 0x48d754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48d758:
    // 0x48d758: 0x2785b678  addiu       $a1, $gp, -0x4988
    ctx->pc = 0x48d758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948472));
label_48d75c:
    // 0x48d75c: 0xc0bc574  jal         func_2F15D0
label_48d760:
    if (ctx->pc == 0x48D760u) {
        ctx->pc = 0x48D764u;
        goto label_48d764;
    }
    ctx->pc = 0x48D75Cu;
    SET_GPR_U32(ctx, 31, 0x48D764u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x48D75Cu, 0x48D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D764u;
label_48d764:
    // 0x48d764: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_48d768:
    if (ctx->pc == 0x48D768u) {
        ctx->pc = 0x48D76Cu;
        goto label_48d76c;
    }
    ctx->pc = 0x48D764u;
    {
        const bool branch_taken_0x48d764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d764) {
            ctx->pc = 0x48D7D4u;
            goto label_48d7d4;
        }
    }
    ctx->pc = 0x48D76Cu;
label_48d76c:
    // 0x48d76c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48d770:
    // 0x48d770: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x48d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_48d774:
    // 0x48d774: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x48d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_48d778:
    // 0x48d778: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x48d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48d77c:
    // 0x48d77c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d780:
    // 0x48d780: 0xac4400b4  sw          $a0, 0xB4($v0)
    ctx->pc = 0x48d780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 4));
label_48d784:
    // 0x48d784: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x48d784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_48d788:
    // 0x48d788: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x48d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_48d78c:
    // 0x48d78c: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x48d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_48d790:
    // 0x48d790: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x48d790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48d794:
    // 0x48d794: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d798:
    // 0x48d798: 0xac4400ac  sw          $a0, 0xAC($v0)
    ctx->pc = 0x48d798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 4));
label_48d79c:
    // 0x48d79c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x48d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_48d7a0:
    // 0x48d7a0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x48d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_48d7a4:
    // 0x48d7a4: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x48d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_48d7a8:
    // 0x48d7a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x48d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48d7ac:
    // 0x48d7ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d7b0:
    // 0x48d7b0: 0xac4400b0  sw          $a0, 0xB0($v0)
    ctx->pc = 0x48d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 4));
label_48d7b4:
    // 0x48d7b4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x48d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_48d7b8:
    // 0x48d7b8: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x48d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_48d7bc:
    // 0x48d7bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x48d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48d7c0:
    // 0x48d7c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d7c4:
    // 0x48d7c4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x48d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_48d7c8:
    // 0x48d7c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_48d7cc:
    // 0x48d7cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x48d7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_48d7d0:
    // 0x48d7d0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x48d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_48d7d4:
    // 0x48d7d4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x48d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_48d7d8:
    // 0x48d7d8: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x48d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_48d7dc:
    // 0x48d7dc: 0xc123604  jal         func_48D810
label_48d7e0:
    if (ctx->pc == 0x48D7E0u) {
        ctx->pc = 0x48D7E4u;
        goto label_48d7e4;
    }
    ctx->pc = 0x48D7DCu;
    SET_GPR_U32(ctx, 31, 0x48D7E4u);
    ctx->pc = 0x48D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D810u, 0x48D7DCu, 0x48D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D7E4u;
label_48d7e4:
    // 0x48d7e4: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x48d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_48d7e8:
    // 0x48d7e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x48d7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_48d7ec:
    // 0x48d7ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48d7ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48d7f0:
    // 0x48d7f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48d7f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48d7f4:
    // 0x48d7f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48d7f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48d7f8:
    // 0x48d7f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48d7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48d7fc:
    // 0x48d7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48d7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48d800:
    // 0x48d800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48d800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48d804:
    // 0x48d804: 0x27bd0580  addiu       $sp, $sp, 0x580
    ctx->pc = 0x48d804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_48d808:
    // 0x48d808: 0x3e00008  jr          $ra
label_48d80c:
    if (ctx->pc == 0x48D80Cu) {
        ctx->pc = 0x48D810u;
        goto label_fallthrough_0x48d808;
    }
    ctx->pc = 0x48D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48d808:
    ctx->pc = 0x48D810u;
}
