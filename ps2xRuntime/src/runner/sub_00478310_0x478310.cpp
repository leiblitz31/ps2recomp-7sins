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

// Function: sub_00478310
// Address: 0x478310 - 0x4784a0
void sub_00478310_0x478310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478310_0x478310");
#endif

    switch (ctx->pc) {
        case 0x478310u: goto label_478310;
        case 0x478314u: goto label_478314;
        case 0x478318u: goto label_478318;
        case 0x47831cu: goto label_47831c;
        case 0x478320u: goto label_478320;
        case 0x478324u: goto label_478324;
        case 0x478328u: goto label_478328;
        case 0x47832cu: goto label_47832c;
        case 0x478330u: goto label_478330;
        case 0x478334u: goto label_478334;
        case 0x478338u: goto label_478338;
        case 0x47833cu: goto label_47833c;
        case 0x478340u: goto label_478340;
        case 0x478344u: goto label_478344;
        case 0x478348u: goto label_478348;
        case 0x47834cu: goto label_47834c;
        case 0x478350u: goto label_478350;
        case 0x478354u: goto label_478354;
        case 0x478358u: goto label_478358;
        case 0x47835cu: goto label_47835c;
        case 0x478360u: goto label_478360;
        case 0x478364u: goto label_478364;
        case 0x478368u: goto label_478368;
        case 0x47836cu: goto label_47836c;
        case 0x478370u: goto label_478370;
        case 0x478374u: goto label_478374;
        case 0x478378u: goto label_478378;
        case 0x47837cu: goto label_47837c;
        case 0x478380u: goto label_478380;
        case 0x478384u: goto label_478384;
        case 0x478388u: goto label_478388;
        case 0x47838cu: goto label_47838c;
        case 0x478390u: goto label_478390;
        case 0x478394u: goto label_478394;
        case 0x478398u: goto label_478398;
        case 0x47839cu: goto label_47839c;
        case 0x4783a0u: goto label_4783a0;
        case 0x4783a4u: goto label_4783a4;
        case 0x4783a8u: goto label_4783a8;
        case 0x4783acu: goto label_4783ac;
        case 0x4783b0u: goto label_4783b0;
        case 0x4783b4u: goto label_4783b4;
        case 0x4783b8u: goto label_4783b8;
        case 0x4783bcu: goto label_4783bc;
        case 0x4783c0u: goto label_4783c0;
        case 0x4783c4u: goto label_4783c4;
        case 0x4783c8u: goto label_4783c8;
        case 0x4783ccu: goto label_4783cc;
        case 0x4783d0u: goto label_4783d0;
        case 0x4783d4u: goto label_4783d4;
        case 0x4783d8u: goto label_4783d8;
        case 0x4783dcu: goto label_4783dc;
        case 0x4783e0u: goto label_4783e0;
        case 0x4783e4u: goto label_4783e4;
        case 0x4783e8u: goto label_4783e8;
        case 0x4783ecu: goto label_4783ec;
        case 0x4783f0u: goto label_4783f0;
        case 0x4783f4u: goto label_4783f4;
        case 0x4783f8u: goto label_4783f8;
        case 0x4783fcu: goto label_4783fc;
        case 0x478400u: goto label_478400;
        case 0x478404u: goto label_478404;
        case 0x478408u: goto label_478408;
        case 0x47840cu: goto label_47840c;
        case 0x478410u: goto label_478410;
        case 0x478414u: goto label_478414;
        case 0x478418u: goto label_478418;
        case 0x47841cu: goto label_47841c;
        case 0x478420u: goto label_478420;
        case 0x478424u: goto label_478424;
        case 0x478428u: goto label_478428;
        case 0x47842cu: goto label_47842c;
        case 0x478430u: goto label_478430;
        case 0x478434u: goto label_478434;
        case 0x478438u: goto label_478438;
        case 0x47843cu: goto label_47843c;
        case 0x478440u: goto label_478440;
        case 0x478444u: goto label_478444;
        case 0x478448u: goto label_478448;
        case 0x47844cu: goto label_47844c;
        case 0x478450u: goto label_478450;
        case 0x478454u: goto label_478454;
        case 0x478458u: goto label_478458;
        case 0x47845cu: goto label_47845c;
        case 0x478460u: goto label_478460;
        case 0x478464u: goto label_478464;
        case 0x478468u: goto label_478468;
        case 0x47846cu: goto label_47846c;
        case 0x478470u: goto label_478470;
        case 0x478474u: goto label_478474;
        case 0x478478u: goto label_478478;
        case 0x47847cu: goto label_47847c;
        case 0x478480u: goto label_478480;
        case 0x478484u: goto label_478484;
        case 0x478488u: goto label_478488;
        case 0x47848cu: goto label_47848c;
        case 0x478490u: goto label_478490;
        case 0x478494u: goto label_478494;
        case 0x478498u: goto label_478498;
        case 0x47849cu: goto label_47849c;
        default: break;
    }

    ctx->pc = 0x478310u;

