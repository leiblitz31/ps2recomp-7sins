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

// Function: sub_00385778
// Address: 0x385778 - 0x385990
void sub_00385778_0x385778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385778_0x385778");
#endif

    switch (ctx->pc) {
        case 0x3857c8u: goto label_3857c8;
        case 0x3857ccu: goto label_3857cc;
        case 0x3857f8u: goto label_3857f8;
        case 0x385808u: goto label_385808;
        case 0x38581cu: goto label_38581c;
        case 0x385824u: goto label_385824;
        case 0x385880u: goto label_385880;
        case 0x385888u: goto label_385888;
        case 0x3858a4u: goto label_3858a4;
        case 0x3858acu: goto label_3858ac;
        case 0x3858c8u: goto label_3858c8;
        case 0x3858d0u: goto label_3858d0;
        case 0x3858e0u: goto label_3858e0;
        case 0x3858f4u: goto label_3858f4;
        case 0x3858fcu: goto label_3858fc;
        case 0x385910u: goto label_385910;
        case 0x385918u: goto label_385918;
        case 0x38592cu: goto label_38592c;
        case 0x385934u: goto label_385934;
        case 0x385948u: goto label_385948;
        case 0x385950u: goto label_385950;
        default: break;
    }

    ctx->pc = 0x385778u;

    // 0x385778: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x385778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x38577c: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x38577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x385780: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x385780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x385784: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x385784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x385788: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x385788u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38578c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x38578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x385790: 0x2e2a021  addu        $s4, $s7, $v0
    ctx->pc = 0x385790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x385794: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x385794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x385798: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x385798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x38579c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x38579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3857a0: 0x24b30008  addiu       $s3, $a1, 0x8
    ctx->pc = 0x3857a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3857a4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3857a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3857a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3857a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3857ac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3857acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3857b0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x3857b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3857b4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3857b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3857b8: 0x26920008  addiu       $s2, $s4, 0x8
    ctx->pc = 0x3857b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3857bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3857BCu;
    {
        const bool branch_taken_0x3857bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3857C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857BCu;
        // 0x3857c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3857bc) {
            ctx->pc = 0x3857D4u;
            goto label_3857d4;
        }
    }
    ctx->pc = 0x3857C4u;
    // 0x3857c4: 0x0  nop
    ctx->pc = 0x3857c4u;
    // NOP
label_3857c8:
    // 0x3857c8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3857c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3857cc:
    // 0x3857cc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3857ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3857d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3857d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3857d4:
    // 0x3857d4: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x3857d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3857d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3857D8u;
    {
        const bool branch_taken_0x3857d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3857d8) {
            ctx->pc = 0x385830u;
            goto label_385830;
        }
    }
    ctx->pc = 0x3857E0u;
    // 0x3857e0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x3857e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3857e4: 0x5200fff8  beql        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3857E4u;
    {
        const bool branch_taken_0x3857e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3857e4) {
            ctx->pc = 0x3857E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3857E4u;
            // 0x3857e8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3857C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3857c8;
        }
    }
    ctx->pc = 0x3857ECu;
    // 0x3857ec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3857ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3857f0: 0xc0ef360  jal         func_3BCD80
    ctx->pc = 0x3857F0u;
    SET_GPR_U32(ctx, 31, 0x3857F8u);
    ctx->pc = 0x3857F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3857F0u;
    // 0x3857f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD80u, 0x3857F0u, 0x3857F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3857F8u;
label_3857f8:
    // 0x3857f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3857f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3857fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3857fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385800: 0xc0ef372  jal         func_3BCDC8
    ctx->pc = 0x385800u;
    SET_GPR_U32(ctx, 31, 0x385808u);
    ctx->pc = 0x385804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385800u;
    // 0x385804: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x385800u, 0x385808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385808u;
label_385808:
    // 0x385808: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x385808u;
    {
        const bool branch_taken_0x385808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385808u;
        // 0x38580c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385808) {
            ctx->pc = 0x38582Cu;
            goto label_38582c;
        }
    }
    ctx->pc = 0x385810u;
    // 0x385810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x385810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385814: 0xc0ef404  jal         func_3BD010
    ctx->pc = 0x385814u;
    SET_GPR_U32(ctx, 31, 0x38581Cu);
    ctx->pc = 0x385818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385814u;
    // 0x385818: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD010u, 0x385814u, 0x38581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38581Cu;
label_38581c:
    // 0x38581c: 0xc0e14b2  jal         func_3852C8
    ctx->pc = 0x38581Cu;
    SET_GPR_U32(ctx, 31, 0x385824u);
    ctx->pc = 0x385820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38581Cu;
    // 0x385820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3852C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3852C8u, 0x38581Cu, 0x385824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385824u;
