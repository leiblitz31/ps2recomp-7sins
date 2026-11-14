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

// Function: sub_0048C300
// Address: 0x48c300 - 0x48c510
void sub_0048C300_0x48c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C300_0x48c300");
#endif

    switch (ctx->pc) {
        case 0x48c300u: goto label_48c300;
        case 0x48c304u: goto label_48c304;
        case 0x48c308u: goto label_48c308;
        case 0x48c30cu: goto label_48c30c;
        case 0x48c310u: goto label_48c310;
        case 0x48c314u: goto label_48c314;
        case 0x48c318u: goto label_48c318;
        case 0x48c31cu: goto label_48c31c;
        case 0x48c320u: goto label_48c320;
        case 0x48c324u: goto label_48c324;
        case 0x48c328u: goto label_48c328;
        case 0x48c32cu: goto label_48c32c;
        case 0x48c330u: goto label_48c330;
        case 0x48c334u: goto label_48c334;
        case 0x48c338u: goto label_48c338;
        case 0x48c33cu: goto label_48c33c;
        case 0x48c340u: goto label_48c340;
        case 0x48c344u: goto label_48c344;
        case 0x48c348u: goto label_48c348;
        case 0x48c34cu: goto label_48c34c;
        case 0x48c350u: goto label_48c350;
        case 0x48c354u: goto label_48c354;
        case 0x48c358u: goto label_48c358;
        case 0x48c35cu: goto label_48c35c;
        case 0x48c360u: goto label_48c360;
        case 0x48c364u: goto label_48c364;
        case 0x48c368u: goto label_48c368;
        case 0x48c36cu: goto label_48c36c;
        case 0x48c370u: goto label_48c370;
        case 0x48c374u: goto label_48c374;
        case 0x48c378u: goto label_48c378;
        case 0x48c37cu: goto label_48c37c;
        case 0x48c380u: goto label_48c380;
        case 0x48c384u: goto label_48c384;
        case 0x48c388u: goto label_48c388;
        case 0x48c38cu: goto label_48c38c;
        case 0x48c390u: goto label_48c390;
        case 0x48c394u: goto label_48c394;
        case 0x48c398u: goto label_48c398;
        case 0x48c39cu: goto label_48c39c;
        case 0x48c3a0u: goto label_48c3a0;
        case 0x48c3a4u: goto label_48c3a4;
        case 0x48c3a8u: goto label_48c3a8;
        case 0x48c3acu: goto label_48c3ac;
        case 0x48c3b0u: goto label_48c3b0;
        case 0x48c3b4u: goto label_48c3b4;
        case 0x48c3b8u: goto label_48c3b8;
        case 0x48c3bcu: goto label_48c3bc;
        case 0x48c3c0u: goto label_48c3c0;
        case 0x48c3c4u: goto label_48c3c4;
        case 0x48c3c8u: goto label_48c3c8;
        case 0x48c3ccu: goto label_48c3cc;
        case 0x48c3d0u: goto label_48c3d0;
        case 0x48c3d4u: goto label_48c3d4;
        case 0x48c3d8u: goto label_48c3d8;
        case 0x48c3dcu: goto label_48c3dc;
        case 0x48c3e0u: goto label_48c3e0;
        case 0x48c3e4u: goto label_48c3e4;
        case 0x48c3e8u: goto label_48c3e8;
        case 0x48c3ecu: goto label_48c3ec;
        case 0x48c3f0u: goto label_48c3f0;
        case 0x48c3f4u: goto label_48c3f4;
        case 0x48c3f8u: goto label_48c3f8;
        case 0x48c3fcu: goto label_48c3fc;
        case 0x48c400u: goto label_48c400;
        case 0x48c404u: goto label_48c404;
        case 0x48c408u: goto label_48c408;
        case 0x48c40cu: goto label_48c40c;
        case 0x48c410u: goto label_48c410;
        case 0x48c414u: goto label_48c414;
        case 0x48c418u: goto label_48c418;
        case 0x48c41cu: goto label_48c41c;
        case 0x48c420u: goto label_48c420;
        case 0x48c424u: goto label_48c424;
        case 0x48c428u: goto label_48c428;
        case 0x48c42cu: goto label_48c42c;
        case 0x48c430u: goto label_48c430;
        case 0x48c434u: goto label_48c434;
        case 0x48c438u: goto label_48c438;
        case 0x48c43cu: goto label_48c43c;
        case 0x48c440u: goto label_48c440;
        case 0x48c444u: goto label_48c444;
        case 0x48c448u: goto label_48c448;
        case 0x48c44cu: goto label_48c44c;
        case 0x48c450u: goto label_48c450;
        case 0x48c454u: goto label_48c454;
        case 0x48c458u: goto label_48c458;
        case 0x48c45cu: goto label_48c45c;
        case 0x48c460u: goto label_48c460;
        case 0x48c464u: goto label_48c464;
        case 0x48c468u: goto label_48c468;
        case 0x48c46cu: goto label_48c46c;
        case 0x48c470u: goto label_48c470;
        case 0x48c474u: goto label_48c474;
        case 0x48c478u: goto label_48c478;
        case 0x48c47cu: goto label_48c47c;
        case 0x48c480u: goto label_48c480;
        case 0x48c484u: goto label_48c484;
        case 0x48c488u: goto label_48c488;
        case 0x48c48cu: goto label_48c48c;
        case 0x48c490u: goto label_48c490;
        case 0x48c494u: goto label_48c494;
        case 0x48c498u: goto label_48c498;
        case 0x48c49cu: goto label_48c49c;
        case 0x48c4a0u: goto label_48c4a0;
        case 0x48c4a4u: goto label_48c4a4;
        case 0x48c4a8u: goto label_48c4a8;
        case 0x48c4acu: goto label_48c4ac;
        case 0x48c4b0u: goto label_48c4b0;
        case 0x48c4b4u: goto label_48c4b4;
        case 0x48c4b8u: goto label_48c4b8;
        case 0x48c4bcu: goto label_48c4bc;
        case 0x48c4c0u: goto label_48c4c0;
        case 0x48c4c4u: goto label_48c4c4;
        case 0x48c4c8u: goto label_48c4c8;
        case 0x48c4ccu: goto label_48c4cc;
        case 0x48c4d0u: goto label_48c4d0;
        case 0x48c4d4u: goto label_48c4d4;
        case 0x48c4d8u: goto label_48c4d8;
        case 0x48c4dcu: goto label_48c4dc;
        case 0x48c4e0u: goto label_48c4e0;
        case 0x48c4e4u: goto label_48c4e4;
        case 0x48c4e8u: goto label_48c4e8;
        case 0x48c4ecu: goto label_48c4ec;
        case 0x48c4f0u: goto label_48c4f0;
        case 0x48c4f4u: goto label_48c4f4;
        case 0x48c4f8u: goto label_48c4f8;
        case 0x48c4fcu: goto label_48c4fc;
        case 0x48c500u: goto label_48c500;
        case 0x48c504u: goto label_48c504;
        case 0x48c508u: goto label_48c508;
        case 0x48c50cu: goto label_48c50c;
        default: break;
    }

    ctx->pc = 0x48c300u;

