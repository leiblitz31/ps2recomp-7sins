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

// Function: sub_0044C210
// Address: 0x44c210 - 0x44c658
void sub_0044C210_0x44c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C210_0x44c210");
#endif

    switch (ctx->pc) {
        case 0x44c210u: goto label_44c210;
        case 0x44c214u: goto label_44c214;
        case 0x44c218u: goto label_44c218;
        case 0x44c21cu: goto label_44c21c;
        case 0x44c220u: goto label_44c220;
        case 0x44c224u: goto label_44c224;
        case 0x44c228u: goto label_44c228;
        case 0x44c22cu: goto label_44c22c;
        case 0x44c230u: goto label_44c230;
        case 0x44c234u: goto label_44c234;
        case 0x44c238u: goto label_44c238;
        case 0x44c23cu: goto label_44c23c;
        case 0x44c240u: goto label_44c240;
        case 0x44c244u: goto label_44c244;
        case 0x44c248u: goto label_44c248;
        case 0x44c24cu: goto label_44c24c;
        case 0x44c250u: goto label_44c250;
        case 0x44c254u: goto label_44c254;
        case 0x44c258u: goto label_44c258;
        case 0x44c25cu: goto label_44c25c;
        case 0x44c260u: goto label_44c260;
        case 0x44c264u: goto label_44c264;
        case 0x44c268u: goto label_44c268;
        case 0x44c26cu: goto label_44c26c;
        case 0x44c270u: goto label_44c270;
        case 0x44c274u: goto label_44c274;
        case 0x44c278u: goto label_44c278;
        case 0x44c27cu: goto label_44c27c;
        case 0x44c280u: goto label_44c280;
        case 0x44c284u: goto label_44c284;
        case 0x44c288u: goto label_44c288;
        case 0x44c28cu: goto label_44c28c;
        case 0x44c290u: goto label_44c290;
        case 0x44c294u: goto label_44c294;
        case 0x44c298u: goto label_44c298;
        case 0x44c29cu: goto label_44c29c;
        case 0x44c2a0u: goto label_44c2a0;
        case 0x44c2a4u: goto label_44c2a4;
        case 0x44c2a8u: goto label_44c2a8;
        case 0x44c2acu: goto label_44c2ac;
        case 0x44c2b0u: goto label_44c2b0;
        case 0x44c2b4u: goto label_44c2b4;
        case 0x44c2b8u: goto label_44c2b8;
        case 0x44c2bcu: goto label_44c2bc;
        case 0x44c2c0u: goto label_44c2c0;
        case 0x44c2c4u: goto label_44c2c4;
        case 0x44c2c8u: goto label_44c2c8;
        case 0x44c2ccu: goto label_44c2cc;
        case 0x44c2d0u: goto label_44c2d0;
        case 0x44c2d4u: goto label_44c2d4;
        case 0x44c2d8u: goto label_44c2d8;
        case 0x44c2dcu: goto label_44c2dc;
        case 0x44c2e0u: goto label_44c2e0;
        case 0x44c2e4u: goto label_44c2e4;
        case 0x44c2e8u: goto label_44c2e8;
        case 0x44c2ecu: goto label_44c2ec;
        case 0x44c2f0u: goto label_44c2f0;
        case 0x44c2f4u: goto label_44c2f4;
        case 0x44c2f8u: goto label_44c2f8;
        case 0x44c2fcu: goto label_44c2fc;
        case 0x44c300u: goto label_44c300;
        case 0x44c304u: goto label_44c304;
        case 0x44c308u: goto label_44c308;
        case 0x44c30cu: goto label_44c30c;
        case 0x44c310u: goto label_44c310;
        case 0x44c314u: goto label_44c314;
        case 0x44c318u: goto label_44c318;
        case 0x44c31cu: goto label_44c31c;
        case 0x44c320u: goto label_44c320;
        case 0x44c324u: goto label_44c324;
        case 0x44c328u: goto label_44c328;
        case 0x44c32cu: goto label_44c32c;
        case 0x44c330u: goto label_44c330;
        case 0x44c334u: goto label_44c334;
        case 0x44c338u: goto label_44c338;
        case 0x44c33cu: goto label_44c33c;
        case 0x44c340u: goto label_44c340;
        case 0x44c344u: goto label_44c344;
        case 0x44c348u: goto label_44c348;
        case 0x44c34cu: goto label_44c34c;
        case 0x44c350u: goto label_44c350;
        case 0x44c354u: goto label_44c354;
        case 0x44c358u: goto label_44c358;
        case 0x44c35cu: goto label_44c35c;
        case 0x44c360u: goto label_44c360;
        case 0x44c364u: goto label_44c364;
        case 0x44c368u: goto label_44c368;
        case 0x44c36cu: goto label_44c36c;
        case 0x44c370u: goto label_44c370;
        case 0x44c374u: goto label_44c374;
        case 0x44c378u: goto label_44c378;
        case 0x44c37cu: goto label_44c37c;
        case 0x44c380u: goto label_44c380;
        case 0x44c384u: goto label_44c384;
        case 0x44c388u: goto label_44c388;
        case 0x44c38cu: goto label_44c38c;
        case 0x44c390u: goto label_44c390;
        case 0x44c394u: goto label_44c394;
        case 0x44c398u: goto label_44c398;
        case 0x44c39cu: goto label_44c39c;
        case 0x44c3a0u: goto label_44c3a0;
        case 0x44c3a4u: goto label_44c3a4;
        case 0x44c3a8u: goto label_44c3a8;
        case 0x44c3acu: goto label_44c3ac;
        case 0x44c3b0u: goto label_44c3b0;
        case 0x44c3b4u: goto label_44c3b4;
        case 0x44c3b8u: goto label_44c3b8;
        case 0x44c3bcu: goto label_44c3bc;
        case 0x44c3c0u: goto label_44c3c0;
        case 0x44c3c4u: goto label_44c3c4;
        case 0x44c3c8u: goto label_44c3c8;
        case 0x44c3ccu: goto label_44c3cc;
        case 0x44c3d0u: goto label_44c3d0;
        case 0x44c3d4u: goto label_44c3d4;
        case 0x44c3d8u: goto label_44c3d8;
        case 0x44c3dcu: goto label_44c3dc;
        case 0x44c3e0u: goto label_44c3e0;
        case 0x44c3e4u: goto label_44c3e4;
        case 0x44c3e8u: goto label_44c3e8;
        case 0x44c3ecu: goto label_44c3ec;
        case 0x44c3f0u: goto label_44c3f0;
        case 0x44c3f4u: goto label_44c3f4;
        case 0x44c3f8u: goto label_44c3f8;
        case 0x44c3fcu: goto label_44c3fc;
        case 0x44c400u: goto label_44c400;
        case 0x44c404u: goto label_44c404;
        case 0x44c408u: goto label_44c408;
        case 0x44c40cu: goto label_44c40c;
        case 0x44c410u: goto label_44c410;
        case 0x44c414u: goto label_44c414;
        case 0x44c418u: goto label_44c418;
        case 0x44c41cu: goto label_44c41c;
        case 0x44c420u: goto label_44c420;
        case 0x44c424u: goto label_44c424;
        case 0x44c428u: goto label_44c428;
        case 0x44c42cu: goto label_44c42c;
        case 0x44c430u: goto label_44c430;
        case 0x44c434u: goto label_44c434;
        case 0x44c438u: goto label_44c438;
        case 0x44c43cu: goto label_44c43c;
        case 0x44c440u: goto label_44c440;
        case 0x44c444u: goto label_44c444;
        case 0x44c448u: goto label_44c448;
        case 0x44c44cu: goto label_44c44c;
        case 0x44c450u: goto label_44c450;
        case 0x44c454u: goto label_44c454;
        case 0x44c458u: goto label_44c458;
        case 0x44c45cu: goto label_44c45c;
        case 0x44c460u: goto label_44c460;
        case 0x44c464u: goto label_44c464;
        case 0x44c468u: goto label_44c468;
        case 0x44c46cu: goto label_44c46c;
        case 0x44c470u: goto label_44c470;
        case 0x44c474u: goto label_44c474;
        case 0x44c478u: goto label_44c478;
        case 0x44c47cu: goto label_44c47c;
        case 0x44c480u: goto label_44c480;
        case 0x44c484u: goto label_44c484;
        case 0x44c488u: goto label_44c488;
        case 0x44c48cu: goto label_44c48c;
        case 0x44c490u: goto label_44c490;
        case 0x44c494u: goto label_44c494;
        case 0x44c498u: goto label_44c498;
        case 0x44c49cu: goto label_44c49c;
        case 0x44c4a0u: goto label_44c4a0;
        case 0x44c4a4u: goto label_44c4a4;
        case 0x44c4a8u: goto label_44c4a8;
        case 0x44c4acu: goto label_44c4ac;
        case 0x44c4b0u: goto label_44c4b0;
        case 0x44c4b4u: goto label_44c4b4;
        case 0x44c4b8u: goto label_44c4b8;
        case 0x44c4bcu: goto label_44c4bc;
        case 0x44c4c0u: goto label_44c4c0;
        case 0x44c4c4u: goto label_44c4c4;
        case 0x44c4c8u: goto label_44c4c8;
        case 0x44c4ccu: goto label_44c4cc;
        case 0x44c4d0u: goto label_44c4d0;
        case 0x44c4d4u: goto label_44c4d4;
        case 0x44c4d8u: goto label_44c4d8;
        case 0x44c4dcu: goto label_44c4dc;
        case 0x44c4e0u: goto label_44c4e0;
        case 0x44c4e4u: goto label_44c4e4;
        case 0x44c4e8u: goto label_44c4e8;
        case 0x44c4ecu: goto label_44c4ec;
        case 0x44c4f0u: goto label_44c4f0;
        case 0x44c4f4u: goto label_44c4f4;
        case 0x44c4f8u: goto label_44c4f8;
        case 0x44c4fcu: goto label_44c4fc;
        case 0x44c500u: goto label_44c500;
        case 0x44c504u: goto label_44c504;
        case 0x44c508u: goto label_44c508;
        case 0x44c50cu: goto label_44c50c;
        case 0x44c510u: goto label_44c510;
        case 0x44c514u: goto label_44c514;
        case 0x44c518u: goto label_44c518;
        case 0x44c51cu: goto label_44c51c;
        case 0x44c520u: goto label_44c520;
        case 0x44c524u: goto label_44c524;
        case 0x44c528u: goto label_44c528;
        case 0x44c52cu: goto label_44c52c;
        case 0x44c530u: goto label_44c530;
        case 0x44c534u: goto label_44c534;
        case 0x44c538u: goto label_44c538;
        case 0x44c53cu: goto label_44c53c;
        case 0x44c540u: goto label_44c540;
        case 0x44c544u: goto label_44c544;
        case 0x44c548u: goto label_44c548;
        case 0x44c54cu: goto label_44c54c;
        case 0x44c550u: goto label_44c550;
        case 0x44c554u: goto label_44c554;
        case 0x44c558u: goto label_44c558;
        case 0x44c55cu: goto label_44c55c;
        case 0x44c560u: goto label_44c560;
        case 0x44c564u: goto label_44c564;
        case 0x44c568u: goto label_44c568;
        case 0x44c56cu: goto label_44c56c;
        case 0x44c570u: goto label_44c570;
        case 0x44c574u: goto label_44c574;
        case 0x44c578u: goto label_44c578;
        case 0x44c57cu: goto label_44c57c;
        case 0x44c580u: goto label_44c580;
        case 0x44c584u: goto label_44c584;
        case 0x44c588u: goto label_44c588;
        case 0x44c58cu: goto label_44c58c;
        case 0x44c590u: goto label_44c590;
        case 0x44c594u: goto label_44c594;
        case 0x44c598u: goto label_44c598;
        case 0x44c59cu: goto label_44c59c;
        case 0x44c5a0u: goto label_44c5a0;
        case 0x44c5a4u: goto label_44c5a4;
        case 0x44c5a8u: goto label_44c5a8;
        case 0x44c5acu: goto label_44c5ac;
        case 0x44c5b0u: goto label_44c5b0;
        case 0x44c5b4u: goto label_44c5b4;
        case 0x44c5b8u: goto label_44c5b8;
        case 0x44c5bcu: goto label_44c5bc;
        case 0x44c5c0u: goto label_44c5c0;
        case 0x44c5c4u: goto label_44c5c4;
        case 0x44c5c8u: goto label_44c5c8;
        case 0x44c5ccu: goto label_44c5cc;
        case 0x44c5d0u: goto label_44c5d0;
        case 0x44c5d4u: goto label_44c5d4;
        case 0x44c5d8u: goto label_44c5d8;
        case 0x44c5dcu: goto label_44c5dc;
        case 0x44c5e0u: goto label_44c5e0;
        case 0x44c5e4u: goto label_44c5e4;
        case 0x44c5e8u: goto label_44c5e8;
        case 0x44c5ecu: goto label_44c5ec;
        case 0x44c5f0u: goto label_44c5f0;
        case 0x44c5f4u: goto label_44c5f4;
        case 0x44c5f8u: goto label_44c5f8;
        case 0x44c5fcu: goto label_44c5fc;
        case 0x44c600u: goto label_44c600;
        case 0x44c604u: goto label_44c604;
        case 0x44c608u: goto label_44c608;
        case 0x44c60cu: goto label_44c60c;
        case 0x44c610u: goto label_44c610;
        case 0x44c614u: goto label_44c614;
        case 0x44c618u: goto label_44c618;
        case 0x44c61cu: goto label_44c61c;
        case 0x44c620u: goto label_44c620;
        case 0x44c624u: goto label_44c624;
        case 0x44c628u: goto label_44c628;
        case 0x44c62cu: goto label_44c62c;
        case 0x44c630u: goto label_44c630;
        case 0x44c634u: goto label_44c634;
        case 0x44c638u: goto label_44c638;
        case 0x44c63cu: goto label_44c63c;
        case 0x44c640u: goto label_44c640;
        case 0x44c644u: goto label_44c644;
        case 0x44c648u: goto label_44c648;
        case 0x44c64cu: goto label_44c64c;
        case 0x44c650u: goto label_44c650;
        case 0x44c654u: goto label_44c654;
        default: break;
    }

    ctx->pc = 0x44c210u;

