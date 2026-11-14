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

// Function: sub_00411288
// Address: 0x411288 - 0x4115f8
void sub_00411288_0x411288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411288_0x411288");
#endif

    switch (ctx->pc) {
        case 0x411288u: goto label_411288;
        case 0x41128cu: goto label_41128c;
        case 0x411290u: goto label_411290;
        case 0x411294u: goto label_411294;
        case 0x411298u: goto label_411298;
        case 0x41129cu: goto label_41129c;
        case 0x4112a0u: goto label_4112a0;
        case 0x4112a4u: goto label_4112a4;
        case 0x4112a8u: goto label_4112a8;
        case 0x4112acu: goto label_4112ac;
        case 0x4112b0u: goto label_4112b0;
        case 0x4112b4u: goto label_4112b4;
        case 0x4112b8u: goto label_4112b8;
        case 0x4112bcu: goto label_4112bc;
        case 0x4112c0u: goto label_4112c0;
        case 0x4112c4u: goto label_4112c4;
        case 0x4112c8u: goto label_4112c8;
        case 0x4112ccu: goto label_4112cc;
        case 0x4112d0u: goto label_4112d0;
        case 0x4112d4u: goto label_4112d4;
        case 0x4112d8u: goto label_4112d8;
        case 0x4112dcu: goto label_4112dc;
        case 0x4112e0u: goto label_4112e0;
        case 0x4112e4u: goto label_4112e4;
        case 0x4112e8u: goto label_4112e8;
        case 0x4112ecu: goto label_4112ec;
        case 0x4112f0u: goto label_4112f0;
        case 0x4112f4u: goto label_4112f4;
        case 0x4112f8u: goto label_4112f8;
        case 0x4112fcu: goto label_4112fc;
        case 0x411300u: goto label_411300;
        case 0x411304u: goto label_411304;
        case 0x411308u: goto label_411308;
        case 0x41130cu: goto label_41130c;
        case 0x411310u: goto label_411310;
        case 0x411314u: goto label_411314;
        case 0x411318u: goto label_411318;
        case 0x41131cu: goto label_41131c;
        case 0x411320u: goto label_411320;
        case 0x411324u: goto label_411324;
        case 0x411328u: goto label_411328;
        case 0x41132cu: goto label_41132c;
        case 0x411330u: goto label_411330;
        case 0x411334u: goto label_411334;
        case 0x411338u: goto label_411338;
        case 0x41133cu: goto label_41133c;
        case 0x411340u: goto label_411340;
        case 0x411344u: goto label_411344;
        case 0x411348u: goto label_411348;
        case 0x41134cu: goto label_41134c;
        case 0x411350u: goto label_411350;
        case 0x411354u: goto label_411354;
        case 0x411358u: goto label_411358;
        case 0x41135cu: goto label_41135c;
        case 0x411360u: goto label_411360;
        case 0x411364u: goto label_411364;
        case 0x411368u: goto label_411368;
        case 0x41136cu: goto label_41136c;
        case 0x411370u: goto label_411370;
        case 0x411374u: goto label_411374;
        case 0x411378u: goto label_411378;
        case 0x41137cu: goto label_41137c;
        case 0x411380u: goto label_411380;
        case 0x411384u: goto label_411384;
        case 0x411388u: goto label_411388;
        case 0x41138cu: goto label_41138c;
        case 0x411390u: goto label_411390;
        case 0x411394u: goto label_411394;
        case 0x411398u: goto label_411398;
        case 0x41139cu: goto label_41139c;
        case 0x4113a0u: goto label_4113a0;
        case 0x4113a4u: goto label_4113a4;
        case 0x4113a8u: goto label_4113a8;
        case 0x4113acu: goto label_4113ac;
        case 0x4113b0u: goto label_4113b0;
        case 0x4113b4u: goto label_4113b4;
        case 0x4113b8u: goto label_4113b8;
        case 0x4113bcu: goto label_4113bc;
        case 0x4113c0u: goto label_4113c0;
        case 0x4113c4u: goto label_4113c4;
        case 0x4113c8u: goto label_4113c8;
        case 0x4113ccu: goto label_4113cc;
        case 0x4113d0u: goto label_4113d0;
        case 0x4113d4u: goto label_4113d4;
        case 0x4113d8u: goto label_4113d8;
        case 0x4113dcu: goto label_4113dc;
        case 0x4113e0u: goto label_4113e0;
        case 0x4113e4u: goto label_4113e4;
        case 0x4113e8u: goto label_4113e8;
        case 0x4113ecu: goto label_4113ec;
        case 0x4113f0u: goto label_4113f0;
        case 0x4113f4u: goto label_4113f4;
        case 0x4113f8u: goto label_4113f8;
        case 0x4113fcu: goto label_4113fc;
        case 0x411400u: goto label_411400;
        case 0x411404u: goto label_411404;
        case 0x411408u: goto label_411408;
        case 0x41140cu: goto label_41140c;
        case 0x411410u: goto label_411410;
        case 0x411414u: goto label_411414;
        case 0x411418u: goto label_411418;
        case 0x41141cu: goto label_41141c;
        case 0x411420u: goto label_411420;
        case 0x411424u: goto label_411424;
        case 0x411428u: goto label_411428;
        case 0x41142cu: goto label_41142c;
        case 0x411430u: goto label_411430;
        case 0x411434u: goto label_411434;
        case 0x411438u: goto label_411438;
        case 0x41143cu: goto label_41143c;
        case 0x411440u: goto label_411440;
        case 0x411444u: goto label_411444;
        case 0x411448u: goto label_411448;
        case 0x41144cu: goto label_41144c;
        case 0x411450u: goto label_411450;
        case 0x411454u: goto label_411454;
        case 0x411458u: goto label_411458;
        case 0x41145cu: goto label_41145c;
        case 0x411460u: goto label_411460;
        case 0x411464u: goto label_411464;
        case 0x411468u: goto label_411468;
        case 0x41146cu: goto label_41146c;
        case 0x411470u: goto label_411470;
        case 0x411474u: goto label_411474;
        case 0x411478u: goto label_411478;
        case 0x41147cu: goto label_41147c;
        case 0x411480u: goto label_411480;
        case 0x411484u: goto label_411484;
        case 0x411488u: goto label_411488;
        case 0x41148cu: goto label_41148c;
        case 0x411490u: goto label_411490;
        case 0x411494u: goto label_411494;
        case 0x411498u: goto label_411498;
        case 0x41149cu: goto label_41149c;
        case 0x4114a0u: goto label_4114a0;
        case 0x4114a4u: goto label_4114a4;
        case 0x4114a8u: goto label_4114a8;
        case 0x4114acu: goto label_4114ac;
        case 0x4114b0u: goto label_4114b0;
        case 0x4114b4u: goto label_4114b4;
        case 0x4114b8u: goto label_4114b8;
        case 0x4114bcu: goto label_4114bc;
        case 0x4114c0u: goto label_4114c0;
        case 0x4114c4u: goto label_4114c4;
        case 0x4114c8u: goto label_4114c8;
        case 0x4114ccu: goto label_4114cc;
        case 0x4114d0u: goto label_4114d0;
        case 0x4114d4u: goto label_4114d4;
        case 0x4114d8u: goto label_4114d8;
        case 0x4114dcu: goto label_4114dc;
        case 0x4114e0u: goto label_4114e0;
        case 0x4114e4u: goto label_4114e4;
        case 0x4114e8u: goto label_4114e8;
        case 0x4114ecu: goto label_4114ec;
        case 0x4114f0u: goto label_4114f0;
        case 0x4114f4u: goto label_4114f4;
        case 0x4114f8u: goto label_4114f8;
        case 0x4114fcu: goto label_4114fc;
        case 0x411500u: goto label_411500;
        case 0x411504u: goto label_411504;
        case 0x411508u: goto label_411508;
        case 0x41150cu: goto label_41150c;
        case 0x411510u: goto label_411510;
        case 0x411514u: goto label_411514;
        case 0x411518u: goto label_411518;
        case 0x41151cu: goto label_41151c;
        case 0x411520u: goto label_411520;
        case 0x411524u: goto label_411524;
        case 0x411528u: goto label_411528;
        case 0x41152cu: goto label_41152c;
        case 0x411530u: goto label_411530;
        case 0x411534u: goto label_411534;
        case 0x411538u: goto label_411538;
        case 0x41153cu: goto label_41153c;
        case 0x411540u: goto label_411540;
        case 0x411544u: goto label_411544;
        case 0x411548u: goto label_411548;
        case 0x41154cu: goto label_41154c;
        case 0x411550u: goto label_411550;
        case 0x411554u: goto label_411554;
        case 0x411558u: goto label_411558;
        case 0x41155cu: goto label_41155c;
        case 0x411560u: goto label_411560;
        case 0x411564u: goto label_411564;
        case 0x411568u: goto label_411568;
        case 0x41156cu: goto label_41156c;
        case 0x411570u: goto label_411570;
        case 0x411574u: goto label_411574;
        case 0x411578u: goto label_411578;
        case 0x41157cu: goto label_41157c;
        case 0x411580u: goto label_411580;
        case 0x411584u: goto label_411584;
        case 0x411588u: goto label_411588;
        case 0x41158cu: goto label_41158c;
        case 0x411590u: goto label_411590;
        case 0x411594u: goto label_411594;
        case 0x411598u: goto label_411598;
        case 0x41159cu: goto label_41159c;
        case 0x4115a0u: goto label_4115a0;
        case 0x4115a4u: goto label_4115a4;
        case 0x4115a8u: goto label_4115a8;
        case 0x4115acu: goto label_4115ac;
        case 0x4115b0u: goto label_4115b0;
        case 0x4115b4u: goto label_4115b4;
        case 0x4115b8u: goto label_4115b8;
        case 0x4115bcu: goto label_4115bc;
        case 0x4115c0u: goto label_4115c0;
        case 0x4115c4u: goto label_4115c4;
        case 0x4115c8u: goto label_4115c8;
        case 0x4115ccu: goto label_4115cc;
        case 0x4115d0u: goto label_4115d0;
        case 0x4115d4u: goto label_4115d4;
        case 0x4115d8u: goto label_4115d8;
        case 0x4115dcu: goto label_4115dc;
        case 0x4115e0u: goto label_4115e0;
        case 0x4115e4u: goto label_4115e4;
        case 0x4115e8u: goto label_4115e8;
        case 0x4115ecu: goto label_4115ec;
        case 0x4115f0u: goto label_4115f0;
        case 0x4115f4u: goto label_4115f4;
        default: break;
    }

    ctx->pc = 0x411288u;

