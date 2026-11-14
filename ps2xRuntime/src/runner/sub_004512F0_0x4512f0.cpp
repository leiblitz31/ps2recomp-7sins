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

// Function: sub_004512F0
// Address: 0x4512f0 - 0x451470
void sub_004512F0_0x4512f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004512F0_0x4512f0");
#endif

    switch (ctx->pc) {
        case 0x4512f0u: goto label_4512f0;
        case 0x4512f4u: goto label_4512f4;
        case 0x4512f8u: goto label_4512f8;
        case 0x4512fcu: goto label_4512fc;
        case 0x451300u: goto label_451300;
        case 0x451304u: goto label_451304;
        case 0x451308u: goto label_451308;
        case 0x45130cu: goto label_45130c;
        case 0x451310u: goto label_451310;
        case 0x451314u: goto label_451314;
        case 0x451318u: goto label_451318;
        case 0x45131cu: goto label_45131c;
        case 0x451320u: goto label_451320;
        case 0x451324u: goto label_451324;
        case 0x451328u: goto label_451328;
        case 0x45132cu: goto label_45132c;
        case 0x451330u: goto label_451330;
        case 0x451334u: goto label_451334;
        case 0x451338u: goto label_451338;
        case 0x45133cu: goto label_45133c;
        case 0x451340u: goto label_451340;
        case 0x451344u: goto label_451344;
        case 0x451348u: goto label_451348;
        case 0x45134cu: goto label_45134c;
        case 0x451350u: goto label_451350;
        case 0x451354u: goto label_451354;
        case 0x451358u: goto label_451358;
        case 0x45135cu: goto label_45135c;
        case 0x451360u: goto label_451360;
        case 0x451364u: goto label_451364;
        case 0x451368u: goto label_451368;
        case 0x45136cu: goto label_45136c;
        case 0x451370u: goto label_451370;
        case 0x451374u: goto label_451374;
        case 0x451378u: goto label_451378;
        case 0x45137cu: goto label_45137c;
        case 0x451380u: goto label_451380;
        case 0x451384u: goto label_451384;
        case 0x451388u: goto label_451388;
        case 0x45138cu: goto label_45138c;
        case 0x451390u: goto label_451390;
        case 0x451394u: goto label_451394;
        case 0x451398u: goto label_451398;
        case 0x45139cu: goto label_45139c;
        case 0x4513a0u: goto label_4513a0;
        case 0x4513a4u: goto label_4513a4;
        case 0x4513a8u: goto label_4513a8;
        case 0x4513acu: goto label_4513ac;
        case 0x4513b0u: goto label_4513b0;
        case 0x4513b4u: goto label_4513b4;
        case 0x4513b8u: goto label_4513b8;
        case 0x4513bcu: goto label_4513bc;
        case 0x4513c0u: goto label_4513c0;
        case 0x4513c4u: goto label_4513c4;
        case 0x4513c8u: goto label_4513c8;
        case 0x4513ccu: goto label_4513cc;
        case 0x4513d0u: goto label_4513d0;
        case 0x4513d4u: goto label_4513d4;
        case 0x4513d8u: goto label_4513d8;
        case 0x4513dcu: goto label_4513dc;
        case 0x4513e0u: goto label_4513e0;
        case 0x4513e4u: goto label_4513e4;
        case 0x4513e8u: goto label_4513e8;
        case 0x4513ecu: goto label_4513ec;
        case 0x4513f0u: goto label_4513f0;
        case 0x4513f4u: goto label_4513f4;
        case 0x4513f8u: goto label_4513f8;
        case 0x4513fcu: goto label_4513fc;
        case 0x451400u: goto label_451400;
        case 0x451404u: goto label_451404;
        case 0x451408u: goto label_451408;
        case 0x45140cu: goto label_45140c;
        case 0x451410u: goto label_451410;
        case 0x451414u: goto label_451414;
        case 0x451418u: goto label_451418;
        case 0x45141cu: goto label_45141c;
        case 0x451420u: goto label_451420;
        case 0x451424u: goto label_451424;
        case 0x451428u: goto label_451428;
        case 0x45142cu: goto label_45142c;
        case 0x451430u: goto label_451430;
        case 0x451434u: goto label_451434;
        case 0x451438u: goto label_451438;
        case 0x45143cu: goto label_45143c;
        case 0x451440u: goto label_451440;
        case 0x451444u: goto label_451444;
        case 0x451448u: goto label_451448;
        case 0x45144cu: goto label_45144c;
        case 0x451450u: goto label_451450;
        case 0x451454u: goto label_451454;
        case 0x451458u: goto label_451458;
        case 0x45145cu: goto label_45145c;
        case 0x451460u: goto label_451460;
        case 0x451464u: goto label_451464;
        case 0x451468u: goto label_451468;
        case 0x45146cu: goto label_45146c;
        default: break;
    }

    ctx->pc = 0x4512f0u;