label_48c300:
    // 0x48c300: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x48c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_48c304:
    // 0x48c304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48c308:
    // 0x48c308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48c30c:
    // 0x48c30c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c310:
    // 0x48c310: 0xafa40290  sw          $a0, 0x290($sp)
    ctx->pc = 0x48c310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 4));
label_48c314:
    // 0x48c314: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x48c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_48c318:
    // 0x48c318: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c31c:
    // 0x48c31c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48c31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48c320:
    // 0x48c320: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48c320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48c324:
    // 0x48c324: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48c328:
    if (ctx->pc == 0x48C328u) {
        ctx->pc = 0x48C32Cu;
        goto label_48c32c;
    }
    ctx->pc = 0x48C324u;
    {
        const bool branch_taken_0x48c324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c324) {
            ctx->pc = 0x48C3D4u;
            goto label_48c3d4;
        }
    }
    ctx->pc = 0x48C32Cu;
label_48c32c:
    // 0x48c32c: 0x8f82b650  lw          $v0, -0x49B0($gp)
    ctx->pc = 0x48c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948432)));
label_48c330:
    // 0x48c330: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48c334:
    if (ctx->pc == 0x48C334u) {
        ctx->pc = 0x48C338u;
        goto label_48c338;
    }
    ctx->pc = 0x48C330u;
    {
        const bool branch_taken_0x48c330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c330) {
            ctx->pc = 0x48C3D4u;
            goto label_48c3d4;
        }
    }
    ctx->pc = 0x48C338u;
