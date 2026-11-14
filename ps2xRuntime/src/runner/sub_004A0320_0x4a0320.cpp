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

// Function: sub_004A0320
// Address: 0x4a0320 - 0x4a06b0
void sub_004A0320_0x4a0320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0320_0x4a0320");
#endif

    switch (ctx->pc) {
        case 0x4a0320u: goto label_4a0320;
        case 0x4a0324u: goto label_4a0324;
        case 0x4a0328u: goto label_4a0328;
        case 0x4a032cu: goto label_4a032c;
        case 0x4a0330u: goto label_4a0330;
        case 0x4a0334u: goto label_4a0334;
        case 0x4a0338u: goto label_4a0338;
        case 0x4a033cu: goto label_4a033c;
        case 0x4a0340u: goto label_4a0340;
        case 0x4a0344u: goto label_4a0344;
        case 0x4a0348u: goto label_4a0348;
        case 0x4a034cu: goto label_4a034c;
        case 0x4a0350u: goto label_4a0350;
        case 0x4a0354u: goto label_4a0354;
        case 0x4a0358u: goto label_4a0358;
        case 0x4a035cu: goto label_4a035c;
        case 0x4a0360u: goto label_4a0360;
        case 0x4a0364u: goto label_4a0364;
        case 0x4a0368u: goto label_4a0368;
        case 0x4a036cu: goto label_4a036c;
        case 0x4a0370u: goto label_4a0370;
        case 0x4a0374u: goto label_4a0374;
        case 0x4a0378u: goto label_4a0378;
        case 0x4a037cu: goto label_4a037c;
        case 0x4a0380u: goto label_4a0380;
        case 0x4a0384u: goto label_4a0384;
        case 0x4a0388u: goto label_4a0388;
        case 0x4a038cu: goto label_4a038c;
        case 0x4a0390u: goto label_4a0390;
        case 0x4a0394u: goto label_4a0394;
        case 0x4a0398u: goto label_4a0398;
        case 0x4a039cu: goto label_4a039c;
        case 0x4a03a0u: goto label_4a03a0;
        case 0x4a03a4u: goto label_4a03a4;
        case 0x4a03a8u: goto label_4a03a8;
        case 0x4a03acu: goto label_4a03ac;
        case 0x4a03b0u: goto label_4a03b0;
        case 0x4a03b4u: goto label_4a03b4;
        case 0x4a03b8u: goto label_4a03b8;
        case 0x4a03bcu: goto label_4a03bc;
        case 0x4a03c0u: goto label_4a03c0;
        case 0x4a03c4u: goto label_4a03c4;
        case 0x4a03c8u: goto label_4a03c8;
        case 0x4a03ccu: goto label_4a03cc;
        case 0x4a03d0u: goto label_4a03d0;
        case 0x4a03d4u: goto label_4a03d4;
        case 0x4a03d8u: goto label_4a03d8;
        case 0x4a03dcu: goto label_4a03dc;
        case 0x4a03e0u: goto label_4a03e0;
        case 0x4a03e4u: goto label_4a03e4;
        case 0x4a03e8u: goto label_4a03e8;
        case 0x4a03ecu: goto label_4a03ec;
        case 0x4a03f0u: goto label_4a03f0;
        case 0x4a03f4u: goto label_4a03f4;
        case 0x4a03f8u: goto label_4a03f8;
        case 0x4a03fcu: goto label_4a03fc;
        case 0x4a0400u: goto label_4a0400;
        case 0x4a0404u: goto label_4a0404;
        case 0x4a0408u: goto label_4a0408;
        case 0x4a040cu: goto label_4a040c;
        case 0x4a0410u: goto label_4a0410;
        case 0x4a0414u: goto label_4a0414;
        case 0x4a0418u: goto label_4a0418;
        case 0x4a041cu: goto label_4a041c;
        case 0x4a0420u: goto label_4a0420;
        case 0x4a0424u: goto label_4a0424;
        case 0x4a0428u: goto label_4a0428;
        case 0x4a042cu: goto label_4a042c;
        case 0x4a0430u: goto label_4a0430;
        case 0x4a0434u: goto label_4a0434;
        case 0x4a0438u: goto label_4a0438;
        case 0x4a043cu: goto label_4a043c;
        case 0x4a0440u: goto label_4a0440;
        case 0x4a0444u: goto label_4a0444;
        case 0x4a0448u: goto label_4a0448;
        case 0x4a044cu: goto label_4a044c;
        case 0x4a0450u: goto label_4a0450;
        case 0x4a0454u: goto label_4a0454;
        case 0x4a0458u: goto label_4a0458;
        case 0x4a045cu: goto label_4a045c;
        case 0x4a0460u: goto label_4a0460;
        case 0x4a0464u: goto label_4a0464;
        case 0x4a0468u: goto label_4a0468;
        case 0x4a046cu: goto label_4a046c;
        case 0x4a0470u: goto label_4a0470;
        case 0x4a0474u: goto label_4a0474;
        case 0x4a0478u: goto label_4a0478;
        case 0x4a047cu: goto label_4a047c;
        case 0x4a0480u: goto label_4a0480;
        case 0x4a0484u: goto label_4a0484;
        case 0x4a0488u: goto label_4a0488;
        case 0x4a048cu: goto label_4a048c;
        case 0x4a0490u: goto label_4a0490;
        case 0x4a0494u: goto label_4a0494;
        case 0x4a0498u: goto label_4a0498;
        case 0x4a049cu: goto label_4a049c;
        case 0x4a04a0u: goto label_4a04a0;
        case 0x4a04a4u: goto label_4a04a4;
        case 0x4a04a8u: goto label_4a04a8;
        case 0x4a04acu: goto label_4a04ac;
        case 0x4a04b0u: goto label_4a04b0;
        case 0x4a04b4u: goto label_4a04b4;
        case 0x4a04b8u: goto label_4a04b8;
        case 0x4a04bcu: goto label_4a04bc;
        case 0x4a04c0u: goto label_4a04c0;
        case 0x4a04c4u: goto label_4a04c4;
        case 0x4a04c8u: goto label_4a04c8;
        case 0x4a04ccu: goto label_4a04cc;
        case 0x4a04d0u: goto label_4a04d0;
        case 0x4a04d4u: goto label_4a04d4;
        case 0x4a04d8u: goto label_4a04d8;
        case 0x4a04dcu: goto label_4a04dc;
        case 0x4a04e0u: goto label_4a04e0;
        case 0x4a04e4u: goto label_4a04e4;
        case 0x4a04e8u: goto label_4a04e8;
        case 0x4a04ecu: goto label_4a04ec;
        case 0x4a04f0u: goto label_4a04f0;
        case 0x4a04f4u: goto label_4a04f4;
        case 0x4a04f8u: goto label_4a04f8;
        case 0x4a04fcu: goto label_4a04fc;
        case 0x4a0500u: goto label_4a0500;
        case 0x4a0504u: goto label_4a0504;
        case 0x4a0508u: goto label_4a0508;
        case 0x4a050cu: goto label_4a050c;
        case 0x4a0510u: goto label_4a0510;
        case 0x4a0514u: goto label_4a0514;
        case 0x4a0518u: goto label_4a0518;
        case 0x4a051cu: goto label_4a051c;
        case 0x4a0520u: goto label_4a0520;
        case 0x4a0524u: goto label_4a0524;
        case 0x4a0528u: goto label_4a0528;
        case 0x4a052cu: goto label_4a052c;
        case 0x4a0530u: goto label_4a0530;
        case 0x4a0534u: goto label_4a0534;
        case 0x4a0538u: goto label_4a0538;
        case 0x4a053cu: goto label_4a053c;
        case 0x4a0540u: goto label_4a0540;
        case 0x4a0544u: goto label_4a0544;
        case 0x4a0548u: goto label_4a0548;
        case 0x4a054cu: goto label_4a054c;
        case 0x4a0550u: goto label_4a0550;
        case 0x4a0554u: goto label_4a0554;
        case 0x4a0558u: goto label_4a0558;
        case 0x4a055cu: goto label_4a055c;
        case 0x4a0560u: goto label_4a0560;
        case 0x4a0564u: goto label_4a0564;
        case 0x4a0568u: goto label_4a0568;
        case 0x4a056cu: goto label_4a056c;
        case 0x4a0570u: goto label_4a0570;
        case 0x4a0574u: goto label_4a0574;
        case 0x4a0578u: goto label_4a0578;
        case 0x4a057cu: goto label_4a057c;
        case 0x4a0580u: goto label_4a0580;
        case 0x4a0584u: goto label_4a0584;
        case 0x4a0588u: goto label_4a0588;
        case 0x4a058cu: goto label_4a058c;
        case 0x4a0590u: goto label_4a0590;
        case 0x4a0594u: goto label_4a0594;
        case 0x4a0598u: goto label_4a0598;
        case 0x4a059cu: goto label_4a059c;
        case 0x4a05a0u: goto label_4a05a0;
        case 0x4a05a4u: goto label_4a05a4;
        case 0x4a05a8u: goto label_4a05a8;
        case 0x4a05acu: goto label_4a05ac;
        case 0x4a05b0u: goto label_4a05b0;
        case 0x4a05b4u: goto label_4a05b4;
        case 0x4a05b8u: goto label_4a05b8;
        case 0x4a05bcu: goto label_4a05bc;
        case 0x4a05c0u: goto label_4a05c0;
        case 0x4a05c4u: goto label_4a05c4;
        case 0x4a05c8u: goto label_4a05c8;
        case 0x4a05ccu: goto label_4a05cc;
        case 0x4a05d0u: goto label_4a05d0;
        case 0x4a05d4u: goto label_4a05d4;
        case 0x4a05d8u: goto label_4a05d8;
        case 0x4a05dcu: goto label_4a05dc;
        case 0x4a05e0u: goto label_4a05e0;
        case 0x4a05e4u: goto label_4a05e4;
        case 0x4a05e8u: goto label_4a05e8;
        case 0x4a05ecu: goto label_4a05ec;
        case 0x4a05f0u: goto label_4a05f0;
        case 0x4a05f4u: goto label_4a05f4;
        case 0x4a05f8u: goto label_4a05f8;
        case 0x4a05fcu: goto label_4a05fc;
        case 0x4a0600u: goto label_4a0600;
        case 0x4a0604u: goto label_4a0604;
        case 0x4a0608u: goto label_4a0608;
        case 0x4a060cu: goto label_4a060c;
        case 0x4a0610u: goto label_4a0610;
        case 0x4a0614u: goto label_4a0614;
        case 0x4a0618u: goto label_4a0618;
        case 0x4a061cu: goto label_4a061c;
        case 0x4a0620u: goto label_4a0620;
        case 0x4a0624u: goto label_4a0624;
        case 0x4a0628u: goto label_4a0628;
        case 0x4a062cu: goto label_4a062c;
        case 0x4a0630u: goto label_4a0630;
        case 0x4a0634u: goto label_4a0634;
        case 0x4a0638u: goto label_4a0638;
        case 0x4a063cu: goto label_4a063c;
        case 0x4a0640u: goto label_4a0640;
        case 0x4a0644u: goto label_4a0644;
        case 0x4a0648u: goto label_4a0648;
        case 0x4a064cu: goto label_4a064c;
        case 0x4a0650u: goto label_4a0650;
        case 0x4a0654u: goto label_4a0654;
        case 0x4a0658u: goto label_4a0658;
        case 0x4a065cu: goto label_4a065c;
        case 0x4a0660u: goto label_4a0660;
        case 0x4a0664u: goto label_4a0664;
        case 0x4a0668u: goto label_4a0668;
        case 0x4a066cu: goto label_4a066c;
        case 0x4a0670u: goto label_4a0670;
        case 0x4a0674u: goto label_4a0674;
        case 0x4a0678u: goto label_4a0678;
        case 0x4a067cu: goto label_4a067c;
        case 0x4a0680u: goto label_4a0680;
        case 0x4a0684u: goto label_4a0684;
        case 0x4a0688u: goto label_4a0688;
        case 0x4a068cu: goto label_4a068c;
        case 0x4a0690u: goto label_4a0690;
        case 0x4a0694u: goto label_4a0694;
        case 0x4a0698u: goto label_4a0698;
        case 0x4a069cu: goto label_4a069c;
        case 0x4a06a0u: goto label_4a06a0;
        case 0x4a06a4u: goto label_4a06a4;
        case 0x4a06a8u: goto label_4a06a8;
        case 0x4a06acu: goto label_4a06ac;
        default: break;
    }

    ctx->pc = 0x4a0320u;

