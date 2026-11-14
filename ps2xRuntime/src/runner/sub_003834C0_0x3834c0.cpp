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

// Function: sub_003834C0
// Address: 0x3834c0 - 0x3836e0
void sub_003834C0_0x3834c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003834C0_0x3834c0");
#endif

    switch (ctx->pc) {
        case 0x383540u: goto label_383540;
        case 0x38359cu: goto label_38359c;
        case 0x3835c4u: goto label_3835c4;
        case 0x383688u: goto label_383688;
        default: break;
    }

    ctx->pc = 0x3834c0u;

    // 0x3834c0: 0x8f82a94c  lw          $v0, -0x56B4($gp)
    ctx->pc = 0x3834c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945100)));
    // 0x3834c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3834c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3834c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3834c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3834cc: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3834CCu;
    {
        const bool branch_taken_0x3834cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3834D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834CCu;
        // 0x3834d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834cc) {
            ctx->pc = 0x38357Cu;
            goto label_38357c;
        }
    }
    ctx->pc = 0x3834D4u;
    // 0x3834d4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3834d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3834d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3834d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3834dc: 0x71023  negu        $v0, $a3
    ctx->pc = 0x3834dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x3834e0: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x3834e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3834e4: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3834E4u;
    {
        const bool branch_taken_0x3834e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3834E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834E4u;
        // 0x3834e8: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834e4) {
            ctx->pc = 0x38353Cu;
            goto label_38353c;
        }
    }
    ctx->pc = 0x3834ECu;
    // 0x3834ec: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3834ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3834f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3834F0u;
    {
        const bool branch_taken_0x3834f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3834F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834F0u;
        // 0x3834f4: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834f0) {
            ctx->pc = 0x383524u;
            goto label_383524;
        }
    }
    ctx->pc = 0x3834F8u;
    // 0x3834f8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3834F8u;
    {
        const bool branch_taken_0x3834f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3834f8) {
            ctx->pc = 0x3834FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3834F8u;
            // 0x3834fc: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383514u;
            goto label_383514;
        }
    }
    ctx->pc = 0x383500u;
    // 0x383500: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x383500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x383504: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x383504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x383508: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x38350c: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x38350cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x383510: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x383510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_383514:
    // 0x383514: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383518: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x383518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x38351c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38351cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x383520: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383520u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_383524:
    // 0x383524: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x383524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x383528: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38352c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x38352cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x383530: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x383534: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x383534u;
    {
        const bool branch_taken_0x383534 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x383538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383534u;
        // 0x383538: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383534) {
            ctx->pc = 0x38357Cu;
            goto label_38357c;
        }
    }
    ctx->pc = 0x38353Cu;
label_38353c:
    // 0x38353c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_383540:
    // 0x383540: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x383540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x383544: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383548: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x383548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x38354c: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x38354cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383550: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x383550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x383554: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383558: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383558u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x38355c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x38355cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x383560: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383564: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383564u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383568: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x383568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x38356c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383570: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x383570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x383574: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x383574u;
    {
        const bool branch_taken_0x383574 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x383578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383574u;
        // 0x383578: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383574) {
            ctx->pc = 0x383540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383540;
        }
    }
    ctx->pc = 0x38357Cu;
label_38357c:
    // 0x38357c: 0x3e00008  jr          $ra
    ctx->pc = 0x38357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38357Cu;
        // 0x383580: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38357Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383584u;
    // 0x383584: 0x0  nop
    ctx->pc = 0x383584u;
    // NOP
    // 0x383588: 0x8f82a954  lw          $v0, -0x56AC($gp)
    ctx->pc = 0x383588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945108)));
    // 0x38358c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38358cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x383590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383594: 0xc0e0a08  jal         func_382820
    ctx->pc = 0x383594u;
    SET_GPR_U32(ctx, 31, 0x38359Cu);
    ctx->pc = 0x383598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383594u;
    // 0x383598: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382820u, 0x383594u, 0x38359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38359Cu;
label_38359c:
    // 0x38359c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38359cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3835a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3835A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3835A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835A0u;
        // 0x3835a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3835A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3835A8u;
    // 0x3835a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3835a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3835ac: 0x8f82a954  lw          $v0, -0x56AC($gp)
    ctx->pc = 0x3835acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945108)));
    // 0x3835b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3835b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3835b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3835b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3835b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3835b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3835bc: 0xc0e0a86  jal         func_382A18
    ctx->pc = 0x3835BCu;
    SET_GPR_U32(ctx, 31, 0x3835C4u);
    ctx->pc = 0x3835C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3835BCu;
    // 0x3835c0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382A18u, 0x3835BCu, 0x3835C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3835C4u;