label_48c338:
    // 0x48c338: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48c33c:
    // 0x48c33c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c340:
    // 0x48c340: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x48c340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_48c344:
    // 0x48c344: 0xc115ee8  jal         func_457BA0
label_48c348:
    if (ctx->pc == 0x48C348u) {
        ctx->pc = 0x48C34Cu;
        goto label_48c34c;
    }
    ctx->pc = 0x48C344u;
    SET_GPR_U32(ctx, 31, 0x48C34Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48C344u, 0x48C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C34Cu;
label_48c34c:
    // 0x48c34c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48c350:
    if (ctx->pc == 0x48C350u) {
        ctx->pc = 0x48C354u;
        goto label_48c354;
    }
    ctx->pc = 0x48C34Cu;
    {
        const bool branch_taken_0x48c34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c34c) {
            ctx->pc = 0x48C3D4u;
            goto label_48c3d4;
        }
    }
    ctx->pc = 0x48C354u;
label_48c354:
    // 0x48c354: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x48c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_48c358:
    // 0x48c358: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48c35c:
    if (ctx->pc == 0x48C35Cu) {
        ctx->pc = 0x48C360u;
        goto label_48c360;
    }
    ctx->pc = 0x48C358u;
    {
        const bool branch_taken_0x48c358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c358) {
            ctx->pc = 0x48C3D4u;
            goto label_48c3d4;
        }
    }
    ctx->pc = 0x48C360u;
label_48c360:
    // 0x48c360: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x48c360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48c364:
    // 0x48c364: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c368:
    // 0x48c368: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x48c368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_48c36c:
    // 0x48c36c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48c36cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48c370:
    // 0x48c370: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48c370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48c374:
    // 0x48c374: 0x24080092  addiu       $t0, $zero, 0x92
    ctx->pc = 0x48c374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_48c378:
    // 0x48c378: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48c378u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48c37c:
    // 0x48c37c: 0x25294990  addiu       $t1, $t1, 0x4990
    ctx->pc = 0x48c37cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18832));
label_48c380:
    // 0x48c380: 0xc113940  jal         func_44E500
label_48c384:
    if (ctx->pc == 0x48C384u) {
        ctx->pc = 0x48C388u;
        goto label_48c388;
    }
    ctx->pc = 0x48C380u;
    SET_GPR_U32(ctx, 31, 0x48C388u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48C380u, 0x48C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C388u;
label_48c388:
    // 0x48c388: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x48c388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48c38c:
    // 0x48c38c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48c38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48c390:
    // 0x48c390: 0x24a549b0  addiu       $a1, $a1, 0x49B0
    ctx->pc = 0x48c390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18864));
label_48c394:
    // 0x48c394: 0xc115c24  jal         func_457090
label_48c398:
    if (ctx->pc == 0x48C398u) {
        ctx->pc = 0x48C39Cu;
        goto label_48c39c;
    }
    ctx->pc = 0x48C394u;
    SET_GPR_U32(ctx, 31, 0x48C39Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48C394u, 0x48C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C39Cu;
label_48c39c:
    // 0x48c39c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x48c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48c3a0:
    // 0x48c3a0: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x48c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_48c3a4:
    // 0x48c3a4: 0x40f809  jalr        $v0
label_48c3a8:
    if (ctx->pc == 0x48C3A8u) {
        ctx->pc = 0x48C3ACu;
        goto label_48c3ac;
    }
    ctx->pc = 0x48C3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48C3ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C3A4u, 0x48C3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48C3ACu;
label_48c3ac:
    // 0x48c3ac: 0xaf82b650  sw          $v0, -0x49B0($gp)
    ctx->pc = 0x48c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948432), GPR_U32(ctx, 2));
