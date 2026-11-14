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

// Function: sub_0046F3D0
// Address: 0x46f3d0 - 0x46f4d0
void sub_0046F3D0_0x46f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F3D0_0x46f3d0");
#endif

    switch (ctx->pc) {
        case 0x46f3d0u: goto label_46f3d0;
        case 0x46f3d4u: goto label_46f3d4;
        case 0x46f3d8u: goto label_46f3d8;
        case 0x46f3dcu: goto label_46f3dc;
        case 0x46f3e0u: goto label_46f3e0;
        case 0x46f3e4u: goto label_46f3e4;
        case 0x46f3e8u: goto label_46f3e8;
        case 0x46f3ecu: goto label_46f3ec;
        case 0x46f3f0u: goto label_46f3f0;
        case 0x46f3f4u: goto label_46f3f4;
        case 0x46f3f8u: goto label_46f3f8;
        case 0x46f3fcu: goto label_46f3fc;
        case 0x46f400u: goto label_46f400;
        case 0x46f404u: goto label_46f404;
        case 0x46f408u: goto label_46f408;
        case 0x46f40cu: goto label_46f40c;
        case 0x46f410u: goto label_46f410;
        case 0x46f414u: goto label_46f414;
        case 0x46f418u: goto label_46f418;
        case 0x46f41cu: goto label_46f41c;
        case 0x46f420u: goto label_46f420;
        case 0x46f424u: goto label_46f424;
        case 0x46f428u: goto label_46f428;
        case 0x46f42cu: goto label_46f42c;
        case 0x46f430u: goto label_46f430;
        case 0x46f434u: goto label_46f434;
        case 0x46f438u: goto label_46f438;
        case 0x46f43cu: goto label_46f43c;
        case 0x46f440u: goto label_46f440;
        case 0x46f444u: goto label_46f444;
        case 0x46f448u: goto label_46f448;
        case 0x46f44cu: goto label_46f44c;
        case 0x46f450u: goto label_46f450;
        case 0x46f454u: goto label_46f454;
        case 0x46f458u: goto label_46f458;
        case 0x46f45cu: goto label_46f45c;
        case 0x46f460u: goto label_46f460;
        case 0x46f464u: goto label_46f464;
        case 0x46f468u: goto label_46f468;
        case 0x46f46cu: goto label_46f46c;
        case 0x46f470u: goto label_46f470;
        case 0x46f474u: goto label_46f474;
        case 0x46f478u: goto label_46f478;
        case 0x46f47cu: goto label_46f47c;
        case 0x46f480u: goto label_46f480;
        case 0x46f484u: goto label_46f484;
        case 0x46f488u: goto label_46f488;
        case 0x46f48cu: goto label_46f48c;
        case 0x46f490u: goto label_46f490;
        case 0x46f494u: goto label_46f494;
        case 0x46f498u: goto label_46f498;
        case 0x46f49cu: goto label_46f49c;
        case 0x46f4a0u: goto label_46f4a0;
        case 0x46f4a4u: goto label_46f4a4;
        case 0x46f4a8u: goto label_46f4a8;
        case 0x46f4acu: goto label_46f4ac;
        case 0x46f4b0u: goto label_46f4b0;
        case 0x46f4b4u: goto label_46f4b4;
        case 0x46f4b8u: goto label_46f4b8;
        case 0x46f4bcu: goto label_46f4bc;
        case 0x46f4c0u: goto label_46f4c0;
        case 0x46f4c4u: goto label_46f4c4;
        case 0x46f4c8u: goto label_46f4c8;
        case 0x46f4ccu: goto label_46f4cc;
        default: break;
    }

    ctx->pc = 0x46f3d0u;

label_46f3d0:
    // 0x46f3d0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x46f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_46f3d4:
    // 0x46f3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46f3d8:
    // 0x46f3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46f3dc:
    // 0x46f3dc: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x46f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_46f3e0:
    // 0x46f3e0: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x46f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_46f3e4:
    // 0x46f3e4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x46f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_46f3e8:
    // 0x46f3e8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46f3ec:
    // 0x46f3ec: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x46f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_46f3f0:
    // 0x46f3f0: 0xc11a4b4  jal         func_4692D0