label_44c210:
    // 0x44c210: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x44c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_44c214:
    // 0x44c214: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44c214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_44c218:
    // 0x44c218: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x44c218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_44c21c:
    // 0x44c21c: 0x3463ffe0  ori         $v1, $v1, 0xFFE0
    ctx->pc = 0x44c21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65504);
label_44c220:
    // 0x44c220: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x44c220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_44c224:
    // 0x44c224: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44c224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c228:
    // 0x44c228: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x44c228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_44c22c:
    // 0x44c22c: 0x24a5001f  addiu       $a1, $a1, 0x1F
    ctx->pc = 0x44c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
label_44c230:
    // 0x44c230: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x44c230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_44c234:
    // 0x44c234: 0xa39024  and         $s2, $a1, $v1
    ctx->pc = 0x44c234u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_44c238:
    // 0x44c238: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x44c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_44c23c:
    // 0x44c23c: 0x264c0020  addiu       $t4, $s2, 0x20
    ctx->pc = 0x44c23cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_44c240:
    // 0x44c240: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x44c240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_44c244:
    // 0x44c244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44c244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c248:
    // 0x44c248: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x44c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_44c24c:
    // 0x44c24c: 0x8e290014  lw          $t1, 0x14($s1)
    ctx->pc = 0x44c24cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_44c250:
    // 0x44c250: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x44c250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_44c254:
    // 0x44c254: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x44c254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_44c258:
    // 0x44c258: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x44c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_44c25c:
    // 0x44c25c: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x44c25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_44c260:
    // 0x44c260: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x44c260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_44c264:
    // 0x44c264: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_44c268:
    if (ctx->pc == 0x44C268u) {
        ctx->pc = 0x44C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C264u;
        // 0x44c268: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C26Cu;
        goto label_44c26c;
    }
    ctx->pc = 0x44C264u;
    {
        const bool branch_taken_0x44c264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C264u;
        // 0x44c268: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c264) {
            ctx->pc = 0x44C2F8u;
            goto label_44c2f8;
        }
    }
    ctx->pc = 0x44C26Cu;
