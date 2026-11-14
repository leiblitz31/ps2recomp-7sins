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

// Function: sub_004812D0
// Address: 0x4812d0 - 0x481400
void sub_004812D0_0x4812d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004812D0_0x4812d0");
#endif

    switch (ctx->pc) {
        case 0x4812d0u: goto label_4812d0;
        case 0x4812d4u: goto label_4812d4;
        case 0x4812d8u: goto label_4812d8;
        case 0x4812dcu: goto label_4812dc;
        case 0x4812e0u: goto label_4812e0;
        case 0x4812e4u: goto label_4812e4;
        case 0x4812e8u: goto label_4812e8;
        case 0x4812ecu: goto label_4812ec;
        case 0x4812f0u: goto label_4812f0;
        case 0x4812f4u: goto label_4812f4;
        case 0x4812f8u: goto label_4812f8;
        case 0x4812fcu: goto label_4812fc;
        case 0x481300u: goto label_481300;
        case 0x481304u: goto label_481304;
        case 0x481308u: goto label_481308;
        case 0x48130cu: goto label_48130c;
        case 0x481310u: goto label_481310;
        case 0x481314u: goto label_481314;
        case 0x481318u: goto label_481318;
        case 0x48131cu: goto label_48131c;
        case 0x481320u: goto label_481320;
        case 0x481324u: goto label_481324;
        case 0x481328u: goto label_481328;
        case 0x48132cu: goto label_48132c;
        case 0x481330u: goto label_481330;
        case 0x481334u: goto label_481334;
        case 0x481338u: goto label_481338;
        case 0x48133cu: goto label_48133c;
        case 0x481340u: goto label_481340;
        case 0x481344u: goto label_481344;
        case 0x481348u: goto label_481348;
        case 0x48134cu: goto label_48134c;
        case 0x481350u: goto label_481350;
        case 0x481354u: goto label_481354;
        case 0x481358u: goto label_481358;
        case 0x48135cu: goto label_48135c;
        case 0x481360u: goto label_481360;
        case 0x481364u: goto label_481364;
        case 0x481368u: goto label_481368;
        case 0x48136cu: goto label_48136c;
        case 0x481370u: goto label_481370;
        case 0x481374u: goto label_481374;
        case 0x481378u: goto label_481378;
        case 0x48137cu: goto label_48137c;
        case 0x481380u: goto label_481380;
        case 0x481384u: goto label_481384;
        case 0x481388u: goto label_481388;
        case 0x48138cu: goto label_48138c;
        case 0x481390u: goto label_481390;
        case 0x481394u: goto label_481394;
        case 0x481398u: goto label_481398;
        case 0x48139cu: goto label_48139c;
        case 0x4813a0u: goto label_4813a0;
        case 0x4813a4u: goto label_4813a4;
        case 0x4813a8u: goto label_4813a8;
        case 0x4813acu: goto label_4813ac;
        case 0x4813b0u: goto label_4813b0;
        case 0x4813b4u: goto label_4813b4;
        case 0x4813b8u: goto label_4813b8;
        case 0x4813bcu: goto label_4813bc;
        case 0x4813c0u: goto label_4813c0;
        case 0x4813c4u: goto label_4813c4;
        case 0x4813c8u: goto label_4813c8;
        case 0x4813ccu: goto label_4813cc;
        case 0x4813d0u: goto label_4813d0;
        case 0x4813d4u: goto label_4813d4;
        case 0x4813d8u: goto label_4813d8;
        case 0x4813dcu: goto label_4813dc;
        case 0x4813e0u: goto label_4813e0;
        case 0x4813e4u: goto label_4813e4;
        case 0x4813e8u: goto label_4813e8;
        case 0x4813ecu: goto label_4813ec;
        case 0x4813f0u: goto label_4813f0;
        case 0x4813f4u: goto label_4813f4;
        case 0x4813f8u: goto label_4813f8;
        case 0x4813fcu: goto label_4813fc;
        default: break;
    }

    ctx->pc = 0x4812d0u;

