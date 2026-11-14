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

// Function: sub_001FC1E0
// Address: 0x1fc1e0 - 0x1fc5c0
void sub_001FC1E0_0x1fc1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC1E0_0x1fc1e0");
#endif

    switch (ctx->pc) {
        case 0x1fc1e0u: goto label_1fc1e0;
        case 0x1fc1e4u: goto label_1fc1e4;
        case 0x1fc1e8u: goto label_1fc1e8;
        case 0x1fc1ecu: goto label_1fc1ec;
        case 0x1fc1f0u: goto label_1fc1f0;
        case 0x1fc1f4u: goto label_1fc1f4;
        case 0x1fc1f8u: goto label_1fc1f8;
        case 0x1fc1fcu: goto label_1fc1fc;
        case 0x1fc200u: goto label_1fc200;
        case 0x1fc204u: goto label_1fc204;
        case 0x1fc208u: goto label_1fc208;
        case 0x1fc20cu: goto label_1fc20c;
        case 0x1fc210u: goto label_1fc210;
        case 0x1fc214u: goto label_1fc214;
        case 0x1fc218u: goto label_1fc218;
        case 0x1fc21cu: goto label_1fc21c;
        case 0x1fc220u: goto label_1fc220;
        case 0x1fc224u: goto label_1fc224;
        case 0x1fc228u: goto label_1fc228;
        case 0x1fc22cu: goto label_1fc22c;
        case 0x1fc230u: goto label_1fc230;
        case 0x1fc234u: goto label_1fc234;
        case 0x1fc238u: goto label_1fc238;
        case 0x1fc23cu: goto label_1fc23c;
        case 0x1fc240u: goto label_1fc240;
        case 0x1fc244u: goto label_1fc244;
        case 0x1fc248u: goto label_1fc248;
        case 0x1fc24cu: goto label_1fc24c;
        case 0x1fc250u: goto label_1fc250;
        case 0x1fc254u: goto label_1fc254;
        case 0x1fc258u: goto label_1fc258;
        case 0x1fc25cu: goto label_1fc25c;
        case 0x1fc260u: goto label_1fc260;
        case 0x1fc264u: goto label_1fc264;
        case 0x1fc268u: goto label_1fc268;
        case 0x1fc26cu: goto label_1fc26c;
        case 0x1fc270u: goto label_1fc270;
        case 0x1fc274u: goto label_1fc274;
        case 0x1fc278u: goto label_1fc278;
        case 0x1fc27cu: goto label_1fc27c;
        case 0x1fc280u: goto label_1fc280;
        case 0x1fc284u: goto label_1fc284;
        case 0x1fc288u: goto label_1fc288;
        case 0x1fc28cu: goto label_1fc28c;
        case 0x1fc290u: goto label_1fc290;
        case 0x1fc294u: goto label_1fc294;
        case 0x1fc298u: goto label_1fc298;
        case 0x1fc29cu: goto label_1fc29c;
        case 0x1fc2a0u: goto label_1fc2a0;
        case 0x1fc2a4u: goto label_1fc2a4;
        case 0x1fc2a8u: goto label_1fc2a8;
        case 0x1fc2acu: goto label_1fc2ac;
        case 0x1fc2b0u: goto label_1fc2b0;
        case 0x1fc2b4u: goto label_1fc2b4;
        case 0x1fc2b8u: goto label_1fc2b8;
        case 0x1fc2bcu: goto label_1fc2bc;
        case 0x1fc2c0u: goto label_1fc2c0;
        case 0x1fc2c4u: goto label_1fc2c4;
        case 0x1fc2c8u: goto label_1fc2c8;
        case 0x1fc2ccu: goto label_1fc2cc;
        case 0x1fc2d0u: goto label_1fc2d0;
        case 0x1fc2d4u: goto label_1fc2d4;
        case 0x1fc2d8u: goto label_1fc2d8;
        case 0x1fc2dcu: goto label_1fc2dc;
        case 0x1fc2e0u: goto label_1fc2e0;
        case 0x1fc2e4u: goto label_1fc2e4;
        case 0x1fc2e8u: goto label_1fc2e8;
        case 0x1fc2ecu: goto label_1fc2ec;
        case 0x1fc2f0u: goto label_1fc2f0;
        case 0x1fc2f4u: goto label_1fc2f4;
        case 0x1fc2f8u: goto label_1fc2f8;
        case 0x1fc2fcu: goto label_1fc2fc;
        case 0x1fc300u: goto label_1fc300;
        case 0x1fc304u: goto label_1fc304;
        case 0x1fc308u: goto label_1fc308;
        case 0x1fc30cu: goto label_1fc30c;
        case 0x1fc310u: goto label_1fc310;
        case 0x1fc314u: goto label_1fc314;
        case 0x1fc318u: goto label_1fc318;
        case 0x1fc31cu: goto label_1fc31c;
        case 0x1fc320u: goto label_1fc320;
        case 0x1fc324u: goto label_1fc324;
        case 0x1fc328u: goto label_1fc328;
        case 0x1fc32cu: goto label_1fc32c;
        case 0x1fc330u: goto label_1fc330;
        case 0x1fc334u: goto label_1fc334;
        case 0x1fc338u: goto label_1fc338;
        case 0x1fc33cu: goto label_1fc33c;
        case 0x1fc340u: goto label_1fc340;
        case 0x1fc344u: goto label_1fc344;
        case 0x1fc348u: goto label_1fc348;
        case 0x1fc34cu: goto label_1fc34c;
        case 0x1fc350u: goto label_1fc350;
        case 0x1fc354u: goto label_1fc354;
        case 0x1fc358u: goto label_1fc358;
        case 0x1fc35cu: goto label_1fc35c;
        case 0x1fc360u: goto label_1fc360;
        case 0x1fc364u: goto label_1fc364;
        case 0x1fc368u: goto label_1fc368;
        case 0x1fc36cu: goto label_1fc36c;
        case 0x1fc370u: goto label_1fc370;
        case 0x1fc374u: goto label_1fc374;
        case 0x1fc378u: goto label_1fc378;
        case 0x1fc37cu: goto label_1fc37c;
        case 0x1fc380u: goto label_1fc380;
        case 0x1fc384u: goto label_1fc384;
        case 0x1fc388u: goto label_1fc388;
        case 0x1fc38cu: goto label_1fc38c;
        case 0x1fc390u: goto label_1fc390;
        case 0x1fc394u: goto label_1fc394;
        case 0x1fc398u: goto label_1fc398;
        case 0x1fc39cu: goto label_1fc39c;
        case 0x1fc3a0u: goto label_1fc3a0;
        case 0x1fc3a4u: goto label_1fc3a4;
        case 0x1fc3a8u: goto label_1fc3a8;
        case 0x1fc3acu: goto label_1fc3ac;
        case 0x1fc3b0u: goto label_1fc3b0;
        case 0x1fc3b4u: goto label_1fc3b4;
        case 0x1fc3b8u: goto label_1fc3b8;
        case 0x1fc3bcu: goto label_1fc3bc;
        case 0x1fc3c0u: goto label_1fc3c0;
        case 0x1fc3c4u: goto label_1fc3c4;
        case 0x1fc3c8u: goto label_1fc3c8;
        case 0x1fc3ccu: goto label_1fc3cc;
        case 0x1fc3d0u: goto label_1fc3d0;
        case 0x1fc3d4u: goto label_1fc3d4;
        case 0x1fc3d8u: goto label_1fc3d8;
        case 0x1fc3dcu: goto label_1fc3dc;
        case 0x1fc3e0u: goto label_1fc3e0;
        case 0x1fc3e4u: goto label_1fc3e4;
        case 0x1fc3e8u: goto label_1fc3e8;
        case 0x1fc3ecu: goto label_1fc3ec;
        case 0x1fc3f0u: goto label_1fc3f0;
        case 0x1fc3f4u: goto label_1fc3f4;
        case 0x1fc3f8u: goto label_1fc3f8;
        case 0x1fc3fcu: goto label_1fc3fc;
        case 0x1fc400u: goto label_1fc400;
        case 0x1fc404u: goto label_1fc404;
        case 0x1fc408u: goto label_1fc408;
        case 0x1fc40cu: goto label_1fc40c;
        case 0x1fc410u: goto label_1fc410;
        case 0x1fc414u: goto label_1fc414;
        case 0x1fc418u: goto label_1fc418;
        case 0x1fc41cu: goto label_1fc41c;
        case 0x1fc420u: goto label_1fc420;
        case 0x1fc424u: goto label_1fc424;
        case 0x1fc428u: goto label_1fc428;
        case 0x1fc42cu: goto label_1fc42c;
        case 0x1fc430u: goto label_1fc430;
        case 0x1fc434u: goto label_1fc434;
        case 0x1fc438u: goto label_1fc438;
        case 0x1fc43cu: goto label_1fc43c;
        case 0x1fc440u: goto label_1fc440;
        case 0x1fc444u: goto label_1fc444;
        case 0x1fc448u: goto label_1fc448;
        case 0x1fc44cu: goto label_1fc44c;
        case 0x1fc450u: goto label_1fc450;
        case 0x1fc454u: goto label_1fc454;
        case 0x1fc458u: goto label_1fc458;
        case 0x1fc45cu: goto label_1fc45c;
        case 0x1fc460u: goto label_1fc460;
        case 0x1fc464u: goto label_1fc464;
        case 0x1fc468u: goto label_1fc468;
        case 0x1fc46cu: goto label_1fc46c;
        case 0x1fc470u: goto label_1fc470;
        case 0x1fc474u: goto label_1fc474;
        case 0x1fc478u: goto label_1fc478;
        case 0x1fc47cu: goto label_1fc47c;
        case 0x1fc480u: goto label_1fc480;
        case 0x1fc484u: goto label_1fc484;
        case 0x1fc488u: goto label_1fc488;
        case 0x1fc48cu: goto label_1fc48c;
        case 0x1fc490u: goto label_1fc490;
        case 0x1fc494u: goto label_1fc494;
        case 0x1fc498u: goto label_1fc498;
        case 0x1fc49cu: goto label_1fc49c;
        case 0x1fc4a0u: goto label_1fc4a0;
        case 0x1fc4a4u: goto label_1fc4a4;
        case 0x1fc4a8u: goto label_1fc4a8;
        case 0x1fc4acu: goto label_1fc4ac;
        case 0x1fc4b0u: goto label_1fc4b0;
        case 0x1fc4b4u: goto label_1fc4b4;
        case 0x1fc4b8u: goto label_1fc4b8;
        case 0x1fc4bcu: goto label_1fc4bc;
        case 0x1fc4c0u: goto label_1fc4c0;
        case 0x1fc4c4u: goto label_1fc4c4;
        case 0x1fc4c8u: goto label_1fc4c8;
        case 0x1fc4ccu: goto label_1fc4cc;
        case 0x1fc4d0u: goto label_1fc4d0;
        case 0x1fc4d4u: goto label_1fc4d4;
        case 0x1fc4d8u: goto label_1fc4d8;
        case 0x1fc4dcu: goto label_1fc4dc;
        case 0x1fc4e0u: goto label_1fc4e0;
        case 0x1fc4e4u: goto label_1fc4e4;
        case 0x1fc4e8u: goto label_1fc4e8;
        case 0x1fc4ecu: goto label_1fc4ec;
        case 0x1fc4f0u: goto label_1fc4f0;
        case 0x1fc4f4u: goto label_1fc4f4;
        case 0x1fc4f8u: goto label_1fc4f8;
        case 0x1fc4fcu: goto label_1fc4fc;
        case 0x1fc500u: goto label_1fc500;
        case 0x1fc504u: goto label_1fc504;
        case 0x1fc508u: goto label_1fc508;
        case 0x1fc50cu: goto label_1fc50c;
        case 0x1fc510u: goto label_1fc510;
        case 0x1fc514u: goto label_1fc514;
        case 0x1fc518u: goto label_1fc518;
        case 0x1fc51cu: goto label_1fc51c;
        case 0x1fc520u: goto label_1fc520;
        case 0x1fc524u: goto label_1fc524;
        case 0x1fc528u: goto label_1fc528;
        case 0x1fc52cu: goto label_1fc52c;
        case 0x1fc530u: goto label_1fc530;
        case 0x1fc534u: goto label_1fc534;
        case 0x1fc538u: goto label_1fc538;
        case 0x1fc53cu: goto label_1fc53c;
        case 0x1fc540u: goto label_1fc540;
        case 0x1fc544u: goto label_1fc544;
        case 0x1fc548u: goto label_1fc548;
        case 0x1fc54cu: goto label_1fc54c;
        case 0x1fc550u: goto label_1fc550;
        case 0x1fc554u: goto label_1fc554;
        case 0x1fc558u: goto label_1fc558;
        case 0x1fc55cu: goto label_1fc55c;
        case 0x1fc560u: goto label_1fc560;
        case 0x1fc564u: goto label_1fc564;
        case 0x1fc568u: goto label_1fc568;
        case 0x1fc56cu: goto label_1fc56c;
        case 0x1fc570u: goto label_1fc570;
        case 0x1fc574u: goto label_1fc574;
        case 0x1fc578u: goto label_1fc578;
        case 0x1fc57cu: goto label_1fc57c;
        case 0x1fc580u: goto label_1fc580;
        case 0x1fc584u: goto label_1fc584;
        case 0x1fc588u: goto label_1fc588;
        case 0x1fc58cu: goto label_1fc58c;
        case 0x1fc590u: goto label_1fc590;
        case 0x1fc594u: goto label_1fc594;
        case 0x1fc598u: goto label_1fc598;
        case 0x1fc59cu: goto label_1fc59c;
        case 0x1fc5a0u: goto label_1fc5a0;
        case 0x1fc5a4u: goto label_1fc5a4;
        case 0x1fc5a8u: goto label_1fc5a8;
        case 0x1fc5acu: goto label_1fc5ac;
        case 0x1fc5b0u: goto label_1fc5b0;
        case 0x1fc5b4u: goto label_1fc5b4;
        case 0x1fc5b8u: goto label_1fc5b8;
        case 0x1fc5bcu: goto label_1fc5bc;
        default: break;
    }

    ctx->pc = 0x1fc1e0u;

