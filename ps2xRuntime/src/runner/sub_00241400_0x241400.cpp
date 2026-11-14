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

// Function: sub_00241400
// Address: 0x241400 - 0x241640
void sub_00241400_0x241400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241400_0x241400");
#endif

    switch (ctx->pc) {
        case 0x241400u: goto label_241400;
        case 0x241404u: goto label_241404;
        case 0x241408u: goto label_241408;
        case 0x24140cu: goto label_24140c;
        case 0x241410u: goto label_241410;
        case 0x241414u: goto label_241414;
        case 0x241418u: goto label_241418;
        case 0x24141cu: goto label_24141c;
        case 0x241420u: goto label_241420;
        case 0x241424u: goto label_241424;
        case 0x241428u: goto label_241428;
        case 0x24142cu: goto label_24142c;
        case 0x241430u: goto label_241430;
        case 0x241434u: goto label_241434;
        case 0x241438u: goto label_241438;
        case 0x24143cu: goto label_24143c;
        case 0x241440u: goto label_241440;
        case 0x241444u: goto label_241444;
        case 0x241448u: goto label_241448;
        case 0x24144cu: goto label_24144c;
        case 0x241450u: goto label_241450;
        case 0x241454u: goto label_241454;
        case 0x241458u: goto label_241458;
        case 0x24145cu: goto label_24145c;
        case 0x241460u: goto label_241460;
        case 0x241464u: goto label_241464;
        case 0x241468u: goto label_241468;
        case 0x24146cu: goto label_24146c;
        case 0x241470u: goto label_241470;
        case 0x241474u: goto label_241474;
        case 0x241478u: goto label_241478;
        case 0x24147cu: goto label_24147c;
        case 0x241480u: goto label_241480;
        case 0x241484u: goto label_241484;
        case 0x241488u: goto label_241488;
        case 0x24148cu: goto label_24148c;
        case 0x241490u: goto label_241490;
        case 0x241494u: goto label_241494;
        case 0x241498u: goto label_241498;
        case 0x24149cu: goto label_24149c;
        case 0x2414a0u: goto label_2414a0;
        case 0x2414a4u: goto label_2414a4;
        case 0x2414a8u: goto label_2414a8;
        case 0x2414acu: goto label_2414ac;
        case 0x2414b0u: goto label_2414b0;
        case 0x2414b4u: goto label_2414b4;
        case 0x2414b8u: goto label_2414b8;
        case 0x2414bcu: goto label_2414bc;
        case 0x2414c0u: goto label_2414c0;
        case 0x2414c4u: goto label_2414c4;
        case 0x2414c8u: goto label_2414c8;
        case 0x2414ccu: goto label_2414cc;
        case 0x2414d0u: goto label_2414d0;
        case 0x2414d4u: goto label_2414d4;
        case 0x2414d8u: goto label_2414d8;
        case 0x2414dcu: goto label_2414dc;
        case 0x2414e0u: goto label_2414e0;
        case 0x2414e4u: goto label_2414e4;
        case 0x2414e8u: goto label_2414e8;
        case 0x2414ecu: goto label_2414ec;
        case 0x2414f0u: goto label_2414f0;
        case 0x2414f4u: goto label_2414f4;
        case 0x2414f8u: goto label_2414f8;
        case 0x2414fcu: goto label_2414fc;
        case 0x241500u: goto label_241500;
        case 0x241504u: goto label_241504;
        case 0x241508u: goto label_241508;
        case 0x24150cu: goto label_24150c;
        case 0x241510u: goto label_241510;
        case 0x241514u: goto label_241514;
        case 0x241518u: goto label_241518;
        case 0x24151cu: goto label_24151c;
        case 0x241520u: goto label_241520;
        case 0x241524u: goto label_241524;
        case 0x241528u: goto label_241528;
        case 0x24152cu: goto label_24152c;
        case 0x241530u: goto label_241530;
        case 0x241534u: goto label_241534;
        case 0x241538u: goto label_241538;
        case 0x24153cu: goto label_24153c;
        case 0x241540u: goto label_241540;
        case 0x241544u: goto label_241544;
        case 0x241548u: goto label_241548;
        case 0x24154cu: goto label_24154c;
        case 0x241550u: goto label_241550;
        case 0x241554u: goto label_241554;
        case 0x241558u: goto label_241558;
        case 0x24155cu: goto label_24155c;
        case 0x241560u: goto label_241560;
        case 0x241564u: goto label_241564;
        case 0x241568u: goto label_241568;
        case 0x24156cu: goto label_24156c;
        case 0x241570u: goto label_241570;
        case 0x241574u: goto label_241574;
        case 0x241578u: goto label_241578;
        case 0x24157cu: goto label_24157c;
        case 0x241580u: goto label_241580;
        case 0x241584u: goto label_241584;
        case 0x241588u: goto label_241588;
        case 0x24158cu: goto label_24158c;
        case 0x241590u: goto label_241590;
        case 0x241594u: goto label_241594;
        case 0x241598u: goto label_241598;
        case 0x24159cu: goto label_24159c;
        case 0x2415a0u: goto label_2415a0;
        case 0x2415a4u: goto label_2415a4;
        case 0x2415a8u: goto label_2415a8;
        case 0x2415acu: goto label_2415ac;
        case 0x2415b0u: goto label_2415b0;
        case 0x2415b4u: goto label_2415b4;
        case 0x2415b8u: goto label_2415b8;
        case 0x2415bcu: goto label_2415bc;
        case 0x2415c0u: goto label_2415c0;
        case 0x2415c4u: goto label_2415c4;
        case 0x2415c8u: goto label_2415c8;
        case 0x2415ccu: goto label_2415cc;
        case 0x2415d0u: goto label_2415d0;
        case 0x2415d4u: goto label_2415d4;
        case 0x2415d8u: goto label_2415d8;
        case 0x2415dcu: goto label_2415dc;
        case 0x2415e0u: goto label_2415e0;
        case 0x2415e4u: goto label_2415e4;
        case 0x2415e8u: goto label_2415e8;
        case 0x2415ecu: goto label_2415ec;
        case 0x2415f0u: goto label_2415f0;
        case 0x2415f4u: goto label_2415f4;
        case 0x2415f8u: goto label_2415f8;
        case 0x2415fcu: goto label_2415fc;
        case 0x241600u: goto label_241600;
        case 0x241604u: goto label_241604;
        case 0x241608u: goto label_241608;
        case 0x24160cu: goto label_24160c;
        case 0x241610u: goto label_241610;
        case 0x241614u: goto label_241614;
        case 0x241618u: goto label_241618;
        case 0x24161cu: goto label_24161c;
        case 0x241620u: goto label_241620;
        case 0x241624u: goto label_241624;
        case 0x241628u: goto label_241628;
        case 0x24162cu: goto label_24162c;
        case 0x241630u: goto label_241630;
        case 0x241634u: goto label_241634;
        case 0x241638u: goto label_241638;
        case 0x24163cu: goto label_24163c;
        default: break;
    }

    ctx->pc = 0x241400u;

