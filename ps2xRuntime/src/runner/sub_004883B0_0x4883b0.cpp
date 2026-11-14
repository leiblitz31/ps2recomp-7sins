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

// Function: sub_004883B0
// Address: 0x4883b0 - 0x488530
void sub_004883B0_0x4883b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004883B0_0x4883b0");
#endif

    switch (ctx->pc) {
        case 0x4883b0u: goto label_4883b0;
        case 0x4883b4u: goto label_4883b4;
        case 0x4883b8u: goto label_4883b8;
        case 0x4883bcu: goto label_4883bc;
        case 0x4883c0u: goto label_4883c0;
        case 0x4883c4u: goto label_4883c4;
        case 0x4883c8u: goto label_4883c8;
        case 0x4883ccu: goto label_4883cc;
        case 0x4883d0u: goto label_4883d0;
        case 0x4883d4u: goto label_4883d4;
        case 0x4883d8u: goto label_4883d8;
        case 0x4883dcu: goto label_4883dc;
        case 0x4883e0u: goto label_4883e0;
        case 0x4883e4u: goto label_4883e4;
        case 0x4883e8u: goto label_4883e8;
        case 0x4883ecu: goto label_4883ec;
        case 0x4883f0u: goto label_4883f0;
        case 0x4883f4u: goto label_4883f4;
        case 0x4883f8u: goto label_4883f8;
        case 0x4883fcu: goto label_4883fc;
        case 0x488400u: goto label_488400;
        case 0x488404u: goto label_488404;
        case 0x488408u: goto label_488408;
        case 0x48840cu: goto label_48840c;
        case 0x488410u: goto label_488410;
        case 0x488414u: goto label_488414;
        case 0x488418u: goto label_488418;
        case 0x48841cu: goto label_48841c;
        case 0x488420u: goto label_488420;
        case 0x488424u: goto label_488424;
        case 0x488428u: goto label_488428;
        case 0x48842cu: goto label_48842c;
        case 0x488430u: goto label_488430;
        case 0x488434u: goto label_488434;
        case 0x488438u: goto label_488438;
        case 0x48843cu: goto label_48843c;
        case 0x488440u: goto label_488440;
        case 0x488444u: goto label_488444;
        case 0x488448u: goto label_488448;
        case 0x48844cu: goto label_48844c;
        case 0x488450u: goto label_488450;
        case 0x488454u: goto label_488454;
        case 0x488458u: goto label_488458;
        case 0x48845cu: goto label_48845c;
        case 0x488460u: goto label_488460;
        case 0x488464u: goto label_488464;
        case 0x488468u: goto label_488468;
        case 0x48846cu: goto label_48846c;
        case 0x488470u: goto label_488470;
        case 0x488474u: goto label_488474;
        case 0x488478u: goto label_488478;
        case 0x48847cu: goto label_48847c;
        case 0x488480u: goto label_488480;
        case 0x488484u: goto label_488484;
        case 0x488488u: goto label_488488;
        case 0x48848cu: goto label_48848c;
        case 0x488490u: goto label_488490;
        case 0x488494u: goto label_488494;
        case 0x488498u: goto label_488498;
        case 0x48849cu: goto label_48849c;
        case 0x4884a0u: goto label_4884a0;
        case 0x4884a4u: goto label_4884a4;
        case 0x4884a8u: goto label_4884a8;
        case 0x4884acu: goto label_4884ac;
        case 0x4884b0u: goto label_4884b0;
        case 0x4884b4u: goto label_4884b4;
        case 0x4884b8u: goto label_4884b8;
        case 0x4884bcu: goto label_4884bc;
        case 0x4884c0u: goto label_4884c0;
        case 0x4884c4u: goto label_4884c4;
        case 0x4884c8u: goto label_4884c8;
        case 0x4884ccu: goto label_4884cc;
        case 0x4884d0u: goto label_4884d0;
        case 0x4884d4u: goto label_4884d4;
        case 0x4884d8u: goto label_4884d8;
        case 0x4884dcu: goto label_4884dc;
        case 0x4884e0u: goto label_4884e0;
        case 0x4884e4u: goto label_4884e4;
        case 0x4884e8u: goto label_4884e8;
        case 0x4884ecu: goto label_4884ec;
        case 0x4884f0u: goto label_4884f0;
        case 0x4884f4u: goto label_4884f4;
        case 0x4884f8u: goto label_4884f8;
        case 0x4884fcu: goto label_4884fc;
        case 0x488500u: goto label_488500;
        case 0x488504u: goto label_488504;
        case 0x488508u: goto label_488508;
        case 0x48850cu: goto label_48850c;
        case 0x488510u: goto label_488510;
        case 0x488514u: goto label_488514;
        case 0x488518u: goto label_488518;
        case 0x48851cu: goto label_48851c;
        case 0x488520u: goto label_488520;
        case 0x488524u: goto label_488524;
        case 0x488528u: goto label_488528;
        case 0x48852cu: goto label_48852c;
        default: break;
    }

    ctx->pc = 0x4883b0u;

