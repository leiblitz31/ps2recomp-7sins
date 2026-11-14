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

// Function: sub_0044E390
// Address: 0x44e390 - 0x44e4b0
void sub_0044E390_0x44e390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E390_0x44e390");
#endif

    switch (ctx->pc) {
        case 0x44e390u: goto label_44e390;
        case 0x44e394u: goto label_44e394;
        case 0x44e398u: goto label_44e398;
        case 0x44e39cu: goto label_44e39c;
        case 0x44e3a0u: goto label_44e3a0;
        case 0x44e3a4u: goto label_44e3a4;
        case 0x44e3a8u: goto label_44e3a8;
        case 0x44e3acu: goto label_44e3ac;
        case 0x44e3b0u: goto label_44e3b0;
        case 0x44e3b4u: goto label_44e3b4;
        case 0x44e3b8u: goto label_44e3b8;
        case 0x44e3bcu: goto label_44e3bc;
        case 0x44e3c0u: goto label_44e3c0;
        case 0x44e3c4u: goto label_44e3c4;
        case 0x44e3c8u: goto label_44e3c8;
        case 0x44e3ccu: goto label_44e3cc;
        case 0x44e3d0u: goto label_44e3d0;
        case 0x44e3d4u: goto label_44e3d4;
        case 0x44e3d8u: goto label_44e3d8;
        case 0x44e3dcu: goto label_44e3dc;
        case 0x44e3e0u: goto label_44e3e0;
        case 0x44e3e4u: goto label_44e3e4;
        case 0x44e3e8u: goto label_44e3e8;
        case 0x44e3ecu: goto label_44e3ec;
        case 0x44e3f0u: goto label_44e3f0;
        case 0x44e3f4u: goto label_44e3f4;
        case 0x44e3f8u: goto label_44e3f8;
        case 0x44e3fcu: goto label_44e3fc;
        case 0x44e400u: goto label_44e400;
        case 0x44e404u: goto label_44e404;
        case 0x44e408u: goto label_44e408;
        case 0x44e40cu: goto label_44e40c;
        case 0x44e410u: goto label_44e410;
        case 0x44e414u: goto label_44e414;
        case 0x44e418u: goto label_44e418;
        case 0x44e41cu: goto label_44e41c;
        case 0x44e420u: goto label_44e420;
        case 0x44e424u: goto label_44e424;
        case 0x44e428u: goto label_44e428;
        case 0x44e42cu: goto label_44e42c;
        case 0x44e430u: goto label_44e430;
        case 0x44e434u: goto label_44e434;
        case 0x44e438u: goto label_44e438;
        case 0x44e43cu: goto label_44e43c;
        case 0x44e440u: goto label_44e440;
        case 0x44e444u: goto label_44e444;
        case 0x44e448u: goto label_44e448;
        case 0x44e44cu: goto label_44e44c;
        case 0x44e450u: goto label_44e450;
        case 0x44e454u: goto label_44e454;
        case 0x44e458u: goto label_44e458;
        case 0x44e45cu: goto label_44e45c;
        case 0x44e460u: goto label_44e460;
        case 0x44e464u: goto label_44e464;
        case 0x44e468u: goto label_44e468;
        case 0x44e46cu: goto label_44e46c;
        case 0x44e470u: goto label_44e470;
        case 0x44e474u: goto label_44e474;
        case 0x44e478u: goto label_44e478;
        case 0x44e47cu: goto label_44e47c;
        case 0x44e480u: goto label_44e480;
        case 0x44e484u: goto label_44e484;
        case 0x44e488u: goto label_44e488;
        case 0x44e48cu: goto label_44e48c;
        case 0x44e490u: goto label_44e490;
        case 0x44e494u: goto label_44e494;
        case 0x44e498u: goto label_44e498;
        case 0x44e49cu: goto label_44e49c;
        case 0x44e4a0u: goto label_44e4a0;
        case 0x44e4a4u: goto label_44e4a4;
        case 0x44e4a8u: goto label_44e4a8;
        case 0x44e4acu: goto label_44e4ac;
        default: break;
    }

    ctx->pc = 0x44e390u;

label_44e390:
    // 0x44e390: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x44e390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_44e394:
    // 0x44e394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44e394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44e398:
    // 0x44e398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44e39c:
    // 0x44e39c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x44e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_44e3a0:
    // 0x44e3a0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x44e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_44e3a4:
    // 0x44e3a4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_44e3a8:
    if (ctx->pc == 0x44E3A8u) {
        ctx->pc = 0x44E3ACu;
        goto label_44e3ac;
    }
    ctx->pc = 0x44E3A4u;
    {
        const bool branch_taken_0x44e3a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x44e3a4) {
            ctx->pc = 0x44E3BCu;
            goto label_44e3bc;
        }
    }
    ctx->pc = 0x44E3ACu;