label_411288:
    // 0x411288: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x411288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_41128c:
    // 0x41128c: 0x8f82ad28  lw          $v0, -0x52D8($gp)
    ctx->pc = 0x41128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946088)));
label_411290:
    // 0x411290: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x411290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_411294:
    // 0x411294: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x411294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_411298:
    // 0x411298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x411298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41129c:
    // 0x41129c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x41129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4112a0:
    // 0x4112a0: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x4112a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4112a4:
    // 0x4112a4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4112a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4112a8:
    // 0x4112a8: 0xe2880b  movn        $s1, $a3, $v0
    ctx->pc = 0x4112a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_4112ac:
    // 0x4112ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4112acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4112b0:
    // 0x4112b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4112b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4112b4:
    // 0x4112b4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4112b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4112b8:
    // 0x4112b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4112b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4112bc:
    // 0x4112bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4112bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4112c0:
    // 0x4112c0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4112c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4112c4:
    // 0x4112c4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4112c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4112c8:
    // 0x4112c8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x4112c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4112cc:
    // 0x4112cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4112ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4112d0:
    // 0x4112d0: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
label_4112d4:
    if (ctx->pc == 0x4112D4u) {
        ctx->pc = 0x4112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112D0u;
        // 0x4112d4: 0xc6b00b  movn        $s6, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4112D8u;
        goto label_4112d8;
    }
    ctx->pc = 0x4112D0u;
    {
        const bool branch_taken_0x4112d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112D0u;
        // 0x4112d4: 0xc6b00b  movn        $s6, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4112d0) {
            ctx->pc = 0x411334u;
            goto label_411334;
        }
    }
    ctx->pc = 0x4112D8u;
