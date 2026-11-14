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

// Function: sub_00467170
// Address: 0x467170 - 0x467420
void sub_00467170_0x467170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467170_0x467170");
#endif

    switch (ctx->pc) {
        case 0x467170u: goto label_467170;
        case 0x467174u: goto label_467174;
        case 0x467178u: goto label_467178;
        case 0x46717cu: goto label_46717c;
        case 0x467180u: goto label_467180;
        case 0x467184u: goto label_467184;
        case 0x467188u: goto label_467188;
        case 0x46718cu: goto label_46718c;
        case 0x467190u: goto label_467190;
        case 0x467194u: goto label_467194;
        case 0x467198u: goto label_467198;
        case 0x46719cu: goto label_46719c;
        case 0x4671a0u: goto label_4671a0;
        case 0x4671a4u: goto label_4671a4;
        case 0x4671a8u: goto label_4671a8;
        case 0x4671acu: goto label_4671ac;
        case 0x4671b0u: goto label_4671b0;
        case 0x4671b4u: goto label_4671b4;
        case 0x4671b8u: goto label_4671b8;
        case 0x4671bcu: goto label_4671bc;
        case 0x4671c0u: goto label_4671c0;
        case 0x4671c4u: goto label_4671c4;
        case 0x4671c8u: goto label_4671c8;
        case 0x4671ccu: goto label_4671cc;
        case 0x4671d0u: goto label_4671d0;
        case 0x4671d4u: goto label_4671d4;
        case 0x4671d8u: goto label_4671d8;
        case 0x4671dcu: goto label_4671dc;
        case 0x4671e0u: goto label_4671e0;
        case 0x4671e4u: goto label_4671e4;
        case 0x4671e8u: goto label_4671e8;
        case 0x4671ecu: goto label_4671ec;
        case 0x4671f0u: goto label_4671f0;
        case 0x4671f4u: goto label_4671f4;
        case 0x4671f8u: goto label_4671f8;
        case 0x4671fcu: goto label_4671fc;
        case 0x467200u: goto label_467200;
        case 0x467204u: goto label_467204;
        case 0x467208u: goto label_467208;
        case 0x46720cu: goto label_46720c;
        case 0x467210u: goto label_467210;
        case 0x467214u: goto label_467214;
        case 0x467218u: goto label_467218;
        case 0x46721cu: goto label_46721c;
        case 0x467220u: goto label_467220;
        case 0x467224u: goto label_467224;
        case 0x467228u: goto label_467228;
        case 0x46722cu: goto label_46722c;
        case 0x467230u: goto label_467230;
        case 0x467234u: goto label_467234;
        case 0x467238u: goto label_467238;
        case 0x46723cu: goto label_46723c;
        case 0x467240u: goto label_467240;
        case 0x467244u: goto label_467244;
        case 0x467248u: goto label_467248;
        case 0x46724cu: goto label_46724c;
        case 0x467250u: goto label_467250;
        case 0x467254u: goto label_467254;
        case 0x467258u: goto label_467258;
        case 0x46725cu: goto label_46725c;
        case 0x467260u: goto label_467260;
        case 0x467264u: goto label_467264;
        case 0x467268u: goto label_467268;
        case 0x46726cu: goto label_46726c;
        case 0x467270u: goto label_467270;
        case 0x467274u: goto label_467274;
        case 0x467278u: goto label_467278;
        case 0x46727cu: goto label_46727c;
        case 0x467280u: goto label_467280;
        case 0x467284u: goto label_467284;
        case 0x467288u: goto label_467288;
        case 0x46728cu: goto label_46728c;
        case 0x467290u: goto label_467290;
        case 0x467294u: goto label_467294;
        case 0x467298u: goto label_467298;
        case 0x46729cu: goto label_46729c;
        case 0x4672a0u: goto label_4672a0;
        case 0x4672a4u: goto label_4672a4;
        case 0x4672a8u: goto label_4672a8;
        case 0x4672acu: goto label_4672ac;
        case 0x4672b0u: goto label_4672b0;
        case 0x4672b4u: goto label_4672b4;
        case 0x4672b8u: goto label_4672b8;
        case 0x4672bcu: goto label_4672bc;
        case 0x4672c0u: goto label_4672c0;
        case 0x4672c4u: goto label_4672c4;
        case 0x4672c8u: goto label_4672c8;
        case 0x4672ccu: goto label_4672cc;
        case 0x4672d0u: goto label_4672d0;
        case 0x4672d4u: goto label_4672d4;
        case 0x4672d8u: goto label_4672d8;
        case 0x4672dcu: goto label_4672dc;
        case 0x4672e0u: goto label_4672e0;
        case 0x4672e4u: goto label_4672e4;
        case 0x4672e8u: goto label_4672e8;
        case 0x4672ecu: goto label_4672ec;
        case 0x4672f0u: goto label_4672f0;
        case 0x4672f4u: goto label_4672f4;
        case 0x4672f8u: goto label_4672f8;
        case 0x4672fcu: goto label_4672fc;
        case 0x467300u: goto label_467300;
        case 0x467304u: goto label_467304;
        case 0x467308u: goto label_467308;
        case 0x46730cu: goto label_46730c;
        case 0x467310u: goto label_467310;
        case 0x467314u: goto label_467314;
        case 0x467318u: goto label_467318;
        case 0x46731cu: goto label_46731c;
        case 0x467320u: goto label_467320;
        case 0x467324u: goto label_467324;
        case 0x467328u: goto label_467328;
        case 0x46732cu: goto label_46732c;
        case 0x467330u: goto label_467330;
        case 0x467334u: goto label_467334;
        case 0x467338u: goto label_467338;
        case 0x46733cu: goto label_46733c;
        case 0x467340u: goto label_467340;
        case 0x467344u: goto label_467344;
        case 0x467348u: goto label_467348;
        case 0x46734cu: goto label_46734c;
        case 0x467350u: goto label_467350;
        case 0x467354u: goto label_467354;
        case 0x467358u: goto label_467358;
        case 0x46735cu: goto label_46735c;
        case 0x467360u: goto label_467360;
        case 0x467364u: goto label_467364;
        case 0x467368u: goto label_467368;
        case 0x46736cu: goto label_46736c;
        case 0x467370u: goto label_467370;
        case 0x467374u: goto label_467374;
        case 0x467378u: goto label_467378;
        case 0x46737cu: goto label_46737c;
        case 0x467380u: goto label_467380;
        case 0x467384u: goto label_467384;
        case 0x467388u: goto label_467388;
        case 0x46738cu: goto label_46738c;
        case 0x467390u: goto label_467390;
        case 0x467394u: goto label_467394;
        case 0x467398u: goto label_467398;
        case 0x46739cu: goto label_46739c;
        case 0x4673a0u: goto label_4673a0;
        case 0x4673a4u: goto label_4673a4;
        case 0x4673a8u: goto label_4673a8;
        case 0x4673acu: goto label_4673ac;
        case 0x4673b0u: goto label_4673b0;
        case 0x4673b4u: goto label_4673b4;
        case 0x4673b8u: goto label_4673b8;
        case 0x4673bcu: goto label_4673bc;
        case 0x4673c0u: goto label_4673c0;
        case 0x4673c4u: goto label_4673c4;
        case 0x4673c8u: goto label_4673c8;
        case 0x4673ccu: goto label_4673cc;
        case 0x4673d0u: goto label_4673d0;
        case 0x4673d4u: goto label_4673d4;
        case 0x4673d8u: goto label_4673d8;
        case 0x4673dcu: goto label_4673dc;
        case 0x4673e0u: goto label_4673e0;
        case 0x4673e4u: goto label_4673e4;
        case 0x4673e8u: goto label_4673e8;
        case 0x4673ecu: goto label_4673ec;
        case 0x4673f0u: goto label_4673f0;
        case 0x4673f4u: goto label_4673f4;
        case 0x4673f8u: goto label_4673f8;
        case 0x4673fcu: goto label_4673fc;
        case 0x467400u: goto label_467400;
        case 0x467404u: goto label_467404;
        case 0x467408u: goto label_467408;
        case 0x46740cu: goto label_46740c;
        case 0x467410u: goto label_467410;
        case 0x467414u: goto label_467414;
        case 0x467418u: goto label_467418;
        case 0x46741cu: goto label_46741c;
        default: break;
    }

    ctx->pc = 0x467170u;