label_44c26c:
    // 0x44c26c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x44c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_44c270:
    // 0x44c270: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x44c270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_44c274:
    // 0x44c274: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_44c278:
    if (ctx->pc == 0x44C278u) {
        ctx->pc = 0x44C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C274u;
        // 0x44c278: 0x24e2fff8  addiu       $v0, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C27Cu;
        goto label_44c27c;
    }
    ctx->pc = 0x44C274u;
    {
        const bool branch_taken_0x44c274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C274u;
        // 0x44c278: 0x24e2fff8  addiu       $v0, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c274) {
            ctx->pc = 0x44C2E8u;
            goto label_44c2e8;
        }
    }
    ctx->pc = 0x44C27Cu;
label_44c27c:
    // 0x44c27c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x44c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_44c280:
    // 0x44c280: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x44c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_44c284:
    // 0x44c284: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x44c284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_44c288:
    // 0x44c288: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x44c288u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_44c28c:
    // 0x44c28c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_44c290:
    if (ctx->pc == 0x44C290u) {
        ctx->pc = 0x44C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C28Cu;
        // 0x44c290: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C294u;
        goto label_44c294;
    }
    ctx->pc = 0x44C28Cu;
    {
        const bool branch_taken_0x44c28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C28Cu;
        // 0x44c290: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c28c) {
            ctx->pc = 0x44C2A4u;
            goto label_44c2a4;
        }
    }
    ctx->pc = 0x44C294u;
label_44c294:
    // 0x44c294: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x44c294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_44c298:
    // 0x44c298: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x44c298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_44c29c:
    // 0x44c29c: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_44c2a0:
    if (ctx->pc == 0x44C2A0u) {
        ctx->pc = 0x44C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C29Cu;
        // 0x44c2a0: 0x24c30020  addiu       $v1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C2A4u;
        goto label_44c2a4;
    }
    ctx->pc = 0x44C29Cu;
    {
        const bool branch_taken_0x44c29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C29Cu;
        // 0x44c2a0: 0x24c30020  addiu       $v1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c29c) {
            ctx->pc = 0x44C600u;
            goto label_44c600;
        }
    }
    ctx->pc = 0x44C2A4u;