label_4883b0:
    // 0x4883b0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x4883b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_4883b4:
    // 0x4883b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4883b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4883b8:
    // 0x4883b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4883b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4883bc:
    // 0x4883bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4883bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4883c0:
    // 0x4883c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4883c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4883c4:
    // 0x4883c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4883c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4883c8:
    // 0x4883c8: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x4883c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_4883cc:
    // 0x4883cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4883ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4883d0:
    // 0x4883d0: 0x10000047  b           . + 4 + (0x47 << 2)
label_4883d4:
    if (ctx->pc == 0x4883D4u) {
        ctx->pc = 0x4883D8u;
        goto label_4883d8;
    }
    ctx->pc = 0x4883D0u;
    {
        const bool branch_taken_0x4883d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4883d0) {
            ctx->pc = 0x4884F0u;
            goto label_4884f0;
        }
    }
    ctx->pc = 0x4883D8u;
label_4883d8:
    // 0x4883d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4883d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4883dc:
    // 0x4883dc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x4883dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4883e0:
    // 0x4883e0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4883e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4883e4:
    // 0x4883e4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x4883e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_4883e8:
    // 0x4883e8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x4883e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4883ec:
    // 0x4883ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4883ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4883f0:
    // 0x4883f0: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x4883f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_4883f4:
    // 0x4883f4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4883f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4883f8:
    // 0x4883f8: 0x284103e9  slti        $at, $v0, 0x3E9
    ctx->pc = 0x4883f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
label_4883fc:
    // 0x4883fc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_488400:
    if (ctx->pc == 0x488400u) {
        ctx->pc = 0x488404u;
        goto label_488404;
    }
    ctx->pc = 0x4883FCu;
    {
        const bool branch_taken_0x4883fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4883fc) {
            ctx->pc = 0x488418u;
            goto label_488418;
        }
    }
    ctx->pc = 0x488404u;
label_488404:
    // 0x488404: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x488404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_488408:
    // 0x488408: 0x2442fc18  addiu       $v0, $v0, -0x3E8
    ctx->pc = 0x488408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966296));
label_48840c:
    // 0x48840c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x48840cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_488410:
    // 0x488410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x488410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488414:
    // 0x488414: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x488414u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_488418:
    // 0x488418: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_48841c:
    if (ctx->pc == 0x48841Cu) {
        ctx->pc = 0x488420u;
        goto label_488420;
    }
    ctx->pc = 0x488418u;
    {
        const bool branch_taken_0x488418 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x488418) {
            ctx->pc = 0x4884A0u;
            goto label_4884a0;
        }
    }
    ctx->pc = 0x488420u;
label_488420:
    // 0x488420: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x488420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_488424:
    // 0x488424: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x488424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_488428:
    // 0x488428: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x488428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_48842c:
    // 0x48842c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x48842cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_488430:
    // 0x488430: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x488430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_488434:
    // 0x488434: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x488434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_488438:
    // 0x488438: 0x2453004c  addiu       $s3, $v0, 0x4C
    ctx->pc = 0x488438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_48843c:
    // 0x48843c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x48843cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_488440:
    // 0x488440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488444:
    // 0x488444: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x488444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_488448:
    // 0x488448: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x488448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_48844c:
    // 0x48844c: 0x40f809  jalr        $v0
label_488450:
    if (ctx->pc == 0x488450u) {
        ctx->pc = 0x488454u;
        goto label_488454;
    }
    ctx->pc = 0x48844Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488454u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48844Cu, 0x488454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488454u;
label_488454:
    // 0x488454: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x488454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_488458:
    // 0x488458: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x488458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_48845c:
    // 0x48845c: 0xc063f94  jal         func_18FE50
