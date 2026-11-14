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

// Function: sub_00410230
// Address: 0x410230 - 0x4105a0
void sub_00410230_0x410230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410230_0x410230");
#endif

    switch (ctx->pc) {
        case 0x410230u: goto label_410230;
        case 0x410234u: goto label_410234;
        case 0x410238u: goto label_410238;
        case 0x41023cu: goto label_41023c;
        case 0x410240u: goto label_410240;
        case 0x410244u: goto label_410244;
        case 0x410248u: goto label_410248;
        case 0x41024cu: goto label_41024c;
        case 0x410250u: goto label_410250;
        case 0x410254u: goto label_410254;
        case 0x410258u: goto label_410258;
        case 0x41025cu: goto label_41025c;
        case 0x410260u: goto label_410260;
        case 0x410264u: goto label_410264;
        case 0x410268u: goto label_410268;
        case 0x41026cu: goto label_41026c;
        case 0x410270u: goto label_410270;
        case 0x410274u: goto label_410274;
        case 0x410278u: goto label_410278;
        case 0x41027cu: goto label_41027c;
        case 0x410280u: goto label_410280;
        case 0x410284u: goto label_410284;
        case 0x410288u: goto label_410288;
        case 0x41028cu: goto label_41028c;
        case 0x410290u: goto label_410290;
        case 0x410294u: goto label_410294;
        case 0x410298u: goto label_410298;
        case 0x41029cu: goto label_41029c;
        case 0x4102a0u: goto label_4102a0;
        case 0x4102a4u: goto label_4102a4;
        case 0x4102a8u: goto label_4102a8;
        case 0x4102acu: goto label_4102ac;
        case 0x4102b0u: goto label_4102b0;
        case 0x4102b4u: goto label_4102b4;
        case 0x4102b8u: goto label_4102b8;
        case 0x4102bcu: goto label_4102bc;
        case 0x4102c0u: goto label_4102c0;
        case 0x4102c4u: goto label_4102c4;
        case 0x4102c8u: goto label_4102c8;
        case 0x4102ccu: goto label_4102cc;
        case 0x4102d0u: goto label_4102d0;
        case 0x4102d4u: goto label_4102d4;
        case 0x4102d8u: goto label_4102d8;
        case 0x4102dcu: goto label_4102dc;
        case 0x4102e0u: goto label_4102e0;
        case 0x4102e4u: goto label_4102e4;
        case 0x4102e8u: goto label_4102e8;
        case 0x4102ecu: goto label_4102ec;
        case 0x4102f0u: goto label_4102f0;
        case 0x4102f4u: goto label_4102f4;
        case 0x4102f8u: goto label_4102f8;
        case 0x4102fcu: goto label_4102fc;
        case 0x410300u: goto label_410300;
        case 0x410304u: goto label_410304;
        case 0x410308u: goto label_410308;
        case 0x41030cu: goto label_41030c;
        case 0x410310u: goto label_410310;
        case 0x410314u: goto label_410314;
        case 0x410318u: goto label_410318;
        case 0x41031cu: goto label_41031c;
        case 0x410320u: goto label_410320;
        case 0x410324u: goto label_410324;
        case 0x410328u: goto label_410328;
        case 0x41032cu: goto label_41032c;
        case 0x410330u: goto label_410330;
        case 0x410334u: goto label_410334;
        case 0x410338u: goto label_410338;
        case 0x41033cu: goto label_41033c;
        case 0x410340u: goto label_410340;
        case 0x410344u: goto label_410344;
        case 0x410348u: goto label_410348;
        case 0x41034cu: goto label_41034c;
        case 0x410350u: goto label_410350;
        case 0x410354u: goto label_410354;
        case 0x410358u: goto label_410358;
        case 0x41035cu: goto label_41035c;
        case 0x410360u: goto label_410360;
        case 0x410364u: goto label_410364;
        case 0x410368u: goto label_410368;
        case 0x41036cu: goto label_41036c;
        case 0x410370u: goto label_410370;
        case 0x410374u: goto label_410374;
        case 0x410378u: goto label_410378;
        case 0x41037cu: goto label_41037c;
        case 0x410380u: goto label_410380;
        case 0x410384u: goto label_410384;
        case 0x410388u: goto label_410388;
        case 0x41038cu: goto label_41038c;
        case 0x410390u: goto label_410390;
        case 0x410394u: goto label_410394;
        case 0x410398u: goto label_410398;
        case 0x41039cu: goto label_41039c;
        case 0x4103a0u: goto label_4103a0;
        case 0x4103a4u: goto label_4103a4;
        case 0x4103a8u: goto label_4103a8;
        case 0x4103acu: goto label_4103ac;
        case 0x4103b0u: goto label_4103b0;
        case 0x4103b4u: goto label_4103b4;
        case 0x4103b8u: goto label_4103b8;
        case 0x4103bcu: goto label_4103bc;
        case 0x4103c0u: goto label_4103c0;
        case 0x4103c4u: goto label_4103c4;
        case 0x4103c8u: goto label_4103c8;
        case 0x4103ccu: goto label_4103cc;
        case 0x4103d0u: goto label_4103d0;
        case 0x4103d4u: goto label_4103d4;
        case 0x4103d8u: goto label_4103d8;
        case 0x4103dcu: goto label_4103dc;
        case 0x4103e0u: goto label_4103e0;
        case 0x4103e4u: goto label_4103e4;
        case 0x4103e8u: goto label_4103e8;
        case 0x4103ecu: goto label_4103ec;
        case 0x4103f0u: goto label_4103f0;
        case 0x4103f4u: goto label_4103f4;
        case 0x4103f8u: goto label_4103f8;
        case 0x4103fcu: goto label_4103fc;
        case 0x410400u: goto label_410400;
        case 0x410404u: goto label_410404;
        case 0x410408u: goto label_410408;
        case 0x41040cu: goto label_41040c;
        case 0x410410u: goto label_410410;
        case 0x410414u: goto label_410414;
        case 0x410418u: goto label_410418;
        case 0x41041cu: goto label_41041c;
        case 0x410420u: goto label_410420;
        case 0x410424u: goto label_410424;
        case 0x410428u: goto label_410428;
        case 0x41042cu: goto label_41042c;
        case 0x410430u: goto label_410430;
        case 0x410434u: goto label_410434;
        case 0x410438u: goto label_410438;
        case 0x41043cu: goto label_41043c;
        case 0x410440u: goto label_410440;
        case 0x410444u: goto label_410444;
        case 0x410448u: goto label_410448;
        case 0x41044cu: goto label_41044c;
        case 0x410450u: goto label_410450;
        case 0x410454u: goto label_410454;
        case 0x410458u: goto label_410458;
        case 0x41045cu: goto label_41045c;
        case 0x410460u: goto label_410460;
        case 0x410464u: goto label_410464;
        case 0x410468u: goto label_410468;
        case 0x41046cu: goto label_41046c;
        case 0x410470u: goto label_410470;
        case 0x410474u: goto label_410474;
        case 0x410478u: goto label_410478;
        case 0x41047cu: goto label_41047c;
        case 0x410480u: goto label_410480;
        case 0x410484u: goto label_410484;
        case 0x410488u: goto label_410488;
        case 0x41048cu: goto label_41048c;
        case 0x410490u: goto label_410490;
        case 0x410494u: goto label_410494;
        case 0x410498u: goto label_410498;
        case 0x41049cu: goto label_41049c;
        case 0x4104a0u: goto label_4104a0;
        case 0x4104a4u: goto label_4104a4;
        case 0x4104a8u: goto label_4104a8;
        case 0x4104acu: goto label_4104ac;
        case 0x4104b0u: goto label_4104b0;
        case 0x4104b4u: goto label_4104b4;
        case 0x4104b8u: goto label_4104b8;
        case 0x4104bcu: goto label_4104bc;
        case 0x4104c0u: goto label_4104c0;
        case 0x4104c4u: goto label_4104c4;
        case 0x4104c8u: goto label_4104c8;
        case 0x4104ccu: goto label_4104cc;
        case 0x4104d0u: goto label_4104d0;
        case 0x4104d4u: goto label_4104d4;
        case 0x4104d8u: goto label_4104d8;
        case 0x4104dcu: goto label_4104dc;
        case 0x4104e0u: goto label_4104e0;
        case 0x4104e4u: goto label_4104e4;
        case 0x4104e8u: goto label_4104e8;
        case 0x4104ecu: goto label_4104ec;
        case 0x4104f0u: goto label_4104f0;
        case 0x4104f4u: goto label_4104f4;
        case 0x4104f8u: goto label_4104f8;
        case 0x4104fcu: goto label_4104fc;
        case 0x410500u: goto label_410500;
        case 0x410504u: goto label_410504;
        case 0x410508u: goto label_410508;
        case 0x41050cu: goto label_41050c;
        case 0x410510u: goto label_410510;
        case 0x410514u: goto label_410514;
        case 0x410518u: goto label_410518;
        case 0x41051cu: goto label_41051c;
        case 0x410520u: goto label_410520;
        case 0x410524u: goto label_410524;
        case 0x410528u: goto label_410528;
        case 0x41052cu: goto label_41052c;
        case 0x410530u: goto label_410530;
        case 0x410534u: goto label_410534;
        case 0x410538u: goto label_410538;
        case 0x41053cu: goto label_41053c;
        case 0x410540u: goto label_410540;
        case 0x410544u: goto label_410544;
        case 0x410548u: goto label_410548;
        case 0x41054cu: goto label_41054c;
        case 0x410550u: goto label_410550;
        case 0x410554u: goto label_410554;
        case 0x410558u: goto label_410558;
        case 0x41055cu: goto label_41055c;
        case 0x410560u: goto label_410560;
        case 0x410564u: goto label_410564;
        case 0x410568u: goto label_410568;
        case 0x41056cu: goto label_41056c;
        case 0x410570u: goto label_410570;
        case 0x410574u: goto label_410574;
        case 0x410578u: goto label_410578;
        case 0x41057cu: goto label_41057c;
        case 0x410580u: goto label_410580;
        case 0x410584u: goto label_410584;
        case 0x410588u: goto label_410588;
        case 0x41058cu: goto label_41058c;
        case 0x410590u: goto label_410590;
        case 0x410594u: goto label_410594;
        case 0x410598u: goto label_410598;
        case 0x41059cu: goto label_41059c;
        default: break;
    }

    ctx->pc = 0x410230u;

