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

// Function: sub_00104580
// Address: 0x104580 - 0x1047a0
void sub_00104580_0x104580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104580_0x104580");
#endif

    switch (ctx->pc) {
        case 0x104580u: goto label_104580;
        case 0x104584u: goto label_104584;
        case 0x104588u: goto label_104588;
        case 0x10458cu: goto label_10458c;
        case 0x104590u: goto label_104590;
        case 0x104594u: goto label_104594;
        case 0x104598u: goto label_104598;
        case 0x10459cu: goto label_10459c;
        case 0x1045a0u: goto label_1045a0;
        case 0x1045a4u: goto label_1045a4;
        case 0x1045a8u: goto label_1045a8;
        case 0x1045acu: goto label_1045ac;
        case 0x1045b0u: goto label_1045b0;
        case 0x1045b4u: goto label_1045b4;
        case 0x1045b8u: goto label_1045b8;
        case 0x1045bcu: goto label_1045bc;
        case 0x1045c0u: goto label_1045c0;
        case 0x1045c4u: goto label_1045c4;
        case 0x1045c8u: goto label_1045c8;
        case 0x1045ccu: goto label_1045cc;
        case 0x1045d0u: goto label_1045d0;
        case 0x1045d4u: goto label_1045d4;
        case 0x1045d8u: goto label_1045d8;
        case 0x1045dcu: goto label_1045dc;
        case 0x1045e0u: goto label_1045e0;
        case 0x1045e4u: goto label_1045e4;
        case 0x1045e8u: goto label_1045e8;
        case 0x1045ecu: goto label_1045ec;
        case 0x1045f0u: goto label_1045f0;
        case 0x1045f4u: goto label_1045f4;
        case 0x1045f8u: goto label_1045f8;
        case 0x1045fcu: goto label_1045fc;
        case 0x104600u: goto label_104600;
        case 0x104604u: goto label_104604;
        case 0x104608u: goto label_104608;
        case 0x10460cu: goto label_10460c;
        case 0x104610u: goto label_104610;
        case 0x104614u: goto label_104614;
        case 0x104618u: goto label_104618;
        case 0x10461cu: goto label_10461c;
        case 0x104620u: goto label_104620;
        case 0x104624u: goto label_104624;
        case 0x104628u: goto label_104628;
        case 0x10462cu: goto label_10462c;
        case 0x104630u: goto label_104630;
        case 0x104634u: goto label_104634;
        case 0x104638u: goto label_104638;
        case 0x10463cu: goto label_10463c;
        case 0x104640u: goto label_104640;
        case 0x104644u: goto label_104644;
        case 0x104648u: goto label_104648;
        case 0x10464cu: goto label_10464c;
        case 0x104650u: goto label_104650;
        case 0x104654u: goto label_104654;
        case 0x104658u: goto label_104658;
        case 0x10465cu: goto label_10465c;
        case 0x104660u: goto label_104660;
        case 0x104664u: goto label_104664;
        case 0x104668u: goto label_104668;
        case 0x10466cu: goto label_10466c;
        case 0x104670u: goto label_104670;
        case 0x104674u: goto label_104674;
        case 0x104678u: goto label_104678;
        case 0x10467cu: goto label_10467c;
        case 0x104680u: goto label_104680;
        case 0x104684u: goto label_104684;
        case 0x104688u: goto label_104688;
        case 0x10468cu: goto label_10468c;
        case 0x104690u: goto label_104690;
        case 0x104694u: goto label_104694;
        case 0x104698u: goto label_104698;
        case 0x10469cu: goto label_10469c;
        case 0x1046a0u: goto label_1046a0;
        case 0x1046a4u: goto label_1046a4;
        case 0x1046a8u: goto label_1046a8;
        case 0x1046acu: goto label_1046ac;
        case 0x1046b0u: goto label_1046b0;
        case 0x1046b4u: goto label_1046b4;
        case 0x1046b8u: goto label_1046b8;
        case 0x1046bcu: goto label_1046bc;
        case 0x1046c0u: goto label_1046c0;
        case 0x1046c4u: goto label_1046c4;
        case 0x1046c8u: goto label_1046c8;
        case 0x1046ccu: goto label_1046cc;
        case 0x1046d0u: goto label_1046d0;
        case 0x1046d4u: goto label_1046d4;
        case 0x1046d8u: goto label_1046d8;
        case 0x1046dcu: goto label_1046dc;
        case 0x1046e0u: goto label_1046e0;
        case 0x1046e4u: goto label_1046e4;
        case 0x1046e8u: goto label_1046e8;
        case 0x1046ecu: goto label_1046ec;
        case 0x1046f0u: goto label_1046f0;
        case 0x1046f4u: goto label_1046f4;
        case 0x1046f8u: goto label_1046f8;
        case 0x1046fcu: goto label_1046fc;
        case 0x104700u: goto label_104700;
        case 0x104704u: goto label_104704;
        case 0x104708u: goto label_104708;
        case 0x10470cu: goto label_10470c;
        case 0x104710u: goto label_104710;
        case 0x104714u: goto label_104714;
        case 0x104718u: goto label_104718;
        case 0x10471cu: goto label_10471c;
        case 0x104720u: goto label_104720;
        case 0x104724u: goto label_104724;
        case 0x104728u: goto label_104728;
        case 0x10472cu: goto label_10472c;
        case 0x104730u: goto label_104730;
        case 0x104734u: goto label_104734;
        case 0x104738u: goto label_104738;
        case 0x10473cu: goto label_10473c;
        case 0x104740u: goto label_104740;
        case 0x104744u: goto label_104744;
        case 0x104748u: goto label_104748;
        case 0x10474cu: goto label_10474c;
        case 0x104750u: goto label_104750;
        case 0x104754u: goto label_104754;
        case 0x104758u: goto label_104758;
        case 0x10475cu: goto label_10475c;
        case 0x104760u: goto label_104760;
        case 0x104764u: goto label_104764;
        case 0x104768u: goto label_104768;
        case 0x10476cu: goto label_10476c;
        case 0x104770u: goto label_104770;
        case 0x104774u: goto label_104774;
        case 0x104778u: goto label_104778;
        case 0x10477cu: goto label_10477c;
        case 0x104780u: goto label_104780;
        case 0x104784u: goto label_104784;
        case 0x104788u: goto label_104788;
        case 0x10478cu: goto label_10478c;
        case 0x104790u: goto label_104790;
        case 0x104794u: goto label_104794;
        case 0x104798u: goto label_104798;
        case 0x10479cu: goto label_10479c;
        default: break;
    }

    ctx->pc = 0x104580u;

