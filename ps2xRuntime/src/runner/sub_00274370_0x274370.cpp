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

// Function: sub_00274370
// Address: 0x274370 - 0x274450
void sub_00274370_0x274370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274370_0x274370");
#endif

    switch (ctx->pc) {
        case 0x274370u: goto label_274370;
        case 0x274374u: goto label_274374;
        case 0x274378u: goto label_274378;
        case 0x27437cu: goto label_27437c;
        case 0x274380u: goto label_274380;
        case 0x274384u: goto label_274384;
        case 0x274388u: goto label_274388;
        case 0x27438cu: goto label_27438c;
        case 0x274390u: goto label_274390;
        case 0x274394u: goto label_274394;
        case 0x274398u: goto label_274398;
        case 0x27439cu: goto label_27439c;
        case 0x2743a0u: goto label_2743a0;
        case 0x2743a4u: goto label_2743a4;
        case 0x2743a8u: goto label_2743a8;
        case 0x2743acu: goto label_2743ac;
        case 0x2743b0u: goto label_2743b0;
        case 0x2743b4u: goto label_2743b4;
        case 0x2743b8u: goto label_2743b8;
        case 0x2743bcu: goto label_2743bc;
        case 0x2743c0u: goto label_2743c0;
        case 0x2743c4u: goto label_2743c4;
        case 0x2743c8u: goto label_2743c8;
        case 0x2743ccu: goto label_2743cc;
        case 0x2743d0u: goto label_2743d0;
        case 0x2743d4u: goto label_2743d4;
        case 0x2743d8u: goto label_2743d8;
        case 0x2743dcu: goto label_2743dc;
        case 0x2743e0u: goto label_2743e0;
        case 0x2743e4u: goto label_2743e4;
        case 0x2743e8u: goto label_2743e8;
        case 0x2743ecu: goto label_2743ec;
        case 0x2743f0u: goto label_2743f0;
        case 0x2743f4u: goto label_2743f4;
        case 0x2743f8u: goto label_2743f8;
        case 0x2743fcu: goto label_2743fc;
        case 0x274400u: goto label_274400;
        case 0x274404u: goto label_274404;
        case 0x274408u: goto label_274408;
        case 0x27440cu: goto label_27440c;
        case 0x274410u: goto label_274410;
        case 0x274414u: goto label_274414;
        case 0x274418u: goto label_274418;
        case 0x27441cu: goto label_27441c;
        case 0x274420u: goto label_274420;
        case 0x274424u: goto label_274424;
        case 0x274428u: goto label_274428;
        case 0x27442cu: goto label_27442c;
        case 0x274430u: goto label_274430;
        case 0x274434u: goto label_274434;
        case 0x274438u: goto label_274438;
        case 0x27443cu: goto label_27443c;
        case 0x274440u: goto label_274440;
        case 0x274444u: goto label_274444;
        case 0x274448u: goto label_274448;
        case 0x27444cu: goto label_27444c;
        default: break;
    }

    ctx->pc = 0x274370u;

label_274370:
    // 0x274370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_274374:
    // 0x274374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_274378:
    // 0x274378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_27437c:
    // 0x27437c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27437cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_274380:
    // 0x274380: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x274380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_274384:
    // 0x274384: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x274384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_274388:
    // 0x274388: 0x24050484  addiu       $a1, $zero, 0x484
    ctx->pc = 0x274388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
label_27438c:
    // 0x27438c: 0xc040924  jal         func_102490