label_241400:
    // 0x241400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_241404:
    // 0x241404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_241408:
    // 0x241408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x241408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_24140c:
    // 0x24140c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24140cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_241410:
    // 0x241410: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x241410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_241414:
    // 0x241414: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x241414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241418:
    // 0x241418: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x241418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_24141c:
    // 0x24141c: 0x320f809  jalr        $t9
label_241420:
    if (ctx->pc == 0x241420u) {
        ctx->pc = 0x241424u;
        goto label_241424;
    }
    ctx->pc = 0x24141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241424u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24141Cu, 0x241424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241424u;
label_241424:
    // 0x241424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_241428:
    // 0x241428: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x241428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24142c:
    // 0x24142c: 0x3e00008  jr          $ra
label_241430:
    if (ctx->pc == 0x241430u) {
        ctx->pc = 0x241434u;
        goto label_241434;
    }
    ctx->pc = 0x24142Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24142Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241434u;
label_241434:
    // 0x241434: 0x0  nop
    ctx->pc = 0x241434u;
    // NOP
label_241438:
    // 0x241438: 0x0  nop
    ctx->pc = 0x241438u;
    // NOP
label_24143c:
    // 0x24143c: 0x0  nop
    ctx->pc = 0x24143cu;
    // NOP
label_241440:
    // 0x241440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x241440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_241444:
    // 0x241444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x241444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_241448:
    // 0x241448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x241448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24144c:
    // 0x24144c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24144cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_241450:
    // 0x241450: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x241450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_241454:
    // 0x241454: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x241454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_241458:
    // 0x241458: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24145c:
    // 0x24145c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24145cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_241460:
    // 0x241460: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x241460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_241464:
    // 0x241464: 0xc0852f8  jal         func_214BE0