label_4512f0:
    // 0x4512f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4512f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4512f4:
    // 0x4512f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4512f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4512f8:
    // 0x4512f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4512f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4512fc:
    // 0x4512fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4512fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_451300:
    // 0x451300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x451300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_451304:
    // 0x451304: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x451304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_451308:
    // 0x451308: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x451308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45130c:
    // 0x45130c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x45130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_451310:
    // 0x451310: 0xc114338  jal         func_450CE0
label_451314:
    if (ctx->pc == 0x451314u) {
        ctx->pc = 0x451318u;
        goto label_451318;
    }
    ctx->pc = 0x451310u;
    SET_GPR_U32(ctx, 31, 0x451318u);
    ctx->pc = 0x450CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450CE0u, 0x451310u, 0x451318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451318u;
label_451318:
    // 0x451318: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x451318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45131c:
    // 0x45131c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_451320:
    if (ctx->pc == 0x451320u) {
        ctx->pc = 0x451324u;
        goto label_451324;
    }
    ctx->pc = 0x45131Cu;
    {
        const bool branch_taken_0x45131c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x45131c) {
            ctx->pc = 0x451330u;
            goto label_451330;
        }
    }
    ctx->pc = 0x451324u;
label_451324:
    // 0x451324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x451324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451328:
    // 0x451328: 0x10000048  b           . + 4 + (0x48 << 2)
label_45132c:
    if (ctx->pc == 0x45132Cu) {
        ctx->pc = 0x451330u;
        goto label_451330;
    }
    ctx->pc = 0x451328u;
    {
        const bool branch_taken_0x451328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451328) {
            ctx->pc = 0x45144Cu;
            goto label_45144c;
        }
    }
    ctx->pc = 0x451330u;
label_451330:
    // 0x451330: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x451330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451334:
    // 0x451334: 0x10000041  b           . + 4 + (0x41 << 2)
label_451338:
    if (ctx->pc == 0x451338u) {
        ctx->pc = 0x45133Cu;
        goto label_45133c;
    }
    ctx->pc = 0x451334u;
    {
        const bool branch_taken_0x451334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451334) {
            ctx->pc = 0x45143Cu;
            goto label_45143c;
        }
    }
    ctx->pc = 0x45133Cu;
label_45133c:
    // 0x45133c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_451340:
    // 0x451340: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x451340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_451344:
    // 0x451344: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x451344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_451348:
    // 0x451348: 0xc11451c  jal         func_451470
label_45134c:
    if (ctx->pc == 0x45134Cu) {
        ctx->pc = 0x451350u;
        goto label_451350;
    }
    ctx->pc = 0x451348u;
    SET_GPR_U32(ctx, 31, 0x451350u);
    ctx->pc = 0x451470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451470u, 0x451348u, 0x451350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451350u;
label_451350:
    // 0x451350: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x451350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_451354:
    // 0x451354: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x451354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_451358:
    // 0x451358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x451358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45135c:
    // 0x45135c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_451360:
    if (ctx->pc == 0x451360u) {
        ctx->pc = 0x451364u;
        goto label_451364;
    }
    ctx->pc = 0x45135Cu;
    {
        const bool branch_taken_0x45135c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45135c) {
            ctx->pc = 0x45140Cu;
            goto label_45140c;
        }
    }
    ctx->pc = 0x451364u;
