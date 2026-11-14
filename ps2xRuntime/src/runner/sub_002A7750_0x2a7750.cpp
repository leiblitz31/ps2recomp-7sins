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

// Function: sub_002A7750
// Address: 0x2a7750 - 0x2a7910
void sub_002A7750_0x2a7750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7750_0x2a7750");
#endif

    switch (ctx->pc) {
        case 0x2a7788u: goto label_2a7788;
        case 0x2a7798u: goto label_2a7798;
        case 0x2a77c4u: goto label_2a77c4;
        case 0x2a77d4u: goto label_2a77d4;
        case 0x2a7808u: goto label_2a7808;
        case 0x2a783cu: goto label_2a783c;
        case 0x2a7854u: goto label_2a7854;
        case 0x2a7868u: goto label_2a7868;
        case 0x2a7898u: goto label_2a7898;
        case 0x2a78a4u: goto label_2a78a4;
        case 0x2a78d4u: goto label_2a78d4;
        default: break;
    }

    ctx->pc = 0x2a7750u;

    // 0x2a7750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a7754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a7758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a775c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a7760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7764: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2a7764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2a7768: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2a7768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2a776c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7770: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a7770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7774: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2A7774u;
    {
        const bool branch_taken_0x2a7774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a7774) {
            ctx->pc = 0x2A78ECu;
            goto label_2a78ec;
        }
    }
    ctx->pc = 0x2A777Cu;
    // 0x2a777c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7780: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x2A7780u;
    SET_GPR_U32(ctx, 31, 0x2A7788u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2A7780u, 0x2A7788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7788u;
label_2a7788:
    // 0x2a7788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a778c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a778cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7790: 0xc0a9e60  jal         func_2A7980
    ctx->pc = 0x2A7790u;
    SET_GPR_U32(ctx, 31, 0x2A7798u);
    ctx->pc = 0x2A7980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7980u, 0x2A7790u, 0x2A7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7798u;
label_2a7798:
    // 0x2a7798: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2a7798u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2a779c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A779Cu;
    {
        const bool branch_taken_0x2a779c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a779c) {
            ctx->pc = 0x2A77FCu;
            goto label_2a77fc;
        }
    }
    ctx->pc = 0x2A77A4u;
    // 0x2a77a4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a77a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a77ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a77acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a77b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a77b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77b4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a77b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a77b8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2a77b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a77bc: 0xc0a9e44  jal         func_2A7910
    ctx->pc = 0x2A77BCu;
    SET_GPR_U32(ctx, 31, 0x2A77C4u);
    ctx->pc = 0x2A7910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7910u, 0x2A77BCu, 0x2A77C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77C4u;
label_2a77c4:
    // 0x2a77c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a77c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a77c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a77cc: 0xc099cc8  jal         func_267320
    ctx->pc = 0x2A77CCu;
    SET_GPR_U32(ctx, 31, 0x2A77D4u);
    ctx->pc = 0x267320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267320u, 0x2A77CCu, 0x2A77D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77D4u;
label_2a77d4:
    // 0x2a77d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a77d8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2a77d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2a77dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a77e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a77e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a77e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a77e8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a77e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a77ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a77f0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2a77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2a77f4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2A77F4u;
    {
        const bool branch_taken_0x2a77f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a77f4) {
            ctx->pc = 0x2A78D4u;
            goto label_2a78d4;
        }
    }
    ctx->pc = 0x2A77FCu;
label_2a77fc:
    // 0x2a77fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7800: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x2A7800u;
    SET_GPR_U32(ctx, 31, 0x2A7808u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2A7800u, 0x2A7808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7808u;
label_2a7808:
    // 0x2a7808: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2a7808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2a780c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A780Cu;
    {
        const bool branch_taken_0x2a780c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a780c) {
            ctx->pc = 0x2A785Cu;
            goto label_2a785c;
        }
    }
    ctx->pc = 0x2A7814u;
    // 0x2a7814: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a7814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7818: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a7818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a781c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7820: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x2a7820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7824: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a7824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a7828: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2a7828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a782c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2a782cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7830: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x2a7830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2a7834: 0xc058964  jal         func_162590
    ctx->pc = 0x2A7834u;
    SET_GPR_U32(ctx, 31, 0x2A783Cu);
    ctx->pc = 0x162590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162590u, 0x2A7834u, 0x2A783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A783Cu;
label_2a783c:
    // 0x2a783c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a783cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7840: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a7840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a7844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7848: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2a7848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a784c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2A784Cu;
    SET_GPR_U32(ctx, 31, 0x2A7854u);
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2A784Cu, 0x2A7854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7854u;
label_2a7854:
    // 0x2a7854: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A7854u;
    {
        const bool branch_taken_0x2a7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7854) {
            ctx->pc = 0x2A78D4u;
            goto label_2a78d4;
        }
    }
    ctx->pc = 0x2A785Cu;
label_2a785c:
    // 0x2a785c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a785cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7860: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x2A7860u;
    SET_GPR_U32(ctx, 31, 0x2A7868u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2A7860u, 0x2A7868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7868u;
label_2a7868:
    // 0x2a7868: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a7868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a786c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7870: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a7870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7874: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2a7874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7878: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a7878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a787c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7880: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x2a7880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7884: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a7884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7888: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2a7888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a788c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2a788cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2a7890: 0xc058964  jal         func_162590
    ctx->pc = 0x2A7890u;
    SET_GPR_U32(ctx, 31, 0x2A7898u);
    ctx->pc = 0x162590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162590u, 0x2A7890u, 0x2A7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7898u;
label_2a7898:
    // 0x2a7898: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a7898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a789c: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x2A789Cu;
    SET_GPR_U32(ctx, 31, 0x2A78A4u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2A789Cu, 0x2A78A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A78A4u;
label_2a78a4:
    // 0x2a78a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a78a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a78a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a78ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a78acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a78b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2a78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a78b4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a78b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a78bc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2a78bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a78c0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2a78c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a78c4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2a78c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a78c8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2a78c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2a78cc: 0xc058934  jal         func_1624D0
    ctx->pc = 0x2A78CCu;
    SET_GPR_U32(ctx, 31, 0x2A78D4u);
    ctx->pc = 0x1624D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1624D0u, 0x2A78CCu, 0x2A78D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A78D4u;
label_2a78d4:
    // 0x2a78d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a78d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a78d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a78dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a78e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a78e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a78e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2a78ec:
    // 0x2a78ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a78f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a78f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a78f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a78f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a78f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a78f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a78fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a78fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7900: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a7900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7904: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A790Cu;
    // 0x2a790c: 0x0  nop
    ctx->pc = 0x2a790cu;
    // NOP
    ctx->pc = 0x2a7910u;
}
