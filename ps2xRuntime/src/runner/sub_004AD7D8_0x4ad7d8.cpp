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

// Function: sub_004AD7D8
// Address: 0x4ad7d8 - 0x4adc68
void sub_004AD7D8_0x4ad7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD7D8_0x4ad7d8");
#endif

    switch (ctx->pc) {
        case 0x4ad804u: goto label_4ad804;
        case 0x4ad834u: goto label_4ad834;
        case 0x4ad870u: goto label_4ad870;
        case 0x4ad884u: goto label_4ad884;
        case 0x4ad8b0u: goto label_4ad8b0;
        case 0x4ad8ccu: goto label_4ad8cc;
        case 0x4ad90cu: goto label_4ad90c;
        case 0x4ad920u: goto label_4ad920;
        case 0x4ad940u: goto label_4ad940;
        case 0x4ad950u: goto label_4ad950;
        case 0x4ad960u: goto label_4ad960;
        case 0x4ad978u: goto label_4ad978;
        default: break;
    }

    ctx->pc = 0x4ad7d8u;

    // 0x4ad7d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ad7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad7dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad7dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad7e0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4ad7e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad7e4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4ad7e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad7e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4ad7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4ad7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad7f0: 0x24848ab0  addiu       $a0, $a0, -0x7550
    ctx->pc = 0x4ad7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937264));
    // 0x4ad7f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4ad7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad7f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ad7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad7fc: 0xc126b7e  jal         func_49ADF8
    ctx->pc = 0x4AD7FCu;
    SET_GPR_U32(ctx, 31, 0x4AD804u);
    ctx->pc = 0x4AD800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD7FCu;
    // 0x4ad800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ADF8u, 0x4AD7FCu, 0x4AD804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD804u;
label_4ad804:
    // 0x4ad804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad808: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD808u;
        // 0x4ad80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD810u;
    // 0x4ad810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad814: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4ad814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad818: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4ad818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad81c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ad81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4ad820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad824: 0x24448ab0  addiu       $a0, $v0, -0x7550
    ctx->pc = 0x4ad824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937264));
    // 0x4ad828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ad828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad82c: 0xc12609a  jal         func_498268
    ctx->pc = 0x4AD82Cu;
    SET_GPR_U32(ctx, 31, 0x4AD834u);
    ctx->pc = 0x4AD830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD82Cu;
    // 0x4ad830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498268u, 0x4AD82Cu, 0x4AD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD834u;
label_4ad834:
    // 0x4ad834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad838: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD838u;
        // 0x4ad83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD840u;
    // 0x4ad840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad844: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4ad844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x4ad848: 0x8f84c190  lw          $a0, -0x3E70($gp)
    ctx->pc = 0x4ad848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
    // 0x4ad84c: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4ad84cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4ad850: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ad850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ad854: 0x24c68ab0  addiu       $a2, $a2, -0x7550
    ctx->pc = 0x4ad854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937264));
    // 0x4ad858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ad85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ad860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad864: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ad864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad868: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4AD868u;
    SET_GPR_U32(ctx, 31, 0x4AD870u);
    ctx->pc = 0x4AD86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD868u;
    // 0x4ad86c: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4AD868u, 0x4AD870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD870u;
label_4ad870:
    // 0x4ad870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ad870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad874: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD874u;
    {
        const bool branch_taken_0x4ad874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD874u;
        // 0x4ad878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad874) {
            ctx->pc = 0x4AD888u;
            goto label_4ad888;
        }
    }
    ctx->pc = 0x4AD87Cu;
    // 0x4ad87c: 0xc12b458  jal         func_4AD160
    ctx->pc = 0x4AD87Cu;
    SET_GPR_U32(ctx, 31, 0x4AD884u);
    ctx->pc = 0x4AD880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD87Cu;
    // 0x4ad880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD160u, 0x4AD87Cu, 0x4AD884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD884u;
