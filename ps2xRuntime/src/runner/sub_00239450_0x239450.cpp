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

// Function: sub_00239450
// Address: 0x239450 - 0x2395c0
void sub_00239450_0x239450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239450_0x239450");
#endif

    switch (ctx->pc) {
        case 0x23947cu: goto label_23947c;
        case 0x239494u: goto label_239494;
        case 0x2394a4u: goto label_2394a4;
        case 0x2394ccu: goto label_2394cc;
        case 0x2394e0u: goto label_2394e0;
        case 0x2394ecu: goto label_2394ec;
        case 0x239508u: goto label_239508;
        case 0x239518u: goto label_239518;
        case 0x239534u: goto label_239534;
        case 0x239544u: goto label_239544;
        case 0x239564u: goto label_239564;
        case 0x239584u: goto label_239584;
        case 0x239594u: goto label_239594;
        case 0x2395a4u: goto label_2395a4;
        default: break;
    }

    ctx->pc = 0x239450u;

    // 0x239450: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x239450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x239454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x239454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x239458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23945c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239460: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x239460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x239464: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x239464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x239468: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x239468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x23946c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x23946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x239470: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x239470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x239474: 0xc040304  jal         func_100C10
    ctx->pc = 0x239474u;
    SET_GPR_U32(ctx, 31, 0x23947Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x239474u, 0x23947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23947Cu;
label_23947c:
    // 0x23947c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239480: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x239480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x239484: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x239484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x239488: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x239488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23948c: 0xc11bd98  jal         func_46F660
    ctx->pc = 0x23948Cu;
    SET_GPR_U32(ctx, 31, 0x239494u);
    ctx->pc = 0x46F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F660u, 0x23948Cu, 0x239494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239494u;
label_239494:
    // 0x239494: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x239494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x239498: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23949c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23949Cu;
    SET_GPR_U32(ctx, 31, 0x2394A4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23949Cu, 0x2394A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394A4u;
label_2394a4:
    // 0x2394a4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2394a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2394a8: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x2394a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2394ac: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x2394acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2394b0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2394b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2394b4: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x2394b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2394b8: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2394B8u;
    {
        const bool branch_taken_0x2394b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2394b8) {
            ctx->pc = 0x2395A4u;
            goto label_2395a4;
        }
    }
    ctx->pc = 0x2394C0u;
    // 0x2394c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2394c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2394c4: 0xc05dfe0  jal         func_177F80
    ctx->pc = 0x2394C4u;
    SET_GPR_U32(ctx, 31, 0x2394CCu);
    ctx->pc = 0x177F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F80u, 0x2394C4u, 0x2394CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394CCu;
label_2394cc:
    // 0x2394cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2394ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2394d0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2394d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2394d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2394d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2394d8: 0xc05deec  jal         func_177BB0
    ctx->pc = 0x2394D8u;
    SET_GPR_U32(ctx, 31, 0x2394E0u);
    ctx->pc = 0x177BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177BB0u, 0x2394D8u, 0x2394E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394E0u;
label_2394e0:
    // 0x2394e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2394e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2394e4: 0xc08e570  jal         func_2395C0
    ctx->pc = 0x2394E4u;
    SET_GPR_U32(ctx, 31, 0x2394ECu);
    ctx->pc = 0x2395C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395C0u, 0x2394E4u, 0x2394ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394ECu;
label_2394ec:
    // 0x2394ec: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2394ECu;
    {
        const bool branch_taken_0x2394ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2394ec) {
            ctx->pc = 0x239594u;
            goto label_239594;
        }
    }
    ctx->pc = 0x2394F4u;
    // 0x2394f4: 0x8382bbe4  lb          $v0, -0x441C($gp)
    ctx->pc = 0x2394f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949860)));
    // 0x2394f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2394F8u;
    {
        const bool branch_taken_0x2394f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2394f8) {
            ctx->pc = 0x23952Cu;
            goto label_23952c;
        }
    }
    ctx->pc = 0x239500u;
    // 0x239500: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x239500u;
    SET_GPR_U32(ctx, 31, 0x239508u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x239500u, 0x239508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239508u;
label_239508:
    // 0x239508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23950c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239510: 0xc05dec4  jal         func_177B10
    ctx->pc = 0x239510u;
    SET_GPR_U32(ctx, 31, 0x239518u);
    ctx->pc = 0x177B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B10u, 0x239510u, 0x239518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239518u;
label_239518:
    // 0x239518: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x239518u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x23951c: 0x1010  mfhi        $v0
    ctx->pc = 0x23951cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x239520: 0xaf82bbe0  sw          $v0, -0x4420($gp)
    ctx->pc = 0x239520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949856), GPR_U32(ctx, 2));
    // 0x239524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239528: 0xa382bbe4  sb          $v0, -0x441C($gp)
    ctx->pc = 0x239528u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949860), (uint8_t)GPR_U32(ctx, 2));
label_23952c:
    // 0x23952c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x23952Cu;
    SET_GPR_U32(ctx, 31, 0x239534u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x23952Cu, 0x239534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239534u;
label_239534:
    // 0x239534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239538: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x239538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23953c: 0xc05dec4  jal         func_177B10
    ctx->pc = 0x23953Cu;
    SET_GPR_U32(ctx, 31, 0x239544u);
    ctx->pc = 0x177B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B10u, 0x23953Cu, 0x239544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239544u;
label_239544:
    // 0x239544: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x239544u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x239548: 0x8010  mfhi        $s0
    ctx->pc = 0x239548u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x23954c: 0x8f82bbe0  lw          $v0, -0x4420($gp)
    ctx->pc = 0x23954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949856)));
    // 0x239550: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239550u;
    {
        const bool branch_taken_0x239550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x239550) {
            ctx->pc = 0x239570u;
            goto label_239570;
        }
    }
    ctx->pc = 0x239558u;
    // 0x239558: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x239558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23955c: 0xc05dec4  jal         func_177B10
    ctx->pc = 0x23955Cu;
    SET_GPR_U32(ctx, 31, 0x239564u);
    ctx->pc = 0x177B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B10u, 0x23955Cu, 0x239564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239564u;
label_239564:
    // 0x239564: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x239564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x239568: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x239568u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x23956c: 0x8010  mfhi        $s0
    ctx->pc = 0x23956cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_239570:
    // 0x239570: 0xaf90bbe0  sw          $s0, -0x4420($gp)
    ctx->pc = 0x239570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949856), GPR_U32(ctx, 16));
    // 0x239574: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x239574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23957c: 0xc05ded4  jal         func_177B50
    ctx->pc = 0x23957Cu;
    SET_GPR_U32(ctx, 31, 0x239584u);
    ctx->pc = 0x177B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B50u, 0x23957Cu, 0x239584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239584u;
label_239584:
    // 0x239584: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x239584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x239588: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23958c: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x23958Cu;
    SET_GPR_U32(ctx, 31, 0x239594u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x23958Cu, 0x239594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239594u;
label_239594:
    // 0x239594: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x239594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239598: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23959c: 0xc05de04  jal         func_177810
    ctx->pc = 0x23959Cu;
    SET_GPR_U32(ctx, 31, 0x2395A4u);
    ctx->pc = 0x177810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177810u, 0x23959Cu, 0x2395A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395A4u;
label_2395a4:
    // 0x2395a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2395a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2395a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2395a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2395ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2395acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2395b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2395b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2395b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2395B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2395B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2395BCu;
    // 0x2395bc: 0x0  nop
    ctx->pc = 0x2395bcu;
    // NOP
    ctx->pc = 0x2395c0u;
}