label_4112d8:
    // 0x4112d8: 0x8f84ad30  lw          $a0, -0x52D0($gp)
    ctx->pc = 0x4112d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946096)));
label_4112dc:
    // 0x4112dc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4112e0:
    if (ctx->pc == 0x4112E0u) {
        ctx->pc = 0x4112E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112DCu;
        // 0x4112e0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4112E4u;
        goto label_4112e4;
    }
    ctx->pc = 0x4112DCu;
    {
        const bool branch_taken_0x4112dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4112E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112DCu;
        // 0x4112e0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4112dc) {
            ctx->pc = 0x4112F4u;
            goto label_4112f4;
        }
    }
    ctx->pc = 0x4112E4u;
label_4112e4:
    // 0x4112e4: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x4112e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_4112e8:
    // 0x4112e8: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x4112e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_4112ec:
    // 0x4112ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_4112f0:
    if (ctx->pc == 0x4112F0u) {
        ctx->pc = 0x4112F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112ECu;
        // 0x4112f0: 0x2a52824  and         $a1, $s5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4112F4u;
        goto label_4112f4;
    }
    ctx->pc = 0x4112ECu;
    {
        const bool branch_taken_0x4112ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4112F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112ECu;
        // 0x4112f0: 0x2a52824  and         $a1, $s5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4112ec) {
            ctx->pc = 0x411308u;
            goto label_411308;
        }
    }
    ctx->pc = 0x4112F4u;