label_1fc1e0:
    // 0x1fc1e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1fc1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1fc1e4:
    // 0x1fc1e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fc1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fc1e8:
    // 0x1fc1e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fc1ec:
    // 0x1fc1ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc1f0:
    // 0x1fc1f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc1f4:
    // 0x1fc1f4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1fc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1fc1f8:
    // 0x1fc1f8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1fc1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_1fc1fc:
    // 0x1fc1fc: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1fc1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_1fc200:
    // 0x1fc200: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x1fc200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_1fc204:
    // 0x1fc204: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x1fc204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
label_1fc208:
    // 0x1fc208: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x1fc208u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1fc20c:
    // 0x1fc20c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fc20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc210:
    // 0x1fc210: 0x1000009f  b           . + 4 + (0x9F << 2)
label_1fc214:
    if (ctx->pc == 0x1FC214u) {
        ctx->pc = 0x1FC218u;
        goto label_1fc218;
    }
    ctx->pc = 0x1FC210u;
    {
        const bool branch_taken_0x1fc210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc210) {
            ctx->pc = 0x1FC490u;
            goto label_1fc490;
        }
    }
    ctx->pc = 0x1FC218u;
label_1fc218:
    // 0x1fc218: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fc218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fc21c:
    // 0x1fc21c: 0x12420059  beq         $s2, $v0, . + 4 + (0x59 << 2)