label_410230:
    // 0x410230: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x410230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_410234:
    // 0x410234: 0x8f82ad28  lw          $v0, -0x52D8($gp)
    ctx->pc = 0x410234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946088)));
label_410238:
    // 0x410238: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x410238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_41023c:
    // 0x41023c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x41023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_410240:
    // 0x410240: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x410240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410244:
    // 0x410244: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x410244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_410248:
    // 0x410248: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x410248u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_41024c:
    // 0x41024c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x41024cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_410250:
    // 0x410250: 0xe2880b  movn        $s1, $a3, $v0
    ctx->pc = 0x410250u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_410254:
    // 0x410254: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x410254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_410258:
    // 0x410258: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x410258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41025c:
    // 0x41025c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x41025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_410260:
    // 0x410260: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x410260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_410264:
    // 0x410264: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x410264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_410268:
    // 0x410268: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x410268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_41026c:
    // 0x41026c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x41026cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_410270:
    // 0x410270: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x410270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_410274:
    // 0x410274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x410274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_410278:
    // 0x410278: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
label_41027c:
    if (ctx->pc == 0x41027Cu) {
        ctx->pc = 0x41027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410278u;
        // 0x41027c: 0xc6b00b  movn        $s6, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410280u;
        goto label_410280;
    }
    ctx->pc = 0x410278u;
    {
        const bool branch_taken_0x410278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410278u;
        // 0x41027c: 0xc6b00b  movn        $s6, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410278) {
            ctx->pc = 0x4102DCu;
            goto label_4102dc;
        }
    }
    ctx->pc = 0x410280u;