label_4812d0:
    // 0x4812d0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x4812d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_4812d4:
    // 0x4812d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4812d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4812d8:
    // 0x4812d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4812d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4812dc:
    // 0x4812dc: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x4812dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_4812e0:
    // 0x4812e0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x4812e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4812e4:
    // 0x4812e4: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x4812e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4812e8:
    // 0x4812e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4812e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4812ec:
    // 0x4812ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4812ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4812f0:
    // 0x4812f0: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_4812f4:
    if (ctx->pc == 0x4812F4u) {
        ctx->pc = 0x4812F8u;
        goto label_4812f8;
    }
    ctx->pc = 0x4812F0u;
    {
        const bool branch_taken_0x4812f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4812f0) {
            ctx->pc = 0x481398u;
            goto label_481398;
        }
    }
    ctx->pc = 0x4812F8u;
label_4812f8:
    // 0x4812f8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4812f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4812fc:
    // 0x4812fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4812fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_481300:
    // 0x481300: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x481300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_481304:
    // 0x481304: 0xc115ee8  jal         func_457BA0
label_481308:
    if (ctx->pc == 0x481308u) {
        ctx->pc = 0x48130Cu;
        goto label_48130c;
    }
    ctx->pc = 0x481304u;
    SET_GPR_U32(ctx, 31, 0x48130Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x481304u, 0x48130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48130Cu;
label_48130c:
    // 0x48130c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_481310:
    if (ctx->pc == 0x481310u) {
        ctx->pc = 0x481314u;
        goto label_481314;
    }
    ctx->pc = 0x48130Cu;
    {
        const bool branch_taken_0x48130c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48130c) {
            ctx->pc = 0x48138Cu;
            goto label_48138c;
        }
    }
    ctx->pc = 0x481314u;
label_481314:
    // 0x481314: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x481314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_481318:
    // 0x481318: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_48131c:
    if (ctx->pc == 0x48131Cu) {
        ctx->pc = 0x481320u;
        goto label_481320;
    }
    ctx->pc = 0x481318u;
    {
        const bool branch_taken_0x481318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481318) {
            ctx->pc = 0x48138Cu;
            goto label_48138c;
        }
    }
    ctx->pc = 0x481320u;
label_481320:
    // 0x481320: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x481320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_481324:
    // 0x481324: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x481324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_481328:
    // 0x481328: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x481328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_48132c:
    // 0x48132c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x48132cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_481330:
    // 0x481330: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x481330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_481334:
    // 0x481334: 0x240802c0  addiu       $t0, $zero, 0x2C0
    ctx->pc = 0x481334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
label_481338:
    // 0x481338: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x481338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48133c:
    // 0x48133c: 0xc113940  jal         func_44E500
label_481340:
    if (ctx->pc == 0x481340u) {
        ctx->pc = 0x481344u;
        goto label_481344;
    }
    ctx->pc = 0x48133Cu;
    SET_GPR_U32(ctx, 31, 0x481344u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48133Cu, 0x481344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481344u;
label_481344:
    // 0x481344: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x481344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_481348:
    // 0x481348: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x481348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_48134c:
    // 0x48134c: 0x24a51b50  addiu       $a1, $a1, 0x1B50
    ctx->pc = 0x48134cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6992));
label_481350:
    // 0x481350: 0xc115c24  jal         func_457090
label_481354:
    if (ctx->pc == 0x481354u) {
        ctx->pc = 0x481358u;
        goto label_481358;
    }
    ctx->pc = 0x481350u;
    SET_GPR_U32(ctx, 31, 0x481358u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x481350u, 0x481358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481358u;
label_481358:
    // 0x481358: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x481358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48135c:
    // 0x48135c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x48135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_481360:
    // 0x481360: 0x40f809  jalr        $v0
label_481364:
    if (ctx->pc == 0x481364u) {
        ctx->pc = 0x481368u;
        goto label_481368;
    }
    ctx->pc = 0x481360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x481368u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481360u, 0x481368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x481368u;
label_481368:
    // 0x481368: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_48136c:
    // 0x48136c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_481370:
    if (ctx->pc == 0x481370u) {
        ctx->pc = 0x481374u;
        goto label_481374;
    }
    ctx->pc = 0x48136Cu;
    {
        const bool branch_taken_0x48136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48136c) {
            ctx->pc = 0x48137Cu;
            goto label_48137c;
        }
    }
    ctx->pc = 0x481374u;
label_481374:
    // 0x481374: 0xd  break       0
    ctx->pc = 0x481374u;
    runtime->handleBreak(rdram, ctx);