label_241468:
    if (ctx->pc == 0x241468u) {
        ctx->pc = 0x24146Cu;
        goto label_24146c;
    }
    ctx->pc = 0x241464u;
    SET_GPR_U32(ctx, 31, 0x24146Cu);
    ctx->pc = 0x214BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214BE0u, 0x241464u, 0x24146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24146Cu;
label_24146c:
    // 0x24146c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x24146cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_241470:
    // 0x241470: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x241470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_241474:
    // 0x241474: 0xc085538  jal         func_2154E0
label_241478:
    if (ctx->pc == 0x241478u) {
        ctx->pc = 0x24147Cu;
        goto label_24147c;
    }
    ctx->pc = 0x241474u;
    SET_GPR_U32(ctx, 31, 0x24147Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x241474u, 0x24147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24147Cu;
label_24147c:
    // 0x24147c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24147cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241480:
    // 0x241480: 0x10100005  beq         $zero, $s0, . + 4 + (0x5 << 2)
label_241484:
    if (ctx->pc == 0x241484u) {
        ctx->pc = 0x241488u;
        goto label_241488;
    }
    ctx->pc = 0x241480u;
    {
        const bool branch_taken_0x241480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x241480) {
            ctx->pc = 0x241498u;
            goto label_241498;
        }
    }
    ctx->pc = 0x241488u;
label_241488:
    // 0x241488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24148c:
    // 0x24148c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24148cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_241490:
    // 0x241490: 0xc091998  jal         func_246660
label_241494:
    if (ctx->pc == 0x241494u) {
        ctx->pc = 0x241498u;
        goto label_241498;
    }
    ctx->pc = 0x241490u;
    SET_GPR_U32(ctx, 31, 0x241498u);
    ctx->pc = 0x246660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246660u, 0x241490u, 0x241498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241498u;
label_241498:
    // 0x241498: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x241498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_24149c:
    // 0x24149c: 0xc085530  jal         func_2154C0
label_2414a0:
    if (ctx->pc == 0x2414A0u) {
        ctx->pc = 0x2414A4u;
        goto label_2414a4;
    }
    ctx->pc = 0x24149Cu;
    SET_GPR_U32(ctx, 31, 0x2414A4u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x24149Cu, 0x2414A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414A4u;
label_2414a4:
    // 0x2414a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2414a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2414a8:
    // 0x2414a8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2414ac:
    if (ctx->pc == 0x2414ACu) {
        ctx->pc = 0x2414B0u;
        goto label_2414b0;
    }
    ctx->pc = 0x2414A8u;
    {
        const bool branch_taken_0x2414a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2414a8) {
            ctx->pc = 0x2414C4u;
            goto label_2414c4;
        }
    }
    ctx->pc = 0x2414B0u;
label_2414b0:
    // 0x2414b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2414b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2414b4:
    // 0x2414b4: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x2414b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_2414b8:
    // 0x2414b8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2414b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2414bc:
    // 0x2414bc: 0xc0955a8  jal         func_2556A0