label_4a0320:
    // 0x4a0320: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a0320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a0324:
    // 0x4a0324: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a0324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4a0328:
    // 0x4a0328: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a0328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4a032c:
    // 0x4a032c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a032cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0330:
    // 0x4a0330: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a0330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_4a0334:
    // 0x4a0334: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a0334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a0338:
    // 0x4a0338: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a0338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4a033c:
    // 0x4a033c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a0340:
    // 0x4a0340: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a0340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a0344:
    // 0x4a0344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a0348:
    // 0x4a0348: 0x9222001b  lbu         $v0, 0x1B($s1)
    ctx->pc = 0x4a0348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
label_4a034c:
    // 0x4a034c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4a034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4a0350:
    // 0x4a0350: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4a0354:
    if (ctx->pc == 0x4A0354u) {
        ctx->pc = 0x4A0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0350u;
        // 0x4a0354: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0358u;
        goto label_4a0358;
    }
    ctx->pc = 0x4A0350u;
    {
        const bool branch_taken_0x4a0350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0350u;
        // 0x4a0354: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0350) {
            ctx->pc = 0x4A0360u;
            goto label_4a0360;
        }
    }
    ctx->pc = 0x4A0358u;
label_4a0358:
    // 0x4a0358: 0x10000082  b           . + 4 + (0x82 << 2)