label_410280:
    // 0x410280: 0x8f84ad30  lw          $a0, -0x52D0($gp)
    ctx->pc = 0x410280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946096)));
label_410284:
    // 0x410284: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_410288:
    if (ctx->pc == 0x410288u) {
        ctx->pc = 0x410288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410284u;
        // 0x410288: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41028Cu;
        goto label_41028c;
    }
    ctx->pc = 0x410284u;
    {
        const bool branch_taken_0x410284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x410288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410284u;
        // 0x410288: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410284) {
            ctx->pc = 0x41029Cu;
            goto label_41029c;
        }
    }
    ctx->pc = 0x41028Cu;
label_41028c:
    // 0x41028c: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x41028cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_410290:
    // 0x410290: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x410290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_410294:
    // 0x410294: 0x10000006  b           . + 4 + (0x6 << 2)
label_410298:
    if (ctx->pc == 0x410298u) {
        ctx->pc = 0x410298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410294u;
        // 0x410298: 0x2a52824  and         $a1, $s5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41029Cu;
        goto label_41029c;
    }
    ctx->pc = 0x410294u;
    {
        const bool branch_taken_0x410294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410294u;
        // 0x410298: 0x2a52824  and         $a1, $s5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410294) {
            ctx->pc = 0x4102B0u;
            goto label_4102b0;
        }
    }
    ctx->pc = 0x41029Cu;
label_41029c:
    // 0x41029c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41029cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4102a0:
    // 0x4102a0: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x4102a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_4102a4:
    // 0x4102a4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x4102a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_4102a8:
    // 0x4102a8: 0x2a52824  and         $a1, $s5, $a1
    ctx->pc = 0x4102a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