label_44e3ac:
    // 0x44e3ac: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x44e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_44e3b0:
    // 0x44e3b0: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x44e3b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_44e3b4:
    // 0x44e3b4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_44e3b8:
    if (ctx->pc == 0x44E3B8u) {
        ctx->pc = 0x44E3BCu;
        goto label_44e3bc;
    }
    ctx->pc = 0x44E3B4u;
    {
        const bool branch_taken_0x44e3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e3b4) {
            ctx->pc = 0x44E478u;
            goto label_44e478;
        }
    }
    ctx->pc = 0x44E3BCu;
label_44e3bc:
    // 0x44e3bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x44e3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e3c0:
    // 0x44e3c0: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
label_44e3c4:
    if (ctx->pc == 0x44E3C4u) {
        ctx->pc = 0x44E3C8u;
        goto label_44e3c8;
    }
    ctx->pc = 0x44E3C0u;
    {
        const bool branch_taken_0x44e3c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x44e3c0) {
            ctx->pc = 0x44E46Cu;
            goto label_44e46c;
        }
    }
    ctx->pc = 0x44E3C8u;
label_44e3c8:
    // 0x44e3c8: 0x8f82af94  lw          $v0, -0x506C($gp)
    ctx->pc = 0x44e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946708)));
label_44e3cc:
    // 0x44e3cc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_44e3d0:
    if (ctx->pc == 0x44E3D0u) {
        ctx->pc = 0x44E3D4u;
        goto label_44e3d4;
    }
    ctx->pc = 0x44E3CCu;
    {
        const bool branch_taken_0x44e3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e3cc) {
            ctx->pc = 0x44E46Cu;
            goto label_44e46c;
        }
    }
    ctx->pc = 0x44E3D4u;
label_44e3d4:
    // 0x44e3d4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x44e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_44e3d8:
    // 0x44e3d8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x44e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_44e3dc:
    // 0x44e3dc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x44e3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_44e3e0:
    // 0x44e3e0: 0xc115ee8  jal         func_457BA0
label_44e3e4:
    if (ctx->pc == 0x44E3E4u) {
        ctx->pc = 0x44E3E8u;
        goto label_44e3e8;
    }
    ctx->pc = 0x44E3E0u;
    SET_GPR_U32(ctx, 31, 0x44E3E8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x44E3E0u, 0x44E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E3E8u;
label_44e3e8:
    // 0x44e3e8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_44e3ec:
    if (ctx->pc == 0x44E3ECu) {
        ctx->pc = 0x44E3F0u;
        goto label_44e3f0;
    }
    ctx->pc = 0x44E3E8u;
    {
        const bool branch_taken_0x44e3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e3e8) {
            ctx->pc = 0x44E46Cu;
            goto label_44e46c;
        }
    }
    ctx->pc = 0x44E3F0u;
label_44e3f0:
    // 0x44e3f0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x44e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_44e3f4:
    // 0x44e3f4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_44e3f8:
    if (ctx->pc == 0x44E3F8u) {
        ctx->pc = 0x44E3FCu;
        goto label_44e3fc;
    }
    ctx->pc = 0x44E3F4u;
    {
        const bool branch_taken_0x44e3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e3f4) {
            ctx->pc = 0x44E46Cu;
            goto label_44e46c;
        }
    }
    ctx->pc = 0x44E3FCu;
label_44e3fc:
    // 0x44e3fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x44e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44e400:
    // 0x44e400: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x44e400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_44e404:
    // 0x44e404: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x44e404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_44e408:
    // 0x44e408: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x44e408u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_44e40c:
    // 0x44e40c: 0x24e7d8d0  addiu       $a3, $a3, -0x2730
    ctx->pc = 0x44e40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957264));
label_44e410:
    // 0x44e410: 0x240800d5  addiu       $t0, $zero, 0xD5
    ctx->pc = 0x44e410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
label_44e414:
    // 0x44e414: 0x2789af98  addiu       $t1, $gp, -0x5068
    ctx->pc = 0x44e414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946712));
label_44e418:
    // 0x44e418: 0xc113940  jal         func_44E500