label_46f3f4:
    if (ctx->pc == 0x46F3F4u) {
        ctx->pc = 0x46F3F8u;
        goto label_46f3f8;
    }
    ctx->pc = 0x46F3F0u;
    SET_GPR_U32(ctx, 31, 0x46F3F8u);
    ctx->pc = 0x4692D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4692D0u, 0x46F3F0u, 0x46F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F3F8u;
label_46f3f8:
    // 0x46f3f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46f3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f3fc:
    // 0x46f3fc: 0x1600002e  bnez        $s0, . + 4 + (0x2E << 2)
label_46f400:
    if (ctx->pc == 0x46F400u) {
        ctx->pc = 0x46F404u;
        goto label_46f404;
    }
    ctx->pc = 0x46F3FCu;
    {
        const bool branch_taken_0x46f3fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f3fc) {
            ctx->pc = 0x46F4B8u;
            goto label_46f4b8;
        }
    }
    ctx->pc = 0x46F404u;
label_46f404:
    // 0x46f404: 0x8f82b308  lw          $v0, -0x4CF8($gp)
    ctx->pc = 0x46f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947592)));
label_46f408:
    // 0x46f408: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_46f40c:
    if (ctx->pc == 0x46F40Cu) {
        ctx->pc = 0x46F410u;
        goto label_46f410;
    }
    ctx->pc = 0x46F408u;
    {
        const bool branch_taken_0x46f408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f408) {
            ctx->pc = 0x46F4B8u;
            goto label_46f4b8;
        }
    }
    ctx->pc = 0x46F410u;
label_46f410:
    // 0x46f410: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46f414:
    // 0x46f414: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46f414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46f418:
    // 0x46f418: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x46f418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_46f41c:
    // 0x46f41c: 0xc115ee8  jal         func_457BA0
label_46f420:
    if (ctx->pc == 0x46F420u) {
        ctx->pc = 0x46F424u;
        goto label_46f424;
    }
    ctx->pc = 0x46F41Cu;
    SET_GPR_U32(ctx, 31, 0x46F424u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46F41Cu, 0x46F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F424u;
label_46f424:
    // 0x46f424: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_46f428:
    if (ctx->pc == 0x46F428u) {
        ctx->pc = 0x46F42Cu;
        goto label_46f42c;
    }
    ctx->pc = 0x46F424u;
    {
        const bool branch_taken_0x46f424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f424) {
            ctx->pc = 0x46F4B8u;
            goto label_46f4b8;
        }
    }
    ctx->pc = 0x46F42Cu;
label_46f42c:
    // 0x46f42c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x46f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_46f430:
    // 0x46f430: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46f434:
    if (ctx->pc == 0x46F434u) {
        ctx->pc = 0x46F438u;
        goto label_46f438;
    }
    ctx->pc = 0x46F430u;
    {
        const bool branch_taken_0x46f430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f430) {
            ctx->pc = 0x46F4B8u;
            goto label_46f4b8;
        }
    }
    ctx->pc = 0x46F438u;
label_46f438:
    // 0x46f438: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46f438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46f43c:
    // 0x46f43c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46f440:
    // 0x46f440: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x46f440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_46f444:
    // 0x46f444: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46f444u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46f448:
    // 0x46f448: 0x24e7fb90  addiu       $a3, $a3, -0x470
    ctx->pc = 0x46f448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966160));
label_46f44c:
    // 0x46f44c: 0x24080031  addiu       $t0, $zero, 0x31
    ctx->pc = 0x46f44cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_46f450:
    // 0x46f450: 0x2789b310  addiu       $t1, $gp, -0x4CF0
    ctx->pc = 0x46f450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947600));
label_46f454:
    // 0x46f454: 0xc113940  jal         func_44E500