label_4102ac:
    // 0x4102ac: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4102acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4102b0:
    // 0x4102b0: 0x40f809  jalr        $v0
label_4102b4:
    if (ctx->pc == 0x4102B4u) {
        ctx->pc = 0x4102B8u;
        goto label_4102b8;
    }
    ctx->pc = 0x4102B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4102B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4102B0u, 0x4102B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4102B8u;
label_4102b8:
    // 0x4102b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4102b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4102bc:
    // 0x4102bc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_4102c0:
    if (ctx->pc == 0x4102C0u) {
        ctx->pc = 0x4102C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4102BCu;
        // 0x4102c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4102C4u;
        goto label_4102c4;
    }
    ctx->pc = 0x4102BCu;
    {
        const bool branch_taken_0x4102bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4102C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4102BCu;
        // 0x4102c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4102bc) {
            ctx->pc = 0x4102E0u;
            goto label_4102e0;
        }
    }
    ctx->pc = 0x4102C4u;
label_4102c4:
    // 0x4102c4: 0x100000aa  b           . + 4 + (0xAA << 2)
label_4102c8:
    if (ctx->pc == 0x4102C8u) {
        ctx->pc = 0x4102C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4102C4u;
        // 0x4102c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4102CCu;
        goto label_4102cc;
    }
    ctx->pc = 0x4102C4u;
    {
        const bool branch_taken_0x4102c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4102C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4102C4u;
        // 0x4102c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4102c4) {
            ctx->pc = 0x410570u;
            goto label_410570;
        }
    }
    ctx->pc = 0x4102CCu;
label_4102cc:
    // 0x4102cc: 0xc104472  jal         func_4111C8
label_4102d0:
    if (ctx->pc == 0x4102D0u) {
        ctx->pc = 0x4102D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4102CCu;
        // 0x4102d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4102D4u;
        goto label_4102d4;
    }
    ctx->pc = 0x4102CCu;
    SET_GPR_U32(ctx, 31, 0x4102D4u);
    ctx->pc = 0x4102D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4102CCu;
    // 0x4102d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4111C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4111C8u, 0x4102CCu, 0x4102D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4102D4u;
label_4102d4:
    // 0x4102d4: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_4102d8:
    if (ctx->pc == 0x4102D8u) {
        ctx->pc = 0x4102D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4102D4u;
        // 0x4102d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4102DCu;
        goto label_4102dc;
    }
    ctx->pc = 0x4102D4u;
    {
        const bool branch_taken_0x4102d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4102D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4102D4u;
        // 0x4102d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4102d4) {
            ctx->pc = 0x410570u;
            goto label_410570;
        }
    }
    ctx->pc = 0x4102DCu;
label_4102dc:
    // 0x4102dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4102dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4102e0:
    // 0x4102e0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x4102e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_4102e4:
    // 0x4102e4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x4102e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4102e8:
    // 0x4102e8: 0x162023  negu        $a0, $s6
    ctx->pc = 0x4102e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
label_4102ec:
    // 0x4102ec: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x4102ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_4102f0:
    // 0x4102f0: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x4102f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_4102f4:
    // 0x4102f4: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x4102f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4102f8:
    // 0x4102f8: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x4102f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_4102fc:
    // 0x4102fc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x4102fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_410300:
    // 0x410300: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x410300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_410304:
    // 0x410304: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x410304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410308:
    // 0x410308: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x410308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_41030c:
    // 0x41030c: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x41030cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
label_410310:
    // 0x410310: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x410310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_410314:
    // 0x410314: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x410314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_410318:
    // 0x410318: 0x1220008c  beqz        $s1, . + 4 + (0x8C << 2)
label_41031c:
    if (ctx->pc == 0x41031Cu) {
        ctx->pc = 0x41031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410318u;
        // 0x41031c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410320u;
        goto label_410320;
    }
    ctx->pc = 0x410318u;
    {
        const bool branch_taken_0x410318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410318u;
        // 0x41031c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410318) {
            ctx->pc = 0x41054Cu;
            goto label_41054c;
        }
    }
    ctx->pc = 0x410320u;
label_410320:
    // 0x410320: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x410320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_410324:
    // 0x410324: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x410324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_410328:
    // 0x410328: 0x111823  negu        $v1, $s1
    ctx->pc = 0x410328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_41032c:
    // 0x41032c: 0x2457e880  addiu       $s7, $v0, -0x1780
    ctx->pc = 0x41032cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_410330:
    // 0x410330: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x410330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_410334:
    // 0x410334: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x410334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_410338:
    // 0x410338: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x410338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_41033c:
    // 0x41033c: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_410340:
    if (ctx->pc == 0x410340u) {
        ctx->pc = 0x410340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41033Cu;
        // 0x410340: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410344u;
        goto label_410344;
    }
    ctx->pc = 0x41033Cu;
    {
        const bool branch_taken_0x41033c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x410340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41033Cu;
        // 0x410340: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41033c) {
            ctx->pc = 0x410420u;
            goto label_410420;
        }
    }
    ctx->pc = 0x410344u;