label_467170:
    // 0x467170: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x467170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_467174:
    // 0x467174: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x467174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_467178:
    // 0x467178: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x467178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46717c:
    // 0x46717c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_467180:
    // 0x467180: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x467180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_467184:
    // 0x467184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_467188:
    // 0x467188: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x467188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
label_46718c:
    // 0x46718c: 0x8fb20180  lw          $s2, 0x180($sp)
    ctx->pc = 0x46718cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_467190:
    // 0x467190: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x467190u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_467194:
    // 0x467194: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x467194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_467198:
    // 0x467198: 0x2632024  and         $a0, $s3, $v1
    ctx->pc = 0x467198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_46719c:
    // 0x46719c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x46719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_4671a0:
    // 0x4671a0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_4671a4:
    if (ctx->pc == 0x4671A4u) {
        ctx->pc = 0x4671A8u;
        goto label_4671a8;
    }
    ctx->pc = 0x4671A0u;
    {
        const bool branch_taken_0x4671a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4671a0) {
            ctx->pc = 0x4671B4u;
            goto label_4671b4;
        }
    }
    ctx->pc = 0x4671A8u;
label_4671a8:
    // 0x4671a8: 0x131a3c  dsll32      $v1, $s3, 8
    ctx->pc = 0x4671a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 8));