label_4ad884:
    // 0x4ad884: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad888:
    // 0x4ad888: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ad888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad890: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD890u;
        // 0x4ad894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD898u;
    // 0x4ad898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad89c: 0x8f82b8ac  lw          $v0, -0x4754($gp)
    ctx->pc = 0x4ad89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949036)));
    // 0x4ad8a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD8A0u;
    {
        const bool branch_taken_0x4ad8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD8A0u;
        // 0x4ad8a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad8a0) {
            ctx->pc = 0x4AD8C0u;
            goto label_4ad8c0;
        }
    }
    ctx->pc = 0x4AD8A8u;
    // 0x4ad8a8: 0xc12b084  jal         func_4AC210
    ctx->pc = 0x4AD8A8u;
    SET_GPR_U32(ctx, 31, 0x4AD8B0u);
    ctx->pc = 0x4AC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC210u, 0x4AD8A8u, 0x4AD8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD8B0u;
label_4ad8b0:
    // 0x4ad8b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD8B0u;
    {
        const bool branch_taken_0x4ad8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad8b0) {
            ctx->pc = 0x4AD8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD8B0u;
            // 0x4ad8b4: 0xaf80b8ac  sw          $zero, -0x4754($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949036), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD8C0u;
            goto label_4ad8c0;
        }
    }
    ctx->pc = 0x4AD8B8u;
    // 0x4ad8b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD8B8u;
    {
        const bool branch_taken_0x4ad8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD8B8u;
        // 0x4ad8bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad8b8) {
            ctx->pc = 0x4AD8CCu;
            goto label_4ad8cc;
        }
    }
    ctx->pc = 0x4AD8C0u;
label_4ad8c0:
    // 0x4ad8c0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4ad8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4ad8c4: 0xc126614  jal         func_499850
    ctx->pc = 0x4AD8C4u;
    SET_GPR_U32(ctx, 31, 0x4AD8CCu);
    ctx->pc = 0x4AD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD8C4u;
    // 0x4ad8c8: 0x24848ab0  addiu       $a0, $a0, -0x7550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x4AD8C4u, 0x4AD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD8CCu;
label_4ad8cc:
    // 0x4ad8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD8D0u;
        // 0x4ad8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD8D8u;
    // 0x4ad8d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad8dc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4ad8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x4ad8e0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4ad8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4ad8e4: 0x8f84c190  lw          $a0, -0x3E70($gp)
    ctx->pc = 0x4ad8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
    // 0x4ad8e8: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4ad8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4ad8ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ad8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ad8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad8f4: 0x24c68ab0  addiu       $a2, $a2, -0x7550
    ctx->pc = 0x4ad8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937264));
    // 0x4ad8f8: 0x24e78b10  addiu       $a3, $a3, -0x74F0
    ctx->pc = 0x4ad8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937360));
    // 0x4ad8fc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4ad8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4ad900: 0x2788c228  addiu       $t0, $gp, -0x3DD8
    ctx->pc = 0x4ad900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951464));
    // 0x4ad904: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4AD904u;
    SET_GPR_U32(ctx, 31, 0x4AD90Cu);
    ctx->pc = 0x4AD908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD904u;
    // 0x4ad908: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4AD904u, 0x4AD90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD90Cu;
label_4ad90c:
    // 0x4ad90c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ad90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad910: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4AD910u;
    {
        const bool branch_taken_0x4ad910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD910u;
        // 0x4ad914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad910) {
            ctx->pc = 0x4AD97Cu;
            goto label_4ad97c;
        }
    }
    ctx->pc = 0x4AD918u;
    // 0x4ad918: 0xc12b458  jal         func_4AD160
    ctx->pc = 0x4AD918u;
    SET_GPR_U32(ctx, 31, 0x4AD920u);
    ctx->pc = 0x4AD91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD918u;
    // 0x4ad91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD160u, 0x4AD918u, 0x4AD920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD920u;
label_4ad920:
    // 0x4ad920: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4ad920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4ad924: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4ad924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4ad928: 0x24a572b8  addiu       $a1, $a1, 0x72B8
    ctx->pc = 0x4ad928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29368));
    // 0x4ad92c: 0x24e77378  addiu       $a3, $a3, 0x7378
    ctx->pc = 0x4ad92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29560));
    // 0x4ad930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ad930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad934: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4ad934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ad938: 0xc12668c  jal         func_499A30
    ctx->pc = 0x4AD938u;
    SET_GPR_U32(ctx, 31, 0x4AD940u);
    ctx->pc = 0x4AD93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD938u;
    // 0x4ad93c: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499A30u, 0x4AD938u, 0x4AD940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD940u;