label_44c2a4:
    // 0x44c2a4: 0x2443ffe0  addiu       $v1, $v0, -0x20
    ctx->pc = 0x44c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_44c2a8:
    // 0x44c2a8: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x44c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_44c2ac:
    // 0x44c2ac: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x44c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_44c2b0:
    // 0x44c2b0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x44c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_44c2b4:
    // 0x44c2b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x44c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_44c2b8:
    // 0x44c2b8: 0xacd20008  sw          $s2, 0x8($a2)
    ctx->pc = 0x44c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 18));
label_44c2bc:
    // 0x44c2bc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x44c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_44c2c0:
    // 0x44c2c0: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x44c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_44c2c4:
    // 0x44c2c4: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x44c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_44c2c8:
    // 0x44c2c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x44c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44c2cc:
    // 0x44c2cc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_44c2d0:
    if (ctx->pc == 0x44C2D0u) {
        ctx->pc = 0x44C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C2CCu;
        // 0x44c2d0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C2D4u;
        goto label_44c2d4;
    }
    ctx->pc = 0x44C2CCu;
    {
        const bool branch_taken_0x44c2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c2cc) {
            ctx->pc = 0x44C2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C2CCu;
            // 0x44c2d0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C2D4u;
            goto label_44c2d4;
        }
    }
    ctx->pc = 0x44C2D4u;
label_44c2d4:
    // 0x44c2d4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x44c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44c2d8:
    // 0x44c2d8: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x44c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_44c2dc:
    // 0x44c2dc: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x44c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_44c2e0:
    // 0x44c2e0: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_44c2e4:
    if (ctx->pc == 0x44C2E4u) {
        ctx->pc = 0x44C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C2E0u;
        // 0x44c2e4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C2E8u;
        goto label_44c2e8;
    }
    ctx->pc = 0x44C2E0u;
    {
        const bool branch_taken_0x44c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C2E0u;
        // 0x44c2e4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c2e0) {
            ctx->pc = 0x44C600u;
            goto label_44c600;
        }
    }
    ctx->pc = 0x44C2E8u;
label_44c2e8:
    // 0x44c2e8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x44c2e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_44c2ec:
    // 0x44c2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c2f0:
    // 0x44c2f0: 0x1120005f  beqz        $t1, . + 4 + (0x5F << 2)
label_44c2f4:
    if (ctx->pc == 0x44C2F4u) {
        ctx->pc = 0x44C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C2F0u;
        // 0x44c2f4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C2F8u;
        goto label_44c2f8;
    }
    ctx->pc = 0x44C2F0u;
    {
        const bool branch_taken_0x44c2f0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C2F0u;
        // 0x44c2f4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c2f0) {
            ctx->pc = 0x44C470u;
            goto label_44c470;
        }
    }
    ctx->pc = 0x44C2F8u;
label_44c2f8:
    // 0x44c2f8: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x44c2f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c2fc:
    // 0x44c2fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44c2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c300:
    // 0x44c300: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x44c300u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c304:
    // 0x44c304: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x44c304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c308:
    // 0x44c308: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44c30c:
    // 0x44c30c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x44c30cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_44c310:
    // 0x44c310: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_44c314:
    if (ctx->pc == 0x44C314u) {
        ctx->pc = 0x44C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C310u;
        // 0x44c314: 0x8c82fff8  lw          $v0, -0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C318u;
        goto label_44c318;
    }
    ctx->pc = 0x44C310u;
    {
        const bool branch_taken_0x44c310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c310) {
            ctx->pc = 0x44C314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C310u;
            // 0x44c314: 0x8c82fff8  lw          $v0, -0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C3ACu;
            goto label_44c3ac;
        }
    }
    ctx->pc = 0x44C318u;
label_44c318:
    // 0x44c318: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x44c318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_44c31c:
    // 0x44c31c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44c320:
    // 0x44c320: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x44c320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_44c324:
    // 0x44c324: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x44c324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_44c328:
    // 0x44c328: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_44c32c:
    if (ctx->pc == 0x44C32Cu) {
        ctx->pc = 0x44C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C328u;
        // 0x44c32c: 0x8ca60004  lw          $a2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C330u;
        goto label_44c330;
    }
    ctx->pc = 0x44C328u;
    {
        const bool branch_taken_0x44c328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c328) {
            ctx->pc = 0x44C32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C328u;
            // 0x44c32c: 0x8ca60004  lw          $a2, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C36Cu;
            goto label_44c36c;
        }
    }
    ctx->pc = 0x44C330u;
label_44c330:
    // 0x44c330: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x44c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_44c334:
    // 0x44c334: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x44c334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_44c338:
    // 0x44c338: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x44c338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_44c33c:
    // 0x44c33c: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x44c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_44c340:
    // 0x44c340: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x44c340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_44c344:
    // 0x44c344: 0x10470097  beq         $v0, $a3, . + 4 + (0x97 << 2)
label_44c348:
    if (ctx->pc == 0x44C348u) {
        ctx->pc = 0x44C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C344u;
        // 0x44c348: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C34Cu;
        goto label_44c34c;
    }
    ctx->pc = 0x44C344u;
    {
        const bool branch_taken_0x44c344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C344u;
        // 0x44c348: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c344) {
            ctx->pc = 0x44C5A4u;
            goto label_44c5a4;
        }
    }
    ctx->pc = 0x44C34Cu;
label_44c34c:
    // 0x44c34c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x44c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_44c350:
    // 0x44c350: 0x6843ffff  ldl         $v1, -0x1($v0)
    ctx->pc = 0x44c350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44c354:
    // 0x44c354: 0x6c43fff8  ldr         $v1, -0x8($v0)
    ctx->pc = 0x44c354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44c358:
    // 0x44c358: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x44c358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c35c:
    // 0x44c35c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x44c35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c360:
    // 0x44c360: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x44c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_44c364:
    // 0x44c364: 0x1000008f  b           . + 4 + (0x8F << 2)