label_4671ac:
    // 0x4671ac: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x4671acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_4671b0:
    // 0x4671b0: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x4671b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4671b4:
    // 0x4671b4: 0x8f83c03c  lw          $v1, -0x3FC4($gp)
    ctx->pc = 0x4671b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
label_4671b8:
    // 0x4671b8: 0x2438823  subu        $s1, $s2, $v1
    ctx->pc = 0x4671b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4671bc:
    // 0x4671bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4671bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4671c0:
    // 0x4671c0: 0x8f83c03c  lw          $v1, -0x3FC4($gp)
    ctx->pc = 0x4671c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
label_4671c4:
    // 0x4671c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4671c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4671c8:
    // 0x4671c8: 0x8f83c000  lw          $v1, -0x4000($gp)
    ctx->pc = 0x4671c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950912)));
label_4671cc:
    // 0x4671cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4671ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4671d0:
    // 0x4671d0: 0xaf83c000  sw          $v1, -0x4000($gp)
    ctx->pc = 0x4671d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 3));
label_4671d4:
    // 0x4671d4: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x4671d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_4671d8:
    // 0x4671d8: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_4671dc:
    if (ctx->pc == 0x4671DCu) {
        ctx->pc = 0x4671E0u;
        goto label_4671e0;
    }
    ctx->pc = 0x4671D8u;
    {
        const bool branch_taken_0x4671d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4671d8) {
            ctx->pc = 0x46727Cu;
            goto label_46727c;
        }
    }
    ctx->pc = 0x4671E0u;
label_4671e0:
    // 0x4671e0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4671e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4671e4:
    // 0x4671e4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4671e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4671e8:
    // 0x4671e8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x4671e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4671ec:
    // 0x4671ec: 0xc115ee8  jal         func_457BA0
label_4671f0:
    if (ctx->pc == 0x4671F0u) {
        ctx->pc = 0x4671F4u;
        goto label_4671f4;
    }
    ctx->pc = 0x4671ECu;
    SET_GPR_U32(ctx, 31, 0x4671F4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4671ECu, 0x4671F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4671F4u;
label_4671f4:
    // 0x4671f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_4671f8:
    if (ctx->pc == 0x4671F8u) {
        ctx->pc = 0x4671FCu;
        goto label_4671fc;
    }
    ctx->pc = 0x4671F4u;
    {
        const bool branch_taken_0x4671f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4671f4) {
            ctx->pc = 0x467274u;
            goto label_467274;
        }
    }
    ctx->pc = 0x4671FCu;
label_4671fc:
    // 0x4671fc: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x4671fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_467200:
    // 0x467200: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_467204:
    if (ctx->pc == 0x467204u) {
        ctx->pc = 0x467208u;
        goto label_467208;
    }
    ctx->pc = 0x467200u;
    {
        const bool branch_taken_0x467200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x467200) {
            ctx->pc = 0x467274u;
            goto label_467274;
        }
    }
    ctx->pc = 0x467208u;
label_467208:
    // 0x467208: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x467208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_46720c:
    // 0x46720c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x46720cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_467210:
    // 0x467210: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x467210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_467214:
    // 0x467214: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x467214u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_467218:
    // 0x467218: 0x24e7f680  addiu       $a3, $a3, -0x980
    ctx->pc = 0x467218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964864));
label_46721c:
    // 0x46721c: 0x240801d0  addiu       $t0, $zero, 0x1D0
    ctx->pc = 0x46721cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
label_467220:
    // 0x467220: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x467220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467224:
    // 0x467224: 0xc113940  jal         func_44E500