label_4ad940:
    // 0x4ad940: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4AD940u;
    {
        const bool branch_taken_0x4ad940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad940) {
            ctx->pc = 0x4AD970u;
            goto label_4ad970;
        }
    }
    ctx->pc = 0x4AD948u;
    // 0x4ad948: 0xc12b068  jal         func_4AC1A0
    ctx->pc = 0x4AD948u;
    SET_GPR_U32(ctx, 31, 0x4AD950u);
    ctx->pc = 0x4AC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC1A0u, 0x4AD948u, 0x4AD950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD950u;
label_4ad950:
    // 0x4ad950: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD950u;
    {
        const bool branch_taken_0x4ad950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD950u;
        // 0x4ad954: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad950) {
            ctx->pc = 0x4AD970u;
            goto label_4ad970;
        }
    }
    ctx->pc = 0x4AD958u;
    // 0x4ad958: 0xc126804  jal         func_49A010
    ctx->pc = 0x4AD958u;
    SET_GPR_U32(ctx, 31, 0x4AD960u);
    ctx->pc = 0x4AD95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD958u;
    // 0x4ad95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A010u, 0x4AD958u, 0x4AD960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD960u;
label_4ad960:
    // 0x4ad960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ad960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ad964: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad968: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD968u;
    {
        const bool branch_taken_0x4ad968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD968u;
        // 0x4ad96c: 0xaf83b8ac  sw          $v1, -0x4754($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad968) {
            ctx->pc = 0x4AD97Cu;
            goto label_4ad97c;
        }
    }
    ctx->pc = 0x4AD970u;
label_4ad970:
    // 0x4ad970: 0xc126614  jal         func_499850
    ctx->pc = 0x4AD970u;
    SET_GPR_U32(ctx, 31, 0x4AD978u);
    ctx->pc = 0x4AD974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD970u;
    // 0x4ad974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x4AD970u, 0x4AD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD978u;