label_1fc220:
    if (ctx->pc == 0x1FC220u) {
        ctx->pc = 0x1FC224u;
        goto label_1fc224;
    }
    ctx->pc = 0x1FC21Cu;
    {
        const bool branch_taken_0x1fc21c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc21c) {
            ctx->pc = 0x1FC384u;
            goto label_1fc384;
        }
    }
    ctx->pc = 0x1FC224u;
label_1fc224:
    // 0x1fc224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc228:
    // 0x1fc228: 0x1242003c  beq         $s2, $v0, . + 4 + (0x3C << 2)
label_1fc22c:
    if (ctx->pc == 0x1FC22Cu) {
        ctx->pc = 0x1FC230u;
        goto label_1fc230;
    }
    ctx->pc = 0x1FC228u;
    {
        const bool branch_taken_0x1fc228 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc228) {
            ctx->pc = 0x1FC31Cu;
            goto label_1fc31c;
        }
    }
    ctx->pc = 0x1FC230u;
label_1fc230:
    // 0x1fc230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc234:
    // 0x1fc234: 0x1242001f  beq         $s2, $v0, . + 4 + (0x1F << 2)
label_1fc238:
    if (ctx->pc == 0x1FC238u) {
        ctx->pc = 0x1FC23Cu;
        goto label_1fc23c;
    }
    ctx->pc = 0x1FC234u;
    {
        const bool branch_taken_0x1fc234 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc234) {
            ctx->pc = 0x1FC2B4u;
            goto label_1fc2b4;
        }
    }
    ctx->pc = 0x1FC23Cu;