label_467228:
    if (ctx->pc == 0x467228u) {
        ctx->pc = 0x46722Cu;
        goto label_46722c;
    }
    ctx->pc = 0x467224u;
    SET_GPR_U32(ctx, 31, 0x46722Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x467224u, 0x46722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46722Cu;
label_46722c:
    // 0x46722c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x46722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_467230:
    // 0x467230: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x467230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_467234:
    // 0x467234: 0x24a5f6c0  addiu       $a1, $a1, -0x940
    ctx->pc = 0x467234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964928));
label_467238:
    // 0x467238: 0xc115c24  jal         func_457090
label_46723c:
    if (ctx->pc == 0x46723Cu) {
        ctx->pc = 0x467240u;
        goto label_467240;
    }
    ctx->pc = 0x467238u;
    SET_GPR_U32(ctx, 31, 0x467240u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x467238u, 0x467240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467240u;
label_467240:
    // 0x467240: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x467240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_467244:
    // 0x467244: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x467244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_467248:
    // 0x467248: 0x40f809  jalr        $v0
label_46724c:
    if (ctx->pc == 0x46724Cu) {
        ctx->pc = 0x467250u;
        goto label_467250;
    }
    ctx->pc = 0x467248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x467250u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467248u, 0x467250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x467250u;
label_467250:
    // 0x467250: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x467250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_467254:
    // 0x467254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_467258:
    if (ctx->pc == 0x467258u) {
        ctx->pc = 0x46725Cu;
        goto label_46725c;
    }
    ctx->pc = 0x467254u;
    {
        const bool branch_taken_0x467254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467254) {
            ctx->pc = 0x467264u;
            goto label_467264;
        }
    }
    ctx->pc = 0x46725Cu;
label_46725c:
    // 0x46725c: 0xd  break       0
    ctx->pc = 0x46725cu;
    runtime->handleBreak(rdram, ctx);
label_467260:
    // 0x467260: 0x0  nop
    ctx->pc = 0x467260u;
    // NOP
label_467264:
    // 0x467264: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x467264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_467268:
    // 0x467268: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x467268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46726c:
    // 0x46726c: 0xc11392c  jal         func_44E4B0
label_467270:
    if (ctx->pc == 0x467270u) {
        ctx->pc = 0x467274u;
        goto label_467274;
    }
    ctx->pc = 0x46726Cu;
    SET_GPR_U32(ctx, 31, 0x467274u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46726Cu, 0x467274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467274u;
label_467274:
    // 0x467274: 0x10000061  b           . + 4 + (0x61 << 2)
label_467278:
    if (ctx->pc == 0x467278u) {
        ctx->pc = 0x46727Cu;
        goto label_46727c;
    }
    ctx->pc = 0x467274u;
    {
        const bool branch_taken_0x467274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467274) {
            ctx->pc = 0x4673FCu;
            goto label_4673fc;
        }
    }
    ctx->pc = 0x46727Cu;
label_46727c:
    // 0x46727c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467280:
    // 0x467280: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x467280u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
label_467284:
    // 0x467284: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x467284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_467288:
    // 0x467288: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x467288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_46728c:
    // 0x46728c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x46728cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_467290:
    // 0x467290: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_467294:
    if (ctx->pc == 0x467294u) {
        ctx->pc = 0x467298u;
        goto label_467298;
    }
    ctx->pc = 0x467290u;
    {
        const bool branch_taken_0x467290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x467290) {
            ctx->pc = 0x467338u;
            goto label_467338;
        }
    }
    ctx->pc = 0x467298u;
label_467298:
    // 0x467298: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x467298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_46729c:
    // 0x46729c: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x46729cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_4672a0:
    // 0x4672a0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_4672a4:
    if (ctx->pc == 0x4672A4u) {
        ctx->pc = 0x4672A8u;
        goto label_4672a8;
    }
    ctx->pc = 0x4672A0u;
    {
        const bool branch_taken_0x4672a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4672a0) {
            ctx->pc = 0x467338u;
            goto label_467338;
        }
    }
    ctx->pc = 0x4672A8u;
label_4672a8:
    // 0x4672a8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x4672a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4672ac:
    // 0x4672ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4672acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4672b0:
    // 0x4672b0: 0x8f83c03c  lw          $v1, -0x3FC4($gp)
    ctx->pc = 0x4672b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