label_44c368:
    if (ctx->pc == 0x44C368u) {
        ctx->pc = 0x44C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C364u;
        // 0x44c368: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C36Cu;
        goto label_44c36c;
    }
    ctx->pc = 0x44C364u;
    {
        const bool branch_taken_0x44c364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C364u;
        // 0x44c368: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c364) {
            ctx->pc = 0x44C5A4u;
            goto label_44c5a4;
        }
    }
    ctx->pc = 0x44C36Cu;
label_44c36c:
    // 0x44c36c: 0x2443ffe0  addiu       $v1, $v0, -0x20
    ctx->pc = 0x44c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_44c370:
    // 0x44c370: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x44c370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_44c374:
    // 0x44c374: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x44c374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_44c378:
    // 0x44c378: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x44c378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_44c37c:
    // 0x44c37c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x44c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_44c380:
    // 0x44c380: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x44c380u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_44c384:
    // 0x44c384: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x44c384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_44c388:
    // 0x44c388: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x44c388u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_44c38c:
    // 0x44c38c: 0xacd20008  sw          $s2, 0x8($a2)
    ctx->pc = 0x44c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 18));
label_44c390:
    // 0x44c390: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x44c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44c394:
    // 0x44c394: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_44c398:
    if (ctx->pc == 0x44C398u) {
        ctx->pc = 0x44C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C394u;
        // 0x44c398: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C39Cu;
        goto label_44c39c;
    }
    ctx->pc = 0x44C394u;
    {
        const bool branch_taken_0x44c394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c394) {
            ctx->pc = 0x44C398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C394u;
            // 0x44c398: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C39Cu;
            goto label_44c39c;
        }
    }
    ctx->pc = 0x44C39Cu;
label_44c39c:
    // 0x44c39c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x44c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44c3a0:
    // 0x44c3a0: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x44c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_44c3a4:
    // 0x44c3a4: 0x10000095  b           . + 4 + (0x95 << 2)
label_44c3a8:
    if (ctx->pc == 0x44C3A8u) {
        ctx->pc = 0x44C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C3A4u;
        // 0x44c3a8: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C3ACu;
        goto label_44c3ac;
    }
    ctx->pc = 0x44C3A4u;
    {
        const bool branch_taken_0x44c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C3A4u;
        // 0x44c3a8: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c3a4) {
            ctx->pc = 0x44C5FCu;
            goto label_44c5fc;
        }
    }
    ctx->pc = 0x44C3ACu;
label_44c3ac:
    // 0x44c3ac: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x44c3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_44c3b0:
    // 0x44c3b0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_44c3b4:
    if (ctx->pc == 0x44C3B4u) {
        ctx->pc = 0x44C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C3B0u;
        // 0x44c3b4: 0x24e8fff8  addiu       $t0, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C3B8u;
        goto label_44c3b8;
    }
    ctx->pc = 0x44C3B0u;
    {
        const bool branch_taken_0x44c3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C3B0u;
        // 0x44c3b4: 0x24e8fff8  addiu       $t0, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c3b0) {
            ctx->pc = 0x44C450u;
            goto label_44c450;
        }
    }
    ctx->pc = 0x44C3B8u;
label_44c3b8:
    // 0x44c3b8: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x44c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_44c3bc:
    // 0x44c3bc: 0x8c82fff8  lw          $v0, -0x8($a0)
    ctx->pc = 0x44c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_44c3c0:
    // 0x44c3c0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x44c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_44c3c4:
    // 0x44c3c4: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x44c3c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_44c3c8:
    // 0x44c3c8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_44c3cc:
    if (ctx->pc == 0x44C3CCu) {
        ctx->pc = 0x44C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C3C8u;
        // 0x44c3cc: 0x8ca6fffc  lw          $a2, -0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C3D0u;
        goto label_44c3d0;
    }
    ctx->pc = 0x44C3C8u;
    {
        const bool branch_taken_0x44c3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c3c8) {
            ctx->pc = 0x44C3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C3C8u;
            // 0x44c3cc: 0x8ca6fffc  lw          $a2, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C40Cu;
            goto label_44c40c;
        }
    }
    ctx->pc = 0x44C3D0u;
label_44c3d0:
    // 0x44c3d0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x44c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_44c3d4:
    // 0x44c3d4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x44c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_44c3d8:
    // 0x44c3d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x44c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_44c3dc:
    // 0x44c3dc: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x44c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_44c3e0:
    // 0x44c3e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x44c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_44c3e4:
    // 0x44c3e4: 0x1048006f  beq         $v0, $t0, . + 4 + (0x6F << 2)
label_44c3e8:
    if (ctx->pc == 0x44C3E8u) {
        ctx->pc = 0x44C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C3E4u;
        // 0x44c3e8: 0x8cc6fffc  lw          $a2, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C3ECu;
        goto label_44c3ec;
    }
    ctx->pc = 0x44C3E4u;
    {
        const bool branch_taken_0x44c3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C3E4u;
        // 0x44c3e8: 0x8cc6fffc  lw          $a2, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c3e4) {
            ctx->pc = 0x44C5A4u;
            goto label_44c5a4;
        }
    }
    ctx->pc = 0x44C3ECu;
label_44c3ec:
    // 0x44c3ec: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x44c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_44c3f0:
    // 0x44c3f0: 0x6843ffff  ldl         $v1, -0x1($v0)
    ctx->pc = 0x44c3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44c3f4:
    // 0x44c3f4: 0x6c43fff8  ldr         $v1, -0x8($v0)
    ctx->pc = 0x44c3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44c3f8:
    // 0x44c3f8: 0xb083ffff  sdl         $v1, -0x1($a0)
    ctx->pc = 0x44c3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c3fc:
    // 0x44c3fc: 0xb483fff8  sdr         $v1, -0x8($a0)
    ctx->pc = 0x44c3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c400:
    // 0x44c400: 0x8d43fffc  lw          $v1, -0x4($t2)
    ctx->pc = 0x44c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967292)));
label_44c404:
    // 0x44c404: 0x10000067  b           . + 4 + (0x67 << 2)
label_44c408:
    if (ctx->pc == 0x44C408u) {
        ctx->pc = 0x44C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C404u;
        // 0x44c408: 0xac68000c  sw          $t0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C40Cu;
        goto label_44c40c;
    }
    ctx->pc = 0x44C404u;
    {
        const bool branch_taken_0x44c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C404u;
        // 0x44c408: 0xac68000c  sw          $t0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c404) {
            ctx->pc = 0x44C5A4u;
            goto label_44c5a4;
        }
    }
    ctx->pc = 0x44C40Cu;
