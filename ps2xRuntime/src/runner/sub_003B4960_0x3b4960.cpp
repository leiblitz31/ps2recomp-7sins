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

// Function: sub_003B4960
// Address: 0x3b4960 - 0x3b4a50
void sub_003B4960_0x3b4960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4960_0x3b4960");
#endif

    switch (ctx->pc) {
        case 0x3b49ecu: goto label_3b49ec;
        case 0x3b49fcu: goto label_3b49fc;
        case 0x3b4a0cu: goto label_3b4a0c;
        case 0x3b4a1cu: goto label_3b4a1c;
        case 0x3b4a2cu: goto label_3b4a2c;
        case 0x3b4a3cu: goto label_3b4a3c;
        default: break;
    }

    ctx->pc = 0x3b4960u;

    // 0x3b4960: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b4964: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x3b4964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x3b4968: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4968u;
        // 0x3b496c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4970u;
    // 0x3b4970: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b4970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b4974: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x3b4974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x3b4978: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4978u;
        // 0x3b497c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4980u;
    // 0x3b4980: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b4980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b4984: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3b4984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x3b4988: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4988u;
        // 0x3b498c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4990u;
    // 0x3b4990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b4994: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b4994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b4998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b499c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b499cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b49a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b49a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b49a4: 0x16300003  bne         $s1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B49A4u;
    {
        const bool branch_taken_0x3b49a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3B49A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B49A4u;
        // 0x3b49a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b49a4) {
            ctx->pc = 0x3B49B4u;
            goto label_3b49b4;
        }
    }
    ctx->pc = 0x3B49ACu;
    // 0x3b49ac: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3B49ACu;
    {
        const bool branch_taken_0x3b49ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B49ACu;
        // 0x3b49b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b49ac) {
            ctx->pc = 0x3B4A3Cu;
            goto label_3b4a3c;
        }
    }
    ctx->pc = 0x3B49B4u;
label_3b49b4:
    // 0x3b49b4: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B49B4u;
    {
        const bool branch_taken_0x3b49b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b49b4) {
            ctx->pc = 0x3B4A24u;
            goto label_3b4a24;
        }
    }
    ctx->pc = 0x3B49BCu;
    // 0x3b49bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b49bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b49c0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3b49c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b49c4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B49C4u;
    {
        const bool branch_taken_0x3b49c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B49C4u;
        // 0x3b49c8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b49c4) {
            ctx->pc = 0x3B4A30u;
            goto label_3b4a30;
        }
    }
    ctx->pc = 0x3B49CCu;
    // 0x3b49cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b49d0: 0x2442c090  addiu       $v0, $v0, -0x3F70
    ctx->pc = 0x3b49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951056));
    // 0x3b49d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b49d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b49dc: 0x800008  jr          $a0
    ctx->pc = 0x3B49DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B49E4u: goto label_3b49e4;
            case 0x3B49F4u: goto label_3b49f4;
            case 0x3B4A04u: goto label_3b4a04;
            case 0x3B4A14u: goto label_3b4a14;
            case 0x3B4A30u: goto label_3b4a30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B49DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B49E4u;
label_3b49e4:
    // 0x3b49e4: 0xc0ede8c  jal         func_3B7A30
    ctx->pc = 0x3B49E4u;
    SET_GPR_U32(ctx, 31, 0x3B49ECu);
    ctx->pc = 0x3B49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B49E4u;
    // 0x3b49e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7A30u, 0x3B49E4u, 0x3B49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B49ECu;
label_3b49ec:
    // 0x3b49ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B49ECu;
    {
        const bool branch_taken_0x3b49ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B49ECu;
        // 0x3b49f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b49ec) {
            ctx->pc = 0x3B4A34u;
            goto label_3b4a34;
        }
    }
    ctx->pc = 0x3B49F4u;
label_3b49f4:
    // 0x3b49f4: 0xc0ee78c  jal         func_3B9E30
    ctx->pc = 0x3B49F4u;
    SET_GPR_U32(ctx, 31, 0x3B49FCu);
    ctx->pc = 0x3B49F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B49F4u;
    // 0x3b49f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9E30u, 0x3B49F4u, 0x3B49FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B49FCu;
label_3b49fc:
    // 0x3b49fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B49FCu;
    {
        const bool branch_taken_0x3b49fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B49FCu;
        // 0x3b4a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b49fc) {
            ctx->pc = 0x3B4A34u;
            goto label_3b4a34;
        }
    }
    ctx->pc = 0x3B4A04u;
label_3b4a04:
    // 0x3b4a04: 0xc0ed4d0  jal         func_3B5340
    ctx->pc = 0x3B4A04u;
    SET_GPR_U32(ctx, 31, 0x3B4A0Cu);
    ctx->pc = 0x3B4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A04u;
    // 0x3b4a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5340u, 0x3B4A04u, 0x3B4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A0Cu;
label_3b4a0c:
    // 0x3b4a0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B4A0Cu;
    {
        const bool branch_taken_0x3b4a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A0Cu;
        // 0x3b4a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a0c) {
            ctx->pc = 0x3B4A34u;
            goto label_3b4a34;
        }
    }
    ctx->pc = 0x3B4A14u;
label_3b4a14:
    // 0x3b4a14: 0xc0ed0a6  jal         func_3B4298
    ctx->pc = 0x3B4A14u;
    SET_GPR_U32(ctx, 31, 0x3B4A1Cu);
    ctx->pc = 0x3B4A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A14u;
    // 0x3b4a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4298u, 0x3B4A14u, 0x3B4A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A1Cu;
label_3b4a1c:
    // 0x3b4a1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4A1Cu;
    {
        const bool branch_taken_0x3b4a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A1Cu;
        // 0x3b4a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a1c) {
            ctx->pc = 0x3B4A34u;
            goto label_3b4a34;
        }
    }
    ctx->pc = 0x3B4A24u;
label_3b4a24:
    // 0x3b4a24: 0xc0ed294  jal         func_3B4A50
    ctx->pc = 0x3B4A24u;
    SET_GPR_U32(ctx, 31, 0x3B4A2Cu);
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B4A24u, 0x3B4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A2Cu;
label_3b4a2c:
    // 0x3b4a2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a30:
    // 0x3b4a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a34:
    // 0x3b4a34: 0xc0ed0f4  jal         func_3B43D0
    ctx->pc = 0x3B4A34u;
    SET_GPR_U32(ctx, 31, 0x3B4A3Cu);
    ctx->pc = 0x3B4A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A34u;
    // 0x3b4a38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B43D0u, 0x3B4A34u, 0x3B4A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A3Cu;
label_3b4a3c:
    // 0x3b4a3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b4a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b4a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A48u;
        // 0x3b4a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4A50u;
}