label_478310:
    // 0x478310: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x478310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_478314:
    // 0x478314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x478314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_478318:
    // 0x478318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x478318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47831c:
    // 0x47831c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47831cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_478320:
    // 0x478320: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x478320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_478324:
    // 0x478324: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x478324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_478328:
    // 0x478328: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47832c:
    if (ctx->pc == 0x47832Cu) {
        ctx->pc = 0x478330u;
        goto label_478330;
    }
    ctx->pc = 0x478328u;
    {
        const bool branch_taken_0x478328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478328) {
            ctx->pc = 0x4783D8u;
            goto label_4783d8;
        }
    }
    ctx->pc = 0x478330u;
label_478330:
    // 0x478330: 0x8f82b4a8  lw          $v0, -0x4B58($gp)
    ctx->pc = 0x478330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948008)));
label_478334:
    // 0x478334: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_478338:
    if (ctx->pc == 0x478338u) {
        ctx->pc = 0x47833Cu;
        goto label_47833c;
    }
    ctx->pc = 0x478334u;
    {
        const bool branch_taken_0x478334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478334) {
            ctx->pc = 0x4783D8u;
            goto label_4783d8;
        }
    }
    ctx->pc = 0x47833Cu;
label_47833c:
    // 0x47833c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_478340:
    // 0x478340: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x478340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_478344:
    // 0x478344: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x478344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_478348:
    // 0x478348: 0xc115ee8  jal         func_457BA0
label_47834c:
    if (ctx->pc == 0x47834Cu) {
        ctx->pc = 0x478350u;
        goto label_478350;
    }
    ctx->pc = 0x478348u;
    SET_GPR_U32(ctx, 31, 0x478350u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x478348u, 0x478350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478350u;
label_478350:
    // 0x478350: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_478354:
    if (ctx->pc == 0x478354u) {
        ctx->pc = 0x478358u;
        goto label_478358;
    }
    ctx->pc = 0x478350u;
    {
        const bool branch_taken_0x478350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478350) {
            ctx->pc = 0x4783D8u;
            goto label_4783d8;
        }
    }
    ctx->pc = 0x478358u;
label_478358:
    // 0x478358: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x478358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_47835c:
    // 0x47835c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_478360:
    if (ctx->pc == 0x478360u) {
        ctx->pc = 0x478364u;
        goto label_478364;
    }
    ctx->pc = 0x47835Cu;
    {
        const bool branch_taken_0x47835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47835c) {
            ctx->pc = 0x4783D8u;
            goto label_4783d8;
        }
    }
    ctx->pc = 0x478364u;
label_478364:
    // 0x478364: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x478364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_478368:
    // 0x478368: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x478368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47836c:
    // 0x47836c: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x47836cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_478370:
    // 0x478370: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x478370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_478374:
    // 0x478374: 0x24e713e8  addiu       $a3, $a3, 0x13E8
    ctx->pc = 0x478374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5096));
label_478378:
    // 0x478378: 0x240801b6  addiu       $t0, $zero, 0x1B6
    ctx->pc = 0x478378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
label_47837c:
    // 0x47837c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47837cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_478380:
    // 0x478380: 0x252913f8  addiu       $t1, $t1, 0x13F8
    ctx->pc = 0x478380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5112));
label_478384:
    // 0x478384: 0xc113940  jal         func_44E500
label_478388:
    if (ctx->pc == 0x478388u) {
        ctx->pc = 0x47838Cu;
        goto label_47838c;
    }
    ctx->pc = 0x478384u;
    SET_GPR_U32(ctx, 31, 0x47838Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x478384u, 0x47838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47838Cu;
label_47838c:
    // 0x47838c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x47838cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_478390:
    // 0x478390: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x478390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_478394:
    // 0x478394: 0x24a51408  addiu       $a1, $a1, 0x1408
    ctx->pc = 0x478394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5128));
