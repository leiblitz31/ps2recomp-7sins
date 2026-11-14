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

// Function: sub_001B8790
// Address: 0x1b8790 - 0x1b88f0
void sub_001B8790_0x1b8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8790_0x1b8790");
#endif

    switch (ctx->pc) {
        case 0x1b87c4u: goto label_1b87c4;
        case 0x1b87d8u: goto label_1b87d8;
        case 0x1b87fcu: goto label_1b87fc;
        case 0x1b8824u: goto label_1b8824;
        case 0x1b8848u: goto label_1b8848;
        case 0x1b8870u: goto label_1b8870;
        case 0x1b88a0u: goto label_1b88a0;
        case 0x1b88b0u: goto label_1b88b0;
        case 0x1b88d4u: goto label_1b88d4;
        default: break;
    }

    ctx->pc = 0x1b8790u;

    // 0x1b8790: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b8790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b8794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b8794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b8798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b879c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b87a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b87a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b87a4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1b87a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1b87a8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1b87a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1b87ac: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1b87acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1b87b0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1b87b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1b87b4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1b87b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1b87b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b87b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b87bc: 0xc06c8a8  jal         func_1B22A0
    ctx->pc = 0x1B87BCu;
    SET_GPR_U32(ctx, 31, 0x1B87C4u);
    ctx->pc = 0x1B22A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B22A0u, 0x1B87BCu, 0x1B87C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87C4u;
label_1b87c4:
    // 0x1b87c4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1b87c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1b87c8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1b87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b87cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1b87ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b87d0: 0xc041954  jal         func_106550
    ctx->pc = 0x1B87D0u;
    SET_GPR_U32(ctx, 31, 0x1B87D8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1B87D0u, 0x1B87D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87D8u;
label_1b87d8:
    // 0x1b87d8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b87dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b87e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1b87e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b87e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b87e8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1b87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b87ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b87ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b87f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87f4: 0xc06e320  jal         func_1B8C80
    ctx->pc = 0x1B87F4u;
    SET_GPR_U32(ctx, 31, 0x1B87FCu);
    ctx->pc = 0x1B8C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C80u, 0x1B87F4u, 0x1B87FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87FCu;
label_1b87fc:
    // 0x1b87fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b87fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8800: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1b8800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8804: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b8804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8808: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1b8808u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b880c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8810: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1b8810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8814: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b8814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8818: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1b8818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b881c: 0xc06e300  jal         func_1B8C00
    ctx->pc = 0x1B881Cu;
    SET_GPR_U32(ctx, 31, 0x1B8824u);
    ctx->pc = 0x1B8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C00u, 0x1B881Cu, 0x1B8824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8824u;
label_1b8824:
    // 0x1b8824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8828: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b8828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b882c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8830: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8830u;
    {
        const bool branch_taken_0x1b8830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8830) {
            ctx->pc = 0x1B8854u;
            goto label_1b8854;
        }
    }
    ctx->pc = 0x1B8838u;
    // 0x1b8838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b883c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b883cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8840: 0xc06e28c  jal         func_1B8A30
    ctx->pc = 0x1B8840u;
    SET_GPR_U32(ctx, 31, 0x1B8848u);
    ctx->pc = 0x1B8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A30u, 0x1B8840u, 0x1B8848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8848u;
label_1b8848:
    // 0x1b8848: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b8848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b884c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B884Cu;
    {
        const bool branch_taken_0x1b884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b884c) {
            ctx->pc = 0x1B8874u;
            goto label_1b8874;
        }
    }
    ctx->pc = 0x1B8854u;
label_1b8854:
    // 0x1b8854: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1b8854u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b885c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1b885cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b8860: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1b8860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8864: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1b8864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1b8868: 0xc06e26c  jal         func_1B89B0
    ctx->pc = 0x1B8868u;
    SET_GPR_U32(ctx, 31, 0x1B8870u);
    ctx->pc = 0x1B89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B89B0u, 0x1B8868u, 0x1B8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8870u;
label_1b8870:
    // 0x1b8870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8874:
    // 0x1b8874: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1b8874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b8878: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B8878u;
    {
        const bool branch_taken_0x1b8878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8878) {
            ctx->pc = 0x1B88A4u;
            goto label_1b88a4;
        }
    }
    ctx->pc = 0x1B8880u;
    // 0x1b8880: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b8880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8884: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1b8884u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8888: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b8888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b888c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b888cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8890: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b8890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8894: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1b8894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b8898: 0xc06e300  jal         func_1B8C00
    ctx->pc = 0x1B8898u;
    SET_GPR_U32(ctx, 31, 0x1B88A0u);
    ctx->pc = 0x1B8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C00u, 0x1B8898u, 0x1B88A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88A0u;
label_1b88a0:
    // 0x1b88a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b88a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b88a4:
    // 0x1b88a4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b88a8: 0xc06e250  jal         func_1B8940
    ctx->pc = 0x1B88A8u;
    SET_GPR_U32(ctx, 31, 0x1B88B0u);
    ctx->pc = 0x1B8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8940u, 0x1B88A8u, 0x1B88B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88B0u;
label_1b88b0:
    // 0x1b88b0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1b88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1b88b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b88b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b88bc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1b88bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b88c0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b88c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b88c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b88c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b88c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88cc: 0xc06e23c  jal         func_1B88F0
    ctx->pc = 0x1B88CCu;
    SET_GPR_U32(ctx, 31, 0x1B88D4u);
    ctx->pc = 0x1B88F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B88F0u, 0x1B88CCu, 0x1B88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88D4u;
label_1b88d4:
    // 0x1b88d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b88d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b88d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b88d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b88dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b88dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b88e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b88e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b88e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1b88e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b88e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B88E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B88E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B88F0u;
}
