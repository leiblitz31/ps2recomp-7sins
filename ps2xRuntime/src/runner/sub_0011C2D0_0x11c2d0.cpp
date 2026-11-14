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

// Function: sub_0011C2D0
// Address: 0x11c2d0 - 0x11c440
void sub_0011C2D0_0x11c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C2D0_0x11c2d0");
#endif

    switch (ctx->pc) {
        case 0x11c2d0u: goto label_11c2d0;
        case 0x11c2d4u: goto label_11c2d4;
        case 0x11c2d8u: goto label_11c2d8;
        case 0x11c2dcu: goto label_11c2dc;
        case 0x11c2e0u: goto label_11c2e0;
        case 0x11c2e4u: goto label_11c2e4;
        case 0x11c2e8u: goto label_11c2e8;
        case 0x11c2ecu: goto label_11c2ec;
        case 0x11c2f0u: goto label_11c2f0;
        case 0x11c2f4u: goto label_11c2f4;
        case 0x11c2f8u: goto label_11c2f8;
        case 0x11c2fcu: goto label_11c2fc;
        case 0x11c300u: goto label_11c300;
        case 0x11c304u: goto label_11c304;
        case 0x11c308u: goto label_11c308;
        case 0x11c30cu: goto label_11c30c;
        case 0x11c310u: goto label_11c310;
        case 0x11c314u: goto label_11c314;
        case 0x11c318u: goto label_11c318;
        case 0x11c31cu: goto label_11c31c;
        case 0x11c320u: goto label_11c320;
        case 0x11c324u: goto label_11c324;
        case 0x11c328u: goto label_11c328;
        case 0x11c32cu: goto label_11c32c;
        case 0x11c330u: goto label_11c330;
        case 0x11c334u: goto label_11c334;
        case 0x11c338u: goto label_11c338;
        case 0x11c33cu: goto label_11c33c;
        case 0x11c340u: goto label_11c340;
        case 0x11c344u: goto label_11c344;
        case 0x11c348u: goto label_11c348;
        case 0x11c34cu: goto label_11c34c;
        case 0x11c350u: goto label_11c350;
        case 0x11c354u: goto label_11c354;
        case 0x11c358u: goto label_11c358;
        case 0x11c35cu: goto label_11c35c;
        case 0x11c360u: goto label_11c360;
        case 0x11c364u: goto label_11c364;
        case 0x11c368u: goto label_11c368;
        case 0x11c36cu: goto label_11c36c;
        case 0x11c370u: goto label_11c370;
        case 0x11c374u: goto label_11c374;
        case 0x11c378u: goto label_11c378;
        case 0x11c37cu: goto label_11c37c;
        case 0x11c380u: goto label_11c380;
        case 0x11c384u: goto label_11c384;
        case 0x11c388u: goto label_11c388;
        case 0x11c38cu: goto label_11c38c;
        case 0x11c390u: goto label_11c390;
        case 0x11c394u: goto label_11c394;
        case 0x11c398u: goto label_11c398;
        case 0x11c39cu: goto label_11c39c;
        case 0x11c3a0u: goto label_11c3a0;
        case 0x11c3a4u: goto label_11c3a4;
        case 0x11c3a8u: goto label_11c3a8;
        case 0x11c3acu: goto label_11c3ac;
        case 0x11c3b0u: goto label_11c3b0;
        case 0x11c3b4u: goto label_11c3b4;
        case 0x11c3b8u: goto label_11c3b8;
        case 0x11c3bcu: goto label_11c3bc;
        case 0x11c3c0u: goto label_11c3c0;
        case 0x11c3c4u: goto label_11c3c4;
        case 0x11c3c8u: goto label_11c3c8;
        case 0x11c3ccu: goto label_11c3cc;
        case 0x11c3d0u: goto label_11c3d0;
        case 0x11c3d4u: goto label_11c3d4;
        case 0x11c3d8u: goto label_11c3d8;
        case 0x11c3dcu: goto label_11c3dc;
        case 0x11c3e0u: goto label_11c3e0;
        case 0x11c3e4u: goto label_11c3e4;
        case 0x11c3e8u: goto label_11c3e8;
        case 0x11c3ecu: goto label_11c3ec;
        case 0x11c3f0u: goto label_11c3f0;
        case 0x11c3f4u: goto label_11c3f4;
        case 0x11c3f8u: goto label_11c3f8;
        case 0x11c3fcu: goto label_11c3fc;
        case 0x11c400u: goto label_11c400;
        case 0x11c404u: goto label_11c404;
        case 0x11c408u: goto label_11c408;
        case 0x11c40cu: goto label_11c40c;
        case 0x11c410u: goto label_11c410;
        case 0x11c414u: goto label_11c414;
        case 0x11c418u: goto label_11c418;
        case 0x11c41cu: goto label_11c41c;
        case 0x11c420u: goto label_11c420;
        case 0x11c424u: goto label_11c424;
        case 0x11c428u: goto label_11c428;
        case 0x11c42cu: goto label_11c42c;
        case 0x11c430u: goto label_11c430;
        case 0x11c434u: goto label_11c434;
        case 0x11c438u: goto label_11c438;
        case 0x11c43cu: goto label_11c43c;
        default: break;
    }

    ctx->pc = 0x11c2d0u;