label_104580:
    // 0x104580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_104584:
    // 0x104584: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x104584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_104588:
    // 0x104588: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x104588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10458c:
    // 0x10458c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104590:
    // 0x104590: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x104590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_104594:
    // 0x104594: 0x3e00008  jr          $ra
label_104598:
    if (ctx->pc == 0x104598u) {
        ctx->pc = 0x10459Cu;
        goto label_10459c;
    }
    ctx->pc = 0x104594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10459Cu;
label_10459c:
    // 0x10459c: 0x0  nop
    ctx->pc = 0x10459cu;
    // NOP
label_1045a0:
    // 0x1045a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1045a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1045a4:
    // 0x1045a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1045a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1045a8:
    // 0x1045a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1045a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1045ac:
    // 0x1045ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1045acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1045b0:
    // 0x1045b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1045b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1045b4:
    // 0x1045b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1045b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1045b8:
    // 0x1045b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1045b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_1045bc:
    // 0x1045bc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1045bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1045c0:
    // 0x1045c0: 0x14030010  bne         $zero, $v1, . + 4 + (0x10 << 2)
label_1045c4:
    if (ctx->pc == 0x1045C4u) {
        ctx->pc = 0x1045C8u;
        goto label_1045c8;
    }
    ctx->pc = 0x1045C0u;
    {
        const bool branch_taken_0x1045c0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 3));
        if (branch_taken_0x1045c0) {
            ctx->pc = 0x104604u;
            goto label_104604;
        }
    }
    ctx->pc = 0x1045C8u;
label_1045c8:
    // 0x1045c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1045c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1045cc:
    // 0x1045cc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1045ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1045d0:
    // 0x1045d0: 0xc090590  jal         func_241640