label_48c3b0:
    // 0x48c3b0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48c3b4:
    // 0x48c3b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48c3b8:
    if (ctx->pc == 0x48C3B8u) {
        ctx->pc = 0x48C3BCu;
        goto label_48c3bc;
    }
    ctx->pc = 0x48C3B4u;
    {
        const bool branch_taken_0x48c3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c3b4) {
            ctx->pc = 0x48C3C4u;
            goto label_48c3c4;
        }
    }
    ctx->pc = 0x48C3BCu;
label_48c3bc:
    // 0x48c3bc: 0xd  break       0
    ctx->pc = 0x48c3bcu;
    runtime->handleBreak(rdram, ctx);
label_48c3c0:
    // 0x48c3c0: 0x0  nop
    ctx->pc = 0x48c3c0u;
    // NOP
label_48c3c4:
    // 0x48c3c4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x48c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48c3c8:
    // 0x48c3c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48c3cc:
    // 0x48c3cc: 0xc11392c  jal         func_44E4B0
label_48c3d0:
    if (ctx->pc == 0x48C3D0u) {
        ctx->pc = 0x48C3D4u;
        goto label_48c3d4;
    }
    ctx->pc = 0x48C3CCu;
    SET_GPR_U32(ctx, 31, 0x48C3D4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48C3CCu, 0x48C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C3D4u;
label_48c3d4:
    // 0x48c3d4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x48c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_48c3d8:
    // 0x48c3d8: 0xc119b68  jal         func_466DA0
label_48c3dc:
    if (ctx->pc == 0x48C3DCu) {
        ctx->pc = 0x48C3E0u;
        goto label_48c3e0;
    }
    ctx->pc = 0x48C3D8u;
    SET_GPR_U32(ctx, 31, 0x48C3E0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x48C3D8u, 0x48C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C3E0u;
label_48c3e0:
    // 0x48c3e0: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x48c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_48c3e4:
    // 0x48c3e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48c3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48c3e8:
    // 0x48c3e8: 0xc0400e0  jal         func_100380
label_48c3ec:
    if (ctx->pc == 0x48C3ECu) {
        ctx->pc = 0x48C3F0u;
        goto label_48c3f0;
    }
    ctx->pc = 0x48C3E8u;
    SET_GPR_U32(ctx, 31, 0x48C3F0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x48C3E8u, 0x48C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C3F0u;
label_48c3f0:
    // 0x48c3f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48c3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48c3f4:
    // 0x48c3f4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_48c3f8:
    if (ctx->pc == 0x48C3F8u) {
        ctx->pc = 0x48C3FCu;
        goto label_48c3fc;
    }
    ctx->pc = 0x48C3F4u;
    {
        const bool branch_taken_0x48c3f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c3f4) {
            ctx->pc = 0x48C40Cu;
            goto label_48c40c;
        }
    }
    ctx->pc = 0x48C3FCu;
label_48c3fc:
    // 0x48c3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48c400:
    // 0x48c400: 0xc122e6c  jal         func_48B9B0
label_48c404:
    if (ctx->pc == 0x48C404u) {
        ctx->pc = 0x48C408u;
        goto label_48c408;
    }
    ctx->pc = 0x48C400u;
    SET_GPR_U32(ctx, 31, 0x48C408u);
    ctx->pc = 0x48B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B9B0u, 0x48C400u, 0x48C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C408u;
label_48c408:
    // 0x48c408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48c408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48c40c:
    // 0x48c40c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x48c40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48c410:
    // 0x48c410: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x48c410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_48c414:
    // 0x48c414: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48c414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48c418:
    // 0x48c418: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48c41c:
    if (ctx->pc == 0x48C41Cu) {
        ctx->pc = 0x48C420u;
        goto label_48c420;
    }
    ctx->pc = 0x48C418u;
    {
        const bool branch_taken_0x48c418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c418) {
            ctx->pc = 0x48C4C8u;
            goto label_48c4c8;
        }
    }
    ctx->pc = 0x48C420u;
label_48c420:
    // 0x48c420: 0x8f82b654  lw          $v0, -0x49AC($gp)
    ctx->pc = 0x48c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948436)));