label_4112f4:
    // 0x4112f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4112f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4112f8:
    // 0x4112f8: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x4112f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_4112fc:
    // 0x4112fc: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x4112fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_411300:
    // 0x411300: 0x2a52824  and         $a1, $s5, $a1
    ctx->pc = 0x411300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
label_411304:
    // 0x411304: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x411304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_411308:
    // 0x411308: 0x40f809  jalr        $v0
label_41130c:
    if (ctx->pc == 0x41130Cu) {
        ctx->pc = 0x411310u;
        goto label_411310;
    }
    ctx->pc = 0x411308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411310u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411308u, 0x411310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411310u;
label_411310:
    // 0x411310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x411310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411314:
    // 0x411314: 0x120000ac  beqz        $s0, . + 4 + (0xAC << 2)
label_411318:
    if (ctx->pc == 0x411318u) {
        ctx->pc = 0x411318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411314u;
        // 0x411318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41131Cu;
        goto label_41131c;
    }
    ctx->pc = 0x411314u;
    {
        const bool branch_taken_0x411314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x411318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411314u;
        // 0x411318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411314) {
            ctx->pc = 0x4115C8u;
            goto label_4115c8;
        }
    }
    ctx->pc = 0x41131Cu;
label_41131c:
    // 0x41131c: 0x10000006  b           . + 4 + (0x6 << 2)
label_411320:
    if (ctx->pc == 0x411320u) {
        ctx->pc = 0x411320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41131Cu;
        // 0x411320: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411324u;
        goto label_411324;
    }
    ctx->pc = 0x41131Cu;
    {
        const bool branch_taken_0x41131c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41131Cu;
        // 0x411320: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41131c) {
            ctx->pc = 0x411338u;
            goto label_411338;
        }
    }
    ctx->pc = 0x411324u;
label_411324:
    // 0x411324: 0xc104472  jal         func_4111C8
label_411328:
    if (ctx->pc == 0x411328u) {
        ctx->pc = 0x411328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411324u;
        // 0x411328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41132Cu;
        goto label_41132c;
    }
    ctx->pc = 0x411324u;
    SET_GPR_U32(ctx, 31, 0x41132Cu);
    ctx->pc = 0x411328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411324u;
    // 0x411328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4111C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4111C8u, 0x411324u, 0x41132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41132Cu;
label_41132c:
    // 0x41132c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_411330:
    if (ctx->pc == 0x411330u) {
        ctx->pc = 0x411330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41132Cu;
        // 0x411330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411334u;
        goto label_411334;
    }
    ctx->pc = 0x41132Cu;
    {
        const bool branch_taken_0x41132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41132Cu;
        // 0x411330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41132c) {
            ctx->pc = 0x4115C8u;
            goto label_4115c8;
        }
    }
    ctx->pc = 0x411334u;
label_411334:
    // 0x411334: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x411334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_411338:
    // 0x411338: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x411338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_41133c:
    // 0x41133c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x41133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_411340:
    // 0x411340: 0x162023  negu        $a0, $s6
    ctx->pc = 0x411340u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
label_411344:
    // 0x411344: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x411344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_411348:
    // 0x411348: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x411348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_41134c:
    // 0x41134c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x41134cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_411350:
    // 0x411350: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x411350u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_411354:
    // 0x411354: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x411354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_411358:
    // 0x411358: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x411358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_41135c:
    // 0x41135c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x41135cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411360:
    // 0x411360: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x411360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_411364:
    // 0x411364: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x411364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
label_411368:
    // 0x411368: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x411368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_41136c:
    // 0x41136c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x41136cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_411370:
    // 0x411370: 0x1220008c  beqz        $s1, . + 4 + (0x8C << 2)
label_411374:
    if (ctx->pc == 0x411374u) {
        ctx->pc = 0x411374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411370u;
        // 0x411374: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411378u;
        goto label_411378;
    }
    ctx->pc = 0x411370u;
    {
        const bool branch_taken_0x411370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x411374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411370u;
        // 0x411374: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411370) {
            ctx->pc = 0x4115A4u;
            goto label_4115a4;
        }
    }
    ctx->pc = 0x411378u;
label_411378:
    // 0x411378: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x411378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_41137c:
    // 0x41137c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_411380:
    // 0x411380: 0x111823  negu        $v1, $s1
    ctx->pc = 0x411380u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_411384:
    // 0x411384: 0x2457e880  addiu       $s7, $v0, -0x1780
    ctx->pc = 0x411384u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_411388:
    // 0x411388: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x411388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_41138c:
    // 0x41138c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x41138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_411390:
    // 0x411390: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x411390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_411394:
    // 0x411394: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_411398:
    if (ctx->pc == 0x411398u) {
        ctx->pc = 0x411398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411394u;
        // 0x411398: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41139Cu;
        goto label_41139c;
    }
    ctx->pc = 0x411394u;
    {
        const bool branch_taken_0x411394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x411398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411394u;
        // 0x411398: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411394) {
            ctx->pc = 0x411478u;
            goto label_411478;
        }
    }
    ctx->pc = 0x41139Cu;