label_478398:
    // 0x478398: 0xc115c24  jal         func_457090
label_47839c:
    if (ctx->pc == 0x47839Cu) {
        ctx->pc = 0x4783A0u;
        goto label_4783a0;
    }
    ctx->pc = 0x478398u;
    SET_GPR_U32(ctx, 31, 0x4783A0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x478398u, 0x4783A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4783A0u;
label_4783a0:
    // 0x4783a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4783a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4783a4:
    // 0x4783a4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x4783a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_4783a8:
    // 0x4783a8: 0x40f809  jalr        $v0
label_4783ac:
    if (ctx->pc == 0x4783ACu) {
        ctx->pc = 0x4783B0u;
        goto label_4783b0;
    }
    ctx->pc = 0x4783A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4783B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4783A8u, 0x4783B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4783B0u;
label_4783b0:
    // 0x4783b0: 0xaf82b4a8  sw          $v0, -0x4B58($gp)
    ctx->pc = 0x4783b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948008), GPR_U32(ctx, 2));
label_4783b4:
    // 0x4783b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4783b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4783b8:
    // 0x4783b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4783bc:
    if (ctx->pc == 0x4783BCu) {
        ctx->pc = 0x4783C0u;
        goto label_4783c0;
    }
    ctx->pc = 0x4783B8u;
    {
        const bool branch_taken_0x4783b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4783b8) {
            ctx->pc = 0x4783C8u;
            goto label_4783c8;
        }
    }
    ctx->pc = 0x4783C0u;
label_4783c0:
    // 0x4783c0: 0xd  break       0
    ctx->pc = 0x4783c0u;
    runtime->handleBreak(rdram, ctx);
label_4783c4:
    // 0x4783c4: 0x0  nop
    ctx->pc = 0x4783c4u;
    // NOP
label_4783c8:
    // 0x4783c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4783c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4783cc:
    // 0x4783cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4783ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4783d0:
    // 0x4783d0: 0xc11392c  jal         func_44E4B0
label_4783d4:
    if (ctx->pc == 0x4783D4u) {
        ctx->pc = 0x4783D8u;
        goto label_4783d8;
    }
    ctx->pc = 0x4783D0u;
    SET_GPR_U32(ctx, 31, 0x4783D8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4783D0u, 0x4783D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4783D8u;
label_4783d8:
    // 0x4783d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4783d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4783dc:
    // 0x4783dc: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x4783dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
label_4783e0:
    // 0x4783e0: 0xc11dd74  jal         func_4775D0
label_4783e4:
    if (ctx->pc == 0x4783E4u) {
        ctx->pc = 0x4783E8u;
        goto label_4783e8;
    }
    ctx->pc = 0x4783E0u;
    SET_GPR_U32(ctx, 31, 0x4783E8u);
    ctx->pc = 0x4775D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775D0u, 0x4783E0u, 0x4783E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4783E8u;
label_4783e8:
    // 0x4783e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4783e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4783ec:
    // 0x4783ec: 0x10000009  b           . + 4 + (0x9 << 2)
label_4783f0:
    if (ctx->pc == 0x4783F0u) {
        ctx->pc = 0x4783F4u;
        goto label_4783f4;
    }
    ctx->pc = 0x4783ECu;
    {
        const bool branch_taken_0x4783ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4783ec) {
            ctx->pc = 0x478414u;
            goto label_478414;
        }
    }
    ctx->pc = 0x4783F4u;
label_4783f4:
    // 0x4783f4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x4783f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4783f8:
    // 0x4783f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4783f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4783fc:
    // 0x4783fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_478400:
    if (ctx->pc == 0x478400u) {
        ctx->pc = 0x478404u;
        goto label_478404;
    }
    ctx->pc = 0x4783FCu;
    {
        const bool branch_taken_0x4783fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4783fc) {
            ctx->pc = 0x478410u;
            goto label_478410;
        }
    }
    ctx->pc = 0x478404u;
label_478404:
    // 0x478404: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x478404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_478408:
    // 0x478408: 0x10000007  b           . + 4 + (0x7 << 2)
label_47840c:
    if (ctx->pc == 0x47840Cu) {
        ctx->pc = 0x478410u;
        goto label_478410;
    }
    ctx->pc = 0x478408u;
    {
        const bool branch_taken_0x478408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478408) {
            ctx->pc = 0x478428u;
            goto label_478428;
        }
    }
    ctx->pc = 0x478410u;
