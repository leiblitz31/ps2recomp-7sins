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

// Function: sub_002B87A0
// Address: 0x2b87a0 - 0x2b8960
void sub_002B87A0_0x2b87a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B87A0_0x2b87a0");
#endif

    switch (ctx->pc) {
        case 0x2b87d8u: goto label_2b87d8;
        case 0x2b87e8u: goto label_2b87e8;
        case 0x2b8814u: goto label_2b8814;
        case 0x2b8824u: goto label_2b8824;
        case 0x2b8858u: goto label_2b8858;
        case 0x2b888cu: goto label_2b888c;
        case 0x2b88a4u: goto label_2b88a4;
        case 0x2b88b8u: goto label_2b88b8;
        case 0x2b88e8u: goto label_2b88e8;
        case 0x2b88f4u: goto label_2b88f4;
        case 0x2b8924u: goto label_2b8924;
        default: break;
    }

    ctx->pc = 0x2b87a0u;

    // 0x2b87a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b87a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b87a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b87a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b87a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b87a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b87ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b87acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b87b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b87b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b87b4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2b87b8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2b87b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2b87bc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2b87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b87c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b87c4: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2B87C4u;
    {
        const bool branch_taken_0x2b87c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b87c4) {
            ctx->pc = 0x2B893Cu;
            goto label_2b893c;
        }
    }
    ctx->pc = 0x2B87CCu;
    // 0x2b87cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2b87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b87d0: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2B87D0u;
    SET_GPR_U32(ctx, 31, 0x2B87D8u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2B87D0u, 0x2B87D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87D8u;
label_2b87d8:
    // 0x2b87d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b87d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b87dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b87dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b87e0: 0xc097c8c  jal         func_25F230
    ctx->pc = 0x2B87E0u;
    SET_GPR_U32(ctx, 31, 0x2B87E8u);
    ctx->pc = 0x25F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F230u, 0x2B87E0u, 0x2B87E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87E8u;
label_2b87e8:
    // 0x2b87e8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2b87e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2b87ec: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B87ECu;
    {
        const bool branch_taken_0x2b87ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b87ec) {
            ctx->pc = 0x2B884Cu;
            goto label_2b884c;
        }
    }
    ctx->pc = 0x2B87F4u;
    // 0x2b87f4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2b87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b87f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b87fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b8800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8804: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2b8804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8808: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2b8808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b880c: 0xc0ae258  jal         func_2B8960
    ctx->pc = 0x2B880Cu;
    SET_GPR_U32(ctx, 31, 0x2B8814u);
    ctx->pc = 0x2B8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8960u, 0x2B880Cu, 0x2B8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8814u;
label_2b8814:
    // 0x2b8814: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b8814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8818: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b8818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b881c: 0xc0421a4  jal         func_108690
    ctx->pc = 0x2B881Cu;
    SET_GPR_U32(ctx, 31, 0x2B8824u);
    ctx->pc = 0x108690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108690u, 0x2B881Cu, 0x2B8824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8824u;
label_2b8824:
    // 0x2b8824: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8828: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2b8828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2b882c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8830: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2b8830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b8834: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b8834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8838: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b8838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b883c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8840: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2b8840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2b8844: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2B8844u;
    {
        const bool branch_taken_0x2b8844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8844) {
            ctx->pc = 0x2B8924u;
            goto label_2b8924;
        }
    }
    ctx->pc = 0x2B884Cu;
label_2b884c:
    // 0x2b884c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b884cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8850: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2B8850u;
    SET_GPR_U32(ctx, 31, 0x2B8858u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2B8850u, 0x2B8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8858u;
label_2b8858:
    // 0x2b8858: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2b8858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2b885c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B885Cu;
    {
        const bool branch_taken_0x2b885c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b885c) {
            ctx->pc = 0x2B88ACu;
            goto label_2b88ac;
        }
    }
    ctx->pc = 0x2B8864u;
    // 0x2b8864: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2b8864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8868: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2b8868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b886c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8870: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x2b8870u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8874: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2b8874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8878: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2b8878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b887c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2b887cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8880: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2b8884: 0xc046a38  jal         func_11A8E0
    ctx->pc = 0x2B8884u;
    SET_GPR_U32(ctx, 31, 0x2B888Cu);
    ctx->pc = 0x11A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A8E0u, 0x2B8884u, 0x2B888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B888Cu;
label_2b888c:
    // 0x2b888c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b888cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8890: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b8894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8898: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b8898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b889c: 0xc042104  jal         func_108410
    ctx->pc = 0x2B889Cu;
    SET_GPR_U32(ctx, 31, 0x2B88A4u);
    ctx->pc = 0x108410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108410u, 0x2B889Cu, 0x2B88A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88A4u;
label_2b88a4:
    // 0x2b88a4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2B88A4u;
    {
        const bool branch_taken_0x2b88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b88a4) {
            ctx->pc = 0x2B8924u;
            goto label_2b8924;
        }
    }
    ctx->pc = 0x2B88ACu;
label_2b88ac:
    // 0x2b88ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b88acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b88b0: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2B88B0u;
    SET_GPR_U32(ctx, 31, 0x2B88B8u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2B88B0u, 0x2B88B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88B8u;
label_2b88b8:
    // 0x2b88b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2b88b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b88bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b88c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b88c4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2b88c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b88c8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2b88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b88cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b88d0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x2b88d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b88d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b88d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2b88d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b88dc: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2b88dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2b88e0: 0xc046a38  jal         func_11A8E0
    ctx->pc = 0x2B88E0u;
    SET_GPR_U32(ctx, 31, 0x2B88E8u);
    ctx->pc = 0x11A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A8E0u, 0x2B88E0u, 0x2B88E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88E8u;
label_2b88e8:
    // 0x2b88e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b88e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b88ec: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2B88ECu;
    SET_GPR_U32(ctx, 31, 0x2B88F4u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2B88ECu, 0x2B88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88F4u;
label_2b88f4:
    // 0x2b88f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2b88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b88f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b88fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8900: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2b8900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8904: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2b8904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8908: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b890c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2b890cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8910: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2b8910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b8914: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2b8914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b8918: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2b8918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2b891c: 0xc046a08  jal         func_11A820
    ctx->pc = 0x2B891Cu;
    SET_GPR_U32(ctx, 31, 0x2B8924u);
    ctx->pc = 0x11A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A820u, 0x2B891Cu, 0x2B8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8924u;
label_2b8924:
    // 0x2b8924: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8928: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2b8928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b892c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8930: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b8930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8934: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8938: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2b8938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2b893c:
    // 0x2b893c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8940: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b8940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b8944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b894c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b894cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8950: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b8950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b8954: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B895Cu;
    // 0x2b895c: 0x0  nop
    ctx->pc = 0x2b895cu;
    // NOP
    ctx->pc = 0x2b8960u;
}
