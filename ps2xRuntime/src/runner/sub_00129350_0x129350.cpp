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

// Function: sub_00129350
// Address: 0x129350 - 0x129470
void sub_00129350_0x129350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129350_0x129350");
#endif

    switch (ctx->pc) {
        case 0x129350u: goto label_129350;
        case 0x129354u: goto label_129354;
        case 0x129358u: goto label_129358;
        case 0x12935cu: goto label_12935c;
        case 0x129360u: goto label_129360;
        case 0x129364u: goto label_129364;
        case 0x129368u: goto label_129368;
        case 0x12936cu: goto label_12936c;
        case 0x129370u: goto label_129370;
        case 0x129374u: goto label_129374;
        case 0x129378u: goto label_129378;
        case 0x12937cu: goto label_12937c;
        case 0x129380u: goto label_129380;
        case 0x129384u: goto label_129384;
        case 0x129388u: goto label_129388;
        case 0x12938cu: goto label_12938c;
        case 0x129390u: goto label_129390;
        case 0x129394u: goto label_129394;
        case 0x129398u: goto label_129398;
        case 0x12939cu: goto label_12939c;
        case 0x1293a0u: goto label_1293a0;
        case 0x1293a4u: goto label_1293a4;
        case 0x1293a8u: goto label_1293a8;
        case 0x1293acu: goto label_1293ac;
        case 0x1293b0u: goto label_1293b0;
        case 0x1293b4u: goto label_1293b4;
        case 0x1293b8u: goto label_1293b8;
        case 0x1293bcu: goto label_1293bc;
        case 0x1293c0u: goto label_1293c0;
        case 0x1293c4u: goto label_1293c4;
        case 0x1293c8u: goto label_1293c8;
        case 0x1293ccu: goto label_1293cc;
        case 0x1293d0u: goto label_1293d0;
        case 0x1293d4u: goto label_1293d4;
        case 0x1293d8u: goto label_1293d8;
        case 0x1293dcu: goto label_1293dc;
        case 0x1293e0u: goto label_1293e0;
        case 0x1293e4u: goto label_1293e4;
        case 0x1293e8u: goto label_1293e8;
        case 0x1293ecu: goto label_1293ec;
        case 0x1293f0u: goto label_1293f0;
        case 0x1293f4u: goto label_1293f4;
        case 0x1293f8u: goto label_1293f8;
        case 0x1293fcu: goto label_1293fc;
        case 0x129400u: goto label_129400;
        case 0x129404u: goto label_129404;
        case 0x129408u: goto label_129408;
        case 0x12940cu: goto label_12940c;
        case 0x129410u: goto label_129410;
        case 0x129414u: goto label_129414;
        case 0x129418u: goto label_129418;
        case 0x12941cu: goto label_12941c;
        case 0x129420u: goto label_129420;
        case 0x129424u: goto label_129424;
        case 0x129428u: goto label_129428;
        case 0x12942cu: goto label_12942c;
        case 0x129430u: goto label_129430;
        case 0x129434u: goto label_129434;
        case 0x129438u: goto label_129438;
        case 0x12943cu: goto label_12943c;
        case 0x129440u: goto label_129440;
        case 0x129444u: goto label_129444;
        case 0x129448u: goto label_129448;
        case 0x12944cu: goto label_12944c;
        case 0x129450u: goto label_129450;
        case 0x129454u: goto label_129454;
        case 0x129458u: goto label_129458;
        case 0x12945cu: goto label_12945c;
        case 0x129460u: goto label_129460;
        case 0x129464u: goto label_129464;
        case 0x129468u: goto label_129468;
        case 0x12946cu: goto label_12946c;
        default: break;
    }

    ctx->pc = 0x129350u;

label_129350:
    // 0x129350: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x129350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_129354:
    // 0x129354: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x129354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_129358:
    // 0x129358: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x129358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_12935c:
    // 0x12935c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_129360:
    // 0x129360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x129360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_129364:
    // 0x129364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_129368:
    // 0x129368: 0xc05548c  jal         func_155230