label_44c40c:
    // 0x44c40c: 0x2443ffe0  addiu       $v1, $v0, -0x20
    ctx->pc = 0x44c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_44c410:
    // 0x44c410: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x44c410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_44c414:
    // 0x44c414: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x44c414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_44c418:
    // 0x44c418: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x44c418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_44c41c:
    // 0x44c41c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x44c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_44c420:
    // 0x44c420: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x44c420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
label_44c424:
    // 0x44c424: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x44c424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_44c428:
    // 0x44c428: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x44c428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_44c42c:
    // 0x44c42c: 0xacd20008  sw          $s2, 0x8($a2)
    ctx->pc = 0x44c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 18));
label_44c430:
    // 0x44c430: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x44c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44c434:
    // 0x44c434: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_44c438:
    if (ctx->pc == 0x44C438u) {
        ctx->pc = 0x44C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C434u;
        // 0x44c438: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C43Cu;
        goto label_44c43c;
    }
    ctx->pc = 0x44C434u;
    {
        const bool branch_taken_0x44c434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c434) {
            ctx->pc = 0x44C438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C434u;
            // 0x44c438: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C43Cu;
            goto label_44c43c;
        }
    }
    ctx->pc = 0x44C43Cu;
label_44c43c:
    // 0x44c43c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x44c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44c440:
    // 0x44c440: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x44c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_44c444:
    // 0x44c444: 0xad65fffc  sw          $a1, -0x4($t3)
    ctx->pc = 0x44c444u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967292), GPR_U32(ctx, 5));
label_44c448:
    // 0x44c448: 0x1000006d  b           . + 4 + (0x6D << 2)
label_44c44c:
    if (ctx->pc == 0x44C44Cu) {
        ctx->pc = 0x44C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C448u;
        // 0x44c44c: 0xac82fff8  sw          $v0, -0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C450u;
        goto label_44c450;
    }
    ctx->pc = 0x44C448u;
    {
        const bool branch_taken_0x44c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C448u;
        // 0x44c44c: 0xac82fff8  sw          $v0, -0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c448) {
            ctx->pc = 0x44C600u;
            goto label_44c600;
        }
    }
    ctx->pc = 0x44C450u;
label_44c450:
    // 0x44c450: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x44c450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_44c454:
    // 0x44c454: 0x256bfff0  addiu       $t3, $t3, -0x10
    ctx->pc = 0x44c454u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
label_44c458:
    // 0x44c458: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x44c458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_44c45c:
    // 0x44c45c: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x44c45cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
label_44c460:
    // 0x44c460: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x44c460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_44c464:
    // 0x44c464: 0x2529fffe  addiu       $t1, $t1, -0x2
    ctx->pc = 0x44c464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
label_44c468:
    // 0x44c468: 0x1520ffa7  bnez        $t1, . + 4 + (-0x59 << 2)
label_44c46c:
    if (ctx->pc == 0x44C46Cu) {
        ctx->pc = 0x44C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C468u;
        // 0x44c46c: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C470u;
        goto label_44c470;
    }
    ctx->pc = 0x44C468u;
    {
        const bool branch_taken_0x44c468 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C468u;
        // 0x44c46c: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c468) {
            ctx->pc = 0x44C308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c308;
        }
    }
    ctx->pc = 0x44C470u;
label_44c470:
    // 0x44c470: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x44c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44c474:
    // 0x44c474: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44c474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_44c478:
    // 0x44c478: 0x26530060  addiu       $s3, $s2, 0x60
    ctx->pc = 0x44c478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_44c47c:
    // 0x44c47c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x44c47cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c480:
    // 0x44c480: 0x264182b  sltu        $v1, $s3, $a0
    ctx->pc = 0x44c480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44c484:
    // 0x44c484: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x44c484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_44c488:
    // 0x44c488: 0x83980b  movn        $s3, $a0, $v1
    ctx->pc = 0x44c488u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_44c48c:
    // 0x44c48c: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x44c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_44c490:
    // 0x44c490: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x44c490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_44c494:
    // 0x44c494: 0x34a50409  ori         $a1, $a1, 0x409
    ctx->pc = 0x44c494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
label_44c498:
    // 0x44c498: 0x40f809  jalr        $v0
label_44c49c:
    if (ctx->pc == 0x44C49Cu) {
        ctx->pc = 0x44C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C498u;
        // 0x44c49c: 0x2664008b  addiu       $a0, $s3, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C4A0u;
        goto label_44c4a0;
    }
    ctx->pc = 0x44C498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C4A0u);
        ctx->pc = 0x44C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C498u;
        // 0x44c49c: 0x2664008b  addiu       $a0, $s3, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 139));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C498u, 0x44C4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C4A0u;
label_44c4a0:
    // 0x44c4a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44c4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c4a4:
    // 0x44c4a4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_44c4a8:
    if (ctx->pc == 0x44C4A8u) {
        ctx->pc = 0x44C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C4A4u;
        // 0x44c4a8: 0x2603008b  addiu       $v1, $s0, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C4ACu;
        goto label_44c4ac;
    }
    ctx->pc = 0x44C4A4u;
    {
        const bool branch_taken_0x44c4a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C4A4u;
        // 0x44c4a8: 0x2603008b  addiu       $v1, $s0, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c4a4) {
            ctx->pc = 0x44C4C4u;
            goto label_44c4c4;
        }
    }
    ctx->pc = 0x44C4ACu;
label_44c4ac:
    // 0x44c4ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44c4b0:
    // 0x44c4b0: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x44c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_44c4b4:
    // 0x44c4b4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x44c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_44c4b8:
    // 0x44c4b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44c4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44c4bc:
    // 0x44c4bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x44c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_44c4c0:
    // 0x44c4c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44c4c4:
    // 0x44c4c4: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_44c4c8:
    if (ctx->pc == 0x44C4C8u) {
        ctx->pc = 0x44C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C4C4u;
        // 0x44c4c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C4CCu;
        goto label_44c4cc;
    }
    ctx->pc = 0x44C4C4u;
    {
        const bool branch_taken_0x44c4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C4C4u;
        // 0x44c4c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c4c4) {
            ctx->pc = 0x44C54Cu;
            goto label_44c54c;
        }
    }
    ctx->pc = 0x44C4CCu;