label_46f458:
    if (ctx->pc == 0x46F458u) {
        ctx->pc = 0x46F45Cu;
        goto label_46f45c;
    }
    ctx->pc = 0x46F454u;
    SET_GPR_U32(ctx, 31, 0x46F45Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46F454u, 0x46F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F45Cu;
label_46f45c:
    // 0x46f45c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x46f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_46f460:
    // 0x46f460: 0xc041b38  jal         func_106CE0
label_46f464:
    if (ctx->pc == 0x46F464u) {
        ctx->pc = 0x46F468u;
        goto label_46f468;
    }
    ctx->pc = 0x46F460u;
    SET_GPR_U32(ctx, 31, 0x46F468u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46F460u, 0x46F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F468u;
label_46f468:
    // 0x46f468: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46f468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46f46c:
    // 0x46f46c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46f470:
    // 0x46f470: 0x24a5fbb0  addiu       $a1, $a1, -0x450
    ctx->pc = 0x46f470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966192));
label_46f474:
    // 0x46f474: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46f474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f478:
    // 0x46f478: 0xc115c24  jal         func_457090
label_46f47c:
    if (ctx->pc == 0x46F47Cu) {
        ctx->pc = 0x46F480u;
        goto label_46f480;
    }
    ctx->pc = 0x46F478u;
    SET_GPR_U32(ctx, 31, 0x46F480u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46F478u, 0x46F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F480u;
label_46f480:
    // 0x46f480: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46f480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46f484:
    // 0x46f484: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x46f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_46f488:
    // 0x46f488: 0x40f809  jalr        $v0
label_46f48c:
    if (ctx->pc == 0x46F48Cu) {
        ctx->pc = 0x46F490u;
        goto label_46f490;
    }
    ctx->pc = 0x46F488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F490u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F488u, 0x46F490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F490u;
label_46f490:
    // 0x46f490: 0xaf82b308  sw          $v0, -0x4CF8($gp)
    ctx->pc = 0x46f490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947592), GPR_U32(ctx, 2));
label_46f494:
    // 0x46f494: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_46f498:
    // 0x46f498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46f49c:
    if (ctx->pc == 0x46F49Cu) {
        ctx->pc = 0x46F4A0u;
        goto label_46f4a0;
    }
    ctx->pc = 0x46F498u;
    {
        const bool branch_taken_0x46f498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f498) {
            ctx->pc = 0x46F4A8u;
            goto label_46f4a8;
        }
    }
    ctx->pc = 0x46F4A0u;
label_46f4a0:
    // 0x46f4a0: 0xd  break       0
    ctx->pc = 0x46f4a0u;
    runtime->handleBreak(rdram, ctx);
label_46f4a4:
    // 0x46f4a4: 0x0  nop
    ctx->pc = 0x46f4a4u;
    // NOP
label_46f4a8:
    // 0x46f4a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46f4ac:
    // 0x46f4ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46f4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46f4b0:
    // 0x46f4b0: 0xc11392c  jal         func_44E4B0
label_46f4b4:
    if (ctx->pc == 0x46F4B4u) {
        ctx->pc = 0x46F4B8u;
        goto label_46f4b8;
    }
    ctx->pc = 0x46F4B0u;
    SET_GPR_U32(ctx, 31, 0x46F4B8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46F4B0u, 0x46F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F4B8u;
label_46f4b8:
    // 0x46f4b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46f4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46f4bc:
    // 0x46f4bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46f4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46f4c0:
    // 0x46f4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46f4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46f4c4:
    // 0x46f4c4: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x46f4c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_46f4c8:
    // 0x46f4c8: 0x3e00008  jr          $ra
label_46f4cc:
    if (ctx->pc == 0x46F4CCu) {
        ctx->pc = 0x46F4D0u;
        goto label_fallthrough_0x46f4c8;
    }
    ctx->pc = 0x46F4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46f4c8:
    ctx->pc = 0x46F4D0u;
}