label_451364:
    // 0x451364: 0x8f82afdc  lw          $v0, -0x5024($gp)
    ctx->pc = 0x451364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946780)));
label_451368:
    // 0x451368: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_45136c:
    if (ctx->pc == 0x45136Cu) {
        ctx->pc = 0x451370u;
        goto label_451370;
    }
    ctx->pc = 0x451368u;
    {
        const bool branch_taken_0x451368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451368) {
            ctx->pc = 0x45140Cu;
            goto label_45140c;
        }
    }
    ctx->pc = 0x451370u;
label_451370:
    // 0x451370: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x451370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_451374:
    // 0x451374: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451378:
    // 0x451378: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x451378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_45137c:
    // 0x45137c: 0xc115ee8  jal         func_457BA0
label_451380:
    if (ctx->pc == 0x451380u) {
        ctx->pc = 0x451384u;
        goto label_451384;
    }
    ctx->pc = 0x45137Cu;
    SET_GPR_U32(ctx, 31, 0x451384u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45137Cu, 0x451384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451384u;
label_451384:
    // 0x451384: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_451388:
    if (ctx->pc == 0x451388u) {
        ctx->pc = 0x45138Cu;
        goto label_45138c;
    }
    ctx->pc = 0x451384u;
    {
        const bool branch_taken_0x451384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451384) {
            ctx->pc = 0x45140Cu;
            goto label_45140c;
        }
    }
    ctx->pc = 0x45138Cu;
label_45138c:
    // 0x45138c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x45138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_451390:
    // 0x451390: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_451394:
    if (ctx->pc == 0x451394u) {
        ctx->pc = 0x451398u;
        goto label_451398;
    }
    ctx->pc = 0x451390u;
    {
        const bool branch_taken_0x451390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451390) {
            ctx->pc = 0x45140Cu;
            goto label_45140c;
        }
    }
    ctx->pc = 0x451398u;
label_451398:
    // 0x451398: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x451398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_45139c:
    // 0x45139c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4513a0:
    // 0x4513a0: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x4513a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_4513a4:
    // 0x4513a4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4513a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4513a8:
    // 0x4513a8: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x4513a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_4513ac:
    // 0x4513ac: 0x240801da  addiu       $t0, $zero, 0x1DA
    ctx->pc = 0x4513acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 474));
label_4513b0:
    // 0x4513b0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4513b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4513b4:
    // 0x4513b4: 0x2529dc40  addiu       $t1, $t1, -0x23C0
    ctx->pc = 0x4513b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958144));
label_4513b8:
    // 0x4513b8: 0xc113940  jal         func_44E500
label_4513bc:
    if (ctx->pc == 0x4513BCu) {
        ctx->pc = 0x4513C0u;
        goto label_4513c0;
    }
    ctx->pc = 0x4513B8u;
    SET_GPR_U32(ctx, 31, 0x4513C0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4513B8u, 0x4513C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4513C0u;
label_4513c0:
    // 0x4513c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4513c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4513c4:
    // 0x4513c4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4513c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4513c8:
    // 0x4513c8: 0x24a5dc60  addiu       $a1, $a1, -0x23A0
    ctx->pc = 0x4513c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958176));
label_4513cc:
    // 0x4513cc: 0xc115c24  jal         func_457090
label_4513d0:
    if (ctx->pc == 0x4513D0u) {
        ctx->pc = 0x4513D4u;
        goto label_4513d4;
    }
    ctx->pc = 0x4513CCu;
    SET_GPR_U32(ctx, 31, 0x4513D4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4513CCu, 0x4513D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4513D4u;
label_4513d4:
    // 0x4513d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4513d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4513d8:
    // 0x4513d8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x4513d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_4513dc:
    // 0x4513dc: 0x40f809  jalr        $v0
label_4513e0:
    if (ctx->pc == 0x4513E0u) {
        ctx->pc = 0x4513E4u;
        goto label_4513e4;
    }
    ctx->pc = 0x4513DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4513E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4513DCu, 0x4513E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4513E4u;
label_4513e4:
    // 0x4513e4: 0xaf82afdc  sw          $v0, -0x5024($gp)
    ctx->pc = 0x4513e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946780), GPR_U32(ctx, 2));