label_1045d4:
    if (ctx->pc == 0x1045D4u) {
        ctx->pc = 0x1045D8u;
        goto label_1045d8;
    }
    ctx->pc = 0x1045D0u;
    SET_GPR_U32(ctx, 31, 0x1045D8u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x1045D0u, 0x1045D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045D8u;
label_1045d8:
    // 0x1045d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1045d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1045dc:
    // 0x1045dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1045dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1045e0:
    // 0x1045e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1045e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1045e4:
    // 0x1045e4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1045e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1045e8:
    // 0x1045e8: 0x320f809  jalr        $t9
label_1045ec:
    if (ctx->pc == 0x1045ECu) {
        ctx->pc = 0x1045F0u;
        goto label_1045f0;
    }
    ctx->pc = 0x1045E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1045F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045E8u, 0x1045F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1045F0u;
label_1045f0:
    // 0x1045f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1045f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1045f4:
    // 0x1045f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1045f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1045f8:
    // 0x1045f8: 0xc09158c  jal         func_245630
label_1045fc:
    if (ctx->pc == 0x1045FCu) {
        ctx->pc = 0x104600u;
        goto label_104600;
    }
    ctx->pc = 0x1045F8u;
    SET_GPR_U32(ctx, 31, 0x104600u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x1045F8u, 0x104600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104600u;
label_104600:
    // 0x104600: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x104600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_104604:
    // 0x104604: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x104604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_104608:
    // 0x104608: 0x1003001f  beq         $zero, $v1, . + 4 + (0x1F << 2)
label_10460c:
    if (ctx->pc == 0x10460Cu) {
        ctx->pc = 0x104610u;
        goto label_104610;
    }
    ctx->pc = 0x104608u;
    {
        const bool branch_taken_0x104608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x104608) {
            ctx->pc = 0x104688u;
            goto label_104688;
        }
    }
    ctx->pc = 0x104610u;
label_104610:
    // 0x104610: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x104610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104614:
    // 0x104614: 0x1003001c  beq         $zero, $v1, . + 4 + (0x1C << 2)
label_104618:
    if (ctx->pc == 0x104618u) {
        ctx->pc = 0x10461Cu;
        goto label_10461c;
    }
    ctx->pc = 0x104614u;
    {
        const bool branch_taken_0x104614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x104614) {
            ctx->pc = 0x104688u;
            goto label_104688;
        }
    }
    ctx->pc = 0x10461Cu;
label_10461c:
    // 0x10461c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10461cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_104620:
    // 0x104620: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x104620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104624:
    // 0x104624: 0xc0913d0  jal         func_244F40
label_104628:
    if (ctx->pc == 0x104628u) {
        ctx->pc = 0x10462Cu;
        goto label_10462c;
    }
    ctx->pc = 0x104624u;
    SET_GPR_U32(ctx, 31, 0x10462Cu);
    ctx->pc = 0x244F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F40u, 0x104624u, 0x10462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10462Cu;
label_10462c:
    // 0x10462c: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x10462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_104630:
    // 0x104630: 0xc041008  jal         func_104020
label_104634:
    if (ctx->pc == 0x104634u) {
        ctx->pc = 0x104638u;
        goto label_104638;
    }
    ctx->pc = 0x104630u;
    SET_GPR_U32(ctx, 31, 0x104638u);
    ctx->pc = 0x104020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104020u, 0x104630u, 0x104638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104638u;
label_104638:
    // 0x104638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x104638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10463c:
    // 0x10463c: 0x1000000d  b           . + 4 + (0xD << 2)
label_104640:
    if (ctx->pc == 0x104640u) {
        ctx->pc = 0x104644u;
        goto label_104644;
    }
    ctx->pc = 0x10463Cu;
    {
        const bool branch_taken_0x10463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10463c) {
            ctx->pc = 0x104674u;
            goto label_104674;
        }
    }
    ctx->pc = 0x104644u;
label_104644:
    // 0x104644: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x104644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_104648:
    // 0x104648: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x104648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10464c:
    // 0x10464c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_104650:
    if (ctx->pc == 0x104650u) {
        ctx->pc = 0x104654u;
        goto label_104654;
    }
    ctx->pc = 0x10464Cu;
    {
        const bool branch_taken_0x10464c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10464c) {
            ctx->pc = 0x104670u;
            goto label_104670;
        }
    }
    ctx->pc = 0x104654u;
label_104654:
    // 0x104654: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x104654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_104658:
    // 0x104658: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x104658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10465c:
    // 0x10465c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x10465cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104660:
    // 0x104660: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x104660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104664:
    // 0x104664: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x104664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_104668:
    // 0x104668: 0x320f809  jalr        $t9