label_4672b4:
    // 0x4672b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4672b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4672b8:
    // 0x4672b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4672b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4672bc:
    // 0x4672bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4672bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4672c0:
    // 0x4672c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4672c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4672c4:
    // 0x4672c4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4672c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4672c8:
    // 0x4672c8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4672c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4672cc:
    // 0x4672cc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4672ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4672d0:
    // 0x4672d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4672d4:
    if (ctx->pc == 0x4672D4u) {
        ctx->pc = 0x4672D8u;
        goto label_4672d8;
    }
    ctx->pc = 0x4672D0u;
    {
        const bool branch_taken_0x4672d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4672d0) {
            ctx->pc = 0x4672E0u;
            goto label_4672e0;
        }
    }
    ctx->pc = 0x4672D8u;
label_4672d8:
    // 0x4672d8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4672d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4672dc:
    // 0x4672dc: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x4672dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_4672e0:
    // 0x4672e0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4672e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4672e4:
    // 0x4672e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4672e8:
    if (ctx->pc == 0x4672E8u) {
        ctx->pc = 0x4672ECu;
        goto label_4672ec;
    }
    ctx->pc = 0x4672E4u;
    {
        const bool branch_taken_0x4672e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4672e4) {
            ctx->pc = 0x4672F8u;
            goto label_4672f8;
        }
    }
    ctx->pc = 0x4672ECu;
label_4672ec:
    // 0x4672ec: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4672ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4672f0:
    // 0x4672f0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4672f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4672f4:
    // 0x4672f4: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x4672f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_4672f8:
    // 0x4672f8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4672f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4672fc:
    // 0x4672fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_467300:
    if (ctx->pc == 0x467300u) {
        ctx->pc = 0x467304u;
        goto label_467304;
    }
    ctx->pc = 0x4672FCu;
    {
        const bool branch_taken_0x4672fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4672fc) {
            ctx->pc = 0x467310u;
            goto label_467310;
        }
    }
    ctx->pc = 0x467304u;
label_467304:
    // 0x467304: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x467304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_467308:
    // 0x467308: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x467308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46730c:
    // 0x46730c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x46730cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_467310:
    // 0x467310: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x467310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_467314:
    // 0x467314: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
label_467318:
    if (ctx->pc == 0x467318u) {
        ctx->pc = 0x46731Cu;
        goto label_46731c;
    }
    ctx->pc = 0x467314u;
    {
        const bool branch_taken_0x467314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x467314) {
            ctx->pc = 0x467324u;
            goto label_467324;
        }
    }
    ctx->pc = 0x46731Cu;
label_46731c:
    // 0x46731c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x46731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_467320:
    // 0x467320: 0xaf83c038  sw          $v1, -0x3FC8($gp)
    ctx->pc = 0x467320u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950968), GPR_U32(ctx, 3));
label_467324:
    // 0x467324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x467324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467328:
    // 0x467328: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x467328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_46732c:
    // 0x46732c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x46732cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_467330:
    // 0x467330: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x467330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_467334:
    // 0x467334: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x467334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_467338:
    // 0x467338: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x467338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_46733c:
    // 0x46733c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_467340:
    if (ctx->pc == 0x467340u) {
        ctx->pc = 0x467344u;
        goto label_467344;
    }
    ctx->pc = 0x46733Cu;
    {
        const bool branch_taken_0x46733c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46733c) {
            ctx->pc = 0x4673DCu;
            goto label_4673dc;
        }
    }
    ctx->pc = 0x467344u;
label_467344:
    // 0x467344: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x467344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_467348:
    // 0x467348: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x467348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_46734c:
    // 0x46734c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_467350:
    if (ctx->pc == 0x467350u) {
        ctx->pc = 0x467354u;
        goto label_467354;
    }
    ctx->pc = 0x46734Cu;
    {
        const bool branch_taken_0x46734c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46734c) {
            ctx->pc = 0x4673DCu;
            goto label_4673dc;
        }
    }
    ctx->pc = 0x467354u;
label_467354:
    // 0x467354: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x467354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_467358:
    // 0x467358: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x467358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46735c:
    // 0x46735c: 0x8f83c03c  lw          $v1, -0x3FC4($gp)
    ctx->pc = 0x46735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