label_4a035c:
    if (ctx->pc == 0x4A035Cu) {
        ctx->pc = 0x4A035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0358u;
        // 0x4a035c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0360u;
        goto label_4a0360;
    }
    ctx->pc = 0x4A0358u;
    {
        const bool branch_taken_0x4a0358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0358u;
        // 0x4a035c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0358) {
            ctx->pc = 0x4A0564u;
            goto label_4a0564;
        }
    }
    ctx->pc = 0x4A0360u;
label_4a0360:
    // 0x4a0360: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a0360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0364:
    // 0x4a0364: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x4a0364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4a0368:
    // 0x4a0368: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x4a0368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4a036c:
    // 0x4a036c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4a036cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a0370:
    // 0x4a0370: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4a0374:
    if (ctx->pc == 0x4A0374u) {
        ctx->pc = 0x4A0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0370u;
        // 0x4a0374: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0378u;
        goto label_4a0378;
    }
    ctx->pc = 0x4A0370u;
    {
        const bool branch_taken_0x4a0370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0370u;
        // 0x4a0374: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0370) {
            ctx->pc = 0x4A039Cu;
            goto label_4a039c;
        }
    }
    ctx->pc = 0x4A0378u;
label_4a0378:
    // 0x4a0378: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4a0378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4a037c:
    // 0x4a037c: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x4a037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_4a0380:
    // 0x4a0380: 0x40f809  jalr        $v0
label_4a0384:
    if (ctx->pc == 0x4A0384u) {
        ctx->pc = 0x4A0388u;
        goto label_4a0388;
    }
    ctx->pc = 0x4A0380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0388u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0380u, 0x4A0388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0388u;
label_4a0388:
    // 0x4a0388: 0x8f83c1e8  lw          $v1, -0x3E18($gp)
    ctx->pc = 0x4a0388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951400)));
label_4a038c:
    // 0x4a038c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a0390:
    // 0x4a0390: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a0390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_4a0394:
    // 0x4a0394: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a0394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a0398:
    // 0x4a0398: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4a0398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4a039c:
    // 0x4a039c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a039cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a03a0:
    // 0x4a03a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a03a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a03a4:
    // 0x4a03a4: 0xc127ca4  jal         func_49F290
label_4a03a8:
    if (ctx->pc == 0x4A03A8u) {
        ctx->pc = 0x4A03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03A4u;
        // 0x4a03a8: 0x34a50808  ori         $a1, $a1, 0x808 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A03ACu;
        goto label_4a03ac;
    }
    ctx->pc = 0x4A03A4u;
    SET_GPR_U32(ctx, 31, 0x4A03ACu);
    ctx->pc = 0x4A03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A03A4u;
    // 0x4a03a8: 0x34a50808  ori         $a1, $a1, 0x808 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A03A4u, 0x4A03ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A03ACu;
label_4a03ac:
    // 0x4a03ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a03acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a03b0:
    // 0x4a03b0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_4a03b4:
    if (ctx->pc == 0x4A03B4u) {
        ctx->pc = 0x4A03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03B0u;
        // 0x4a03b4: 0x26530024  addiu       $s3, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A03B8u;
        goto label_4a03b8;
    }
    ctx->pc = 0x4A03B0u;
    {
        const bool branch_taken_0x4a03b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03B0u;
        // 0x4a03b4: 0x26530024  addiu       $s3, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a03b0) {
            ctx->pc = 0x4A03C0u;
            goto label_4a03c0;
        }
    }
    ctx->pc = 0x4A03B8u;
label_4a03b8:
    // 0x4a03b8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_4a03bc:
    if (ctx->pc == 0x4A03BCu) {
        ctx->pc = 0x4A03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03B8u;
        // 0x4a03bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A03C0u;
        goto label_4a03c0;
    }
    ctx->pc = 0x4A03B8u;
    {
        const bool branch_taken_0x4a03b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03B8u;
        // 0x4a03bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a03b8) {
            ctx->pc = 0x4A0564u;
            goto label_4a0564;
        }
    }
    ctx->pc = 0x4A03C0u;