label_10466c:
    if (ctx->pc == 0x10466Cu) {
        ctx->pc = 0x104670u;
        goto label_104670;
    }
    ctx->pc = 0x104668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x104670u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104668u, 0x104670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104670u;
label_104670:
    // 0x104670: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x104670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_104674:
    // 0x104674: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x104674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_104678:
    // 0x104678: 0xc041000  jal         func_104000
label_10467c:
    if (ctx->pc == 0x10467Cu) {
        ctx->pc = 0x104680u;
        goto label_104680;
    }
    ctx->pc = 0x104678u;
    SET_GPR_U32(ctx, 31, 0x104680u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x104678u, 0x104680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104680u;
label_104680:
    // 0x104680: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
label_104684:
    if (ctx->pc == 0x104684u) {
        ctx->pc = 0x104688u;
        goto label_104688;
    }
    ctx->pc = 0x104680u;
    {
        const bool branch_taken_0x104680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x104680) {
            ctx->pc = 0x104644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104644;
        }
    }
    ctx->pc = 0x104688u;
label_104688:
    // 0x104688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10468c:
    // 0x10468c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10468cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_104690:
    // 0x104690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x104690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_104694:
    // 0x104694: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x104694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_104698:
    // 0x104698: 0x3e00008  jr          $ra
label_10469c:
    if (ctx->pc == 0x10469Cu) {
        ctx->pc = 0x1046A0u;
        goto label_1046a0;
    }
    ctx->pc = 0x104698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1046A0u;
label_1046a0:
    // 0x1046a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1046a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1046a4:
    // 0x1046a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1046a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1046a8:
    // 0x1046a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1046a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1046ac:
    // 0x1046ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1046acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1046b0:
    // 0x1046b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1046b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1046b4:
    // 0x1046b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1046b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1046b8:
    // 0x1046b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1046b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_1046bc:
    // 0x1046bc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1046bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1046c0:
    // 0x1046c0: 0x14030010  bne         $zero, $v1, . + 4 + (0x10 << 2)
label_1046c4:
    if (ctx->pc == 0x1046C4u) {
        ctx->pc = 0x1046C8u;
        goto label_1046c8;
    }
    ctx->pc = 0x1046C0u;
    {
        const bool branch_taken_0x1046c0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 3));
        if (branch_taken_0x1046c0) {
            ctx->pc = 0x104704u;
            goto label_104704;
        }
    }
    ctx->pc = 0x1046C8u;
label_1046c8:
    // 0x1046c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1046c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1046cc:
    // 0x1046cc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1046ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1046d0:
    // 0x1046d0: 0xc090590  jal         func_241640
label_1046d4:
    if (ctx->pc == 0x1046D4u) {
        ctx->pc = 0x1046D8u;
        goto label_1046d8;
    }
    ctx->pc = 0x1046D0u;
    SET_GPR_U32(ctx, 31, 0x1046D8u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x1046D0u, 0x1046D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046D8u;
label_1046d8:
    // 0x1046d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1046d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1046dc:
    // 0x1046dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1046dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1046e0:
    // 0x1046e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1046e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1046e4:
    // 0x1046e4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1046e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1046e8:
    // 0x1046e8: 0x320f809  jalr        $t9
label_1046ec:
    if (ctx->pc == 0x1046ECu) {
        ctx->pc = 0x1046F0u;
        goto label_1046f0;
    }
    ctx->pc = 0x1046E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1046F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1046E8u, 0x1046F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1046F0u;
label_1046f0:
    // 0x1046f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1046f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1046f4:
    // 0x1046f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1046f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1046f8:
    // 0x1046f8: 0xc09158c  jal         func_245630
label_1046fc:
    if (ctx->pc == 0x1046FCu) {
        ctx->pc = 0x104700u;
        goto label_104700;
    }
    ctx->pc = 0x1046F8u;
    SET_GPR_U32(ctx, 31, 0x104700u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x1046F8u, 0x104700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104700u;
label_104700:
    // 0x104700: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x104700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_104704:
    // 0x104704: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x104704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_104708:
    // 0x104708: 0x1003001f  beq         $zero, $v1, . + 4 + (0x1F << 2)
label_10470c:
    if (ctx->pc == 0x10470Cu) {
        ctx->pc = 0x104710u;
        goto label_104710;
    }
    ctx->pc = 0x104708u;
    {
        const bool branch_taken_0x104708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x104708) {
            ctx->pc = 0x104788u;
            goto label_104788;
        }
    }
    ctx->pc = 0x104710u;
label_104710:
    // 0x104710: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x104710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104714:
    // 0x104714: 0x1003001c  beq         $zero, $v1, . + 4 + (0x1C << 2)
label_104718:
    if (ctx->pc == 0x104718u) {
        ctx->pc = 0x10471Cu;
        goto label_10471c;
    }
    ctx->pc = 0x104714u;
    {
        const bool branch_taken_0x104714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x104714) {
            ctx->pc = 0x104788u;
            goto label_104788;
        }
    }
    ctx->pc = 0x10471Cu;