label_1fc23c:
    // 0x1fc23c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1fc240:
    if (ctx->pc == 0x1FC240u) {
        ctx->pc = 0x1FC244u;
        goto label_1fc244;
    }
    ctx->pc = 0x1FC23Cu;
    {
        const bool branch_taken_0x1fc23c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc23c) {
            ctx->pc = 0x1FC24Cu;
            goto label_1fc24c;
        }
    }
    ctx->pc = 0x1FC244u;
label_1fc244:
    // 0x1fc244: 0x10000067  b           . + 4 + (0x67 << 2)
label_1fc248:
    if (ctx->pc == 0x1FC248u) {
        ctx->pc = 0x1FC24Cu;
        goto label_1fc24c;
    }
    ctx->pc = 0x1FC244u;
    {
        const bool branch_taken_0x1fc244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc244) {
            ctx->pc = 0x1FC3E4u;
            goto label_1fc3e4;
        }
    }
    ctx->pc = 0x1FC24Cu;
label_1fc24c:
    // 0x1fc24c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc250:
    // 0x1fc250: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fc250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1fc254:
    // 0x1fc254: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc258:
    // 0x1fc258: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc25c:
    // 0x1fc25c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc260:
    // 0x1fc260: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fc260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1fc264:
    // 0x1fc264: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc268:
    // 0x1fc268: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc26c:
    // 0x1fc26c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc270:
    // 0x1fc270: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc274:
    // 0x1fc274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc278:
    // 0x1fc278: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1fc278u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc27c:
    // 0x1fc27c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc280:
    // 0x1fc280: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1fc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1fc284:
    // 0x1fc284: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc288:
    // 0x1fc288: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc28c:
    // 0x1fc28c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc290:
    // 0x1fc290: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fc290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1fc294:
    // 0x1fc294: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc298:
    // 0x1fc298: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc29c:
    // 0x1fc29c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc2a0:
    // 0x1fc2a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc2a4:
    // 0x1fc2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc2a8:
    // 0x1fc2a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1fc2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc2ac:
    // 0x1fc2ac: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1fc2b0:
    if (ctx->pc == 0x1FC2B0u) {
        ctx->pc = 0x1FC2B4u;
        goto label_1fc2b4;
    }
    ctx->pc = 0x1FC2ACu;
    {
        const bool branch_taken_0x1fc2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc2ac) {
            ctx->pc = 0x1FC3E4u;
            goto label_1fc3e4;
        }
    }
    ctx->pc = 0x1FC2B4u;