label_2414c0:
    if (ctx->pc == 0x2414C0u) {
        ctx->pc = 0x2414C4u;
        goto label_2414c4;
    }
    ctx->pc = 0x2414BCu;
    SET_GPR_U32(ctx, 31, 0x2414C4u);
    ctx->pc = 0x2556A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2556A0u, 0x2414BCu, 0x2414C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414C4u;
label_2414c4:
    // 0x2414c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2414c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2414c8:
    // 0x2414c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2414c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2414cc:
    // 0x2414cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2414ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2414d0:
    // 0x2414d0: 0x3e00008  jr          $ra
label_2414d4:
    if (ctx->pc == 0x2414D4u) {
        ctx->pc = 0x2414D8u;
        goto label_2414d8;
    }
    ctx->pc = 0x2414D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2414D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2414D8u;
label_2414d8:
    // 0x2414d8: 0x0  nop
    ctx->pc = 0x2414d8u;
    // NOP
label_2414dc:
    // 0x2414dc: 0x0  nop
    ctx->pc = 0x2414dcu;
    // NOP
label_2414e0:
    // 0x2414e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2414e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2414e4:
    // 0x2414e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2414e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2414e8:
    // 0x2414e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2414e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2414ec:
    // 0x2414ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2414ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2414f0:
    // 0x2414f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2414f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2414f4:
    // 0x2414f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2414f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2414f8:
    // 0x2414f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2414f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2414fc:
    // 0x2414fc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2414fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_241500:
    // 0x241500: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x241500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_241504:
    // 0x241504: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x241504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_241508:
    // 0x241508: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x241508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_24150c:
    // 0x24150c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x24150cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_241510:
    // 0x241510: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x241510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_241514:
    // 0x241514: 0xc0852fc  jal         func_214BF0
label_241518:
    if (ctx->pc == 0x241518u) {
        ctx->pc = 0x24151Cu;
        goto label_24151c;
    }
    ctx->pc = 0x241514u;
    SET_GPR_U32(ctx, 31, 0x24151Cu);
    ctx->pc = 0x214BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214BF0u, 0x241514u, 0x24151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24151Cu;
label_24151c:
    // 0x24151c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_241520:
    // 0x241520: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x241520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_241524:
    // 0x241524: 0xc085538  jal         func_2154E0
label_241528:
    if (ctx->pc == 0x241528u) {
        ctx->pc = 0x24152Cu;
        goto label_24152c;
    }
    ctx->pc = 0x241524u;
    SET_GPR_U32(ctx, 31, 0x24152Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x241524u, 0x24152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24152Cu;
label_24152c:
    // 0x24152c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24152cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241530:
    // 0x241530: 0x10130005  beq         $zero, $s3, . + 4 + (0x5 << 2)
label_241534:
    if (ctx->pc == 0x241534u) {
        ctx->pc = 0x241538u;
        goto label_241538;
    }
    ctx->pc = 0x241530u;
    {
        const bool branch_taken_0x241530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x241530) {
            ctx->pc = 0x241548u;
            goto label_241548;
        }
    }
    ctx->pc = 0x241538u;
label_241538:
    // 0x241538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24153c:
    // 0x24153c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x24153cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_241540:
    // 0x241540: 0xc0919e0  jal         func_246780
label_241544:
    if (ctx->pc == 0x241544u) {
        ctx->pc = 0x241548u;
        goto label_241548;
    }
    ctx->pc = 0x241540u;
    SET_GPR_U32(ctx, 31, 0x241548u);
    ctx->pc = 0x246780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246780u, 0x241540u, 0x241548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241548u;
label_241548:
    // 0x241548: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x241548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_24154c:
    // 0x24154c: 0xc085530  jal         func_2154C0