label_11c2d0:
    // 0x11c2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11c2d4:
    // 0x11c2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11c2d8:
    // 0x11c2d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11c2dc:
    // 0x11c2dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11c2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_11c2e0:
    // 0x11c2e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11c2e4:
    // 0x11c2e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_11c2e8:
    if (ctx->pc == 0x11C2E8u) {
        ctx->pc = 0x11C2ECu;
        goto label_11c2ec;
    }
    ctx->pc = 0x11C2E4u;
    {
        const bool branch_taken_0x11c2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c2e4) {
            ctx->pc = 0x11C32Cu;
            goto label_11c32c;
        }
    }
    ctx->pc = 0x11C2ECu;
label_11c2ec:
    // 0x11c2ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11c2f0:
    // 0x11c2f0: 0x246333e0  addiu       $v1, $v1, 0x33E0
    ctx->pc = 0x11c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13280));
label_11c2f4:
    // 0x11c2f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11c2f8:
    // 0x11c2f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11c2fc:
    // 0x11c2fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11c300:
    // 0x11c300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c304:
    // 0x11c304: 0xc08ee04  jal         func_23B810
label_11c308:
    if (ctx->pc == 0x11C308u) {
        ctx->pc = 0x11C30Cu;
        goto label_11c30c;
    }
    ctx->pc = 0x11C304u;
    SET_GPR_U32(ctx, 31, 0x11C30Cu);
    ctx->pc = 0x23B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B810u, 0x11C304u, 0x11C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C30Cu;
label_11c30c:
    // 0x11c30c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11c30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_11c310:
    // 0x11c310: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_11c314:
    // 0x11c314: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11c314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_11c318:
    // 0x11c318: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11c31c:
    if (ctx->pc == 0x11C31Cu) {
        ctx->pc = 0x11C320u;
        goto label_11c320;
    }
    ctx->pc = 0x11C318u;
    {
        const bool branch_taken_0x11c318 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11c318) {
            ctx->pc = 0x11C32Cu;
            goto label_11c32c;
        }
    }
    ctx->pc = 0x11C320u;
label_11c320:
    // 0x11c320: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11c324:
    // 0x11c324: 0xc0ba070  jal         func_2E81C0
label_11c328:
    if (ctx->pc == 0x11C328u) {
        ctx->pc = 0x11C32Cu;
        goto label_11c32c;
    }
    ctx->pc = 0x11C324u;
    SET_GPR_U32(ctx, 31, 0x11C32Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11C324u, 0x11C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C32Cu;
label_11c32c:
    // 0x11c32c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11c330:
    // 0x11c330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11c334:
    // 0x11c334: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11c334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11c338:
    // 0x11c338: 0x3e00008  jr          $ra
label_11c33c:
    if (ctx->pc == 0x11C33Cu) {
        ctx->pc = 0x11C340u;
        goto label_11c340;
    }
    ctx->pc = 0x11C338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C340u;
label_11c340:
    // 0x11c340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11c344:
    // 0x11c344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11c348:
    // 0x11c348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11c34c:
    // 0x11c34c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_11c350:
    // 0x11c350: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11c350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11c354:
    // 0x11c354: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x11c354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_11c358:
    // 0x11c358: 0xc08ee28  jal         func_23B8A0
label_11c35c:
    if (ctx->pc == 0x11C35Cu) {
        ctx->pc = 0x11C360u;
        goto label_11c360;
    }
    ctx->pc = 0x11C358u;
    SET_GPR_U32(ctx, 31, 0x11C360u);
    ctx->pc = 0x23B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8A0u, 0x11C358u, 0x11C360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C360u;
label_11c360:
    // 0x11c360: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11c360u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c364:
    // 0x11c364: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c368:
    // 0x11c368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11c36c:
    // 0x11c36c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11c36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11c370:
    // 0x11c370: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11c370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11c374:
    // 0x11c374: 0x3e00008  jr          $ra
label_11c378:
    if (ctx->pc == 0x11C378u) {
        ctx->pc = 0x11C37Cu;
        goto label_11c37c;
    }
    ctx->pc = 0x11C374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C37Cu;
label_11c37c:
    // 0x11c37c: 0x0  nop
    ctx->pc = 0x11c37cu;
    // NOP
label_11c380:
    // 0x11c380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11c384:
    // 0x11c384: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11c384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_11c388:
    // 0x11c388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11c388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11c38c:
    // 0x11c38c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11c38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11c390:
    // 0x11c390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11c390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11c394:
    // 0x11c394: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x11c394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_11c398:
    // 0x11c398: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11c398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c39c:
    // 0x11c39c: 0x10000017  b           . + 4 + (0x17 << 2)
label_11c3a0:
    if (ctx->pc == 0x11C3A0u) {
        ctx->pc = 0x11C3A4u;
        goto label_11c3a4;
    }
    ctx->pc = 0x11C39Cu;
    {
        const bool branch_taken_0x11c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c39c) {
            ctx->pc = 0x11C3FCu;
            goto label_11c3fc;
        }
    }
    ctx->pc = 0x11C3A4u;