label_410344:
    // 0x410344: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x410344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_410348:
    // 0x410348: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_41034c:
    if (ctx->pc == 0x41034Cu) {
        ctx->pc = 0x41034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410348u;
        // 0x41034c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x410350u;
        goto label_410350;
    }
    ctx->pc = 0x410348u;
    {
        const bool branch_taken_0x410348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410348u;
        // 0x41034c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x410348) {
            ctx->pc = 0x4103ECu;
            goto label_4103ec;
        }
    }
    ctx->pc = 0x410350u;
label_410350:
    // 0x410350: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_410354:
    if (ctx->pc == 0x410354u) {
        ctx->pc = 0x410354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410350u;
        // 0x410354: 0x2664ffff  addiu       $a0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410358u;
        goto label_410358;
    }
    ctx->pc = 0x410350u;
    {
        const bool branch_taken_0x410350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410350u;
        // 0x410354: 0x2664ffff  addiu       $a0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410350) {
            ctx->pc = 0x4103A0u;
            goto label_4103a0;
        }
    }
    ctx->pc = 0x410358u;
label_410358:
    // 0x410358: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x410358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_41035c:
    // 0x41035c: 0x40f809  jalr        $v0
label_410360:
    if (ctx->pc == 0x410360u) {
        ctx->pc = 0x410360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41035Cu;
        // 0x410360: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410364u;
        goto label_410364;
    }
    ctx->pc = 0x41035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410364u);
        ctx->pc = 0x410360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41035Cu;
        // 0x410360: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41035Cu, 0x410364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410364u;
label_410364:
    // 0x410364: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x410364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410368:
    // 0x410368: 0x10e0ffd8  beqz        $a3, . + 4 + (-0x28 << 2)
label_41036c:
    if (ctx->pc == 0x41036Cu) {
        ctx->pc = 0x41036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410368u;
        // 0x41036c: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410370u;
        goto label_410370;
    }
    ctx->pc = 0x410368u;
    {
        const bool branch_taken_0x410368 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x41036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410368u;
        // 0x41036c: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410368) {
            ctx->pc = 0x4102CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4102cc;
        }
    }
    ctx->pc = 0x410370u;
label_410370:
    // 0x410370: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x410370u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_410374:
    // 0x410374: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x410374u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_410378:
    // 0x410378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41037c:
    // 0x41037c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x41037cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410380:
    // 0x410380: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x410380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_410384:
    // 0x410384: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x410384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410388:
    // 0x410388: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x410388u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_41038c:
    // 0x41038c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x41038cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_410390:
    // 0x410390: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x410390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410394:
    // 0x410394: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x410394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_410398:
    // 0x410398: 0xc0bb7e6  jal         func_2EDF98
label_41039c:
    if (ctx->pc == 0x41039Cu) {
        ctx->pc = 0x41039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410398u;
        // 0x41039c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4103A0u;
        goto label_4103a0;
    }
    ctx->pc = 0x410398u;
    SET_GPR_U32(ctx, 31, 0x4103A0u);
    ctx->pc = 0x41039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410398u;
    // 0x41039c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x410398u, 0x4103A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4103A0u;
label_4103a0:
    // 0x4103a0: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x4103a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_4103a4:
    // 0x4103a4: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x4103a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4103a8:
    // 0x4103a8: 0x40f809  jalr        $v0
label_4103ac:
    if (ctx->pc == 0x4103ACu) {
        ctx->pc = 0x4103ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103A8u;
        // 0x4103ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4103B0u;
        goto label_4103b0;
    }
    ctx->pc = 0x4103A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4103B0u);
        ctx->pc = 0x4103ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103A8u;
        // 0x4103ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4103A8u, 0x4103B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4103B0u;
label_4103b0:
    // 0x4103b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4103b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4103b4:
    // 0x4103b4: 0x10e0ffc5  beqz        $a3, . + 4 + (-0x3B << 2)
label_4103b8:
    if (ctx->pc == 0x4103B8u) {
        ctx->pc = 0x4103B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103B4u;
        // 0x4103b8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4103BCu;
        goto label_4103bc;
    }
    ctx->pc = 0x4103B4u;
    {
        const bool branch_taken_0x4103b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4103B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103B4u;
        // 0x4103b8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4103b4) {
            ctx->pc = 0x4102CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4102cc;
        }
    }
    ctx->pc = 0x4103BCu;