label_4a03c0:
    // 0x4a03c0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4a03c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a03c4:
    // 0x4a03c4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4a03c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a03c8:
    // 0x4a03c8: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x4a03c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a03cc:
    // 0x4a03cc: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x4a03ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a03d0:
    // 0x4a03d0: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x4a03d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a03d4:
    // 0x4a03d4: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x4a03d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a03d8:
    // 0x4a03d8: 0x6a25001f  ldl         $a1, 0x1F($s1)
    ctx->pc = 0x4a03d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a03dc:
    // 0x4a03dc: 0x6e250018  ldr         $a1, 0x18($s1)
    ctx->pc = 0x4a03dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a03e0:
    // 0x4a03e0: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x4a03e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a03e4:
    // 0x4a03e4: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x4a03e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a03e8:
    // 0x4a03e8: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x4a03e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a03ec:
    // 0x4a03ec: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x4a03ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a03f0:
    // 0x4a03f0: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x4a03f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a03f4:
    // 0x4a03f4: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x4a03f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a03f8:
    // 0x4a03f8: 0xb245001f  sdl         $a1, 0x1F($s2)
    ctx->pc = 0x4a03f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a03fc:
    // 0x4a03fc: 0xb6450018  sdr         $a1, 0x18($s2)
    ctx->pc = 0x4a03fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a0400:
    // 0x4a0400: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x4a0400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4a0404:
    // 0x4a0404: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4a0404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_4a0408:
    // 0x4a0408: 0xc12a4ce  jal         func_4A9338
label_4a040c:
    if (ctx->pc == 0x4A040Cu) {
        ctx->pc = 0x4A040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0408u;
        // 0x4a040c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0410u;
        goto label_4a0410;
    }
    ctx->pc = 0x4A0408u;
    SET_GPR_U32(ctx, 31, 0x4A0410u);
    ctx->pc = 0x4A040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0408u;
    // 0x4a040c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x4A0408u, 0x4A0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0410u;
label_4a0410:
    // 0x4a0410: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4a0410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0414:
    // 0x4a0414: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4a0418:
    if (ctx->pc == 0x4A0418u) {
        ctx->pc = 0x4A0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0414u;
        // 0x4a0418: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A041Cu;
        goto label_4a041c;
    }
    ctx->pc = 0x4A0414u;
    {
        const bool branch_taken_0x4a0414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0414u;
        // 0x4a0418: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0414) {
            ctx->pc = 0x4A0434u;
            goto label_4a0434;
        }
    }
    ctx->pc = 0x4A041Cu;
label_4a041c:
    // 0x4a041c: 0xc12a4d4  jal         func_4A9350
label_4a0420:
    if (ctx->pc == 0x4A0420u) {
        ctx->pc = 0x4A0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A041Cu;
        // 0x4a0420: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0424u;
        goto label_4a0424;
    }
    ctx->pc = 0x4A041Cu;
    SET_GPR_U32(ctx, 31, 0x4A0424u);
    ctx->pc = 0x4A0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A041Cu;
    // 0x4a0420: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A041Cu, 0x4A0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0424u;
label_4a0424:
    // 0x4a0424: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a0424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a0428:
    // 0x4a0428: 0xc12a47e  jal         func_4A91F8
label_4a042c:
    if (ctx->pc == 0x4A042Cu) {
        ctx->pc = 0x4A042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0428u;
        // 0x4a042c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0430u;
        goto label_4a0430;
    }
    ctx->pc = 0x4A0428u;
    SET_GPR_U32(ctx, 31, 0x4A0430u);
    ctx->pc = 0x4A042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0428u;
    // 0x4a042c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x4A0428u, 0x4A0430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0430u;
label_4a0430:
    // 0x4a0430: 0x26530034  addiu       $s3, $s2, 0x34
    ctx->pc = 0x4a0430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_4a0434:
    // 0x4a0434: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4a0434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a0438:
    // 0x4a0438: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_4a043c:
    if (ctx->pc == 0x4A043Cu) {
        ctx->pc = 0x4A043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0438u;
        // 0x4a043c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0440u;
        goto label_4a0440;
    }
    ctx->pc = 0x4A0438u;
    {
        const bool branch_taken_0x4a0438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0438u;
        // 0x4a043c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0438) {
            ctx->pc = 0x4A0468u;
            goto label_4a0468;
        }
    }
    ctx->pc = 0x4A0440u;
label_4a0440:
    // 0x4a0440: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x4a0440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_4a0444:
    // 0x4a0444: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x4a0444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_4a0448:
    // 0x4a0448: 0x40f809  jalr        $v0
label_4a044c:
    if (ctx->pc == 0x4A044Cu) {
        ctx->pc = 0x4A044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0448u;
        // 0x4a044c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0450u;
        goto label_4a0450;
    }
    ctx->pc = 0x4A0448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0450u);
        ctx->pc = 0x4A044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0448u;
        // 0x4a044c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0448u, 0x4A0450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0450u;
label_4a0450:
    // 0x4a0450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a0450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a0454:
    // 0x4a0454: 0xc12a448  jal         func_4A9120
label_4a0458:
    if (ctx->pc == 0x4A0458u) {
        ctx->pc = 0x4A0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0454u;
        // 0x4a0458: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A045Cu;
        goto label_4a045c;
    }
    ctx->pc = 0x4A0454u;
    SET_GPR_U32(ctx, 31, 0x4A045Cu);
    ctx->pc = 0x4A0458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0454u;
    // 0x4a0458: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x4A0454u, 0x4A045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A045Cu;
label_4a045c:
    // 0x4a045c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x4a045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_4a0460:
    // 0x4a0460: 0x40f809  jalr        $v0
label_4a0464:
    if (ctx->pc == 0x4A0464u) {
        ctx->pc = 0x4A0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0460u;
        // 0x4a0464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0468u;
        goto label_4a0468;
    }
    ctx->pc = 0x4A0460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0468u);
        ctx->pc = 0x4A0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0460u;
        // 0x4a0464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0460u, 0x4A0468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0468u;