label_48c424:
    // 0x48c424: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48c428:
    if (ctx->pc == 0x48C428u) {
        ctx->pc = 0x48C42Cu;
        goto label_48c42c;
    }
    ctx->pc = 0x48C424u;
    {
        const bool branch_taken_0x48c424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c424) {
            ctx->pc = 0x48C4C8u;
            goto label_48c4c8;
        }
    }
    ctx->pc = 0x48C42Cu;
label_48c42c:
    // 0x48c42c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48c430:
    // 0x48c430: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c434:
    // 0x48c434: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x48c434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_48c438:
    // 0x48c438: 0xc115ee8  jal         func_457BA0
label_48c43c:
    if (ctx->pc == 0x48C43Cu) {
        ctx->pc = 0x48C440u;
        goto label_48c440;
    }
    ctx->pc = 0x48C438u;
    SET_GPR_U32(ctx, 31, 0x48C440u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48C438u, 0x48C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C440u;
label_48c440:
    // 0x48c440: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48c444:
    if (ctx->pc == 0x48C444u) {
        ctx->pc = 0x48C448u;
        goto label_48c448;
    }
    ctx->pc = 0x48C440u;
    {
        const bool branch_taken_0x48c440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c440) {
            ctx->pc = 0x48C4C8u;
            goto label_48c4c8;
        }
    }
    ctx->pc = 0x48C448u;
label_48c448:
    // 0x48c448: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x48c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_48c44c:
    // 0x48c44c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48c450:
    if (ctx->pc == 0x48C450u) {
        ctx->pc = 0x48C454u;
        goto label_48c454;
    }
    ctx->pc = 0x48C44Cu;
    {
        const bool branch_taken_0x48c44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c44c) {
            ctx->pc = 0x48C4C8u;
            goto label_48c4c8;
        }
    }
    ctx->pc = 0x48C454u;
label_48c454:
    // 0x48c454: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48c454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48c458:
    // 0x48c458: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c45c:
    // 0x48c45c: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x48c45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_48c460:
    // 0x48c460: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48c460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48c464:
    // 0x48c464: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48c464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48c468:
    // 0x48c468: 0x24080095  addiu       $t0, $zero, 0x95
    ctx->pc = 0x48c468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_48c46c:
    // 0x48c46c: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48c46cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48c470:
    // 0x48c470: 0x25294a00  addiu       $t1, $t1, 0x4A00
    ctx->pc = 0x48c470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18944));
label_48c474:
    // 0x48c474: 0xc113940  jal         func_44E500
label_48c478:
    if (ctx->pc == 0x48C478u) {
        ctx->pc = 0x48C47Cu;
        goto label_48c47c;
    }
    ctx->pc = 0x48C474u;
    SET_GPR_U32(ctx, 31, 0x48C47Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48C474u, 0x48C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C47Cu;
label_48c47c:
    // 0x48c47c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48c480:
    // 0x48c480: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48c480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48c484:
    // 0x48c484: 0x24a54a20  addiu       $a1, $a1, 0x4A20
    ctx->pc = 0x48c484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18976));
label_48c488:
    // 0x48c488: 0xc115c24  jal         func_457090