label_12936c:
    if (ctx->pc == 0x12936Cu) {
        ctx->pc = 0x129370u;
        goto label_129370;
    }
    ctx->pc = 0x129368u;
    SET_GPR_U32(ctx, 31, 0x129370u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x129368u, 0x129370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129370u;
label_129370:
    // 0x129370: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129374:
    // 0x129374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129378:
    // 0x129378: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x129378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_12937c:
    // 0x12937c: 0xc0553d4  jal         func_154F50
label_129380:
    if (ctx->pc == 0x129380u) {
        ctx->pc = 0x129384u;
        goto label_129384;
    }
    ctx->pc = 0x12937Cu;
    SET_GPR_U32(ctx, 31, 0x129384u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x12937Cu, 0x129384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129384u;
label_129384:
    // 0x129384: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x129384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129388:
    // 0x129388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12938c:
    // 0x12938c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x12938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_129390:
    // 0x129390: 0xc0553d4  jal         func_154F50
label_129394:
    if (ctx->pc == 0x129394u) {
        ctx->pc = 0x129398u;
        goto label_129398;
    }
    ctx->pc = 0x129390u;
    SET_GPR_U32(ctx, 31, 0x129398u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x129390u, 0x129398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129398u;
label_129398:
    // 0x129398: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x129398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12939c:
    // 0x12939c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1293a0:
    if (ctx->pc == 0x1293A0u) {
        ctx->pc = 0x1293A4u;
        goto label_1293a4;
    }
    ctx->pc = 0x12939Cu;
    {
        const bool branch_taken_0x12939c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12939c) {
            ctx->pc = 0x1293B0u;
            goto label_1293b0;
        }
    }
    ctx->pc = 0x1293A4u;
label_1293a4:
    // 0x1293a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1293a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1293a8:
    // 0x1293a8: 0xc08d230  jal         func_2348C0
label_1293ac:
    if (ctx->pc == 0x1293ACu) {
        ctx->pc = 0x1293B0u;
        goto label_1293b0;
    }
    ctx->pc = 0x1293A8u;
    SET_GPR_U32(ctx, 31, 0x1293B0u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x1293A8u, 0x1293B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293B0u;
label_1293b0:
    // 0x1293b0: 0x8f83b9f8  lw          $v1, -0x4608($gp)
    ctx->pc = 0x1293b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_1293b4:
    // 0x1293b4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1293b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1293b8:
    // 0x1293b8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1293bc:
    if (ctx->pc == 0x1293BCu) {
        ctx->pc = 0x1293C0u;
        goto label_1293c0;
    }
    ctx->pc = 0x1293B8u;
    {
        const bool branch_taken_0x1293b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1293b8) {
            ctx->pc = 0x1293D8u;
            goto label_1293d8;
        }
    }
    ctx->pc = 0x1293C0u;
label_1293c0:
    // 0x1293c0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1293c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1293c4:
    // 0x1293c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1293c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1293c8:
    // 0x1293c8: 0xc08ef28  jal         func_23BCA0
label_1293cc:
    if (ctx->pc == 0x1293CCu) {
        ctx->pc = 0x1293D0u;
        goto label_1293d0;
    }
    ctx->pc = 0x1293C8u;
    SET_GPR_U32(ctx, 31, 0x1293D0u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1293C8u, 0x1293D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293D0u;
label_1293d0:
    // 0x1293d0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1293d4:
    if (ctx->pc == 0x1293D4u) {
        ctx->pc = 0x1293D8u;
        goto label_1293d8;
    }
    ctx->pc = 0x1293D0u;
    {
        const bool branch_taken_0x1293d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1293d0) {
            ctx->pc = 0x12944Cu;
            goto label_12944c;
        }
    }
    ctx->pc = 0x1293D8u;
label_1293d8:
    // 0x1293d8: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x1293d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_1293dc:
    // 0x1293dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1293dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1293e0:
    // 0x1293e0: 0xc0553d4  jal         func_154F50
label_1293e4:
    if (ctx->pc == 0x1293E4u) {
        ctx->pc = 0x1293E8u;
        goto label_1293e8;
    }
    ctx->pc = 0x1293E0u;
    SET_GPR_U32(ctx, 31, 0x1293E8u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1293E0u, 0x1293E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293E8u;
label_1293e8:
    // 0x1293e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1293e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1293ec:
    // 0x1293ec: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1293f0:
    if (ctx->pc == 0x1293F0u) {
        ctx->pc = 0x1293F4u;
        goto label_1293f4;
    }
    ctx->pc = 0x1293ECu;
    {
        const bool branch_taken_0x1293ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1293ec) {
            ctx->pc = 0x12940Cu;
            goto label_12940c;
        }
    }
    ctx->pc = 0x1293F4u;
label_1293f4:
    // 0x1293f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1293f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1293f8:
    // 0x1293f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1293f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1293fc:
    // 0x1293fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1293fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129400:
    // 0x129400: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x129400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_129404:
    // 0x129404: 0x320f809  jalr        $t9
label_129408:
    if (ctx->pc == 0x129408u) {
        ctx->pc = 0x12940Cu;
        goto label_12940c;
    }
    ctx->pc = 0x129404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12940Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129404u, 0x12940Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12940Cu;
label_12940c:
    // 0x12940c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_129410:
    // 0x129410: 0xc088560  jal         func_221580
label_129414:
    if (ctx->pc == 0x129414u) {
        ctx->pc = 0x129418u;
        goto label_129418;
    }
    ctx->pc = 0x129410u;
    SET_GPR_U32(ctx, 31, 0x129418u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x129410u, 0x129418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129418u;
label_129418:
    // 0x129418: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x129418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12941c:
    // 0x12941c: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x12941cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_129420:
    // 0x129420: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x129420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129424:
    // 0x129424: 0xc040924  jal         func_102490
label_129428:
    if (ctx->pc == 0x129428u) {
        ctx->pc = 0x12942Cu;
        goto label_12942c;
    }
    ctx->pc = 0x129424u;
    SET_GPR_U32(ctx, 31, 0x12942Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x129424u, 0x12942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12942Cu;
label_12942c:
    // 0x12942c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x12942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_129430:
    // 0x129430: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x129430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_129434:
    // 0x129434: 0xc08ef28  jal         func_23BCA0
label_129438:
    if (ctx->pc == 0x129438u) {
        ctx->pc = 0x12943Cu;
        goto label_12943c;
    }
    ctx->pc = 0x129434u;
    SET_GPR_U32(ctx, 31, 0x12943Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x129434u, 0x12943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12943Cu;
label_12943c:
    // 0x12943c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_129440:
    // 0x129440: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x129440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_129444:
    // 0x129444: 0xc0887b4  jal         func_221ED0
label_129448:
    if (ctx->pc == 0x129448u) {
        ctx->pc = 0x12944Cu;
        goto label_12944c;
    }
    ctx->pc = 0x129444u;
    SET_GPR_U32(ctx, 31, 0x12944Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x129444u, 0x12944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12944Cu;
label_12944c:
    // 0x12944c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_129450:
    // 0x129450: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x129450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_129454:
    // 0x129454: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x129454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_129458:
    // 0x129458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12945c:
    // 0x12945c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12945cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_129460:
    // 0x129460: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x129460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129464:
    // 0x129464: 0x3e00008  jr          $ra
label_129468:
    if (ctx->pc == 0x129468u) {
        ctx->pc = 0x12946Cu;
        goto label_12946c;
    }
    ctx->pc = 0x129464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12946Cu;
label_12946c:
    // 0x12946c: 0x0  nop
    ctx->pc = 0x12946cu;
    // NOP
    ctx->pc = 0x129470u;
}