label_41139c:
    // 0x41139c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41139cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4113a0:
    // 0x4113a0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4113a4:
    if (ctx->pc == 0x4113A4u) {
        ctx->pc = 0x4113A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113A0u;
        // 0x4113a4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113A8u;
        goto label_4113a8;
    }
    ctx->pc = 0x4113A0u;
    {
        const bool branch_taken_0x4113a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4113A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113A0u;
        // 0x4113a4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4113a0) {
            ctx->pc = 0x411444u;
            goto label_411444;
        }
    }
    ctx->pc = 0x4113A8u;
label_4113a8:
    // 0x4113a8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_4113ac:
    if (ctx->pc == 0x4113ACu) {
        ctx->pc = 0x4113ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113A8u;
        // 0x4113ac: 0x2664ffff  addiu       $a0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113B0u;
        goto label_4113b0;
    }
    ctx->pc = 0x4113A8u;
    {
        const bool branch_taken_0x4113a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4113ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113A8u;
        // 0x4113ac: 0x2664ffff  addiu       $a0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4113a8) {
            ctx->pc = 0x4113F8u;
            goto label_4113f8;
        }
    }
    ctx->pc = 0x4113B0u;
label_4113b0:
    // 0x4113b0: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x4113b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_4113b4:
    // 0x4113b4: 0x40f809  jalr        $v0
label_4113b8:
    if (ctx->pc == 0x4113B8u) {
        ctx->pc = 0x4113B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113B4u;
        // 0x4113b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113BCu;
        goto label_4113bc;
    }
    ctx->pc = 0x4113B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4113BCu);
        ctx->pc = 0x4113B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113B4u;
        // 0x4113b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4113B4u, 0x4113BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4113BCu;
label_4113bc:
    // 0x4113bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4113bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4113c0:
    // 0x4113c0: 0x10e0ffd8  beqz        $a3, . + 4 + (-0x28 << 2)
label_4113c4:
    if (ctx->pc == 0x4113C4u) {
        ctx->pc = 0x4113C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113C0u;
        // 0x4113c4: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113C8u;
        goto label_4113c8;
    }
    ctx->pc = 0x4113C0u;
    {
        const bool branch_taken_0x4113c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4113C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113C0u;
        // 0x4113c4: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4113c0) {
            ctx->pc = 0x411324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411324;
        }
    }
    ctx->pc = 0x4113C8u;
label_4113c8:
    // 0x4113c8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x4113c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_4113cc:
    // 0x4113cc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4113ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4113d0:
    // 0x4113d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4113d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4113d4:
    // 0x4113d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4113d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4113d8:
    // 0x4113d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4113d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4113dc:
    // 0x4113dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4113dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4113e0:
    // 0x4113e0: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x4113e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_4113e4:
    // 0x4113e4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4113e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4113e8:
    // 0x4113e8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4113e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4113ec:
    // 0x4113ec: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x4113ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_4113f0:
    // 0x4113f0: 0xc0bb7e6  jal         func_2EDF98
label_4113f4:
    if (ctx->pc == 0x4113F4u) {
        ctx->pc = 0x4113F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113F0u;
        // 0x4113f4: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113F8u;
        goto label_4113f8;
    }
    ctx->pc = 0x4113F0u;
    SET_GPR_U32(ctx, 31, 0x4113F8u);
    ctx->pc = 0x4113F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4113F0u;
    // 0x4113f4: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4113F0u, 0x4113F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4113F8u;
label_4113f8:
    // 0x4113f8: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x4113f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_4113fc:
    // 0x4113fc: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x4113fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_411400:
    // 0x411400: 0x40f809  jalr        $v0
label_411404:
    if (ctx->pc == 0x411404u) {
        ctx->pc = 0x411404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411400u;
        // 0x411404: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411408u;
        goto label_411408;
    }
    ctx->pc = 0x411400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411408u);
        ctx->pc = 0x411404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411400u;
        // 0x411404: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411400u, 0x411408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411408u;
label_411408:
    // 0x411408: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x411408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41140c:
    // 0x41140c: 0x10e0ffc5  beqz        $a3, . + 4 + (-0x3B << 2)
label_411410:
    if (ctx->pc == 0x411410u) {
        ctx->pc = 0x411410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41140Cu;
        // 0x411410: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411414u;
        goto label_411414;
    }
    ctx->pc = 0x41140Cu;
    {
        const bool branch_taken_0x41140c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x411410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41140Cu;
        // 0x411410: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41140c) {
            ctx->pc = 0x411324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411324;
        }
    }
    ctx->pc = 0x411414u;