label_1fc2b4:
    // 0x1fc2b4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc2b8:
    // 0x1fc2b8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fc2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1fc2bc:
    // 0x1fc2bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc2c0:
    // 0x1fc2c0: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc2c4:
    // 0x1fc2c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc2c8:
    // 0x1fc2c8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fc2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1fc2cc:
    // 0x1fc2cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc2d0:
    // 0x1fc2d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc2d4:
    // 0x1fc2d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc2d8:
    // 0x1fc2d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc2dc:
    // 0x1fc2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc2e0:
    // 0x1fc2e0: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1fc2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fc2e4:
    // 0x1fc2e4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc2e8:
    // 0x1fc2e8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1fc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1fc2ec:
    // 0x1fc2ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc2f0:
    // 0x1fc2f0: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc2f4:
    // 0x1fc2f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc2f8:
    // 0x1fc2f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fc2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1fc2fc:
    // 0x1fc2fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc300:
    // 0x1fc300: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc300u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc304:
    // 0x1fc304: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc308:
    // 0x1fc308: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc30c:
    // 0x1fc30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc310:
    // 0x1fc310: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1fc310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fc314:
    // 0x1fc314: 0x10000033  b           . + 4 + (0x33 << 2)
label_1fc318:
    if (ctx->pc == 0x1FC318u) {
        ctx->pc = 0x1FC31Cu;
        goto label_1fc31c;
    }
    ctx->pc = 0x1FC314u;
    {
        const bool branch_taken_0x1fc314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc314) {
            ctx->pc = 0x1FC3E4u;
            goto label_1fc3e4;
        }
    }
    ctx->pc = 0x1FC31Cu;