label_274390:
    if (ctx->pc == 0x274390u) {
        ctx->pc = 0x274394u;
        goto label_274394;
    }
    ctx->pc = 0x27438Cu;
    SET_GPR_U32(ctx, 31, 0x274394u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x27438Cu, 0x274394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274394u;
label_274394:
    // 0x274394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_274398:
    // 0x274398: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x274398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27439c:
    // 0x27439c: 0x3e00008  jr          $ra
label_2743a0:
    if (ctx->pc == 0x2743A0u) {
        ctx->pc = 0x2743A4u;
        goto label_2743a4;
    }
    ctx->pc = 0x27439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27439Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2743A4u;
label_2743a4:
    // 0x2743a4: 0x0  nop
    ctx->pc = 0x2743a4u;
    // NOP
label_2743a8:
    // 0x2743a8: 0x0  nop
    ctx->pc = 0x2743a8u;
    // NOP
label_2743ac:
    // 0x2743ac: 0x0  nop
    ctx->pc = 0x2743acu;
    // NOP
label_2743b0:
    // 0x2743b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2743b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2743b4:
    // 0x2743b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2743b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2743b8:
    // 0x2743b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2743b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2743bc:
    // 0x2743bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2743bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2743c0:
    // 0x2743c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2743c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2743c4:
    // 0x2743c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2743c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2743c8:
    // 0x2743c8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2743c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2743cc:
    // 0x2743cc: 0xc08904c  jal         func_224130
label_2743d0:
    if (ctx->pc == 0x2743D0u) {
        ctx->pc = 0x2743D4u;
        goto label_2743d4;
    }
    ctx->pc = 0x2743CCu;
    SET_GPR_U32(ctx, 31, 0x2743D4u);
    ctx->pc = 0x224130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224130u, 0x2743CCu, 0x2743D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2743D4u;
label_2743d4:
    // 0x2743d4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2743d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2743d8:
    // 0x2743d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2743d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2743dc:
    // 0x2743dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2743dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2743e0:
    // 0x2743e0: 0xc08ec98  jal         func_23B260
label_2743e4:
    if (ctx->pc == 0x2743E4u) {
        ctx->pc = 0x2743E8u;
        goto label_2743e8;
    }
    ctx->pc = 0x2743E0u;
    SET_GPR_U32(ctx, 31, 0x2743E8u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x2743E0u, 0x2743E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2743E8u;
label_2743e8:
    // 0x2743e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2743ec:
    // 0x2743ec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2743ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2743f0:
    // 0x2743f0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2743f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2743f4:
    // 0x2743f4: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x2743f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2743f8:
    // 0x2743f8: 0xc0422a8  jal         func_108AA0
label_2743fc:
    if (ctx->pc == 0x2743FCu) {
        ctx->pc = 0x274400u;
        goto label_274400;
    }
    ctx->pc = 0x2743F8u;
    SET_GPR_U32(ctx, 31, 0x274400u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2743F8u, 0x274400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274400u;
label_274400:
    // 0x274400: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x274400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_274404:
    // 0x274404: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x274404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_274408:
    // 0x274408: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x274408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_27440c:
    // 0x27440c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27440cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_274410:
    // 0x274410: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x274410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274414:
    // 0x274414: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x274414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_274418:
    // 0x274418: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x274418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27441c:
    // 0x27441c: 0x320f809  jalr        $t9
label_274420:
    if (ctx->pc == 0x274420u) {
        ctx->pc = 0x274424u;
        goto label_274424;
    }
    ctx->pc = 0x27441Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274424u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27441Cu, 0x274424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274424u;
label_274424:
    // 0x274424: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x274424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_274428:
    // 0x274428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x274428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27442c:
    // 0x27442c: 0xc08ec98  jal         func_23B260
label_274430:
    if (ctx->pc == 0x274430u) {
        ctx->pc = 0x274434u;
        goto label_274434;
    }
    ctx->pc = 0x27442Cu;
    SET_GPR_U32(ctx, 31, 0x274434u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x27442Cu, 0x274434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274434u;
label_274434:
    // 0x274434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x274434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274438:
    // 0x274438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27443c:
    // 0x27443c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27443cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_274440:
    // 0x274440: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x274440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_274444:
    // 0x274444: 0x3e00008  jr          $ra
label_274448:
    if (ctx->pc == 0x274448u) {
        ctx->pc = 0x27444Cu;
        goto label_27444c;
    }
    ctx->pc = 0x274444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27444Cu;
label_27444c:
    // 0x27444c: 0x0  nop
    ctx->pc = 0x27444cu;
    // NOP
    ctx->pc = 0x274450u;
}