label_4a0468:
    // 0x4a0468: 0x8f82b840  lw          $v0, -0x47C0($gp)
    ctx->pc = 0x4a0468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948928)));
label_4a046c:
    // 0x4a046c: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
label_4a0470:
    if (ctx->pc == 0x4A0470u) {
        ctx->pc = 0x4A0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A046Cu;
        // 0x4a0470: 0xaf92b840  sw          $s2, -0x47C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0474u;
        goto label_4a0474;
    }
    ctx->pc = 0x4A046Cu;
    {
        const bool branch_taken_0x4a046c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a046c) {
            ctx->pc = 0x4A0470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A046Cu;
            // 0x4a0470: 0xaf92b840  sw          $s2, -0x47C0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0474u;
            goto label_4a0474;
        }
    }
    ctx->pc = 0x4A0474u;
label_4a0474:
    // 0x4a0474: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_4a0478:
    if (ctx->pc == 0x4A0478u) {
        ctx->pc = 0x4A0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0474u;
        // 0x4a0478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A047Cu;
        goto label_4a047c;
    }
    ctx->pc = 0x4A0474u;
    {
        const bool branch_taken_0x4a0474 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0474u;
        // 0x4a0478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0474) {
            ctx->pc = 0x4A0498u;
            goto label_4a0498;
        }
    }
    ctx->pc = 0x4A047Cu;
label_4a047c:
    // 0x4a047c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x4a047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_4a0480:
    // 0x4a0480: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x4a0480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4a0484:
    // 0x4a0484: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a0484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4a0488:
    // 0x4a0488: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x4a0488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_4a048c:
    // 0x4a048c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x4a048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4a0490:
    // 0x4a0490: 0xc12a492  jal         func_4A9248
label_4a0494:
    if (ctx->pc == 0x4A0494u) {
        ctx->pc = 0x4A0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0490u;
        // 0x4a0494: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0498u;
        goto label_4a0498;
    }
    ctx->pc = 0x4A0490u;
    SET_GPR_U32(ctx, 31, 0x4A0498u);
    ctx->pc = 0x4A0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0490u;
    // 0x4a0494: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x4A0490u, 0x4A0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0498u;
label_4a0498:
    // 0x4a0498: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x4a0498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4a049c:
    // 0x4a049c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x4a049cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_4a04a0:
    // 0x4a04a0: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x4a04a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_4a04a4:
    // 0x4a04a4: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x4a04a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
label_4a04a8:
    // 0x4a04a8: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x4a04a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4a04ac:
    // 0x4a04ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4a04acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4a04b0:
    // 0x4a04b0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_4a04b4:
    if (ctx->pc == 0x4A04B4u) {
        ctx->pc = 0x4A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A04B0u;
        // 0x4a04b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A04B8u;
        goto label_4a04b8;
    }
    ctx->pc = 0x4A04B0u;
    {
        const bool branch_taken_0x4a04b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A04B0u;
        // 0x4a04b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a04b0) {
            ctx->pc = 0x4A04C0u;
            goto label_4a04c0;
        }
    }
    ctx->pc = 0x4A04B8u;
label_4a04b8:
    // 0x4a04b8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x4a04b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_4a04bc:
    // 0x4a04bc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4a04bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4a04c0:
    // 0x4a04c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4a04c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4a04c4:
    // 0x4a04c4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_4a04c8:
    if (ctx->pc == 0x4A04C8u) {
        ctx->pc = 0x4A04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A04C4u;
        // 0x4a04c8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A04CCu;
        goto label_4a04cc;
    }
    ctx->pc = 0x4A04C4u;
    {
        const bool branch_taken_0x4a04c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a04c4) {
            ctx->pc = 0x4A04C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A04C4u;
            // 0x4a04c8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A04D8u;
            goto label_4a04d8;
        }
    }
    ctx->pc = 0x4A04CCu;
label_4a04cc:
    // 0x4a04cc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x4a04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_4a04d0:
    // 0x4a04d0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4a04d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4a04d4:
    // 0x4a04d4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x4a04d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_4a04d8:
    // 0x4a04d8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x4a04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_4a04dc:
    // 0x4a04dc: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_4a04e0:
    if (ctx->pc == 0x4A04E0u) {
        ctx->pc = 0x4A04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A04DCu;
        // 0x4a04e0: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A04E4u;
        goto label_4a04e4;
    }
    ctx->pc = 0x4A04DCu;
    {
        const bool branch_taken_0x4a04dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A04DCu;
        // 0x4a04e0: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a04dc) {
            ctx->pc = 0x4A0524u;
            goto label_4a0524;
        }
    }
    ctx->pc = 0x4A04E4u;
label_4a04e4:
    // 0x4a04e4: 0xc12a492  jal         func_4A9248
label_4a04e8:
    if (ctx->pc == 0x4A04E8u) {
        ctx->pc = 0x4A04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A04E4u;
        // 0x4a04e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A04ECu;
        goto label_4a04ec;
    }
    ctx->pc = 0x4A04E4u;
    SET_GPR_U32(ctx, 31, 0x4A04ECu);
    ctx->pc = 0x4A04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A04E4u;
    // 0x4a04e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x4A04E4u, 0x4A04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A04ECu;
label_4a04ec:
    // 0x4a04ec: 0x9223001b  lbu         $v1, 0x1B($s1)
    ctx->pc = 0x4a04ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
label_4a04f0:
    // 0x4a04f0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4a04f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4a04f4:
    // 0x4a04f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4a04f8:
    if (ctx->pc == 0x4A04F8u) {
        ctx->pc = 0x4A04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A04F4u;
        // 0x4a04f8: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A04FCu;
        goto label_4a04fc;
    }
    ctx->pc = 0x4A04F4u;
    {
        const bool branch_taken_0x4a04f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A04F4u;
        // 0x4a04f8: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a04f4) {
            ctx->pc = 0x4A0510u;
            goto label_4a0510;
        }
    }
    ctx->pc = 0x4A04FCu;