label_1fc31c:
    // 0x1fc31c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc320:
    // 0x1fc320: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fc320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1fc324:
    // 0x1fc324: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc328:
    // 0x1fc328: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc32c:
    // 0x1fc32c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc330:
    // 0x1fc330: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fc330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1fc334:
    // 0x1fc334: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc338:
    // 0x1fc338: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc33c:
    // 0x1fc33c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc340:
    // 0x1fc340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc344:
    // 0x1fc344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc348:
    // 0x1fc348: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fc34c:
    // 0x1fc34c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc350:
    // 0x1fc350: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1fc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1fc354:
    // 0x1fc354: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc358:
    // 0x1fc358: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc35c:
    // 0x1fc35c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc360:
    // 0x1fc360: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fc360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1fc364:
    // 0x1fc364: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc368:
    // 0x1fc368: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc36c:
    // 0x1fc36c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc370:
    // 0x1fc370: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc374:
    // 0x1fc374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc378:
    // 0x1fc378: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1fc378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fc37c:
    // 0x1fc37c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1fc380:
    if (ctx->pc == 0x1FC380u) {
        ctx->pc = 0x1FC384u;
        goto label_1fc384;
    }
    ctx->pc = 0x1FC37Cu;
    {
        const bool branch_taken_0x1fc37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc37c) {
            ctx->pc = 0x1FC3E4u;
            goto label_1fc3e4;
        }
    }
    ctx->pc = 0x1FC384u;
label_1fc384:
    // 0x1fc384: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc388:
    // 0x1fc388: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fc388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1fc38c:
    // 0x1fc38c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc390:
    // 0x1fc390: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc394:
    // 0x1fc394: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc398:
    // 0x1fc398: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1fc39c:
    // 0x1fc39c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc3a0:
    // 0x1fc3a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc3a4:
    // 0x1fc3a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc3a8:
    // 0x1fc3a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc3ac:
    // 0x1fc3ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc3b0:
    // 0x1fc3b0: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x1fc3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fc3b4:
    // 0x1fc3b4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc3b8:
    // 0x1fc3b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1fc3bc:
    // 0x1fc3bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc3c0:
    // 0x1fc3c0: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc3c4:
    // 0x1fc3c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc3c8:
    // 0x1fc3c8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fc3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1fc3cc:
    // 0x1fc3cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc3d0:
    // 0x1fc3d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc3d4:
    // 0x1fc3d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc3d8:
    // 0x1fc3d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc3dc:
    // 0x1fc3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc3e0:
    // 0x1fc3e0: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x1fc3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fc3e4:
    // 0x1fc3e4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc3e8:
    // 0x1fc3e8: 0xc06479c  jal         func_191E70