label_4103bc:
    // 0x4103bc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x4103bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_4103c0:
    // 0x4103c0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4103c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4103c4:
    // 0x4103c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4103c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4103c8:
    // 0x4103c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4103c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4103cc:
    // 0x4103cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4103ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4103d0:
    // 0x4103d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4103d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4103d4:
    // 0x4103d4: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x4103d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_4103d8:
    // 0x4103d8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4103d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4103dc:
    // 0x4103dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4103dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4103e0:
    // 0x4103e0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x4103e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_4103e4:
    // 0x4103e4: 0xc0bb7e6  jal         func_2EDF98
label_4103e8:
    if (ctx->pc == 0x4103E8u) {
        ctx->pc = 0x4103E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103E4u;
        // 0x4103e8: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4103ECu;
        goto label_4103ec;
    }
    ctx->pc = 0x4103E4u;
    SET_GPR_U32(ctx, 31, 0x4103ECu);
    ctx->pc = 0x4103E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4103E4u;
    // 0x4103e8: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4103E4u, 0x4103ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4103ECu;
label_4103ec:
    // 0x4103ec: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x4103ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_4103f0:
    // 0x4103f0: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x4103f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4103f4:
    // 0x4103f4: 0x40f809  jalr        $v0
label_4103f8:
    if (ctx->pc == 0x4103F8u) {
        ctx->pc = 0x4103F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103F4u;
        // 0x4103f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4103FCu;
        goto label_4103fc;
    }
    ctx->pc = 0x4103F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4103FCu);
        ctx->pc = 0x4103F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103F4u;
        // 0x4103f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4103F4u, 0x4103FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4103FCu;
label_4103fc:
    // 0x4103fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4103fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410400:
    // 0x410400: 0x10e0ffb2  beqz        $a3, . + 4 + (-0x4E << 2)
label_410404:
    if (ctx->pc == 0x410404u) {
        ctx->pc = 0x410404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410400u;
        // 0x410404: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410408u;
        goto label_410408;
    }
    ctx->pc = 0x410400u;
    {
        const bool branch_taken_0x410400 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x410404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410400u;
        // 0x410404: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410400) {
            ctx->pc = 0x4102CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4102cc;
        }
    }
    ctx->pc = 0x410408u;
label_410408:
    // 0x410408: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x410408u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_41040c:
    // 0x41040c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x41040cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_410410:
    // 0x410410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410414:
    // 0x410414: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x410414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410418:
    // 0x410418: 0x10000043  b           . + 4 + (0x43 << 2)
label_41041c:
    if (ctx->pc == 0x41041Cu) {
        ctx->pc = 0x41041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410418u;
        // 0x41041c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410420u;
        goto label_410420;
    }
    ctx->pc = 0x410418u;
    {
        const bool branch_taken_0x410418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410418u;
        // 0x41041c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410418) {
            ctx->pc = 0x410528u;
            goto label_410528;
        }
    }
    ctx->pc = 0x410420u;
label_410420:
    // 0x410420: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x410420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_410424:
    // 0x410424: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x410424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_410428:
    // 0x410428: 0x40f809  jalr        $v0
label_41042c:
    if (ctx->pc == 0x41042Cu) {
        ctx->pc = 0x41042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410428u;
        // 0x41042c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410430u;
        goto label_410430;
    }
    ctx->pc = 0x410428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410430u);
        ctx->pc = 0x41042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410428u;
        // 0x41042c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410428u, 0x410430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410430u;
label_410430:
    // 0x410430: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x410430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410434:
    // 0x410434: 0x10e0ffa5  beqz        $a3, . + 4 + (-0x5B << 2)
label_410438:
    if (ctx->pc == 0x410438u) {
        ctx->pc = 0x410438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410434u;
        // 0x410438: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41043Cu;
        goto label_41043c;
    }
    ctx->pc = 0x410434u;
    {
        const bool branch_taken_0x410434 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x410438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410434u;
        // 0x410438: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410434) {
            ctx->pc = 0x4102CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4102cc;
        }
    }
    ctx->pc = 0x41043Cu;
label_41043c:
    // 0x41043c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x41043cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_410440:
    // 0x410440: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x410440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_410444:
    // 0x410444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410448:
    // 0x410448: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x410448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41044c:
    // 0x41044c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x41044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410450:
    // 0x410450: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x410450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_410454:
    // 0x410454: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x410454u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_410458:
    // 0x410458: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x410458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41045c:
    // 0x41045c: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x41045cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_410460:
    // 0x410460: 0xc0bb7e6  jal         func_2EDF98