label_11c3a4:
    // 0x11c3a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x11c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_11c3a8:
    // 0x11c3a8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x11c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_11c3ac:
    // 0x11c3ac: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x11c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_11c3b0:
    // 0x11c3b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11c3b4:
    // 0x11c3b4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x11c3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11c3b8:
    // 0x11c3b8: 0x1010000f  beq         $zero, $s0, . + 4 + (0xF << 2)
label_11c3bc:
    if (ctx->pc == 0x11C3BCu) {
        ctx->pc = 0x11C3C0u;
        goto label_11c3c0;
    }
    ctx->pc = 0x11C3B8u;
    {
        const bool branch_taken_0x11c3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x11c3b8) {
            ctx->pc = 0x11C3F8u;
            goto label_11c3f8;
        }
    }
    ctx->pc = 0x11C3C0u;
label_11c3c0:
    // 0x11c3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c3c4:
    // 0x11c3c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11c3c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11c3c8:
    // 0x11c3c8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x11c3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_11c3cc:
    // 0x11c3cc: 0x320f809  jalr        $t9
label_11c3d0:
    if (ctx->pc == 0x11C3D0u) {
        ctx->pc = 0x11C3D4u;
        goto label_11c3d4;
    }
    ctx->pc = 0x11C3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11C3D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C3CCu, 0x11C3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C3D4u;
label_11c3d4:
    // 0x11c3d4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_11c3d8:
    if (ctx->pc == 0x11C3D8u) {
        ctx->pc = 0x11C3DCu;
        goto label_11c3dc;
    }
    ctx->pc = 0x11C3D4u;
    {
        const bool branch_taken_0x11c3d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c3d4) {
            ctx->pc = 0x11C3F8u;
            goto label_11c3f8;
        }
    }
    ctx->pc = 0x11C3DCu;
label_11c3dc:
    // 0x11c3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c3e0:
    // 0x11c3e0: 0xc047110  jal         func_11C440
label_11c3e4:
    if (ctx->pc == 0x11C3E4u) {
        ctx->pc = 0x11C3E8u;
        goto label_11c3e8;
    }
    ctx->pc = 0x11C3E0u;
    SET_GPR_U32(ctx, 31, 0x11C3E8u);
    ctx->pc = 0x11C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C440u, 0x11C3E0u, 0x11C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3E8u;
label_11c3e8:
    // 0x11c3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c3ec:
    // 0x11c3ec: 0xc119c5c  jal         func_467170
label_11c3f0:
    if (ctx->pc == 0x11C3F0u) {
        ctx->pc = 0x11C3F4u;
        goto label_11c3f4;
    }
    ctx->pc = 0x11C3ECu;
    SET_GPR_U32(ctx, 31, 0x11C3F4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x11C3ECu, 0x11C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3F4u;
label_11c3f4:
    // 0x11c3f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11c3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c3f8:
    // 0x11c3f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11c3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11c3fc:
    // 0x11c3fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x11c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_11c400:
    // 0x11c400: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x11c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_11c404:
    // 0x11c404: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x11c404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11c408:
    // 0x11c408: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_11c40c:
    if (ctx->pc == 0x11C40Cu) {
        ctx->pc = 0x11C410u;
        goto label_11c410;
    }
    ctx->pc = 0x11C408u;
    {
        const bool branch_taken_0x11c408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c408) {
            ctx->pc = 0x11C3A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c3a4;
        }
    }
    ctx->pc = 0x11C410u;
label_11c410:
    // 0x11c410: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x11c410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_11c414:
    // 0x11c414: 0xc08ee7c  jal         func_23B9F0
label_11c418:
    if (ctx->pc == 0x11C418u) {
        ctx->pc = 0x11C41Cu;
        goto label_11c41c;
    }
    ctx->pc = 0x11C414u;
    SET_GPR_U32(ctx, 31, 0x11C41Cu);
    ctx->pc = 0x23B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B9F0u, 0x11C414u, 0x11C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C41Cu;
label_11c41c:
    // 0x11c41c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x11c41cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c420:
    // 0x11c420: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11c420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11c424:
    // 0x11c424: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11c428:
    // 0x11c428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11c428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11c42c:
    // 0x11c42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11c42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11c430:
    // 0x11c430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11c430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11c434:
    // 0x11c434: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11c434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11c438:
    // 0x11c438: 0x3e00008  jr          $ra
label_11c43c:
    if (ctx->pc == 0x11C43Cu) {
        ctx->pc = 0x11C440u;
        goto label_fallthrough_0x11c438;
    }
    ctx->pc = 0x11C438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11c438:
    ctx->pc = 0x11C440u;
}