label_4a04fc:
    // 0x4a04fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a04fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a0500:
    // 0x4a0500: 0xc12a9a0  jal         func_4AA680
label_4a0504:
    if (ctx->pc == 0x4A0504u) {
        ctx->pc = 0x4A0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0500u;
        // 0x4a0504: 0x248486b0  addiu       $a0, $a0, -0x7950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0508u;
        goto label_4a0508;
    }
    ctx->pc = 0x4A0500u;
    SET_GPR_U32(ctx, 31, 0x4A0508u);
    ctx->pc = 0x4A0504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0500u;
    // 0x4a0504: 0x248486b0  addiu       $a0, $a0, -0x7950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A0500u, 0x4A0508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0508u;
label_4a0508:
    // 0x4a0508: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a050c:
    if (ctx->pc == 0x4A050Cu) {
        ctx->pc = 0x4A050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0508u;
        // 0x4a050c: 0x8f84c1f0  lw          $a0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0510u;
        goto label_4a0510;
    }
    ctx->pc = 0x4A0508u;
    {
        const bool branch_taken_0x4a0508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0508u;
        // 0x4a050c: 0x8f84c1f0  lw          $a0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0508) {
            ctx->pc = 0x4A0528u;
            goto label_4a0528;
        }
    }
    ctx->pc = 0x4A0510u;
label_4a0510:
    // 0x4a0510: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4a0510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4a0514:
    // 0x4a0514: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4a0518:
    if (ctx->pc == 0x4A0518u) {
        ctx->pc = 0x4A0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0514u;
        // 0x4a0518: 0x8f84c1f0  lw          $a0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A051Cu;
        goto label_4a051c;
    }
    ctx->pc = 0x4A0514u;
    {
        const bool branch_taken_0x4a0514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0514u;
        // 0x4a0518: 0x8f84c1f0  lw          $a0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0514) {
            ctx->pc = 0x4A0528u;
            goto label_4a0528;
        }
    }
    ctx->pc = 0x4A051Cu;
label_4a051c:
    // 0x4a051c: 0xc127cae  jal         func_49F2B8
label_4a0520:
    if (ctx->pc == 0x4A0520u) {
        ctx->pc = 0x4A0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A051Cu;
        // 0x4a0520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0524u;
        goto label_4a0524;
    }
    ctx->pc = 0x4A051Cu;
    SET_GPR_U32(ctx, 31, 0x4A0524u);
    ctx->pc = 0x4A0520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A051Cu;
    // 0x4a0520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A051Cu, 0x4A0524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0524u;
label_4a0524:
    // 0x4a0524: 0x8f84c1f0  lw          $a0, -0x3E10($gp)
    ctx->pc = 0x4a0524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a0528:
    // 0x4a0528: 0x2782c1f0  addiu       $v0, $gp, -0x3E10
    ctx->pc = 0x4a0528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
label_4a052c:
    // 0x4a052c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4a052cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_4a0530:
    // 0x4a0530: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x4a0530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_4a0534:
    // 0x4a0534: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x4a0534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
label_4a0538:
    // 0x4a0538: 0x8f82c1f0  lw          $v0, -0x3E10($gp)
    ctx->pc = 0x4a0538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a053c:
    // 0x4a053c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4a053cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_4a0540:
    // 0x4a0540: 0xaf83c1f0  sw          $v1, -0x3E10($gp)
    ctx->pc = 0x4a0540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951408), GPR_U32(ctx, 3));
label_4a0544:
    // 0x4a0544: 0x9242001b  lbu         $v0, 0x1B($s2)
    ctx->pc = 0x4a0544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 27)));
label_4a0548:
    // 0x4a0548: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a0548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4a054c:
    // 0x4a054c: 0x304200fa  andi        $v0, $v0, 0xFA
    ctx->pc = 0x4a054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)250);
label_4a0550:
    // 0x4a0550: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_4a0554:
    if (ctx->pc == 0x4A0554u) {
        ctx->pc = 0x4A0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0550u;
        // 0x4a0554: 0xa242001b  sb          $v0, 0x1B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0558u;
        goto label_4a0558;
    }
    ctx->pc = 0x4A0550u;
    {
        const bool branch_taken_0x4a0550 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0550u;
        // 0x4a0554: 0xa242001b  sb          $v0, 0x1B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0550) {
            ctx->pc = 0x4A0560u;
            goto label_4a0560;
        }
    }
    ctx->pc = 0x4A0558u;
label_4a0558:
    // 0x4a0558: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4a0558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_4a055c:
    // 0x4a055c: 0xa242001b  sb          $v0, 0x1B($s2)
    ctx->pc = 0x4a055cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 2));
label_4a0560:
    // 0x4a0560: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4a0560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a0564:
    // 0x4a0564: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a0564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a0568:
    // 0x4a0568: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a0568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a056c:
    // 0x4a056c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a056cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a0570:
    // 0x4a0570: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a0570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0574:
    // 0x4a0574: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a0574u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0578:
    // 0x4a0578: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4a0578u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a057c:
    // 0x4a057c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a057cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0580:
    // 0x4a0580: 0x3e00008  jr          $ra
label_4a0584:
    if (ctx->pc == 0x4A0584u) {
        ctx->pc = 0x4A0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0580u;
        // 0x4a0584: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0588u;
        goto label_4a0588;
    }
    ctx->pc = 0x4A0580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0580u;
        // 0x4a0584: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0588u;
label_4a0588:
    // 0x4a0588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a0588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a058c:
    // 0x4a058c: 0x2785c1f0  addiu       $a1, $gp, -0x3E10
    ctx->pc = 0x4a058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
label_4a0590:
    // 0x4a0590: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a0590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a0594:
    // 0x4a0594: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a0594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a0598:
    // 0x4a0598: 0x245086b0  addiu       $s0, $v0, -0x7950
    ctx->pc = 0x4a0598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936240));
label_4a059c:
    // 0x4a059c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a05a0:
    // 0x4a05a0: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4a05a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_4a05a4:
    // 0x4a05a4: 0xaf85c1f4  sw          $a1, -0x3E0C($gp)
    ctx->pc = 0x4a05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951412), GPR_U32(ctx, 5));