label_478410:
    // 0x478410: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x478410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_478414:
    // 0x478414: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x478414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
label_478418:
    // 0x478418: 0xc11dd6c  jal         func_4775B0
label_47841c:
    if (ctx->pc == 0x47841Cu) {
        ctx->pc = 0x478420u;
        goto label_478420;
    }
    ctx->pc = 0x478418u;
    SET_GPR_U32(ctx, 31, 0x478420u);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x478418u, 0x478420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478420u;
label_478420:
    // 0x478420: 0x1602fff4  bne         $s0, $v0, . + 4 + (-0xC << 2)
label_478424:
    if (ctx->pc == 0x478424u) {
        ctx->pc = 0x478428u;
        goto label_478428;
    }
    ctx->pc = 0x478420u;
    {
        const bool branch_taken_0x478420 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x478420) {
            ctx->pc = 0x4783F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4783f4;
        }
    }
    ctx->pc = 0x478428u;
label_478428:
    // 0x478428: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_47842c:
    if (ctx->pc == 0x47842Cu) {
        ctx->pc = 0x478430u;
        goto label_478430;
    }
    ctx->pc = 0x478428u;
    {
        const bool branch_taken_0x478428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x478428) {
            ctx->pc = 0x478460u;
            goto label_478460;
        }
    }
    ctx->pc = 0x478430u;
label_478430:
    // 0x478430: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x478430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_478434:
    // 0x478434: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x478434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_478438:
    // 0x478438: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x478438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_47843c:
    // 0x47843c: 0xc124dcc  jal         func_493730
label_478440:
    if (ctx->pc == 0x478440u) {
        ctx->pc = 0x478444u;
        goto label_478444;
    }
    ctx->pc = 0x47843Cu;
    SET_GPR_U32(ctx, 31, 0x478444u);
    ctx->pc = 0x493730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493730u, 0x47843Cu, 0x478444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478444u;
label_478444:
    // 0x478444: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x478444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_478448:
    // 0x478448: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x478448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
label_47844c:
    // 0x47844c: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x47844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_478450:
    // 0x478450: 0xc11de00  jal         func_477800
label_478454:
    if (ctx->pc == 0x478454u) {
        ctx->pc = 0x478458u;
        goto label_478458;
    }
    ctx->pc = 0x478450u;
    SET_GPR_U32(ctx, 31, 0x478458u);
    ctx->pc = 0x477800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477800u, 0x478450u, 0x478458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478458u;
label_478458:
    // 0x478458: 0x10000008  b           . + 4 + (0x8 << 2)
label_47845c:
    if (ctx->pc == 0x47845Cu) {
        ctx->pc = 0x478460u;
        goto label_478460;
    }
    ctx->pc = 0x478458u;
    {
        const bool branch_taken_0x478458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478458) {
            ctx->pc = 0x47847Cu;
            goto label_47847c;
        }
    }
    ctx->pc = 0x478460u;
label_478460:
    // 0x478460: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x478460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_478464:
    // 0x478464: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x478464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_478468:
    // 0x478468: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x478468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_47846c:
    // 0x47846c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x47846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_478470:
    // 0x478470: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x478470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_478474:
    // 0x478474: 0x40f809  jalr        $v0
label_478478:
    if (ctx->pc == 0x478478u) {
        ctx->pc = 0x47847Cu;
        goto label_47847c;
    }
    ctx->pc = 0x478474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47847Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478474u, 0x47847Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47847Cu;
label_47847c:
    // 0x47847c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x47847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_478480:
    // 0x478480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x478480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_478484:
    // 0x478484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x478484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_478488:
    // 0x478488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x478488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47848c:
    // 0x47848c: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x47848cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_478490:
    // 0x478490: 0x3e00008  jr          $ra
label_478494:
    if (ctx->pc == 0x478494u) {
        ctx->pc = 0x478498u;
        goto label_478498;
    }
    ctx->pc = 0x478490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478498u;
label_478498:
    // 0x478498: 0x0  nop
    ctx->pc = 0x478498u;
    // NOP
label_47849c:
    // 0x47849c: 0x0  nop
    ctx->pc = 0x47849cu;
    // NOP
    ctx->pc = 0x4784a0u;
}