label_411414:
    // 0x411414: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x411414u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_411418:
    // 0x411418: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x411418u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_41141c:
    // 0x41141c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41141cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411420:
    // 0x411420: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x411420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_411424:
    // 0x411424: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x411424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_411428:
    // 0x411428: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x411428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41142c:
    // 0x41142c: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x41142cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_411430:
    // 0x411430: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x411430u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_411434:
    // 0x411434: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x411434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_411438:
    // 0x411438: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x411438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_41143c:
    // 0x41143c: 0xc0bb7e6  jal         func_2EDF98
label_411440:
    if (ctx->pc == 0x411440u) {
        ctx->pc = 0x411440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41143Cu;
        // 0x411440: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411444u;
        goto label_411444;
    }
    ctx->pc = 0x41143Cu;
    SET_GPR_U32(ctx, 31, 0x411444u);
    ctx->pc = 0x411440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41143Cu;
    // 0x411440: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x41143Cu, 0x411444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411444u;
label_411444:
    // 0x411444: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x411444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_411448:
    // 0x411448: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x411448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_41144c:
    // 0x41144c: 0x40f809  jalr        $v0
label_411450:
    if (ctx->pc == 0x411450u) {
        ctx->pc = 0x411450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41144Cu;
        // 0x411450: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411454u;
        goto label_411454;
    }
    ctx->pc = 0x41144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411454u);
        ctx->pc = 0x411450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41144Cu;
        // 0x411450: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41144Cu, 0x411454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411454u;
label_411454:
    // 0x411454: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x411454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411458:
    // 0x411458: 0x10e0ffb2  beqz        $a3, . + 4 + (-0x4E << 2)
label_41145c:
    if (ctx->pc == 0x41145Cu) {
        ctx->pc = 0x41145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411458u;
        // 0x41145c: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411460u;
        goto label_411460;
    }
    ctx->pc = 0x411458u;
    {
        const bool branch_taken_0x411458 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x41145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411458u;
        // 0x41145c: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411458) {
            ctx->pc = 0x411324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411324;
        }
    }
    ctx->pc = 0x411460u;
label_411460:
    // 0x411460: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x411460u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_411464:
    // 0x411464: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x411464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_411468:
    // 0x411468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x411468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41146c:
    // 0x41146c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x41146cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_411470:
    // 0x411470: 0x10000043  b           . + 4 + (0x43 << 2)
label_411474:
    if (ctx->pc == 0x411474u) {
        ctx->pc = 0x411474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411470u;
        // 0x411474: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411478u;
        goto label_411478;
    }
    ctx->pc = 0x411470u;
    {
        const bool branch_taken_0x411470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411470u;
        // 0x411474: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411470) {
            ctx->pc = 0x411580u;
            goto label_411580;
        }
    }
    ctx->pc = 0x411478u;
label_411478:
    // 0x411478: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x411478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_41147c:
    // 0x41147c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x41147cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_411480:
    // 0x411480: 0x40f809  jalr        $v0
label_411484:
    if (ctx->pc == 0x411484u) {
        ctx->pc = 0x411484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411480u;
        // 0x411484: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411488u;
        goto label_411488;
    }
    ctx->pc = 0x411480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411488u);
        ctx->pc = 0x411484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411480u;
        // 0x411484: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411480u, 0x411488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411488u;
label_411488:
    // 0x411488: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x411488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41148c:
    // 0x41148c: 0x10e0ffa5  beqz        $a3, . + 4 + (-0x5B << 2)
label_411490:
    if (ctx->pc == 0x411490u) {
        ctx->pc = 0x411490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41148Cu;
        // 0x411490: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411494u;
        goto label_411494;
    }
    ctx->pc = 0x41148Cu;
    {
        const bool branch_taken_0x41148c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x411490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41148Cu;
        // 0x411490: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41148c) {
            ctx->pc = 0x411324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411324;
        }
    }
    ctx->pc = 0x411494u;
label_411494:
    // 0x411494: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x411494u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_411498:
    // 0x411498: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x411498u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_41149c:
    // 0x41149c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41149cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4114a0:
    // 0x4114a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4114a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4114a4:
    // 0x4114a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4114a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4114a8:
    // 0x4114a8: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x4114a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_4114ac:
    // 0x4114ac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4114acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4114b0:
    // 0x4114b0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4114b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4114b4:
    // 0x4114b4: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x4114b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_4114b8:
    // 0x4114b8: 0xc0bb7e6  jal         func_2EDF98