label_4a05a8:
    // 0x4a05a8: 0xaf85c1f0  sw          $a1, -0x3E10($gp)
    ctx->pc = 0x4a05a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951408), GPR_U32(ctx, 5));
label_4a05ac:
    // 0x4a05ac: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4a05acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4a05b0:
    // 0x4a05b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a05b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a05b4:
    // 0x4a05b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a05b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a05b8:
    // 0x4a05b8: 0xaf83b838  sw          $v1, -0x47C8($gp)
    ctx->pc = 0x4a05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948920), GPR_U32(ctx, 3));
label_4a05bc:
    // 0x4a05bc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4a05bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4a05c0:
    // 0x4a05c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a05c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a05c4:
    // 0x4a05c4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4a05c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a05c8:
    // 0x4a05c8: 0xc12aa26  jal         func_4AA898
label_4a05cc:
    if (ctx->pc == 0x4A05CCu) {
        ctx->pc = 0x4A05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05C8u;
        // 0x4a05cc: 0x35290808  ori         $t1, $t1, 0x808 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2056);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A05D0u;
        goto label_4a05d0;
    }
    ctx->pc = 0x4A05C8u;
    SET_GPR_U32(ctx, 31, 0x4A05D0u);
    ctx->pc = 0x4A05CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A05C8u;
    // 0x4a05cc: 0x35290808  ori         $t1, $t1, 0x808 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4A05C8u, 0x4A05D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A05D0u;
label_4a05d0:
    // 0x4a05d0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_4a05d4:
    if (ctx->pc == 0x4A05D4u) {
        ctx->pc = 0x4A05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05D0u;
        // 0x4a05d4: 0xaf80b840  sw          $zero, -0x47C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A05D8u;
        goto label_4a05d8;
    }
    ctx->pc = 0x4A05D0u;
    {
        const bool branch_taken_0x4a05d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a05d0) {
            ctx->pc = 0x4A05D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A05D0u;
            // 0x4a05d4: 0xaf80b840  sw          $zero, -0x47C0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A061Cu;
            goto label_4a061c;
        }
    }
    ctx->pc = 0x4A05D8u;
label_4a05d8:
    // 0x4a05d8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a05d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a05dc:
    // 0x4a05dc: 0xc1281ac  jal         func_4A06B0
label_4a05e0:
    if (ctx->pc == 0x4A05E0u) {
        ctx->pc = 0x4A05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05DCu;
        // 0x4a05e0: 0x24848688  addiu       $a0, $a0, -0x7978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A05E4u;
        goto label_4a05e4;
    }
    ctx->pc = 0x4A05DCu;
    SET_GPR_U32(ctx, 31, 0x4A05E4u);
    ctx->pc = 0x4A05E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A05DCu;
    // 0x4a05e0: 0x24848688  addiu       $a0, $a0, -0x7978 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A06B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A06B0u, 0x4A05DCu, 0x4A05E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A05E4u;
label_4a05e4:
    // 0x4a05e4: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
label_4a05e8:
    // 0x4a05e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4a05ec:
    if (ctx->pc == 0x4A05ECu) {
        ctx->pc = 0x4A05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05E8u;
        // 0x4a05ec: 0xaf82b840  sw          $v0, -0x47C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A05F0u;
        goto label_4a05f0;
    }
    ctx->pc = 0x4A05E8u;
    {
        const bool branch_taken_0x4a05e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05E8u;
        // 0x4a05ec: 0xaf82b840  sw          $v0, -0x47C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a05e8) {
            ctx->pc = 0x4A0610u;
            goto label_4a0610;
        }
    }
    ctx->pc = 0x4A05F0u;
label_4a05f0:
    // 0x4a05f0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a05f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_4a05f4:
    // 0x4a05f4: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x4a05f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_4a05f8:
    // 0x4a05f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a05f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a05fc:
    // 0x4a05fc: 0x24a52038  addiu       $a1, $a1, 0x2038
    ctx->pc = 0x4a05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8248));
label_4a0600:
    // 0x4a0600: 0xc12822a  jal         func_4A08A8
label_4a0604:
    if (ctx->pc == 0x4A0604u) {
        ctx->pc = 0x4A0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0600u;
        // 0x4a0604: 0x24c6a7b8  addiu       $a2, $a2, -0x5848 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0608u;
        goto label_4a0608;
    }
    ctx->pc = 0x4A0600u;
    SET_GPR_U32(ctx, 31, 0x4A0608u);
    ctx->pc = 0x4A0604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0600u;
    // 0x4a0604: 0x24c6a7b8  addiu       $a2, $a2, -0x5848 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A08A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A08A8u, 0x4A0600u, 0x4A0608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0608u;
label_4a0608:
    // 0x4a0608: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a060c:
    if (ctx->pc == 0x4A060Cu) {
        ctx->pc = 0x4A060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0608u;
        // 0x4a060c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0610u;
        goto label_4a0610;
    }
    ctx->pc = 0x4A0608u;
    {
        const bool branch_taken_0x4a0608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0608u;
        // 0x4a060c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0608) {
            ctx->pc = 0x4A0628u;
            goto label_4a0628;
        }
    }
    ctx->pc = 0x4A0610u;
label_4a0610:
    // 0x4a0610: 0xc12aa86  jal         func_4AAA18
label_4a0614:
    if (ctx->pc == 0x4A0614u) {
        ctx->pc = 0x4A0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0610u;
        // 0x4a0614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0618u;
        goto label_4a0618;
    }
    ctx->pc = 0x4A0610u;
    SET_GPR_U32(ctx, 31, 0x4A0618u);
    ctx->pc = 0x4A0614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0610u;
    // 0x4a0614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4A0610u, 0x4A0618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0618u;
label_4a0618:
    // 0x4a0618: 0xaf80b840  sw          $zero, -0x47C0($gp)
    ctx->pc = 0x4a0618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 0));