label_467360:
    // 0x467360: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x467360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_467364:
    // 0x467364: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x467364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_467368:
    // 0x467368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x467368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46736c:
    // 0x46736c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x46736cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_467370:
    // 0x467370: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x467370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_467374:
    // 0x467374: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x467374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_467378:
    // 0x467378: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x467378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_46737c:
    // 0x46737c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_467380:
    if (ctx->pc == 0x467380u) {
        ctx->pc = 0x467384u;
        goto label_467384;
    }
    ctx->pc = 0x46737Cu;
    {
        const bool branch_taken_0x46737c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46737c) {
            ctx->pc = 0x46738Cu;
            goto label_46738c;
        }
    }
    ctx->pc = 0x467384u;
label_467384:
    // 0x467384: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x467384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_467388:
    // 0x467388: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x467388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
label_46738c:
    // 0x46738c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x46738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_467390:
    // 0x467390: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_467394:
    if (ctx->pc == 0x467394u) {
        ctx->pc = 0x467398u;
        goto label_467398;
    }
    ctx->pc = 0x467390u;
    {
        const bool branch_taken_0x467390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x467390) {
            ctx->pc = 0x4673A4u;
            goto label_4673a4;
        }
    }
    ctx->pc = 0x467398u;
label_467398:
    // 0x467398: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x467398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46739c:
    // 0x46739c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x46739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4673a0:
    // 0x4673a0: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x4673a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_4673a4:
    // 0x4673a4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4673a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4673a8:
    // 0x4673a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4673ac:
    if (ctx->pc == 0x4673ACu) {
        ctx->pc = 0x4673B0u;
        goto label_4673b0;
    }
    ctx->pc = 0x4673A8u;
    {
        const bool branch_taken_0x4673a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4673a8) {
            ctx->pc = 0x4673BCu;
            goto label_4673bc;
        }
    }
    ctx->pc = 0x4673B0u;
label_4673b0:
    // 0x4673b0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4673b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4673b4:
    // 0x4673b4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4673b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4673b8:
    // 0x4673b8: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x4673b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_4673bc:
    // 0x4673bc: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x4673bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_4673c0:
    // 0x4673c0: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
label_4673c4:
    if (ctx->pc == 0x4673C4u) {
        ctx->pc = 0x4673C8u;
        goto label_4673c8;
    }
    ctx->pc = 0x4673C0u;
    {
        const bool branch_taken_0x4673c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x4673c0) {
            ctx->pc = 0x4673D0u;
            goto label_4673d0;
        }
    }
    ctx->pc = 0x4673C8u;
label_4673c8:
    // 0x4673c8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4673c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4673cc:
    // 0x4673cc: 0xaf83c038  sw          $v1, -0x3FC8($gp)
    ctx->pc = 0x4673ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950968), GPR_U32(ctx, 3));
label_4673d0:
    // 0x4673d0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x4673d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_4673d4:
    // 0x4673d4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4673d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_4673d8:
    // 0x4673d8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4673d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_4673dc:
    // 0x4673dc: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x4673dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_4673e0:
    // 0x4673e0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x4673e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_4673e4:
    // 0x4673e4: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x4673e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_4673e8:
    // 0x4673e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4673ec:
    if (ctx->pc == 0x4673ECu) {
        ctx->pc = 0x4673F0u;
        goto label_4673f0;
    }
    ctx->pc = 0x4673E8u;
    {
        const bool branch_taken_0x4673e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4673e8) {
            ctx->pc = 0x4673F8u;
            goto label_4673f8;
        }
    }
    ctx->pc = 0x4673F0u;
label_4673f0:
    // 0x4673f0: 0x8f83c038  lw          $v1, -0x3FC8($gp)
    ctx->pc = 0x4673f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_4673f4:
    // 0x4673f4: 0xac710014  sw          $s1, 0x14($v1)
    ctx->pc = 0x4673f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 17));
label_4673f8:
    // 0x4673f8: 0xaf91c038  sw          $s1, -0x3FC8($gp)
    ctx->pc = 0x4673f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950968), GPR_U32(ctx, 17));
label_4673fc:
    // 0x4673fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4673fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_467400:
    // 0x467400: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x467400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_467404:
    // 0x467404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x467404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_467408:
    // 0x467408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x467408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46740c:
    // 0x46740c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46740cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467410:
    // 0x467410: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x467410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_467414:
    // 0x467414: 0x3e00008  jr          $ra
label_467418:
    if (ctx->pc == 0x467418u) {
        ctx->pc = 0x46741Cu;
        goto label_46741c;
    }
    ctx->pc = 0x467414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46741Cu;
label_46741c:
    // 0x46741c: 0x0  nop
    ctx->pc = 0x46741cu;
    // NOP
    ctx->pc = 0x467420u;
}