label_44c4cc:
    // 0x44c4cc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x44c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_44c4d0:
    // 0x44c4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c4d4:
    // 0x44c4d4: 0xc112e3a  jal         func_44B8E8
label_44c4d8:
    if (ctx->pc == 0x44C4D8u) {
        ctx->pc = 0x44C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C4D4u;
        // 0x44c4d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C4DCu;
        goto label_44c4dc;
    }
    ctx->pc = 0x44C4D4u;
    SET_GPR_U32(ctx, 31, 0x44C4DCu);
    ctx->pc = 0x44C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C4D4u;
    // 0x44c4d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44B8E8u, 0x44C4D4u, 0x44C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C4DCu;
label_44c4dc:
    // 0x44c4dc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_44c4e0:
    if (ctx->pc == 0x44C4E0u) {
        ctx->pc = 0x44C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C4DCu;
        // 0x44c4e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C4E4u;
        goto label_44c4e4;
    }
    ctx->pc = 0x44C4DCu;
    {
        const bool branch_taken_0x44c4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C4DCu;
        // 0x44c4e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c4dc) {
            ctx->pc = 0x44C53Cu;
            goto label_44c53c;
        }
    }
    ctx->pc = 0x44C4E4u;
label_44c4e4:
    // 0x44c4e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x44c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_44c4e8:
    // 0x44c4e8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x44c4e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c4ec:
    // 0x44c4ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x44c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_44c4f0:
    // 0x44c4f0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x44c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_44c4f4:
    // 0x44c4f4: 0x0  nop
    ctx->pc = 0x44c4f4u;
    // NOP
label_44c4f8:
    // 0x44c4f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x44c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_44c4fc:
    // 0x44c4fc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x44c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_44c500:
    // 0x44c500: 0x0  nop
    ctx->pc = 0x44c500u;
    // NOP
label_44c504:
    // 0x44c504: 0x0  nop
    ctx->pc = 0x44c504u;
    // NOP
label_44c508:
    // 0x44c508: 0x0  nop
    ctx->pc = 0x44c508u;
    // NOP
label_44c50c:
    // 0x44c50c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_44c510:
    if (ctx->pc == 0x44C510u) {
        ctx->pc = 0x44C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C50Cu;
        // 0x44c510: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C514u;
        goto label_44c514;
    }
    ctx->pc = 0x44C50Cu;
    {
        const bool branch_taken_0x44c50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C50Cu;
        // 0x44c510: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c50c) {
            ctx->pc = 0x44C4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c4f8;
        }
    }
    ctx->pc = 0x44C514u;
label_44c514:
    // 0x44c514: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x44c514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_44c518:
    // 0x44c518: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x44c518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_44c51c:
    // 0x44c51c: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x44c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_44c520:
    // 0x44c520: 0x24a517b8  addiu       $a1, $a1, 0x17B8
    ctx->pc = 0x44c520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6072));
label_44c524:
    // 0x44c524: 0xf33023  subu        $a2, $a3, $s3
    ctx->pc = 0x44c524u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_44c528:
    // 0x44c528: 0x40f809  jalr        $v0
label_44c52c:
    if (ctx->pc == 0x44C52Cu) {
        ctx->pc = 0x44C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C528u;
        // 0x44c52c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C530u;
        goto label_44c530;
    }
    ctx->pc = 0x44C528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C530u);
        ctx->pc = 0x44C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C528u;
        // 0x44c52c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C528u, 0x44C530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C530u;
label_44c530:
    // 0x44c530: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x44c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44c534:
    // 0x44c534: 0x10000005  b           . + 4 + (0x5 << 2)
label_44c538:
    if (ctx->pc == 0x44C538u) {
        ctx->pc = 0x44C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C534u;
        // 0x44c538: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C53Cu;
        goto label_44c53c;
    }
    ctx->pc = 0x44C534u;
    {
        const bool branch_taken_0x44c534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C534u;
        // 0x44c538: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c534) {
            ctx->pc = 0x44C54Cu;
            goto label_44c54c;
        }
    }
    ctx->pc = 0x44C53Cu;
label_44c53c:
    // 0x44c53c: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x44c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_44c540:
    // 0x44c540: 0x40f809  jalr        $v0
label_44c544:
    if (ctx->pc == 0x44C544u) {
        ctx->pc = 0x44C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C540u;
        // 0x44c544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C548u;
        goto label_44c548;
    }
    ctx->pc = 0x44C540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C548u);
        ctx->pc = 0x44C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C540u;
        // 0x44c544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C540u, 0x44C548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C548u;
label_44c548:
    // 0x44c548: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44c548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c54c:
    // 0x44c54c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_44c550:
    if (ctx->pc == 0x44C550u) {
        ctx->pc = 0x44C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C54Cu;
        // 0x44c550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C554u;
        goto label_44c554;
    }
    ctx->pc = 0x44C54Cu;
    {
        const bool branch_taken_0x44c54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C54Cu;
        // 0x44c550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c54c) {
            ctx->pc = 0x44C60Cu;
            goto label_44c60c;
        }
    }
    ctx->pc = 0x44C554u;
label_44c554:
    // 0x44c554: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x44c554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_44c558:
    // 0x44c558: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x44c558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_44c55c:
    // 0x44c55c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44c560:
    // 0x44c560: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x44c560u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_44c564:
    // 0x44c564: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x44c564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_44c568:
    // 0x44c568: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_44c56c:
    if (ctx->pc == 0x44C56Cu) {
        ctx->pc = 0x44C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C568u;
        // 0x44c56c: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C570u;
        goto label_44c570;
    }
    ctx->pc = 0x44C568u;
    {
        const bool branch_taken_0x44c568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C568u;
        // 0x44c56c: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c568) {
            ctx->pc = 0x44C5BCu;
            goto label_44c5bc;
        }
    }
    ctx->pc = 0x44C570u;