label_1fc3ec:
    if (ctx->pc == 0x1FC3ECu) {
        ctx->pc = 0x1FC3F0u;
        goto label_1fc3f0;
    }
    ctx->pc = 0x1FC3E8u;
    SET_GPR_U32(ctx, 31, 0x1FC3F0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FC3E8u, 0x1FC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC3F0u;
label_1fc3f0:
    // 0x1fc3f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc3f4:
    // 0x1fc3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fc3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc3f8:
    // 0x1fc3f8: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x1fc3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1fc3fc:
    // 0x1fc3fc: 0xc08c704  jal         func_231C10
label_1fc400:
    if (ctx->pc == 0x1FC400u) {
        ctx->pc = 0x1FC404u;
        goto label_1fc404;
    }
    ctx->pc = 0x1FC3FCu;
    SET_GPR_U32(ctx, 31, 0x1FC404u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1FC3FCu, 0x1FC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC404u;
label_1fc404:
    // 0x1fc404: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc408:
    // 0x1fc408: 0xc06479c  jal         func_191E70
label_1fc40c:
    if (ctx->pc == 0x1FC40Cu) {
        ctx->pc = 0x1FC410u;
        goto label_1fc410;
    }
    ctx->pc = 0x1FC408u;
    SET_GPR_U32(ctx, 31, 0x1FC410u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FC408u, 0x1FC410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC410u;
label_1fc410:
    // 0x1fc410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc414:
    // 0x1fc414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fc414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc418:
    // 0x1fc418: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1fc418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fc41c:
    // 0x1fc41c: 0xc08c704  jal         func_231C10
label_1fc420:
    if (ctx->pc == 0x1FC420u) {
        ctx->pc = 0x1FC424u;
        goto label_1fc424;
    }
    ctx->pc = 0x1FC41Cu;
    SET_GPR_U32(ctx, 31, 0x1FC424u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1FC41Cu, 0x1FC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC424u;
label_1fc424:
    // 0x1fc424: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc428:
    // 0x1fc428: 0xc06479c  jal         func_191E70
label_1fc42c:
    if (ctx->pc == 0x1FC42Cu) {
        ctx->pc = 0x1FC430u;
        goto label_1fc430;
    }
    ctx->pc = 0x1FC428u;
    SET_GPR_U32(ctx, 31, 0x1FC430u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FC428u, 0x1FC430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC430u;
label_1fc430:
    // 0x1fc430: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fc430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fc434:
    // 0x1fc434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc438:
    // 0x1fc438: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fc438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc43c:
    // 0x1fc43c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc440:
    // 0x1fc440: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1fc440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fc444:
    // 0x1fc444: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x1fc444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fc448:
    // 0x1fc448: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fc448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc44c:
    // 0x1fc44c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc44cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc450:
    // 0x1fc450: 0xc08b9fc  jal         func_22E7F0
label_1fc454:
    if (ctx->pc == 0x1FC454u) {
        ctx->pc = 0x1FC458u;
        goto label_1fc458;
    }
    ctx->pc = 0x1FC450u;
    SET_GPR_U32(ctx, 31, 0x1FC458u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FC450u, 0x1FC458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC458u;
label_1fc458:
    // 0x1fc458: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc45c:
    // 0x1fc45c: 0xc06479c  jal         func_191E70
label_1fc460:
    if (ctx->pc == 0x1FC460u) {
        ctx->pc = 0x1FC464u;
        goto label_1fc464;
    }
    ctx->pc = 0x1FC45Cu;
    SET_GPR_U32(ctx, 31, 0x1FC464u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FC45Cu, 0x1FC464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC464u;
label_1fc464:
    // 0x1fc464: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fc464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fc468:
    // 0x1fc468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc46c:
    // 0x1fc46c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fc46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc470:
    // 0x1fc470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc474:
    // 0x1fc474: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1fc474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1fc478:
    // 0x1fc478: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x1fc478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fc47c:
    // 0x1fc47c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fc47cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc480:
    // 0x1fc480: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc484:
    // 0x1fc484: 0xc08b9fc  jal         func_22E7F0
label_1fc488:
    if (ctx->pc == 0x1FC488u) {
        ctx->pc = 0x1FC48Cu;
        goto label_1fc48c;
    }
    ctx->pc = 0x1FC484u;
    SET_GPR_U32(ctx, 31, 0x1FC48Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FC484u, 0x1FC48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC48Cu;
label_1fc48c:
    // 0x1fc48c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1fc48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1fc490:
    // 0x1fc490: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1fc490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1fc494:
    // 0x1fc494: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
label_1fc498:
    if (ctx->pc == 0x1FC498u) {
        ctx->pc = 0x1FC49Cu;
        goto label_1fc49c;
    }
    ctx->pc = 0x1FC494u;
    {
        const bool branch_taken_0x1fc494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc494) {
            ctx->pc = 0x1FC218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc218;
        }
    }
    ctx->pc = 0x1FC49Cu;
label_1fc49c:
    // 0x1fc49c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc4a0:
    // 0x1fc4a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1fc4a4:
    // 0x1fc4a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc4a8:
    // 0x1fc4a8: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc4ac:
    // 0x1fc4ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc4b0:
    // 0x1fc4b0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fc4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1fc4b4:
    // 0x1fc4b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc4b8:
    // 0x1fc4b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc4bc:
    // 0x1fc4bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc4c0:
    // 0x1fc4c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc4c4:
    // 0x1fc4c4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc4c8:
    // 0x1fc4c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fc4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fc4cc:
    // 0x1fc4cc: 0xc07f194  jal         func_1FC650
label_1fc4d0:
    if (ctx->pc == 0x1FC4D0u) {
        ctx->pc = 0x1FC4D4u;
        goto label_1fc4d4;
    }
    ctx->pc = 0x1FC4CCu;
    SET_GPR_U32(ctx, 31, 0x1FC4D4u);
    ctx->pc = 0x1FC650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC650u, 0x1FC4CCu, 0x1FC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4D4u;
label_1fc4d4:
    // 0x1fc4d4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc4d8:
    // 0x1fc4d8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1fc4dc:
    // 0x1fc4dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc4e0:
    // 0x1fc4e0: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc4e4:
    // 0x1fc4e4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc4e8:
    // 0x1fc4e8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fc4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1fc4ec:
    // 0x1fc4ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc4f0:
    // 0x1fc4f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc4f4:
    // 0x1fc4f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc4f8:
    // 0x1fc4f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc4fc:
    // 0x1fc4fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc500:
    // 0x1fc500: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1fc500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc504:
    // 0x1fc504: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1fc504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1fc508:
    // 0x1fc508: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc50c:
    // 0x1fc50c: 0x8ca200a4  lw          $v0, 0xA4($a1)
    ctx->pc = 0x1fc50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1fc510:
    // 0x1fc510: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc514:
    // 0x1fc514: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fc514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1fc518:
    // 0x1fc518: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc51c:
    // 0x1fc51c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc520:
    // 0x1fc520: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc524:
    // 0x1fc524: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fc524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fc528:
    // 0x1fc528: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc52c:
    // 0x1fc52c: 0xc07f170  jal         func_1FC5C0
label_1fc530:
    if (ctx->pc == 0x1FC530u) {
        ctx->pc = 0x1FC534u;
        goto label_1fc534;
    }
    ctx->pc = 0x1FC52Cu;
    SET_GPR_U32(ctx, 31, 0x1FC534u);
    ctx->pc = 0x1FC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC5C0u, 0x1FC52Cu, 0x1FC534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC534u;
label_1fc534:
    // 0x1fc534: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc538:
    // 0x1fc538: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1fc538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1fc53c:
    // 0x1fc53c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc540:
    // 0x1fc540: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1fc544:
    // 0x1fc544: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc548:
    // 0x1fc548: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fc548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1fc54c:
    // 0x1fc54c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fc550:
    // 0x1fc550: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc554:
    // 0x1fc554: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc558:
    // 0x1fc558: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc55c:
    // 0x1fc55c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc560:
    // 0x1fc560: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fc560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fc564:
    // 0x1fc564: 0xc07f170  jal         func_1FC5C0
label_1fc568:
    if (ctx->pc == 0x1FC568u) {
        ctx->pc = 0x1FC56Cu;
        goto label_1fc56c;
    }
    ctx->pc = 0x1FC564u;
    SET_GPR_U32(ctx, 31, 0x1FC56Cu);
    ctx->pc = 0x1FC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC5C0u, 0x1FC564u, 0x1FC56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC56Cu;
label_1fc56c:
    // 0x1fc56c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fc56cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fc570:
    // 0x1fc570: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1fc570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc574:
    // 0x1fc574: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1fc574u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fc578:
    // 0x1fc578: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1fc57c:
    if (ctx->pc == 0x1FC57Cu) {
        ctx->pc = 0x1FC580u;
        goto label_1fc580;
    }
    ctx->pc = 0x1FC578u;
    {
        const bool branch_taken_0x1fc578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fc578) {
            ctx->pc = 0x1FC5A0u;
            goto label_1fc5a0;
        }
    }
    ctx->pc = 0x1FC580u;
label_1fc580:
    // 0x1fc580: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc584:
    // 0x1fc584: 0xc06479c  jal         func_191E70
label_1fc588:
    if (ctx->pc == 0x1FC588u) {
        ctx->pc = 0x1FC58Cu;
        goto label_1fc58c;
    }
    ctx->pc = 0x1FC584u;
    SET_GPR_U32(ctx, 31, 0x1FC58Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FC584u, 0x1FC58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC58Cu;
label_1fc58c:
    // 0x1fc58c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc590:
    // 0x1fc590: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fc590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc594:
    // 0x1fc594: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1fc594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1fc598:
    // 0x1fc598: 0x320f809  jalr        $t9
label_1fc59c:
    if (ctx->pc == 0x1FC59Cu) {
        ctx->pc = 0x1FC5A0u;
        goto label_1fc5a0;
    }
    ctx->pc = 0x1FC598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FC5A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC598u, 0x1FC5A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC5A0u;
label_1fc5a0:
    // 0x1fc5a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fc5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc5a4:
    // 0x1fc5a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc5a8:
    // 0x1fc5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc5ac:
    // 0x1fc5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc5b0:
    // 0x1fc5b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1fc5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1fc5b4:
    // 0x1fc5b4: 0x3e00008  jr          $ra
label_1fc5b8:
    if (ctx->pc == 0x1FC5B8u) {
        ctx->pc = 0x1FC5BCu;
        goto label_1fc5bc;
    }
    ctx->pc = 0x1FC5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC5BCu;
label_1fc5bc:
    // 0x1fc5bc: 0x0  nop
    ctx->pc = 0x1fc5bcu;
    // NOP
    ctx->pc = 0x1fc5c0u;
}