label_481378:
    // 0x481378: 0x0  nop
    ctx->pc = 0x481378u;
    // NOP
label_48137c:
    // 0x48137c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48137cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_481380:
    // 0x481380: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x481380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_481384:
    // 0x481384: 0xc11392c  jal         func_44E4B0
label_481388:
    if (ctx->pc == 0x481388u) {
        ctx->pc = 0x48138Cu;
        goto label_48138c;
    }
    ctx->pc = 0x481384u;
    SET_GPR_U32(ctx, 31, 0x48138Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x481384u, 0x48138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48138Cu;
label_48138c:
    // 0x48138c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48138cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481390:
    // 0x481390: 0x10000015  b           . + 4 + (0x15 << 2)
label_481394:
    if (ctx->pc == 0x481394u) {
        ctx->pc = 0x481398u;
        goto label_481398;
    }
    ctx->pc = 0x481390u;
    {
        const bool branch_taken_0x481390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x481390) {
            ctx->pc = 0x4813E8u;
            goto label_4813e8;
        }
    }
    ctx->pc = 0x481398u;
label_481398:
    // 0x481398: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x481398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48139c:
    // 0x48139c: 0xc0f52f8  jal         func_3D4BE0
label_4813a0:
    if (ctx->pc == 0x4813A0u) {
        ctx->pc = 0x4813A4u;
        goto label_4813a4;
    }
    ctx->pc = 0x48139Cu;
    SET_GPR_U32(ctx, 31, 0x4813A4u);
    ctx->pc = 0x3D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4BE0u, 0x48139Cu, 0x4813A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4813A4u;
label_4813a4:
    // 0x4813a4: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x4813a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_4813a8:
    // 0x4813a8: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x4813a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4813ac:
    // 0x4813ac: 0xc0f52fe  jal         func_3D4BF8
label_4813b0:
    if (ctx->pc == 0x4813B0u) {
        ctx->pc = 0x4813B4u;
        goto label_4813b4;
    }
    ctx->pc = 0x4813ACu;
    SET_GPR_U32(ctx, 31, 0x4813B4u);
    ctx->pc = 0x3D4BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4BF8u, 0x4813ACu, 0x4813B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4813B4u;
label_4813b4:
    // 0x4813b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4813b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4813b8:
    // 0x4813b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4813b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_4813bc:
    // 0x4813bc: 0x24a51400  addiu       $a1, $a1, 0x1400
    ctx->pc = 0x4813bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5120));
label_4813c0:
    // 0x4813c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4813c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4813c4:
    // 0x4813c4: 0xc0e3396  jal         func_38CE58
label_4813c8:
    if (ctx->pc == 0x4813C8u) {
        ctx->pc = 0x4813CCu;
        goto label_4813cc;
    }
    ctx->pc = 0x4813C4u;
    SET_GPR_U32(ctx, 31, 0x4813CCu);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x4813C4u, 0x4813CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4813CCu;
label_4813cc:
    // 0x4813cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4813ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4813d0:
    // 0x4813d0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4813d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_4813d4:
    // 0x4813d4: 0x24a51440  addiu       $a1, $a1, 0x1440
    ctx->pc = 0x4813d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5184));
label_4813d8:
    // 0x4813d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4813d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4813dc:
    // 0x4813dc: 0xc0e3396  jal         func_38CE58
label_4813e0:
    if (ctx->pc == 0x4813E0u) {
        ctx->pc = 0x4813E4u;
        goto label_4813e4;
    }
    ctx->pc = 0x4813DCu;
    SET_GPR_U32(ctx, 31, 0x4813E4u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x4813DCu, 0x4813E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4813E4u;
label_4813e4:
    // 0x4813e4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x4813e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4813e8:
    // 0x4813e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4813e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4813ec:
    // 0x4813ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4813ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4813f0:
    // 0x4813f0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x4813f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4813f4:
    // 0x4813f4: 0x3e00008  jr          $ra
label_4813f8:
    if (ctx->pc == 0x4813F8u) {
        ctx->pc = 0x4813FCu;
        goto label_4813fc;
    }
    ctx->pc = 0x4813F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4813F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4813FCu;
label_4813fc:
    // 0x4813fc: 0x0  nop
    ctx->pc = 0x4813fcu;
    // NOP
    ctx->pc = 0x481400u;
}
