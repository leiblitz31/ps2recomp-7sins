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

// Function: sub_002FE860
// Address: 0x2fe860 - 0x2fe938
void sub_002FE860_0x2fe860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE860_0x2fe860");
#endif

    switch (ctx->pc) {
        case 0x2fe8a0u: goto label_2fe8a0;
        case 0x2fe8a8u: goto label_2fe8a8;
        case 0x2fe900u: goto label_2fe900;
        case 0x2fe910u: goto label_2fe910;
        case 0x2fe920u: goto label_2fe920;
        case 0x2fe930u: goto label_2fe930;
        default: break;
    }

    ctx->pc = 0x2fe860u;

    // 0x2fe860: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fe860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fe864: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fe864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fe868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe86c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2fe86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2fe870: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2fe870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2fe874: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x2fe874u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x2fe878: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2fe878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2fe87c: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2fe87cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2fe880: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2fe880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2fe884: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2fe884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe888: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fe888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fe88c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2fe88cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fe890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe894: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2fe894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2fe898: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2fe898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2fe89c: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x2fe89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_2fe8a0:
    // 0x2fe8a0: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x2FE8A0u;
    SET_GPR_U32(ctx, 31, 0x2FE8A8u);
    ctx->pc = 0x2FE8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE8A0u;
    // 0x2fe8a4: 0x8ec4ef20  lw          $a0, -0x10E0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x2FE8A0u, 0x2FE8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE8A8u;
label_2fe8a8:
    // 0x2fe8a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2fe8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fe8ac: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x2fe8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x2fe8b0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2fe8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fe8b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2fe8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2fe8b8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2fe8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2fe8bc: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x2fe8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fe8c0: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x2fe8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2fe8c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2fe8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe8c8: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2FE8C8u;
    {
        const bool branch_taken_0x2fe8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2FE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE8C8u;
        // 0x2fe8cc: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe8c8) {
            ctx->pc = 0x2FE908u;
            goto label_2fe908;
        }
    }
    ctx->pc = 0x2FE8D0u;
    // 0x2fe8d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE8D0u;
    {
        const bool branch_taken_0x2fe8d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE8D0u;
        // 0x2fe8d4: 0x26a4a750  addiu       $a0, $s5, -0x58B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294944592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe8d0) {
            ctx->pc = 0x2FE8E8u;
            goto label_2fe8e8;
        }
    }
    ctx->pc = 0x2FE8D8u;
    // 0x2fe8d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FE8D8u;
    {
        const bool branch_taken_0x2fe8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE8D8u;
        // 0x2fe8dc: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe8d8) {
            ctx->pc = 0x2FE8F8u;
            goto label_2fe8f8;
        }
    }
    ctx->pc = 0x2FE8E0u;
    // 0x2fe8e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FE8E0u;
    {
        const bool branch_taken_0x2fe8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe8e0) {
            ctx->pc = 0x2FE928u;
            goto label_2fe928;
        }
    }
    ctx->pc = 0x2FE8E8u;
label_2fe8e8:
    // 0x2fe8e8: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2FE8E8u;
    {
        const bool branch_taken_0x2fe8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2FE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE8E8u;
        // 0x2fe8ec: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe8e8) {
            ctx->pc = 0x2FE918u;
            goto label_2fe918;
        }
    }
    ctx->pc = 0x2FE8F0u;
    // 0x2fe8f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FE8F0u;
    {
        const bool branch_taken_0x2fe8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe8f0) {
            ctx->pc = 0x2FE928u;
            goto label_2fe928;
        }
    }
    ctx->pc = 0x2FE8F8u;
label_2fe8f8:
    // 0x2fe8f8: 0xc0bf6a4  jal         func_2FDA90
    ctx->pc = 0x2FE8F8u;
    SET_GPR_U32(ctx, 31, 0x2FE900u);
    ctx->pc = 0x2FE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE8F8u;
    // 0x2fe8fc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA90u, 0x2FE8F8u, 0x2FE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE900u;
label_2fe900:
    // 0x2fe900: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2FE900u;
    {
        const bool branch_taken_0x2fe900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe900) {
            ctx->pc = 0x2FE8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe8a0;
        }
    }
    ctx->pc = 0x2FE908u;
label_2fe908:
    // 0x2fe908: 0xc0bf684  jal         func_2FDA10
    ctx->pc = 0x2FE908u;
    SET_GPR_U32(ctx, 31, 0x2FE910u);
    ctx->pc = 0x2FE90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE908u;
    // 0x2fe90c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA10u, 0x2FE908u, 0x2FE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE910u;
label_2fe910:
    // 0x2fe910: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2FE910u;
    {
        const bool branch_taken_0x2fe910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe910) {
            ctx->pc = 0x2FE8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe8a0;
        }
    }
    ctx->pc = 0x2FE918u;
label_2fe918:
    // 0x2fe918: 0xc0bf6b4  jal         func_2FDAD0
    ctx->pc = 0x2FE918u;
    SET_GPR_U32(ctx, 31, 0x2FE920u);
    ctx->pc = 0x2FE91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE918u;
    // 0x2fe91c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDAD0u, 0x2FE918u, 0x2FE920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE920u;
label_2fe920:
    // 0x2fe920: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x2FE920u;
    {
        const bool branch_taken_0x2fe920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe920) {
            ctx->pc = 0x2FE8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe8a0;
        }
    }
    ctx->pc = 0x2FE928u;
label_2fe928:
    // 0x2fe928: 0xc0c0232  jal         func_3008C8
    ctx->pc = 0x2FE928u;
    SET_GPR_U32(ctx, 31, 0x2FE930u);
    ctx->pc = 0x3008C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3008C8u, 0x2FE928u, 0x2FE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE930u;
label_2fe930:
    // 0x2fe930: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x2FE930u;
    {
        const bool branch_taken_0x2fe930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe930) {
            ctx->pc = 0x2FE8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe8a0;
        }
    }
    ctx->pc = 0x2FE938u;
}