label_4114bc:
    if (ctx->pc == 0x4114BCu) {
        ctx->pc = 0x4114BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4114B8u;
        // 0x4114bc: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4114C0u;
        goto label_4114c0;
    }
    ctx->pc = 0x4114B8u;
    SET_GPR_U32(ctx, 31, 0x4114C0u);
    ctx->pc = 0x4114BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4114B8u;
    // 0x4114bc: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4114B8u, 0x4114C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4114C0u;
label_4114c0:
    // 0x4114c0: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x4114c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_4114c4:
    // 0x4114c4: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x4114c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4114c8:
    // 0x4114c8: 0x40f809  jalr        $v0
label_4114cc:
    if (ctx->pc == 0x4114CCu) {
        ctx->pc = 0x4114CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4114C8u;
        // 0x4114cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4114D0u;
        goto label_4114d0;
    }
    ctx->pc = 0x4114C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4114D0u);
        ctx->pc = 0x4114CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4114C8u;
        // 0x4114cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4114C8u, 0x4114D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4114D0u;
label_4114d0:
    // 0x4114d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4114d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4114d4:
    // 0x4114d4: 0x10e0ff93  beqz        $a3, . + 4 + (-0x6D << 2)
label_4114d8:
    if (ctx->pc == 0x4114D8u) {
        ctx->pc = 0x4114D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4114D4u;
        // 0x4114d8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4114DCu;
        goto label_4114dc;
    }
    ctx->pc = 0x4114D4u;
    {
        const bool branch_taken_0x4114d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4114D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4114D4u;
        // 0x4114d8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4114d4) {
            ctx->pc = 0x411324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411324;
        }
    }
    ctx->pc = 0x4114DCu;
label_4114dc:
    // 0x4114dc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x4114dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_4114e0:
    // 0x4114e0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4114e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4114e4:
    // 0x4114e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4114e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4114e8:
    // 0x4114e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4114e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4114ec:
    // 0x4114ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4114ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4114f0:
    // 0x4114f0: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x4114f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_4114f4:
    // 0x4114f4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4114f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4114f8:
    // 0x4114f8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4114f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4114fc:
    // 0x4114fc: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x4114fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_411500:
    // 0x411500: 0xc0bb7e6  jal         func_2EDF98
label_411504:
    if (ctx->pc == 0x411504u) {
        ctx->pc = 0x411504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411500u;
        // 0x411504: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411508u;
        goto label_411508;
    }
    ctx->pc = 0x411500u;
    SET_GPR_U32(ctx, 31, 0x411508u);
    ctx->pc = 0x411504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411500u;
    // 0x411504: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x411500u, 0x411508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411508u;
label_411508:
    // 0x411508: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x411508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_41150c:
    // 0x41150c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x41150cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_411510:
    // 0x411510: 0x40f809  jalr        $v0
label_411514:
    if (ctx->pc == 0x411514u) {
        ctx->pc = 0x411514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411510u;
        // 0x411514: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411518u;
        goto label_411518;
    }
    ctx->pc = 0x411510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411518u);
        ctx->pc = 0x411514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411510u;
        // 0x411514: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411510u, 0x411518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411518u;
label_411518:
    // 0x411518: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x411518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41151c:
    // 0x41151c: 0x10e0ff81  beqz        $a3, . + 4 + (-0x7F << 2)
label_411520:
    if (ctx->pc == 0x411520u) {
        ctx->pc = 0x411520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41151Cu;
        // 0x411520: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411524u;
        goto label_411524;
    }
    ctx->pc = 0x41151Cu;
    {
        const bool branch_taken_0x41151c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x411520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41151Cu;
        // 0x411520: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41151c) {
            ctx->pc = 0x411324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411324;
        }
    }
    ctx->pc = 0x411524u;
label_411524:
    // 0x411524: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x411524u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_411528:
    // 0x411528: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x411528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_41152c:
    // 0x41152c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41152cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411530:
    // 0x411530: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x411530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_411534:
    // 0x411534: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x411534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_411538:
    // 0x411538: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x411538u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_41153c:
    // 0x41153c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x41153cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_411540:
    // 0x411540: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x411540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_411544:
    // 0x411544: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x411544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_411548:
    // 0x411548: 0xc0bb7e6  jal         func_2EDF98
label_41154c:
    if (ctx->pc == 0x41154Cu) {
        ctx->pc = 0x41154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411548u;
        // 0x41154c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411550u;
        goto label_411550;
    }
    ctx->pc = 0x411548u;
    SET_GPR_U32(ctx, 31, 0x411550u);
    ctx->pc = 0x41154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411548u;
    // 0x41154c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x411548u, 0x411550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411550u;