label_241550:
    if (ctx->pc == 0x241550u) {
        ctx->pc = 0x241554u;
        goto label_241554;
    }
    ctx->pc = 0x24154Cu;
    SET_GPR_U32(ctx, 31, 0x241554u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x24154Cu, 0x241554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241554u;
label_241554:
    // 0x241554: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x241554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_241558:
    // 0x241558: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
label_24155c:
    if (ctx->pc == 0x24155Cu) {
        ctx->pc = 0x241560u;
        goto label_241560;
    }
    ctx->pc = 0x241558u;
    {
        const bool branch_taken_0x241558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x241558) {
            ctx->pc = 0x241610u;
            goto label_241610;
        }
    }
    ctx->pc = 0x241560u;
label_241560:
    // 0x241560: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x241560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_241564:
    // 0x241564: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x241564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_241568:
    // 0x241568: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x241568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_24156c:
    // 0x24156c: 0xc095744  jal         func_255D10
label_241570:
    if (ctx->pc == 0x241570u) {
        ctx->pc = 0x241574u;
        goto label_241574;
    }
    ctx->pc = 0x24156Cu;
    SET_GPR_U32(ctx, 31, 0x241574u);
    ctx->pc = 0x255D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255D10u, 0x24156Cu, 0x241574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241574u;
label_241574:
    // 0x241574: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x241574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_241578:
    // 0x241578: 0x8c441118  lw          $a0, 0x1118($v0)
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
label_24157c:
    // 0x24157c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24157cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_241580:
    // 0x241580: 0xc09157c  jal         func_2455F0
label_241584:
    if (ctx->pc == 0x241584u) {
        ctx->pc = 0x241588u;
        goto label_241588;
    }
    ctx->pc = 0x241580u;
    SET_GPR_U32(ctx, 31, 0x241588u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x241580u, 0x241588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241588u;
label_241588:
    // 0x241588: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x241588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24158c:
    // 0x24158c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24158cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_241590:
    // 0x241590: 0xc040e7c  jal         func_1039F0
label_241594:
    if (ctx->pc == 0x241594u) {
        ctx->pc = 0x241598u;
        goto label_241598;
    }
    ctx->pc = 0x241590u;
    SET_GPR_U32(ctx, 31, 0x241598u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x241590u, 0x241598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241598u;
label_241598:
    // 0x241598: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x241598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24159c:
    // 0x24159c: 0x10000017  b           . + 4 + (0x17 << 2)
label_2415a0:
    if (ctx->pc == 0x2415A0u) {
        ctx->pc = 0x2415A4u;
        goto label_2415a4;
    }
    ctx->pc = 0x24159Cu;
    {
        const bool branch_taken_0x24159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24159c) {
            ctx->pc = 0x2415FCu;
            goto label_2415fc;
        }
    }
    ctx->pc = 0x2415A4u;
label_2415a4:
    // 0x2415a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2415a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2415a8:
    // 0x2415a8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2415a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2415ac:
    // 0x2415ac: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_2415b0:
    if (ctx->pc == 0x2415B0u) {
        ctx->pc = 0x2415B4u;
        goto label_2415b4;
    }
    ctx->pc = 0x2415ACu;
    {
        const bool branch_taken_0x2415ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2415ac) {
            ctx->pc = 0x2415F8u;
            goto label_2415f8;
        }
    }
    ctx->pc = 0x2415B4u;
label_2415b4:
    // 0x2415b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2415b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2415b8:
    // 0x2415b8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2415b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2415bc:
    // 0x2415bc: 0xc085538  jal         func_2154E0
label_2415c0:
    if (ctx->pc == 0x2415C0u) {
        ctx->pc = 0x2415C4u;
        goto label_2415c4;
    }
    ctx->pc = 0x2415BCu;
    SET_GPR_U32(ctx, 31, 0x2415C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2415BCu, 0x2415C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415C4u;
label_2415c4:
    // 0x2415c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2415c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2415c8:
    // 0x2415c8: 0x1011000b  beq         $zero, $s1, . + 4 + (0xB << 2)
label_2415cc:
    if (ctx->pc == 0x2415CCu) {
        ctx->pc = 0x2415D0u;
        goto label_2415d0;
    }
    ctx->pc = 0x2415C8u;
    {
        const bool branch_taken_0x2415c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x2415c8) {
            ctx->pc = 0x2415F8u;
            goto label_2415f8;
        }
    }
    ctx->pc = 0x2415D0u;