label_10471c:
    // 0x10471c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_104720:
    // 0x104720: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x104720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104724:
    // 0x104724: 0xc0913dc  jal         func_244F70
label_104728:
    if (ctx->pc == 0x104728u) {
        ctx->pc = 0x10472Cu;
        goto label_10472c;
    }
    ctx->pc = 0x104724u;
    SET_GPR_U32(ctx, 31, 0x10472Cu);
    ctx->pc = 0x244F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F70u, 0x104724u, 0x10472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10472Cu;
label_10472c:
    // 0x10472c: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x10472cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_104730:
    // 0x104730: 0xc041008  jal         func_104020
label_104734:
    if (ctx->pc == 0x104734u) {
        ctx->pc = 0x104738u;
        goto label_104738;
    }
    ctx->pc = 0x104730u;
    SET_GPR_U32(ctx, 31, 0x104738u);
    ctx->pc = 0x104020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104020u, 0x104730u, 0x104738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104738u;
label_104738:
    // 0x104738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x104738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10473c:
    // 0x10473c: 0x1000000d  b           . + 4 + (0xD << 2)
label_104740:
    if (ctx->pc == 0x104740u) {
        ctx->pc = 0x104744u;
        goto label_104744;
    }
    ctx->pc = 0x10473Cu;
    {
        const bool branch_taken_0x10473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10473c) {
            ctx->pc = 0x104774u;
            goto label_104774;
        }
    }
    ctx->pc = 0x104744u;
label_104744:
    // 0x104744: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x104744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_104748:
    // 0x104748: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x104748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10474c:
    // 0x10474c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_104750:
    if (ctx->pc == 0x104750u) {
        ctx->pc = 0x104754u;
        goto label_104754;
    }
    ctx->pc = 0x10474Cu;
    {
        const bool branch_taken_0x10474c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10474c) {
            ctx->pc = 0x104770u;
            goto label_104770;
        }
    }
    ctx->pc = 0x104754u;
label_104754:
    // 0x104754: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x104754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_104758:
    // 0x104758: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x104758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10475c:
    // 0x10475c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x10475cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104760:
    // 0x104760: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x104760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104764:
    // 0x104764: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x104764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_104768:
    // 0x104768: 0x320f809  jalr        $t9
label_10476c:
    if (ctx->pc == 0x10476Cu) {
        ctx->pc = 0x104770u;
        goto label_104770;
    }
    ctx->pc = 0x104768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x104770u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104768u, 0x104770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104770u;
label_104770:
    // 0x104770: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x104770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_104774:
    // 0x104774: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x104774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_104778:
    // 0x104778: 0xc041000  jal         func_104000
label_10477c:
    if (ctx->pc == 0x10477Cu) {
        ctx->pc = 0x104780u;
        goto label_104780;
    }
    ctx->pc = 0x104778u;
    SET_GPR_U32(ctx, 31, 0x104780u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x104778u, 0x104780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104780u;
label_104780:
    // 0x104780: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
label_104784:
    if (ctx->pc == 0x104784u) {
        ctx->pc = 0x104788u;
        goto label_104788;
    }
    ctx->pc = 0x104780u;
    {
        const bool branch_taken_0x104780 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x104780) {
            ctx->pc = 0x104744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104744;
        }
    }
    ctx->pc = 0x104788u;
label_104788:
    // 0x104788: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10478c:
    // 0x10478c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10478cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_104790:
    // 0x104790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x104790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_104794:
    // 0x104794: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x104794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_104798:
    // 0x104798: 0x3e00008  jr          $ra
label_10479c:
    if (ctx->pc == 0x10479Cu) {
        ctx->pc = 0x1047A0u;
        goto label_fallthrough_0x104798;
    }
    ctx->pc = 0x104798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x104798:
    ctx->pc = 0x1047A0u;
}