label_4513e8:
    // 0x4513e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4513e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4513ec:
    // 0x4513ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4513f0:
    if (ctx->pc == 0x4513F0u) {
        ctx->pc = 0x4513F4u;
        goto label_4513f4;
    }
    ctx->pc = 0x4513ECu;
    {
        const bool branch_taken_0x4513ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4513ec) {
            ctx->pc = 0x4513FCu;
            goto label_4513fc;
        }
    }
    ctx->pc = 0x4513F4u;
label_4513f4:
    // 0x4513f4: 0xd  break       0
    ctx->pc = 0x4513f4u;
    runtime->handleBreak(rdram, ctx);
label_4513f8:
    // 0x4513f8: 0x0  nop
    ctx->pc = 0x4513f8u;
    // NOP
label_4513fc:
    // 0x4513fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4513fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_451400:
    // 0x451400: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451404:
    // 0x451404: 0xc11392c  jal         func_44E4B0
label_451408:
    if (ctx->pc == 0x451408u) {
        ctx->pc = 0x45140Cu;
        goto label_45140c;
    }
    ctx->pc = 0x451404u;
    SET_GPR_U32(ctx, 31, 0x45140Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x451404u, 0x45140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45140Cu;
label_45140c:
    // 0x45140c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x45140cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_451410:
    // 0x451410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x451410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_451414:
    // 0x451414: 0xc11436c  jal         func_450DB0
label_451418:
    if (ctx->pc == 0x451418u) {
        ctx->pc = 0x45141Cu;
        goto label_45141c;
    }
    ctx->pc = 0x451414u;
    SET_GPR_U32(ctx, 31, 0x45141Cu);
    ctx->pc = 0x450DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450DB0u, 0x451414u, 0x45141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45141Cu;
label_45141c:
    // 0x45141c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x45141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_451420:
    // 0x451420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_451424:
    if (ctx->pc == 0x451424u) {
        ctx->pc = 0x451428u;
        goto label_451428;
    }
    ctx->pc = 0x451420u;
    {
        const bool branch_taken_0x451420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451420) {
            ctx->pc = 0x451438u;
            goto label_451438;
        }
    }
    ctx->pc = 0x451428u;
label_451428:
    // 0x451428: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x451428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45142c:
    // 0x45142c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45142cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_451430:
    // 0x451430: 0xc114650  jal         func_451940
label_451434:
    if (ctx->pc == 0x451434u) {
        ctx->pc = 0x451438u;
        goto label_451438;
    }
    ctx->pc = 0x451430u;
    SET_GPR_U32(ctx, 31, 0x451438u);
    ctx->pc = 0x451940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451940u, 0x451430u, 0x451438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451438u;
label_451438:
    // 0x451438: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x451438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_45143c:
    // 0x45143c: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x45143cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_451440:
    // 0x451440: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_451444:
    if (ctx->pc == 0x451444u) {
        ctx->pc = 0x451448u;
        goto label_451448;
    }
    ctx->pc = 0x451440u;
    {
        const bool branch_taken_0x451440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451440) {
            ctx->pc = 0x45133Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45133c;
        }
    }
    ctx->pc = 0x451448u;
label_451448:
    // 0x451448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x451448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45144c:
    // 0x45144c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45144cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_451450:
    // 0x451450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x451450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_451454:
    // 0x451454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x451454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_451458:
    // 0x451458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x451458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45145c:
    // 0x45145c: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x45145cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_451460:
    // 0x451460: 0x3e00008  jr          $ra
label_451464:
    if (ctx->pc == 0x451464u) {
        ctx->pc = 0x451468u;
        goto label_451468;
    }
    ctx->pc = 0x451460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451468u;
label_451468:
    // 0x451468: 0x0  nop
    ctx->pc = 0x451468u;
    // NOP
label_45146c:
    // 0x45146c: 0x0  nop
    ctx->pc = 0x45146cu;
    // NOP
    ctx->pc = 0x451470u;
}