label_385824:
    // 0x385824: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x385824u;
    {
        const bool branch_taken_0x385824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385824u;
        // 0x385828: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385824) {
            ctx->pc = 0x3857CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3857cc;
        }
    }
    ctx->pc = 0x38582Cu;
label_38582c:
    // 0x38582c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x38582cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385830:
    // 0x385830: 0x16c0004c  bnez        $s6, . + 4 + (0x4C << 2)
    ctx->pc = 0x385830u;
    {
        const bool branch_taken_0x385830 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x385834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385830u;
        // 0x385834: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385830) {
            ctx->pc = 0x385964u;
            goto label_385964;
        }
    }
    ctx->pc = 0x385838u;
    // 0x385838: 0x12a00049  beqz        $s5, . + 4 + (0x49 << 2)
    ctx->pc = 0x385838u;
    {
        const bool branch_taken_0x385838 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385838u;
        // 0x38583c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385838) {
            ctx->pc = 0x385960u;
            goto label_385960;
        }
    }
    ctx->pc = 0x385840u;
    // 0x385840: 0x26900008  addiu       $s0, $s4, 0x8
    ctx->pc = 0x385840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x385844: 0x1aa0001b  blez        $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x385844u;
    {
        const bool branch_taken_0x385844 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x385848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385844u;
        // 0x385848: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385844) {
            ctx->pc = 0x3858B4u;
            goto label_3858b4;
        }
    }
    ctx->pc = 0x38584Cu;
    // 0x38584c: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x38584Cu;
    {
        const bool branch_taken_0x38584c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38584c) {
            ctx->pc = 0x385850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38584Cu;
            // 0x385850: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3858E4u;
            goto label_3858e4;
        }
    }
    ctx->pc = 0x385854u;
    // 0x385854: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x385854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x385858: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x385858u;
    {
        const bool branch_taken_0x385858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x385858) {
            ctx->pc = 0x38585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385858u;
            // 0x38585c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3858B8u;
            goto label_3858b8;
        }
    }
    ctx->pc = 0x385860u;
    // 0x385860: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x385860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x385864: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x385864u;
    {
        const bool branch_taken_0x385864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x385864) {
            ctx->pc = 0x385868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385864u;
            // 0x385868: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385894u;
            goto label_385894;
        }
    }
    ctx->pc = 0x38586Cu;
    // 0x38586c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x38586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x385870: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x385870u;
    {
        const bool branch_taken_0x385870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x385874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385870u;
        // 0x385874: 0x2690000c  addiu       $s0, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385870) {
            ctx->pc = 0x38588Cu;
            goto label_38588c;
        }
    }
    ctx->pc = 0x385878u;
    // 0x385878: 0xc0e1498  jal         func_385260
    ctx->pc = 0x385878u;
    SET_GPR_U32(ctx, 31, 0x385880u);
    ctx->pc = 0x38587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385878u;
    // 0x38587c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x385878u, 0x385880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385880u;
label_385880:
    // 0x385880: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x385880u;
    SET_GPR_U32(ctx, 31, 0x385888u);
    ctx->pc = 0x385884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385880u;
    // 0x385884: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x385880u, 0x385888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385888u;
label_385888:
    // 0x385888: 0x2690000c  addiu       $s0, $s4, 0xC
    ctx->pc = 0x385888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_38588c:
    // 0x38588c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x38588cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x385890: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x385890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385894:
    // 0x385894: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x385894u;
    {
        const bool branch_taken_0x385894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385894) {
            ctx->pc = 0x385898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385894u;
            // 0x385898: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3858B0u;
            goto label_3858b0;
        }
    }
    ctx->pc = 0x38589Cu;
    // 0x38589c: 0xc0e1498  jal         func_385260
    ctx->pc = 0x38589Cu;
    SET_GPR_U32(ctx, 31, 0x3858A4u);
    ctx->pc = 0x3858A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38589Cu;
    // 0x3858a0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x38589Cu, 0x3858A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3858A4u;
label_3858a4:
    // 0x3858a4: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x3858A4u;
    SET_GPR_U32(ctx, 31, 0x3858ACu);
    ctx->pc = 0x3858A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3858A4u;
    // 0x3858a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x3858A4u, 0x3858ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3858ACu;
label_3858ac:
    // 0x3858ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3858acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3858b0:
    // 0x3858b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3858b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3858b4:
    // 0x3858b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3858b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3858b8:
    // 0x3858b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3858B8u;
    {
        const bool branch_taken_0x3858b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3858b8) {
            ctx->pc = 0x3858BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3858B8u;
            // 0x3858bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3858D4u;
            goto label_3858d4;
        }
    }
    ctx->pc = 0x3858C0u;
    // 0x3858c0: 0xc0e1498  jal         func_385260
    ctx->pc = 0x3858C0u;
    SET_GPR_U32(ctx, 31, 0x3858C8u);
    ctx->pc = 0x3858C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3858C0u;
    // 0x3858c4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x3858C0u, 0x3858C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3858C8u;