label_410464:
    if (ctx->pc == 0x410464u) {
        ctx->pc = 0x410464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410460u;
        // 0x410464: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410468u;
        goto label_410468;
    }
    ctx->pc = 0x410460u;
    SET_GPR_U32(ctx, 31, 0x410468u);
    ctx->pc = 0x410464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410460u;
    // 0x410464: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x410460u, 0x410468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410468u;
label_410468:
    // 0x410468: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x410468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_41046c:
    // 0x41046c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x41046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_410470:
    // 0x410470: 0x40f809  jalr        $v0
label_410474:
    if (ctx->pc == 0x410474u) {
        ctx->pc = 0x410474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410470u;
        // 0x410474: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410478u;
        goto label_410478;
    }
    ctx->pc = 0x410470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410478u);
        ctx->pc = 0x410474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410470u;
        // 0x410474: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410470u, 0x410478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410478u;
label_410478:
    // 0x410478: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x410478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41047c:
    // 0x41047c: 0x10e0ff93  beqz        $a3, . + 4 + (-0x6D << 2)
label_410480:
    if (ctx->pc == 0x410480u) {
        ctx->pc = 0x410480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41047Cu;
        // 0x410480: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410484u;
        goto label_410484;
    }
    ctx->pc = 0x41047Cu;
    {
        const bool branch_taken_0x41047c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x410480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41047Cu;
        // 0x410480: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41047c) {
            ctx->pc = 0x4102CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4102cc;
        }
    }
    ctx->pc = 0x410484u;
label_410484:
    // 0x410484: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x410484u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_410488:
    // 0x410488: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x410488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_41048c:
    // 0x41048c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41048cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410490:
    // 0x410490: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x410490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410494:
    // 0x410494: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x410494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410498:
    // 0x410498: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x410498u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_41049c:
    // 0x41049c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x41049cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4104a0:
    // 0x4104a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4104a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4104a4:
    // 0x4104a4: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x4104a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_4104a8:
    // 0x4104a8: 0xc0bb7e6  jal         func_2EDF98
label_4104ac:
    if (ctx->pc == 0x4104ACu) {
        ctx->pc = 0x4104ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4104A8u;
        // 0x4104ac: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4104B0u;
        goto label_4104b0;
    }
    ctx->pc = 0x4104A8u;
    SET_GPR_U32(ctx, 31, 0x4104B0u);
    ctx->pc = 0x4104ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4104A8u;
    // 0x4104ac: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4104A8u, 0x4104B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4104B0u;
label_4104b0:
    // 0x4104b0: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x4104b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_4104b4:
    // 0x4104b4: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x4104b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4104b8:
    // 0x4104b8: 0x40f809  jalr        $v0
label_4104bc:
    if (ctx->pc == 0x4104BCu) {
        ctx->pc = 0x4104BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4104B8u;
        // 0x4104bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4104C0u;
        goto label_4104c0;
    }
    ctx->pc = 0x4104B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4104C0u);
        ctx->pc = 0x4104BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4104B8u;
        // 0x4104bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4104B8u, 0x4104C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4104C0u;
label_4104c0:
    // 0x4104c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4104c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4104c4:
    // 0x4104c4: 0x10e0ff81  beqz        $a3, . + 4 + (-0x7F << 2)
label_4104c8:
    if (ctx->pc == 0x4104C8u) {
        ctx->pc = 0x4104C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4104C4u;
        // 0x4104c8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4104CCu;
        goto label_4104cc;
    }
    ctx->pc = 0x4104C4u;
    {
        const bool branch_taken_0x4104c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4104C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4104C4u;
        // 0x4104c8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4104c4) {
            ctx->pc = 0x4102CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4102cc;
        }
    }
    ctx->pc = 0x4104CCu;
label_4104cc:
    // 0x4104cc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x4104ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_4104d0:
    // 0x4104d0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4104d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4104d4:
    // 0x4104d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4104d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4104d8:
    // 0x4104d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4104d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4104dc:
    // 0x4104dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4104dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4104e0:
    // 0x4104e0: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x4104e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_4104e4:
    // 0x4104e4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4104e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4104e8:
    // 0x4104e8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4104e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4104ec:
    // 0x4104ec: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x4104ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_4104f0:
    // 0x4104f0: 0xc0bb7e6  jal         func_2EDF98
label_4104f4:
    if (ctx->pc == 0x4104F4u) {
        ctx->pc = 0x4104F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4104F0u;
        // 0x4104f4: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4104F8u;
        goto label_4104f8;
    }
    ctx->pc = 0x4104F0u;
    SET_GPR_U32(ctx, 31, 0x4104F8u);
    ctx->pc = 0x4104F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4104F0u;
    // 0x4104f4: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4104F0u, 0x4104F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4104F8u;