label_44e41c:
    if (ctx->pc == 0x44E41Cu) {
        ctx->pc = 0x44E420u;
        goto label_44e420;
    }
    ctx->pc = 0x44E418u;
    SET_GPR_U32(ctx, 31, 0x44E420u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x44E418u, 0x44E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E420u;
label_44e420:
    // 0x44e420: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x44e420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44e424:
    // 0x44e424: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x44e424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_44e428:
    // 0x44e428: 0x24a5d8e0  addiu       $a1, $a1, -0x2720
    ctx->pc = 0x44e428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957280));
label_44e42c:
    // 0x44e42c: 0xc115c24  jal         func_457090
label_44e430:
    if (ctx->pc == 0x44E430u) {
        ctx->pc = 0x44E434u;
        goto label_44e434;
    }
    ctx->pc = 0x44E42Cu;
    SET_GPR_U32(ctx, 31, 0x44E434u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x44E42Cu, 0x44E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E434u;
label_44e434:
    // 0x44e434: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x44e434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44e438:
    // 0x44e438: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x44e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_44e43c:
    // 0x44e43c: 0x40f809  jalr        $v0
label_44e440:
    if (ctx->pc == 0x44E440u) {
        ctx->pc = 0x44E444u;
        goto label_44e444;
    }
    ctx->pc = 0x44E43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44E444u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E43Cu, 0x44E444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E444u;
label_44e444:
    // 0x44e444: 0xaf82af94  sw          $v0, -0x506C($gp)
    ctx->pc = 0x44e444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946708), GPR_U32(ctx, 2));
label_44e448:
    // 0x44e448: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x44e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_44e44c:
    // 0x44e44c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44e450:
    if (ctx->pc == 0x44E450u) {
        ctx->pc = 0x44E454u;
        goto label_44e454;
    }
    ctx->pc = 0x44E44Cu;
    {
        const bool branch_taken_0x44e44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e44c) {
            ctx->pc = 0x44E45Cu;
            goto label_44e45c;
        }
    }
    ctx->pc = 0x44E454u;
label_44e454:
    // 0x44e454: 0xd  break       0
    ctx->pc = 0x44e454u;
    runtime->handleBreak(rdram, ctx);
label_44e458:
    // 0x44e458: 0x0  nop
    ctx->pc = 0x44e458u;
    // NOP
label_44e45c:
    // 0x44e45c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x44e45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44e460:
    // 0x44e460: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44e460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44e464:
    // 0x44e464: 0xc11392c  jal         func_44E4B0
label_44e468:
    if (ctx->pc == 0x44E468u) {
        ctx->pc = 0x44E46Cu;
        goto label_44e46c;
    }
    ctx->pc = 0x44E464u;
    SET_GPR_U32(ctx, 31, 0x44E46Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x44E464u, 0x44E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E46Cu;
label_44e46c:
    // 0x44e46c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44e46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e470:
    // 0x44e470: 0x10000007  b           . + 4 + (0x7 << 2)
label_44e474:
    if (ctx->pc == 0x44E474u) {
        ctx->pc = 0x44E478u;
        goto label_44e478;
    }
    ctx->pc = 0x44E470u;
    {
        const bool branch_taken_0x44e470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e470) {
            ctx->pc = 0x44E490u;
            goto label_44e490;
        }
    }
    ctx->pc = 0x44E478u;
label_44e478:
    // 0x44e478: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x44e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_44e47c:
    // 0x44e47c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x44e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_44e480:
    // 0x44e480: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x44e480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_44e484:
    // 0x44e484: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x44e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
label_44e488:
    // 0x44e488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44e488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44e48c:
    // 0x44e48c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44e490:
    // 0x44e490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44e490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44e494:
    // 0x44e494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44e494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44e498:
    // 0x44e498: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x44e498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_44e49c:
    // 0x44e49c: 0x3e00008  jr          $ra
label_44e4a0:
    if (ctx->pc == 0x44E4A0u) {
        ctx->pc = 0x44E4A4u;
        goto label_44e4a4;
    }
    ctx->pc = 0x44E49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E4A4u;
label_44e4a4:
    // 0x44e4a4: 0x0  nop
    ctx->pc = 0x44e4a4u;
    // NOP
label_44e4a8:
    // 0x44e4a8: 0x0  nop
    ctx->pc = 0x44e4a8u;
    // NOP
label_44e4ac:
    // 0x44e4ac: 0x0  nop
    ctx->pc = 0x44e4acu;
    // NOP
    ctx->pc = 0x44e4b0u;
}