label_2415d0:
    // 0x2415d0: 0x8fb40070  lw          $s4, 0x70($sp)
    ctx->pc = 0x2415d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2415d4:
    // 0x2415d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2415d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2415d8:
    // 0x2415d8: 0xc0968d0  jal         func_25A340
label_2415dc:
    if (ctx->pc == 0x2415DCu) {
        ctx->pc = 0x2415E0u;
        goto label_2415e0;
    }
    ctx->pc = 0x2415D8u;
    SET_GPR_U32(ctx, 31, 0x2415E0u);
    ctx->pc = 0x25A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A340u, 0x2415D8u, 0x2415E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415E0u;
label_2415e0:
    // 0x2415e0: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
label_2415e4:
    if (ctx->pc == 0x2415E4u) {
        ctx->pc = 0x2415E8u;
        goto label_2415e8;
    }
    ctx->pc = 0x2415E0u;
    {
        const bool branch_taken_0x2415e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2415e0) {
            ctx->pc = 0x2415F8u;
            goto label_2415f8;
        }
    }
    ctx->pc = 0x2415E8u;
label_2415e8:
    // 0x2415e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2415e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2415ec:
    // 0x2415ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2415ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2415f0:
    // 0x2415f0: 0xc0968c4  jal         func_25A310
label_2415f4:
    if (ctx->pc == 0x2415F4u) {
        ctx->pc = 0x2415F8u;
        goto label_2415f8;
    }
    ctx->pc = 0x2415F0u;
    SET_GPR_U32(ctx, 31, 0x2415F8u);
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x2415F0u, 0x2415F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415F8u;
label_2415f8:
    // 0x2415f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2415f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2415fc:
    // 0x2415fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2415fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_241600:
    // 0x241600: 0xc04147c  jal         func_1051F0
label_241604:
    if (ctx->pc == 0x241604u) {
        ctx->pc = 0x241608u;
        goto label_241608;
    }
    ctx->pc = 0x241600u;
    SET_GPR_U32(ctx, 31, 0x241608u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x241600u, 0x241608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241608u;
label_241608:
    // 0x241608: 0x1602ffe6  bne         $s0, $v0, . + 4 + (-0x1A << 2)
label_24160c:
    if (ctx->pc == 0x24160Cu) {
        ctx->pc = 0x241610u;
        goto label_241610;
    }
    ctx->pc = 0x241608u;
    {
        const bool branch_taken_0x241608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x241608) {
            ctx->pc = 0x2415A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2415a4;
        }
    }
    ctx->pc = 0x241610u;
label_241610:
    // 0x241610: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x241610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_241614:
    // 0x241614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x241614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_241618:
    // 0x241618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x241618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24161c:
    // 0x24161c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24161cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_241620:
    // 0x241620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_241624:
    // 0x241624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_241628:
    // 0x241628: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x241628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_24162c:
    // 0x24162c: 0x3e00008  jr          $ra
label_241630:
    if (ctx->pc == 0x241630u) {
        ctx->pc = 0x241634u;
        goto label_241634;
    }
    ctx->pc = 0x24162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24162Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241634u;
label_241634:
    // 0x241634: 0x0  nop
    ctx->pc = 0x241634u;
    // NOP
label_241638:
    // 0x241638: 0x0  nop
    ctx->pc = 0x241638u;
    // NOP
label_24163c:
    // 0x24163c: 0x0  nop
    ctx->pc = 0x24163cu;
    // NOP
    ctx->pc = 0x241640u;
}