label_3858c8:
    // 0x3858c8: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x3858C8u;
    SET_GPR_U32(ctx, 31, 0x3858D0u);
    ctx->pc = 0x3858CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3858C8u;
    // 0x3858cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x3858C8u, 0x3858D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3858D0u;
label_3858d0:
    // 0x3858d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3858d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3858d4:
    // 0x3858d4: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x3858d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3858d8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3858D8u;
    {
        const bool branch_taken_0x3858d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3858DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3858D8u;
        // 0x3858dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3858d8) {
            ctx->pc = 0x385960u;
            goto label_385960;
        }
    }
    ctx->pc = 0x3858E0u;
label_3858e0:
    // 0x3858e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3858e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3858e4:
    // 0x3858e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3858E4u;
    {
        const bool branch_taken_0x3858e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3858e4) {
            ctx->pc = 0x3858E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3858E4u;
            // 0x3858e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385900u;
            goto label_385900;
        }
    }
    ctx->pc = 0x3858ECu;
    // 0x3858ec: 0xc0e1498  jal         func_385260
    ctx->pc = 0x3858ECu;
    SET_GPR_U32(ctx, 31, 0x3858F4u);
    ctx->pc = 0x3858F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3858ECu;
    // 0x3858f0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x3858ECu, 0x3858F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3858F4u;
label_3858f4:
    // 0x3858f4: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x3858F4u;
    SET_GPR_U32(ctx, 31, 0x3858FCu);
    ctx->pc = 0x3858F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3858F4u;
    // 0x3858f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x3858F4u, 0x3858FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3858FCu;
label_3858fc:
    // 0x3858fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3858fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_385900:
    // 0x385900: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x385900u;
    {
        const bool branch_taken_0x385900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385900) {
            ctx->pc = 0x385904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385900u;
            // 0x385904: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38591Cu;
            goto label_38591c;
        }
    }
    ctx->pc = 0x385908u;
    // 0x385908: 0xc0e1498  jal         func_385260
    ctx->pc = 0x385908u;
    SET_GPR_U32(ctx, 31, 0x385910u);
    ctx->pc = 0x38590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385908u;
    // 0x38590c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x385908u, 0x385910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385910u;
label_385910:
    // 0x385910: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x385910u;
    SET_GPR_U32(ctx, 31, 0x385918u);
    ctx->pc = 0x385914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385910u;
    // 0x385914: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x385910u, 0x385918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385918u;
label_385918:
    // 0x385918: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x385918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38591c:
    // 0x38591c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x38591Cu;
    {
        const bool branch_taken_0x38591c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38591c) {
            ctx->pc = 0x385920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38591Cu;
            // 0x385920: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385938u;
            goto label_385938;
        }
    }
    ctx->pc = 0x385924u;
    // 0x385924: 0xc0e1498  jal         func_385260
    ctx->pc = 0x385924u;
    SET_GPR_U32(ctx, 31, 0x38592Cu);
    ctx->pc = 0x385928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385924u;
    // 0x385928: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x385924u, 0x38592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38592Cu;
label_38592c:
    // 0x38592c: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x38592Cu;
    SET_GPR_U32(ctx, 31, 0x385934u);
    ctx->pc = 0x385930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38592Cu;
    // 0x385930: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x38592Cu, 0x385934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385934u;
label_385934:
    // 0x385934: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x385934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_385938:
    // 0x385938: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x385938u;
    {
        const bool branch_taken_0x385938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385938) {
            ctx->pc = 0x38593Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385938u;
            // 0x38593c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385954u;
            goto label_385954;
        }
    }
    ctx->pc = 0x385940u;
    // 0x385940: 0xc0e1498  jal         func_385260
    ctx->pc = 0x385940u;
    SET_GPR_U32(ctx, 31, 0x385948u);
    ctx->pc = 0x385944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385940u;
    // 0x385944: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x385940u, 0x385948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385948u;
label_385948:
    // 0x385948: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x385948u;
    SET_GPR_U32(ctx, 31, 0x385950u);
    ctx->pc = 0x38594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385948u;
    // 0x38594c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x385948u, 0x385950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385950u;
label_385950:
    // 0x385950: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x385950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_385954:
    // 0x385954: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x385954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x385958: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x385958u;
    {
        const bool branch_taken_0x385958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385958u;
        // 0x38595c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385958) {
            ctx->pc = 0x3858E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3858e0;
        }
    }
    ctx->pc = 0x385960u;
label_385960:
    // 0x385960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x385960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385964:
    // 0x385964: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x385964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x385968: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x385968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38596c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x38596cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x385970: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x385970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x385974: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x385974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x385978: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x385978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38597c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x38597cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385980: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x385980u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385988: 0x3e00008  jr          $ra
    ctx->pc = 0x385988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385988u;
        // 0x38598c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385990u;
}