label_3835c4:
    // 0x3835c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3835c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3835c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3835c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3835cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3835ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3835d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3835D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3835D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835D0u;
        // 0x3835d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3835D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3835D8u;
    // 0x3835d8: 0x8f83a954  lw          $v1, -0x56AC($gp)
    ctx->pc = 0x3835d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945108)));
    // 0x3835dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3835dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3835e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3835e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3835e4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3835e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3835e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3835E8u;
    {
        const bool branch_taken_0x3835e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3835e8) {
            ctx->pc = 0x3835ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3835E8u;
            // 0x3835ec: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3835F8u;
            goto label_3835f8;
        }
    }
    ctx->pc = 0x3835F0u;
    // 0x3835f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3835F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3835F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835F0u;
        // 0x3835f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3835F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3835F8u;
label_3835f8:
    // 0x3835f8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3835f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3835fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3835FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835FCu;
        // 0x383600: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3835FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383604u;
    // 0x383604: 0x0  nop
    ctx->pc = 0x383604u;
    // NOP
    // 0x383608: 0x8f82a954  lw          $v0, -0x56AC($gp)
    ctx->pc = 0x383608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945108)));
    // 0x38360c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x383610: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x383610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x383614: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x383614u;
    {
        const bool branch_taken_0x383614 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x383618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383614u;
        // 0x383618: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383614) {
            ctx->pc = 0x3836C4u;
            goto label_3836c4;
        }
    }
    ctx->pc = 0x38361Cu;
    // 0x38361c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x38361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x383620: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x383620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383624: 0x71023  negu        $v0, $a3
    ctx->pc = 0x383624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x383628: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x383628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x38362c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x38362Cu;
    {
        const bool branch_taken_0x38362c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x383630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38362Cu;
        // 0x383630: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38362c) {
            ctx->pc = 0x383684u;
            goto label_383684;
        }
    }
    ctx->pc = 0x383634u;
    // 0x383634: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x383634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x383638: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x383638u;
    {
        const bool branch_taken_0x383638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383638u;
        // 0x38363c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383638) {
            ctx->pc = 0x38366Cu;
            goto label_38366c;
        }
    }
    ctx->pc = 0x383640u;
    // 0x383640: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x383640u;
    {
        const bool branch_taken_0x383640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383640) {
            ctx->pc = 0x383644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383640u;
            // 0x383644: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38365Cu;
            goto label_38365c;
        }
    }
    ctx->pc = 0x383648u;
    // 0x383648: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x383648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38364c: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x38364cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x383650: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x383654: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x383654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x383658: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x383658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38365c:
    // 0x38365c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383660: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x383660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x383664: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x383668: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383668u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_38366c:
    // 0x38366c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x38366cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x383670: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383674: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x383674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x383678: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x38367c: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x38367Cu;
    {
        const bool branch_taken_0x38367c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x383680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38367Cu;
        // 0x383680: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38367c) {
            ctx->pc = 0x3836C4u;
            goto label_3836c4;
        }
    }
    ctx->pc = 0x383684u;
label_383684:
    // 0x383684: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x383684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_383688:
    // 0x383688: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x383688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38368c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383690: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x383690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x383694: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383694u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383698: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x383698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38369c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3836a0: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x3836a0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3836a4: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x3836a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3836a8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3836a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3836ac: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x3836acu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3836b0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x3836b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3836b4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3836b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3836b8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x3836b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3836bc: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x3836BCu;
    {
        const bool branch_taken_0x3836bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3836C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836BCu;
        // 0x3836c0: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836bc) {
            ctx->pc = 0x383688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383688;
        }
    }
    ctx->pc = 0x3836C4u;
label_3836c4:
    // 0x3836c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3836C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3836C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836C4u;
        // 0x3836c8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3836C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3836CCu;
    // 0x3836cc: 0x0  nop
    ctx->pc = 0x3836ccu;
    // NOP
    // 0x3836d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3836D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3836D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836D0u;
        // 0x3836d4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3836D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3836D8u;
    // 0x3836d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3836D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3836DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836D8u;
        // 0x3836dc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3836D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3836E0u;
}