label_411550:
    // 0x411550: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x411550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_411554:
    // 0x411554: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x411554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_411558:
    // 0x411558: 0x40f809  jalr        $v0
label_41155c:
    if (ctx->pc == 0x41155Cu) {
        ctx->pc = 0x41155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411558u;
        // 0x41155c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411560u;
        goto label_411560;
    }
    ctx->pc = 0x411558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411560u);
        ctx->pc = 0x41155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411558u;
        // 0x41155c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411558u, 0x411560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411560u;
label_411560:
    // 0x411560: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x411560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411564:
    // 0x411564: 0x10e0ff6f  beqz        $a3, . + 4 + (-0x91 << 2)
label_411568:
    if (ctx->pc == 0x411568u) {
        ctx->pc = 0x411568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411564u;
        // 0x411568: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41156Cu;
        goto label_41156c;
    }
    ctx->pc = 0x411564u;
    {
        const bool branch_taken_0x411564 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x411568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411564u;
        // 0x411568: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411564) {
            ctx->pc = 0x411324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411324;
        }
    }
    ctx->pc = 0x41156Cu;
label_41156c:
    // 0x41156c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x41156cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_411570:
    // 0x411570: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x411570u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_411574:
    // 0x411574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x411574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411578:
    // 0x411578: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x411578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41157c:
    // 0x41157c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x41157cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_411580:
    // 0x411580: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x411580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_411584:
    // 0x411584: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x411584u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_411588:
    // 0x411588: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x411588u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_41158c:
    // 0x41158c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x41158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_411590:
    // 0x411590: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x411590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_411594:
    // 0x411594: 0xc0bb7e6  jal         func_2EDF98
label_411598:
    if (ctx->pc == 0x411598u) {
        ctx->pc = 0x411598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411594u;
        // 0x411598: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41159Cu;
        goto label_41159c;
    }
    ctx->pc = 0x411594u;
    SET_GPR_U32(ctx, 31, 0x41159Cu);
    ctx->pc = 0x411598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411594u;
    // 0x411598: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x411594u, 0x41159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41159Cu;
label_41159c:
    // 0x41159c: 0x5620ffb7  bnel        $s1, $zero, . + 4 + (-0x49 << 2)
label_4115a0:
    if (ctx->pc == 0x4115A0u) {
        ctx->pc = 0x4115A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41159Cu;
        // 0x4115a0: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4115A4u;
        goto label_4115a4;
    }
    ctx->pc = 0x41159Cu;
    {
        const bool branch_taken_0x41159c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x41159c) {
            ctx->pc = 0x4115A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41159Cu;
            // 0x4115a0: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41147Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41147c;
        }
    }
    ctx->pc = 0x4115A4u;
label_4115a4:
    // 0x4115a4: 0x8f83bdc8  lw          $v1, -0x4238($gp)
    ctx->pc = 0x4115a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950344)));
label_4115a8:
    // 0x4115a8: 0x2782bdc8  addiu       $v0, $gp, -0x4238
    ctx->pc = 0x4115a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950344));
label_4115ac:
    // 0x4115ac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4115acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_4115b0:
    // 0x4115b0: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x4115b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_4115b4:
    // 0x4115b4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x4115b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_4115b8:
    // 0x4115b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4115b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4115bc:
    // 0x4115bc: 0x8f83bdc8  lw          $v1, -0x4238($gp)
    ctx->pc = 0x4115bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950344)));
label_4115c0:
    // 0x4115c0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x4115c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_4115c4:
    // 0x4115c4: 0xaf84bdc8  sw          $a0, -0x4238($gp)
    ctx->pc = 0x4115c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950344), GPR_U32(ctx, 4));
label_4115c8:
    // 0x4115c8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4115c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4115cc:
    // 0x4115cc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4115ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4115d0:
    // 0x4115d0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4115d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4115d4:
    // 0x4115d4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4115d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4115d8:
    // 0x4115d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4115d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4115dc:
    // 0x4115dc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4115dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4115e0:
    // 0x4115e0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4115e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4115e4:
    // 0x4115e4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4115e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4115e8:
    // 0x4115e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4115e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4115ec:
    // 0x4115ec: 0x3e00008  jr          $ra
label_4115f0:
    if (ctx->pc == 0x4115F0u) {
        ctx->pc = 0x4115F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4115ECu;
        // 0x4115f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4115F4u;
        goto label_4115f4;
    }
    ctx->pc = 0x4115ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4115F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4115ECu;
        // 0x4115f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4115ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4115F4u;
label_4115f4:
    // 0x4115f4: 0x0  nop
    ctx->pc = 0x4115f4u;
    // NOP
    ctx->pc = 0x4115f8u;
}