label_48c48c:
    if (ctx->pc == 0x48C48Cu) {
        ctx->pc = 0x48C490u;
        goto label_48c490;
    }
    ctx->pc = 0x48C488u;
    SET_GPR_U32(ctx, 31, 0x48C490u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48C488u, 0x48C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C490u;
label_48c490:
    // 0x48c490: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48c490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48c494:
    // 0x48c494: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x48c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_48c498:
    // 0x48c498: 0x40f809  jalr        $v0
label_48c49c:
    if (ctx->pc == 0x48C49Cu) {
        ctx->pc = 0x48C4A0u;
        goto label_48c4a0;
    }
    ctx->pc = 0x48C498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48C4A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C498u, 0x48C4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48C4A0u;
label_48c4a0:
    // 0x48c4a0: 0xaf82b654  sw          $v0, -0x49AC($gp)
    ctx->pc = 0x48c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948436), GPR_U32(ctx, 2));
label_48c4a4:
    // 0x48c4a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_48c4a8:
    // 0x48c4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48c4ac:
    if (ctx->pc == 0x48C4ACu) {
        ctx->pc = 0x48C4B0u;
        goto label_48c4b0;
    }
    ctx->pc = 0x48C4A8u;
    {
        const bool branch_taken_0x48c4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c4a8) {
            ctx->pc = 0x48C4B8u;
            goto label_48c4b8;
        }
    }
    ctx->pc = 0x48C4B0u;
label_48c4b0:
    // 0x48c4b0: 0xd  break       0
    ctx->pc = 0x48c4b0u;
    runtime->handleBreak(rdram, ctx);
label_48c4b4:
    // 0x48c4b4: 0x0  nop
    ctx->pc = 0x48c4b4u;
    // NOP
label_48c4b8:
    // 0x48c4b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48c4bc:
    // 0x48c4bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48c4c0:
    // 0x48c4c0: 0xc11392c  jal         func_44E4B0
label_48c4c4:
    if (ctx->pc == 0x48C4C4u) {
        ctx->pc = 0x48C4C8u;
        goto label_48c4c8;
    }
    ctx->pc = 0x48C4C0u;
    SET_GPR_U32(ctx, 31, 0x48C4C8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48C4C0u, 0x48C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C4C8u;
label_48c4c8:
    // 0x48c4c8: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x48c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_48c4cc:
    // 0x48c4cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c4d0:
    // 0x48c4d0: 0xc0e2772  jal         func_389DC8
label_48c4d4:
    if (ctx->pc == 0x48C4D4u) {
        ctx->pc = 0x48C4D8u;
        goto label_48c4d8;
    }
    ctx->pc = 0x48C4D0u;
    SET_GPR_U32(ctx, 31, 0x48C4D8u);
    ctx->pc = 0x389DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389DC8u, 0x48C4D0u, 0x48C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C4D8u;
label_48c4d8:
    // 0x48c4d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x48c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_48c4dc:
    // 0x48c4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48c4e0:
    // 0x48c4e0: 0xc1234ac  jal         func_48D2B0
label_48c4e4:
    if (ctx->pc == 0x48C4E4u) {
        ctx->pc = 0x48C4E8u;
        goto label_48c4e8;
    }
    ctx->pc = 0x48C4E0u;
    SET_GPR_U32(ctx, 31, 0x48C4E8u);
    ctx->pc = 0x48D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D2B0u, 0x48C4E0u, 0x48C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C4E8u;
label_48c4e8:
    // 0x48c4e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c4ec:
    // 0x48c4ec: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x48c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_48c4f0:
    // 0x48c4f0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x48c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_48c4f4:
    // 0x48c4f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48c4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48c4f8:
    // 0x48c4f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48c4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48c4fc:
    // 0x48c4fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48c4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48c500:
    // 0x48c500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c504:
    // 0x48c504: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x48c504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_48c508:
    // 0x48c508: 0x3e00008  jr          $ra
label_48c50c:
    if (ctx->pc == 0x48C50Cu) {
        ctx->pc = 0x48C510u;
        goto label_fallthrough_0x48c508;
    }
    ctx->pc = 0x48C508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48c508:
    ctx->pc = 0x48C510u;
}