label_488460:
    if (ctx->pc == 0x488460u) {
        ctx->pc = 0x488464u;
        goto label_488464;
    }
    ctx->pc = 0x48845Cu;
    SET_GPR_U32(ctx, 31, 0x488464u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x48845Cu, 0x488464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488464u;
label_488464:
    // 0x488464: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x488464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_488468:
    // 0x488468: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x488468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_48846c:
    // 0x48846c: 0xc063f94  jal         func_18FE50
label_488470:
    if (ctx->pc == 0x488470u) {
        ctx->pc = 0x488474u;
        goto label_488474;
    }
    ctx->pc = 0x48846Cu;
    SET_GPR_U32(ctx, 31, 0x488474u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x48846Cu, 0x488474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488474u;
label_488474:
    // 0x488474: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x488474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_488478:
    // 0x488478: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x488478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_48847c:
    // 0x48847c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x48847cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_488480:
    // 0x488480: 0xc103dd4  jal         func_40F750
label_488484:
    if (ctx->pc == 0x488484u) {
        ctx->pc = 0x488488u;
        goto label_488488;
    }
    ctx->pc = 0x488480u;
    SET_GPR_U32(ctx, 31, 0x488488u);
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x488480u, 0x488488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488488u;
label_488488:
    // 0x488488: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x488488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_48848c:
    // 0x48848c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x48848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_488490:
    // 0x488490: 0xc063f94  jal         func_18FE50
label_488494:
    if (ctx->pc == 0x488494u) {
        ctx->pc = 0x488498u;
        goto label_488498;
    }
    ctx->pc = 0x488490u;
    SET_GPR_U32(ctx, 31, 0x488498u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x488490u, 0x488498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488498u;
label_488498:
    // 0x488498: 0x1000000f  b           . + 4 + (0xF << 2)
label_48849c:
    if (ctx->pc == 0x48849Cu) {
        ctx->pc = 0x4884A0u;
        goto label_4884a0;
    }
    ctx->pc = 0x488498u;
    {
        const bool branch_taken_0x488498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488498) {
            ctx->pc = 0x4884D8u;
            goto label_4884d8;
        }
    }
    ctx->pc = 0x4884A0u;
label_4884a0:
    // 0x4884a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4884a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4884a4:
    // 0x4884a4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x4884a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_4884a8:
    // 0x4884a8: 0xc063f94  jal         func_18FE50
label_4884ac:
    if (ctx->pc == 0x4884ACu) {
        ctx->pc = 0x4884B0u;
        goto label_4884b0;
    }
    ctx->pc = 0x4884A8u;
    SET_GPR_U32(ctx, 31, 0x4884B0u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x4884A8u, 0x4884B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4884B0u;
label_4884b0:
    // 0x4884b0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x4884b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_4884b4:
    // 0x4884b4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x4884b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_4884b8:
    // 0x4884b8: 0xc103e64  jal         func_40F990
label_4884bc:
    if (ctx->pc == 0x4884BCu) {
        ctx->pc = 0x4884C0u;
        goto label_4884c0;
    }
    ctx->pc = 0x4884B8u;
    SET_GPR_U32(ctx, 31, 0x4884C0u);
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x4884B8u, 0x4884C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4884C0u;
label_4884c0:
    // 0x4884c0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x4884c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_4884c4:
    // 0x4884c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4884c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4884c8:
    // 0x4884c8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4884c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4884cc:
    // 0x4884cc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x4884ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4884d0:
    // 0x4884d0: 0x40f809  jalr        $v0
label_4884d4:
    if (ctx->pc == 0x4884D4u) {
        ctx->pc = 0x4884D8u;
        goto label_4884d8;
    }
    ctx->pc = 0x4884D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4884D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4884D0u, 0x4884D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4884D8u;
label_4884d8:
    // 0x4884d8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_4884dc:
    if (ctx->pc == 0x4884DCu) {
        ctx->pc = 0x4884E0u;
        goto label_4884e0;
    }
    ctx->pc = 0x4884D8u;
    {
        const bool branch_taken_0x4884d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4884d8) {
            ctx->pc = 0x4884ECu;
            goto label_4884ec;
        }
    }
    ctx->pc = 0x4884E0u;
label_4884e0:
    // 0x4884e0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x4884e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4884e4:
    // 0x4884e4: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x4884e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
label_4884e8:
    // 0x4884e8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x4884e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_4884ec:
    // 0x4884ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4884ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4884f0:
    // 0x4884f0: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x4884f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4884f4:
    // 0x4884f4: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x4884f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4884f8:
    // 0x4884f8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x4884f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4884fc:
    // 0x4884fc: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_488500:
    if (ctx->pc == 0x488500u) {
        ctx->pc = 0x488504u;
        goto label_488504;
    }
    ctx->pc = 0x4884FCu;
    {
        const bool branch_taken_0x4884fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4884fc) {
            ctx->pc = 0x4883D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4883d8;
        }
    }
    ctx->pc = 0x488504u;
label_488504:
    // 0x488504: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x488504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_488508:
    // 0x488508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x488508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48850c:
    // 0x48850c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48850cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488510:
    // 0x488510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488514:
    // 0x488514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488518:
    // 0x488518: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x488518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48851c:
    // 0x48851c: 0x3e00008  jr          $ra
label_488520:
    if (ctx->pc == 0x488520u) {
        ctx->pc = 0x488524u;
        goto label_488524;
    }
    ctx->pc = 0x48851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488524u;
label_488524:
    // 0x488524: 0x0  nop
    ctx->pc = 0x488524u;
    // NOP
label_488528:
    // 0x488528: 0x0  nop
    ctx->pc = 0x488528u;
    // NOP
label_48852c:
    // 0x48852c: 0x0  nop
    ctx->pc = 0x48852cu;
    // NOP
    ctx->pc = 0x488530u;
}