label_4ad978:
    // 0x4ad978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ad978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ad97c:
    // 0x4ad97c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ad97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad984: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD984u;
        // 0x4ad988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD98Cu;
    // 0x4ad98c: 0x0  nop
    ctx->pc = 0x4ad98cu;
    // NOP
    // 0x4ad990: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4ad990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ad994: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4ad994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ad998: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4ad998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ad99c: 0xb0820047  sdl         $v0, 0x47($a0)
    ctx->pc = 0x4ad99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad9a0: 0xb4820040  sdr         $v0, 0x40($a0)
    ctx->pc = 0x4ad9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad9a4: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x4ad9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x4ad9a8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x4ad9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x4ad9ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4ad9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4ad9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD9B0u;
        // 0x4ad9b4: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD9B8u;
    // 0x4ad9b8: 0x68820047  ldl         $v0, 0x47($a0)
    ctx->pc = 0x4ad9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ad9bc: 0x6c820040  ldr         $v0, 0x40($a0)
    ctx->pc = 0x4ad9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ad9c0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x4ad9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ad9c4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4ad9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad9c8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4ad9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad9cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4ad9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4ad9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD9D8u;
    // 0x4ad9d8: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4ad9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ad9dc: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4ad9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ad9e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4ad9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ad9e4: 0xb0820053  sdl         $v0, 0x53($a0)
    ctx->pc = 0x4ad9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad9e8: 0xb482004c  sdr         $v0, 0x4C($a0)
    ctx->pc = 0x4ad9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad9ec: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x4ad9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x4ad9f0: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x4ad9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x4ad9f4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4ad9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4ad9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD9F8u;
        // 0x4ad9fc: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADA00u;
    // 0x4ada00: 0x68820053  ldl         $v0, 0x53($a0)
    ctx->pc = 0x4ada00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ada04: 0x6c82004c  ldr         $v0, 0x4C($a0)
    ctx->pc = 0x4ada04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ada08: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x4ada08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x4ada0c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4ada0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada10: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4ada10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada14: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4ada14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4ada18: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADA20u;
    // 0x4ada20: 0x68a20017  ldl         $v0, 0x17($a1)
    ctx->pc = 0x4ada20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ada24: 0x6ca20010  ldr         $v0, 0x10($a1)
    ctx->pc = 0x4ada24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ada28: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x4ada28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4ada2c: 0xb082005f  sdl         $v0, 0x5F($a0)
    ctx->pc = 0x4ada2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada30: 0xb4820058  sdr         $v0, 0x58($a0)
    ctx->pc = 0x4ada30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada34: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x4ada34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x4ada38: 0x68a20027  ldl         $v0, 0x27($a1)
    ctx->pc = 0x4ada38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ada3c: 0x6ca20020  ldr         $v0, 0x20($a1)
    ctx->pc = 0x4ada3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ada40: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x4ada40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4ada44: 0xb082006b  sdl         $v0, 0x6B($a0)
    ctx->pc = 0x4ada44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada48: 0xb4820064  sdr         $v0, 0x64($a0)
    ctx->pc = 0x4ada48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada4c: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x4ada4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
    // 0x4ada50: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4ada50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ada54: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4ada54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ada58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4ada58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ada5c: 0xb0820077  sdl         $v0, 0x77($a0)
    ctx->pc = 0x4ada5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada60: 0xb4820070  sdr         $v0, 0x70($a0)
    ctx->pc = 0x4ada60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada64: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x4ada64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x4ada68: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x4ada68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x4ada6c: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x4ada6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x4ada70: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADA70u;
        // 0x4ada74: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADA78u;
    // 0x4ada78: 0x6882005f  ldl         $v0, 0x5F($a0)
    ctx->pc = 0x4ada78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ada7c: 0x6c820058  ldr         $v0, 0x58($a0)
    ctx->pc = 0x4ada7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ada80: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x4ada80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x4ada84: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x4ada84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada88: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x4ada88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ada8c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x4ada8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x4ada90: 0x6882006b  ldl         $v0, 0x6B($a0)
    ctx->pc = 0x4ada90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ada94: 0x6c820064  ldr         $v0, 0x64($a0)
    ctx->pc = 0x4ada94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ada98: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x4ada98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x4ada9c: 0xb0a20027  sdl         $v0, 0x27($a1)
    ctx->pc = 0x4ada9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adaa0: 0xb4a20020  sdr         $v0, 0x20($a1)
    ctx->pc = 0x4adaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adaa4: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x4adaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x4adaa8: 0x68820077  ldl         $v0, 0x77($a0)
    ctx->pc = 0x4adaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4adaac: 0x6c820070  ldr         $v0, 0x70($a0)
    ctx->pc = 0x4adaacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4adab0: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x4adab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x4adab4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4adab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adab8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4adab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adabc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4adabcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4adac0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADAC8u;
    // 0x4adac8: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4adac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4adacc: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4adaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4adad0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4adad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4adad4: 0xb082005f  sdl         $v0, 0x5F($a0)
    ctx->pc = 0x4adad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adad8: 0xb4820058  sdr         $v0, 0x58($a0)
    ctx->pc = 0x4adad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adadc: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x4adadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x4adae0: 0xc484005c  lwc1        $f4, 0x5C($a0)
    ctx->pc = 0x4adae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4adae4: 0xc4820060  lwc1        $f2, 0x60($a0)
    ctx->pc = 0x4adae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4adae8: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x4adae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4adaec: 0xc487006c  lwc1        $f7, 0x6C($a0)
    ctx->pc = 0x4adaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4adaf0: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x4adaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4adaf4: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x4adaf4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4adaf8: 0xc4830064  lwc1        $f3, 0x64($a0)
    ctx->pc = 0x4adaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4adafc: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x4adafcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x4adb00: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4adb00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4adb04: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x4adb04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x4adb08: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4adb08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4adb0c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x4adb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x4adb10: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x4adb10u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x4adb14: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4adb14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4adb18: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4adb18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4adb1c: 0xe4850070  swc1        $f5, 0x70($a0)
    ctx->pc = 0x4adb1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x4adb20: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x4adb20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x4adb24: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x4adb24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x4adb28: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x4adb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x4adb2c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4adb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4adb30: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADB30u;
        // 0x4adb34: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADB38u;
    // 0x4adb38: 0x6882005f  ldl         $v0, 0x5F($a0)
    ctx->pc = 0x4adb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4adb3c: 0x6c820058  ldr         $v0, 0x58($a0)
    ctx->pc = 0x4adb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4adb40: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x4adb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x4adb44: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4adb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adb48: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4adb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adb4c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4adb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4adb50: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADB58u;
    // 0x4adb58: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4adb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4adb5c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4adb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4adb60: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4adb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4adb64: 0xb082006b  sdl         $v0, 0x6B($a0)
    ctx->pc = 0x4adb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adb68: 0xb4820064  sdr         $v0, 0x64($a0)
    ctx->pc = 0x4adb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adb6c: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x4adb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
    // 0x4adb70: 0xc484005c  lwc1        $f4, 0x5C($a0)
    ctx->pc = 0x4adb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4adb74: 0xc4820060  lwc1        $f2, 0x60($a0)
    ctx->pc = 0x4adb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4adb78: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x4adb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4adb7c: 0xc487006c  lwc1        $f7, 0x6C($a0)
    ctx->pc = 0x4adb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4adb80: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x4adb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4adb84: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x4adb84u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4adb88: 0xc4830064  lwc1        $f3, 0x64($a0)
    ctx->pc = 0x4adb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4adb8c: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x4adb8cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x4adb90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4adb90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4adb94: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x4adb94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x4adb98: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4adb98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4adb9c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x4adb9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x4adba0: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x4adba0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x4adba4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4adba4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4adba8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4adba8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4adbac: 0xe4850070  swc1        $f5, 0x70($a0)
    ctx->pc = 0x4adbacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x4adbb0: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x4adbb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x4adbb4: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x4adbb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x4adbb8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x4adbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x4adbbc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4adbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4adbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBC0u;
        // 0x4adbc4: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADBC8u;
    // 0x4adbc8: 0x6882006b  ldl         $v0, 0x6B($a0)
    ctx->pc = 0x4adbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4adbcc: 0x6c820064  ldr         $v0, 0x64($a0)
    ctx->pc = 0x4adbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4adbd0: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x4adbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x4adbd4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4adbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adbd8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4adbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adbdc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4adbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4adbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADBE8u;
    // 0x4adbe8: 0x68820077  ldl         $v0, 0x77($a0)
    ctx->pc = 0x4adbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4adbec: 0x6c820070  ldr         $v0, 0x70($a0)
    ctx->pc = 0x4adbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4adbf0: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x4adbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x4adbf4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4adbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adbf8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4adbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adbfc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4adbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4adc00: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADC08u;
    // 0x4adc08: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x4adc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x4adc0c: 0xe48c0080  swc1        $f12, 0x80($a0)
    ctx->pc = 0x4adc0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x4adc10: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4adc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4adc14: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC14u;
        // 0x4adc18: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADC1Cu;
    // 0x4adc1c: 0x0  nop
    ctx->pc = 0x4adc1cu;
    // NOP
    // 0x4adc20: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC20u;
        // 0x4adc24: 0xc4800080  lwc1        $f0, 0x80($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADC28u;
    // 0x4adc28: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x4adc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x4adc2c: 0xe48c0084  swc1        $f12, 0x84($a0)
    ctx->pc = 0x4adc2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x4adc30: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x4adc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x4adc34: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC34u;
        // 0x4adc38: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADC3Cu;
    // 0x4adc3c: 0x0  nop
    ctx->pc = 0x4adc3cu;
    // NOP
    // 0x4adc40: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC40u;
        // 0x4adc44: 0xc4800084  lwc1        $f0, 0x84($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADC48u;
    // 0x4adc48: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x4adc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x4adc4c: 0xe48c007c  swc1        $f12, 0x7C($a0)
    ctx->pc = 0x4adc4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x4adc50: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4adc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4adc54: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC54u;
        // 0x4adc58: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADC5Cu;
    // 0x4adc5c: 0x0  nop
    ctx->pc = 0x4adc5cu;
    // NOP
    // 0x4adc60: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC60u;
        // 0x4adc64: 0xc480007c  lwc1        $f0, 0x7C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADC68u;
}