label_44c570:
    // 0x44c570: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x44c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_44c574:
    // 0x44c574: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x44c574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_44c578:
    // 0x44c578: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x44c578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_44c57c:
    // 0x44c57c: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x44c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_44c580:
    // 0x44c580: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x44c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_44c584:
    // 0x44c584: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_44c588:
    if (ctx->pc == 0x44C588u) {
        ctx->pc = 0x44C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C584u;
        // 0x44c588: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C58Cu;
        goto label_44c58c;
    }
    ctx->pc = 0x44C584u;
    {
        const bool branch_taken_0x44c584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x44C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C584u;
        // 0x44c588: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c584) {
            ctx->pc = 0x44C5A4u;
            goto label_44c5a4;
        }
    }
    ctx->pc = 0x44C58Cu;
label_44c58c:
    // 0x44c58c: 0x6843ffff  ldl         $v1, -0x1($v0)
    ctx->pc = 0x44c58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44c590:
    // 0x44c590: 0x6c43fff8  ldr         $v1, -0x8($v0)
    ctx->pc = 0x44c590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44c594:
    // 0x44c594: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x44c594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c598:
    // 0x44c598: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x44c598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c59c:
    // 0x44c59c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x44c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_44c5a0:
    // 0x44c5a0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x44c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_44c5a4:
    // 0x44c5a4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x44c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_44c5a8:
    // 0x44c5a8: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x44c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_44c5ac:
    // 0x44c5ac: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x44c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_44c5b0:
    // 0x44c5b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44c5b4:
    // 0x44c5b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_44c5b8:
    if (ctx->pc == 0x44C5B8u) {
        ctx->pc = 0x44C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C5B4u;
        // 0x44c5b8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C5BCu;
        goto label_44c5bc;
    }
    ctx->pc = 0x44C5B4u;
    {
        const bool branch_taken_0x44c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C5B4u;
        // 0x44c5b8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c5b4) {
            ctx->pc = 0x44C604u;
            goto label_44c604;
        }
    }
    ctx->pc = 0x44C5BCu;
label_44c5bc:
    // 0x44c5bc: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x44c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_44c5c0:
    // 0x44c5c0: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x44c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_44c5c4:
    // 0x44c5c4: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x44c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44c5c8:
    // 0x44c5c8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x44c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_44c5cc:
    // 0x44c5cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x44c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_44c5d0:
    // 0x44c5d0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x44c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_44c5d4:
    // 0x44c5d4: 0xacd20008  sw          $s2, 0x8($a2)
    ctx->pc = 0x44c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 18));
label_44c5d8:
    // 0x44c5d8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x44c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_44c5dc:
    // 0x44c5dc: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x44c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_44c5e0:
    // 0x44c5e0: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x44c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_44c5e4:
    // 0x44c5e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x44c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44c5e8:
    // 0x44c5e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_44c5ec:
    if (ctx->pc == 0x44C5ECu) {
        ctx->pc = 0x44C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C5E8u;
        // 0x44c5ec: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C5F0u;
        goto label_44c5f0;
    }
    ctx->pc = 0x44C5E8u;
    {
        const bool branch_taken_0x44c5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c5e8) {
            ctx->pc = 0x44C5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C5E8u;
            // 0x44c5ec: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C5F0u;
            goto label_44c5f0;
        }
    }
    ctx->pc = 0x44C5F0u;
label_44c5f0:
    // 0x44c5f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x44c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44c5f4:
    // 0x44c5f4: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x44c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_44c5f8:
    // 0x44c5f8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x44c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_44c5fc:
    // 0x44c5fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x44c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_44c600:
    // 0x44c600: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x44c600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_44c604:
    // 0x44c604: 0x1000000a  b           . + 4 + (0xA << 2)
label_44c608:
    if (ctx->pc == 0x44C608u) {
        ctx->pc = 0x44C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C604u;
        // 0x44c608: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C60Cu;
        goto label_44c60c;
    }
    ctx->pc = 0x44C604u;
    {
        const bool branch_taken_0x44c604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C604u;
        // 0x44c608: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c604) {
            ctx->pc = 0x44C630u;
            goto label_44c630;
        }
    }
    ctx->pc = 0x44C60Cu;
label_44c60c:
    // 0x44c60c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44c610:
    // 0x44c610: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x44c610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_44c614:
    // 0x44c614: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x44c614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44c618:
    // 0x44c618: 0xc1035f6  jal         func_40D7D8
label_44c61c:
    if (ctx->pc == 0x44C61Cu) {
        ctx->pc = 0x44C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C618u;
        // 0x44c61c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C620u;
        goto label_44c620;
    }
    ctx->pc = 0x44C618u;
    SET_GPR_U32(ctx, 31, 0x44C620u);
    ctx->pc = 0x44C61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C618u;
    // 0x44c61c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44C618u, 0x44C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C620u;
label_44c620:
    // 0x44c620: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x44c620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_44c624:
    // 0x44c624: 0xc103628  jal         func_40D8A0
label_44c628:
    if (ctx->pc == 0x44C628u) {
        ctx->pc = 0x44C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C624u;
        // 0x44c628: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C62Cu;
        goto label_44c62c;
    }
    ctx->pc = 0x44C624u;
    SET_GPR_U32(ctx, 31, 0x44C62Cu);
    ctx->pc = 0x44C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C624u;
    // 0x44c628: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44C624u, 0x44C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C62Cu;
label_44c62c:
    // 0x44c62c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44c62cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c630:
    // 0x44c630: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x44c630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_44c634:
    // 0x44c634: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x44c634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_44c638:
    // 0x44c638: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x44c638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_44c63c:
    // 0x44c63c: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x44c63cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_44c640:
    // 0x44c640: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x44c640u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_44c644:
    // 0x44c644: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x44c644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_44c648:
    // 0x44c648: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x44c648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_44c64c:
    // 0x44c64c: 0x3e00008  jr          $ra
label_44c650:
    if (ctx->pc == 0x44C650u) {
        ctx->pc = 0x44C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C64Cu;
        // 0x44c650: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C654u;
        goto label_44c654;
    }
    ctx->pc = 0x44C64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C64Cu;
        // 0x44c650: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C654u;
label_44c654:
    // 0x44c654: 0x0  nop
    ctx->pc = 0x44c654u;
    // NOP
    ctx->pc = 0x44c658u;
}