label_4104f8:
    // 0x4104f8: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x4104f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_4104fc:
    // 0x4104fc: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x4104fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_410500:
    // 0x410500: 0x40f809  jalr        $v0
label_410504:
    if (ctx->pc == 0x410504u) {
        ctx->pc = 0x410504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410500u;
        // 0x410504: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410508u;
        goto label_410508;
    }
    ctx->pc = 0x410500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410508u);
        ctx->pc = 0x410504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410500u;
        // 0x410504: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410500u, 0x410508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410508u;
label_410508:
    // 0x410508: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x410508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41050c:
    // 0x41050c: 0x10e0ff6f  beqz        $a3, . + 4 + (-0x91 << 2)
label_410510:
    if (ctx->pc == 0x410510u) {
        ctx->pc = 0x410510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41050Cu;
        // 0x410510: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410514u;
        goto label_410514;
    }
    ctx->pc = 0x41050Cu;
    {
        const bool branch_taken_0x41050c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x410510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41050Cu;
        // 0x410510: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41050c) {
            ctx->pc = 0x4102CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4102cc;
        }
    }
    ctx->pc = 0x410514u;
label_410514:
    // 0x410514: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x410514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_410518:
    // 0x410518: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x410518u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_41051c:
    // 0x41051c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41051cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410520:
    // 0x410520: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x410520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410524:
    // 0x410524: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x410524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_410528:
    // 0x410528: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x410528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41052c:
    // 0x41052c: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x41052cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_410530:
    // 0x410530: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x410530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_410534:
    // 0x410534: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x410534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410538:
    // 0x410538: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x410538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_41053c:
    // 0x41053c: 0xc0bb7e6  jal         func_2EDF98
label_410540:
    if (ctx->pc == 0x410540u) {
        ctx->pc = 0x410540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41053Cu;
        // 0x410540: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410544u;
        goto label_410544;
    }
    ctx->pc = 0x41053Cu;
    SET_GPR_U32(ctx, 31, 0x410544u);
    ctx->pc = 0x410540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41053Cu;
    // 0x410540: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x41053Cu, 0x410544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410544u;
label_410544:
    // 0x410544: 0x5620ffb7  bnel        $s1, $zero, . + 4 + (-0x49 << 2)
label_410548:
    if (ctx->pc == 0x410548u) {
        ctx->pc = 0x410548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410544u;
        // 0x410548: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41054Cu;
        goto label_41054c;
    }
    ctx->pc = 0x410544u;
    {
        const bool branch_taken_0x410544 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x410544) {
            ctx->pc = 0x410548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410544u;
            // 0x410548: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410424;
        }
    }
    ctx->pc = 0x41054Cu;
label_41054c:
    // 0x41054c: 0x8f84bdc8  lw          $a0, -0x4238($gp)
    ctx->pc = 0x41054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950344)));
label_410550:
    // 0x410550: 0x2782bdc8  addiu       $v0, $gp, -0x4238
    ctx->pc = 0x410550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950344));
label_410554:
    // 0x410554: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x410554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_410558:
    // 0x410558: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x410558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_41055c:
    // 0x41055c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x41055cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_410560:
    // 0x410560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x410560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_410564:
    // 0x410564: 0x8f82bdc8  lw          $v0, -0x4238($gp)
    ctx->pc = 0x410564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950344)));
label_410568:
    // 0x410568: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x410568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_41056c:
    // 0x41056c: 0xaf83bdc8  sw          $v1, -0x4238($gp)
    ctx->pc = 0x41056cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950344), GPR_U32(ctx, 3));
label_410570:
    // 0x410570: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x410570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_410574:
    // 0x410574: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x410574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410578:
    // 0x410578: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x410578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41057c:
    // 0x41057c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x41057cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_410580:
    // 0x410580: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x410580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_410584:
    // 0x410584: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x410584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_410588:
    // 0x410588: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x410588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41058c:
    // 0x41058c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x41058cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410590:
    // 0x410590: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x410590u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410594:
    // 0x410594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x410594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_410598:
    // 0x410598: 0x3e00008  jr          $ra
label_41059c:
    if (ctx->pc == 0x41059Cu) {
        ctx->pc = 0x41059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410598u;
        // 0x41059c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4105A0u;
        goto label_fallthrough_0x410598;
    }
    ctx->pc = 0x410598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410598u;
        // 0x41059c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x410598:
    ctx->pc = 0x4105A0u;
}