label_4a061c:
    // 0x4a061c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a061cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0620:
    // 0x4a0620: 0xaf80b844  sw          $zero, -0x47BC($gp)
    ctx->pc = 0x4a0620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 0));
label_4a0624:
    // 0x4a0624: 0xaf80b838  sw          $zero, -0x47C8($gp)
    ctx->pc = 0x4a0624u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948920), GPR_U32(ctx, 0));
label_4a0628:
    // 0x4a0628: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a0628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a062c:
    // 0x4a062c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a062cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0630:
    // 0x4a0630: 0x3e00008  jr          $ra
label_4a0634:
    if (ctx->pc == 0x4A0634u) {
        ctx->pc = 0x4A0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0630u;
        // 0x4a0634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0638u;
        goto label_4a0638;
    }
    ctx->pc = 0x4A0630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0630u;
        // 0x4a0634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0638u;
label_4a0638:
    // 0x4a0638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a063c:
    // 0x4a063c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a0640:
    // 0x4a0640: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a0640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4a0644:
    // 0x4a0644: 0x8f84c1f0  lw          $a0, -0x3E10($gp)
    ctx->pc = 0x4a0644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a0648:
    // 0x4a0648: 0x2790c1f0  addiu       $s0, $gp, -0x3E10
    ctx->pc = 0x4a0648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
label_4a064c:
    // 0x4a064c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a0650:
    // 0x4a0650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a0654:
    // 0x4a0654: 0x10900007  beq         $a0, $s0, . + 4 + (0x7 << 2)
label_4a0658:
    if (ctx->pc == 0x4A0658u) {
        ctx->pc = 0x4A0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0654u;
        // 0x4a0658: 0xaf82b83c  sw          $v0, -0x47C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A065Cu;
        goto label_4a065c;
    }
    ctx->pc = 0x4A0654u;
    {
        const bool branch_taken_0x4a0654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x4A0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0654u;
        // 0x4a0658: 0xaf82b83c  sw          $v0, -0x47C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0654) {
            ctx->pc = 0x4A0674u;
            goto label_4a0674;
        }
    }
    ctx->pc = 0x4A065Cu;
label_4a065c:
    // 0x4a065c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4a065cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0660:
    // 0x4a0660: 0xc1281d4  jal         func_4A0750
label_4a0664:
    if (ctx->pc == 0x4A0664u) {
        ctx->pc = 0x4A0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0660u;
        // 0x4a0664: 0x2484ffe4  addiu       $a0, $a0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0668u;
        goto label_4a0668;
    }
    ctx->pc = 0x4A0660u;
    SET_GPR_U32(ctx, 31, 0x4A0668u);
    ctx->pc = 0x4A0664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0660u;
    // 0x4a0664: 0x2484ffe4  addiu       $a0, $a0, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0750u, 0x4A0660u, 0x4A0668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0668u;
label_4a0668:
    // 0x4a0668: 0x8f84c1f0  lw          $a0, -0x3E10($gp)
    ctx->pc = 0x4a0668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a066c:
    // 0x4a066c: 0x1491fffc  bne         $a0, $s1, . + 4 + (-0x4 << 2)
label_4a0670:
    if (ctx->pc == 0x4A0670u) {
        ctx->pc = 0x4A0674u;
        goto label_4a0674;
    }
    ctx->pc = 0x4A066Cu;
    {
        const bool branch_taken_0x4a066c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x4a066c) {
            ctx->pc = 0x4A0660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0660;
        }
    }
    ctx->pc = 0x4A0674u;
label_4a0674:
    // 0x4a0674: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a0674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a0678:
    // 0x4a0678: 0xc12aa86  jal         func_4AAA18
label_4a067c:
    if (ctx->pc == 0x4A067Cu) {
        ctx->pc = 0x4A067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0678u;
        // 0x4a067c: 0x248486b0  addiu       $a0, $a0, -0x7950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0680u;
        goto label_4a0680;
    }
    ctx->pc = 0x4A0678u;
    SET_GPR_U32(ctx, 31, 0x4A0680u);
    ctx->pc = 0x4A067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0678u;
    // 0x4a067c: 0x248486b0  addiu       $a0, $a0, -0x7950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4A0678u, 0x4A0680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0680u;
label_4a0680:
    // 0x4a0680: 0xaf90c1f4  sw          $s0, -0x3E0C($gp)
    ctx->pc = 0x4a0680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951412), GPR_U32(ctx, 16));
label_4a0684:
    // 0x4a0684: 0xaf90c1f0  sw          $s0, -0x3E10($gp)
    ctx->pc = 0x4a0684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951408), GPR_U32(ctx, 16));
label_4a0688:
    // 0x4a0688: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a0688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a068c:
    // 0x4a068c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a068cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0690:
    // 0x4a0690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0694:
    // 0x4a0694: 0xaf80b840  sw          $zero, -0x47C0($gp)
    ctx->pc = 0x4a0694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 0));
label_4a0698:
    // 0x4a0698: 0xaf80b844  sw          $zero, -0x47BC($gp)
    ctx->pc = 0x4a0698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 0));
label_4a069c:
    // 0x4a069c: 0xaf80b838  sw          $zero, -0x47C8($gp)
    ctx->pc = 0x4a069cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948920), GPR_U32(ctx, 0));
label_4a06a0:
    // 0x4a06a0: 0xaf80b83c  sw          $zero, -0x47C4($gp)
    ctx->pc = 0x4a06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948924), GPR_U32(ctx, 0));
label_4a06a4:
    // 0x4a06a4: 0x3e00008  jr          $ra
label_4a06a8:
    if (ctx->pc == 0x4A06A8u) {
        ctx->pc = 0x4A06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A06A4u;
        // 0x4a06a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A06ACu;
        goto label_4a06ac;
    }
    ctx->pc = 0x4A06A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A06A4u;
        // 0x4a06a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A06A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A06ACu;
label_4a06ac:
    // 0x4a06ac: 0x0  nop
    ctx->pc = 0x4a06acu;
    // NOP
    ctx->pc = 0x4a06b0u;
}
