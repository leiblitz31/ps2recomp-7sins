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

// Function: sub_003A57F8
// Address: 0x3a57f8 - 0x3a5c80
void sub_003A57F8_0x3a57f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A57F8_0x3a57f8");
#endif

    switch (ctx->pc) {
        case 0x3a5804u: goto label_3a5804;
        case 0x3a589cu: goto label_3a589c;
        case 0x3a5964u: goto label_3a5964;
        case 0x3a5a40u: goto label_3a5a40;
        case 0x3a5c4cu: goto label_3a5c4c;
        case 0x3a5c5cu: goto label_3a5c5c;
        default: break;
    }

    ctx->pc = 0x3a57f8u;

    // 0x3a57f8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a57f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a57fc: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A57FCu;
    {
        const bool branch_taken_0x3a57fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a57fc) {
            ctx->pc = 0x3A5800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A57FCu;
            // 0x3a5800: 0x8ce80014  lw          $t0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A580Cu;
            goto label_3a580c;
        }
    }
    ctx->pc = 0x3A5804u;
label_3a5804:
    // 0x3a5804: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5804u;
        // 0x3a5808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A580Cu;
label_3a580c:
    // 0x3a580c: 0x1100fffd  beqz        $t0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3A580Cu;
    {
        const bool branch_taken_0x3a580c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A580Cu;
        // 0x3a5810: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a580c) {
            ctx->pc = 0x3A5804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5804;
        }
    }
    ctx->pc = 0x3A5814u;
    // 0x3a5814: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3a5814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a5818: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A5818u;
    {
        const bool branch_taken_0x3a5818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5818u;
        // 0x3a581c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5818) {
            ctx->pc = 0x3A5880u;
            goto label_3a5880;
        }
    }
    ctx->pc = 0x3A5820u;
    // 0x3a5820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a5820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5824: 0x2442bf60  addiu       $v0, $v0, -0x40A0
    ctx->pc = 0x3a5824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950752));
    // 0x3a5828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a5828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a582c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a5830: 0x800008  jr          $a0
    ctx->pc = 0x3A5830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A5838u: goto label_3a5838;
            case 0x3A5844u: goto label_3a5844;
            case 0x3A5854u: goto label_3a5854;
            case 0x3A5864u: goto label_3a5864;
            case 0x3A5874u: goto label_3a5874;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5830u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A5838u;
label_3a5838:
    // 0x3a5838: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x3a5838u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x3a583c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A583Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A583Cu;
        // 0x3a5840: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A583Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5844u;
label_3a5844:
    // 0x3a5844: 0x10c0ffef  beqz        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3A5844u;
    {
        const bool branch_taken_0x3a5844 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5844u;
        // 0x3a5848: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5844) {
            ctx->pc = 0x3A5804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5804;
        }
    }
    ctx->pc = 0x3A584Cu;
    // 0x3a584c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A584Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A584Cu;
        // 0x3a5850: 0xad060004  sw          $a2, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A584Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5854u;
label_3a5854:
    // 0x3a5854: 0x10c0ffeb  beqz        $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3A5854u;
    {
        const bool branch_taken_0x3a5854 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5854u;
        // 0x3a5858: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5854) {
            ctx->pc = 0x3A5804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5804;
        }
    }
    ctx->pc = 0x3A585Cu;
    // 0x3a585c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A585Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A585Cu;
        // 0x3a5860: 0xad060008  sw          $a2, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A585Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5864u;
label_3a5864:
    // 0x3a5864: 0x10c0ffe7  beqz        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3A5864u;
    {
        const bool branch_taken_0x3a5864 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5864u;
        // 0x3a5868: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5864) {
            ctx->pc = 0x3A5804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5804;
        }
    }
    ctx->pc = 0x3A586Cu;
    // 0x3a586c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A586Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A586Cu;
        // 0x3a5870: 0xad06000c  sw          $a2, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A586Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5874u;
label_3a5874:
    // 0x3a5874: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x3a5874u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x3a5878: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5878u;
        // 0x3a587c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5880u;
label_3a5880:
    // 0x3a5880: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5880u;
        // 0x3a5884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5888u;
    // 0x3a5888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a5888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a588c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a588cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a5890: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a5890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a5894: 0xc0e9336  jal         func_3A4CD8
    ctx->pc = 0x3A5894u;
    SET_GPR_U32(ctx, 31, 0x3A589Cu);
    ctx->pc = 0x3A5898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5894u;
    // 0x3a5898: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CD8u, 0x3A5894u, 0x3A589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A589Cu;
label_3a589c:
    // 0x3a589c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a589cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a58a0: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A58A0u;
    {
        const bool branch_taken_0x3a58a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58A0u;
        // 0x3a58a4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a58a0) {
            ctx->pc = 0x3A58E4u;
            goto label_3a58e4;
        }
    }
    ctx->pc = 0x3A58A8u;
    // 0x3a58a8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3a58a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a58ac: 0x2442d500  addiu       $v0, $v0, -0x2B00
    ctx->pc = 0x3a58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956288));
    // 0x3a58b0: 0x24040114  addiu       $a0, $zero, 0x114
    ctx->pc = 0x3a58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x3a58b4: 0x240334f9  addiu       $v1, $zero, 0x34F9
    ctx->pc = 0x3a58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13561));
    // 0x3a58b8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3a58b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3a58bc: 0xae030328  sw          $v1, 0x328($s0)
    ctx->pc = 0x3a58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 3));
    // 0x3a58c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3a58c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a58c4: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3a58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3a58c8: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x3a58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x3a58cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3a58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3a58d0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3a58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3a58d4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3a58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3a58d8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3a58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3a58dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A58DCu;
    {
        const bool branch_taken_0x3a58dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58DCu;
        // 0x3a58e0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a58dc) {
            ctx->pc = 0x3A58E8u;
            goto label_3a58e8;
        }
    }
    ctx->pc = 0x3A58E4u;
label_3a58e4:
    // 0x3a58e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a58e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a58e8:
    // 0x3a58e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a58e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a58ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a58ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a58f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A58F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58F0u;
        // 0x3a58f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A58F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A58F8u;
    // 0x3a58f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A58F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58F8u;
        // 0x3a58fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A58F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5900u;
    // 0x3a5900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a5900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a5904: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a5904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3a5908: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a5908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a590c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a590cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5910: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a5910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a5914: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3a5914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3a5918: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x3a5918u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a591c: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x3a591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3a5920: 0x8f82bd80  lw          $v0, -0x4280($gp)
    ctx->pc = 0x3a5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
    // 0x3a5924: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3a5924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x3a5928: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x3a5928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a592c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5930: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5930u;
    {
        const bool branch_taken_0x3a5930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5930u;
        // 0x3a5934: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5930) {
            ctx->pc = 0x3A5950u;
            goto label_3a5950;
        }
    }
    ctx->pc = 0x3A5938u;
    // 0x3a5938: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x3a5938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a593c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a5940: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5940u;
    {
        const bool branch_taken_0x3a5940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a5940) {
            ctx->pc = 0x3A5944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5940u;
            // 0x3a5944: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5954u;
            goto label_3a5954;
        }
    }
    ctx->pc = 0x3A5948u;
    // 0x3a5948: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5948u;
    {
        const bool branch_taken_0x3a5948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5948u;
        // 0x3a594c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5948) {
            ctx->pc = 0x3A5964u;
            goto label_3a5964;
        }
    }
    ctx->pc = 0x3A5950u;
label_3a5950:
    // 0x3a5950: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3a5950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a5954:
    // 0x3a5954: 0x8f84bd80  lw          $a0, -0x4280($gp)
    ctx->pc = 0x3a5954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
    // 0x3a5958: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3a5958u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a595c: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3A595Cu;
    SET_GPR_U32(ctx, 31, 0x3A5964u);
    ctx->pc = 0x3A5960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A595Cu;
    // 0x3a5960: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A595Cu, 0x3A5964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5964u;
label_3a5964:
    // 0x3a5964: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3a5964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a5968: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x3a5968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x3a596c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a596cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3a5970: 0x2462e880  addiu       $v0, $v1, -0x1780
    ctx->pc = 0x3a5970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x3a5974: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3a5974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x3a5978: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3a5978u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61E884u));
    // 0x3a597c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3a597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a5980: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a5980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3a5984: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A5984u;
    {
        const bool branch_taken_0x3a5984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5984u;
        // 0x3a5988: 0x60782d  daddu       $t7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5984) {
            ctx->pc = 0x3A59ECu;
            goto label_3a59ec;
        }
    }
    ctx->pc = 0x3A598Cu;
    // 0x3a598c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x3a598cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a5990: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a5990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5994: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3a5994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a5998: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x3a5998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x3a599c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3a599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3a59a0: 0x3042009d  andi        $v0, $v0, 0x9D
    ctx->pc = 0x3a59a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)157);
    // 0x3a59a4: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x3a59a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3a59a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3a59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3a59ac: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a59acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a59b0: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x3a59b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3a59b4: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x3a59b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3a59b8: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x3a59b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x3a59bc: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3A59BCu;
    {
        const bool branch_taken_0x3a59bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A59BCu;
        // 0x3a59c0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a59bc) {
            ctx->pc = 0x3A59ECu;
            goto label_3a59ec;
        }
    }
    ctx->pc = 0x3A59C4u;
    // 0x3a59c4: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x3a59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3a59c8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A59C8u;
    {
        const bool branch_taken_0x3a59c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A59C8u;
        // 0x3a59cc: 0x21402  srl         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a59c8) {
            ctx->pc = 0x3A59ECu;
            goto label_3a59ec;
        }
    }
    ctx->pc = 0x3A59D0u;
    // 0x3a59d0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3a59d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x3a59d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a59d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a59d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A59D8u;
    {
        const bool branch_taken_0x3a59d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A59D8u;
        // 0x3a59dc: 0x34820008  ori         $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a59d8) {
            ctx->pc = 0x3A59E8u;
            goto label_3a59e8;
        }
    }
    ctx->pc = 0x3A59E0u;
    // 0x3a59e0: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x3a59e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x3a59e4: 0x0  nop
    ctx->pc = 0x3a59e4u;
    // NOP
label_3a59e8:
    // 0x3a59e8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3a59e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3a59ec:
    // 0x3a59ec: 0x8de3e880  lw          $v1, -0x1780($t7)
    ctx->pc = 0x3a59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294961280)));
    // 0x3a59f0: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x3a59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3a59f4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a59f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3a59f8: 0x27ae0010  addiu       $t6, $sp, 0x10
    ctx->pc = 0x3a59f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a59fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3a59fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a5a00: 0x8f82bebc  lw          $v0, -0x4144($gp)
    ctx->pc = 0x3a5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x3a5a04: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x3a5a04u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3a5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3a5a0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a5a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5a10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a5a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a5a14: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x3a5a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3a5a18: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x3a5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3a5a1c: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x3a5a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3a5a20: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x3a5a20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a5a24: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x3a5a24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x3a5a28: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x3a5a28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a2c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3a5a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a5a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a34: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3a5a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3a5a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a3c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3a5a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a5a40:
    // 0x3a5a40: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x3a5a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3a5a44: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3a5a48: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x3a5a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3a5a4c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x3a5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3a5a50: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x3a5a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5a54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3a5a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3a5a58: 0x90a20011  lbu         $v0, 0x11($a1)
    ctx->pc = 0x3a5a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x3a5a5c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3a5a60: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x3a5a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3a5a64: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x3a5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3a5a68: 0xc4450064  lwc1        $f5, 0x64($v0)
    ctx->pc = 0x3a5a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a5a6c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x3a5a6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3a5a70: 0x90e20012  lbu         $v0, 0x12($a3)
    ctx->pc = 0x3a5a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x3a5a74: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3a5a78: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x3a5a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3a5a7c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x3a5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3a5a80: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x3a5a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a5a84: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3a5a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3a5a88: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x3a5a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5a8c: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x3a5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a5a90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a5a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a5a94: 0xc5440008  lwc1        $f4, 0x8($t2)
    ctx->pc = 0x3a5a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a5a98: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3a5a98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x3a5a9c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x3a5a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5aa0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3a5aa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3a5aa4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a5aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3a5aa8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a5aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a5aac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3a5aacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3a5ab0: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3a5ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a5ab4: 0x0  nop
    ctx->pc = 0x3a5ab4u;
    // NOP
    // 0x3a5ab8: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x3A5AB8u;
    {
        const bool branch_taken_0x3a5ab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a5ab8) {
            ctx->pc = 0x3A5ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5AB8u;
            // 0x3a5abc: 0xadc60000  sw          $a2, 0x0($t6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5B6Cu;
            goto label_3a5b6c;
        }
    }
    ctx->pc = 0x3A5AC0u;
    // 0x3a5ac0: 0x90820024  lbu         $v0, 0x24($a0)
    ctx->pc = 0x3a5ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3a5ac4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3a5ac8: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x3a5ac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3a5acc: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x3a5accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3a5ad0: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x3a5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5ad4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3a5ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3a5ad8: 0x90a20025  lbu         $v0, 0x25($a1)
    ctx->pc = 0x3a5ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
    // 0x3a5adc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3a5ae0: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x3a5ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3a5ae4: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x3a5ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3a5ae8: 0xc4450064  lwc1        $f5, 0x64($v0)
    ctx->pc = 0x3a5ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a5aec: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x3a5aecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3a5af0: 0x90e20026  lbu         $v0, 0x26($a3)
    ctx->pc = 0x3a5af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x3a5af4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3a5af8: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x3a5af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3a5afc: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x3a5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3a5b00: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x3a5b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a5b04: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3a5b04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3a5b08: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x3a5b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5b0c: 0xc5230018  lwc1        $f3, 0x18($t1)
    ctx->pc = 0x3a5b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a5b10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a5b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a5b14: 0xc544001c  lwc1        $f4, 0x1C($t2)
    ctx->pc = 0x3a5b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a5b18: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3a5b18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x3a5b1c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x3a5b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5b20: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3a5b20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3a5b24: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a5b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3a5b28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a5b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a5b2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3a5b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3a5b30: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3a5b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a5b34: 0x0  nop
    ctx->pc = 0x3a5b34u;
    // NOP
    // 0x3a5b38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5B38u;
    {
        const bool branch_taken_0x3a5b38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B38u;
        // 0x3a5b3c: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b38) {
            ctx->pc = 0x3A5B48u;
            goto label_3a5b48;
        }
    }
    ctx->pc = 0x3A5B40u;
    // 0x3a5b40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A5B40u;
    {
        const bool branch_taken_0x3a5b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B40u;
        // 0x3a5b44: 0xadc60000  sw          $a2, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b40) {
            ctx->pc = 0x3A5B6Cu;
            goto label_3a5b6c;
        }
    }
    ctx->pc = 0x3A5B48u;
label_3a5b48:
    // 0x3a5b48: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x3a5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x3a5b4c: 0x254a0028  addiu       $t2, $t2, 0x28
    ctx->pc = 0x3a5b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
    // 0x3a5b50: 0x25290028  addiu       $t1, $t1, 0x28
    ctx->pc = 0x3a5b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x3a5b54: 0x25080028  addiu       $t0, $t0, 0x28
    ctx->pc = 0x3a5b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x3a5b58: 0x24e70028  addiu       $a3, $a3, 0x28
    ctx->pc = 0x3a5b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x3a5b5c: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x3a5b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x3a5b60: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3a5b60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3a5b64: 0x158dffb6  bne         $t4, $t5, . + 4 + (-0x4A << 2)
    ctx->pc = 0x3A5B64u;
    {
        const bool branch_taken_0x3a5b64 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x3A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B64u;
        // 0x3a5b68: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b64) {
            ctx->pc = 0x3A5A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5a40;
        }
    }
    ctx->pc = 0x3A5B6Cu;
label_3a5b6c:
    // 0x3a5b6c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3a5b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a5b70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a5b74: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3a5b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3a5b78: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A5B78u;
    {
        const bool branch_taken_0x3a5b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B78u;
        // 0x3a5b7c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b78) {
            ctx->pc = 0x3A5BB8u;
            goto label_3a5bb8;
        }
    }
    ctx->pc = 0x3A5B80u;
    // 0x3a5b80: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3a5b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3a5b84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5B84u;
    {
        const bool branch_taken_0x3a5b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5b84) {
            ctx->pc = 0x3A5B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5B84u;
            // 0x3a5b88: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5BA0u;
            goto label_3a5ba0;
        }
    }
    ctx->pc = 0x3A5B8Cu;
    // 0x3a5b8c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3a5b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3a5b90: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5B90u;
    {
        const bool branch_taken_0x3a5b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5b90) {
            ctx->pc = 0x3A5B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5B90u;
            // 0x3a5b94: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5BB0u;
            goto label_3a5bb0;
        }
    }
    ctx->pc = 0x3A5B98u;
    // 0x3a5b98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a5b9c: 0x0  nop
    ctx->pc = 0x3a5b9cu;
    // NOP
label_3a5ba0:
    // 0x3a5ba0: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x3a5ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5ba4: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a5ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3a5ba8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A5BA8u;
    {
        const bool branch_taken_0x3a5ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BA8u;
        // 0x3a5bac: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ba8) {
            ctx->pc = 0x3A5BF4u;
            goto label_3a5bf4;
        }
    }
    ctx->pc = 0x3A5BB0u;
label_3a5bb0:
    // 0x3a5bb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5BB0u;
    {
        const bool branch_taken_0x3a5bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BB0u;
        // 0x3a5bb4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bb0) {
            ctx->pc = 0x3A5BCCu;
            goto label_3a5bcc;
        }
    }
    ctx->pc = 0x3A5BB8u;
label_3a5bb8:
    // 0x3a5bb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a5bbc: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x3a5bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5bc0: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x3a5bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3a5bc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A5BC4u;
    {
        const bool branch_taken_0x3a5bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BC4u;
        // 0x3a5bc8: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bc4) {
            ctx->pc = 0x3A5BF8u;
            goto label_3a5bf8;
        }
    }
    ctx->pc = 0x3A5BCCu;
label_3a5bcc:
    // 0x3a5bcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5BCCu;
    {
        const bool branch_taken_0x3a5bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BCCu;
        // 0x3a5bd0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bcc) {
            ctx->pc = 0x3A5BE4u;
            goto label_3a5be4;
        }
    }
    ctx->pc = 0x3A5BD4u;
    // 0x3a5bd4: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x3a5bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5bd8: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a5bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3a5bdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5BDCu;
    {
        const bool branch_taken_0x3a5bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BDCu;
        // 0x3a5be0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bdc) {
            ctx->pc = 0x3A5BF4u;
            goto label_3a5bf4;
        }
    }
    ctx->pc = 0x3A5BE4u;
label_3a5be4:
    // 0x3a5be4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5be8: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x3a5be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5bec: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a5becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3a5bf0: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3a5bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_3a5bf4:
    // 0x3a5bf4: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x3a5bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_3a5bf8:
    // 0x3a5bf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a5bfc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5BFCu;
    {
        const bool branch_taken_0x3a5bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BFCu;
        // 0x3a5c00: 0x25e4e880  addiu       $a0, $t7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bfc) {
            ctx->pc = 0x3A5C10u;
            goto label_3a5c10;
        }
    }
    ctx->pc = 0x3A5C04u;
    // 0x3a5c04: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x3a5c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3a5c08: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3a5c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3a5c0c: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x3a5c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_3a5c10:
    // 0x3a5c10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3a5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a5c14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3a5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3a5c18: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x3a5c18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x3a5c1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a5c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5c20: 0xa202002a  sb          $v0, 0x2A($s0)
    ctx->pc = 0x3a5c20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5c24: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3a5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a5c28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3a5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3a5c2c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a5c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3a5c30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A5C30u;
    {
        const bool branch_taken_0x3a5c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C30u;
        // 0x3a5c34: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5c30) {
            ctx->pc = 0x3A5C60u;
            goto label_3a5c60;
        }
    }
    ctx->pc = 0x3A5C38u;
    // 0x3a5c38: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x3a5c38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x3a5c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c40: 0x261066a0  addiu       $s0, $s0, 0x66A0
    ctx->pc = 0x3a5c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26272));
    // 0x3a5c44: 0xc0e67d6  jal         func_399F58
    ctx->pc = 0x3A5C44u;
    SET_GPR_U32(ctx, 31, 0x3A5C4Cu);
    ctx->pc = 0x3A5C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C44u;
    // 0x3a5c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399F58u, 0x3A5C44u, 0x3A5C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C4Cu;
label_3a5c4c:
    // 0x3a5c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a5c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c54: 0xc0e67f6  jal         func_399FD8
    ctx->pc = 0x3A5C54u;
    SET_GPR_U32(ctx, 31, 0x3A5C5Cu);
    ctx->pc = 0x3A5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C54u;
    // 0x3a5c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399FD8u, 0x3A5C54u, 0x3A5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C5Cu;
label_3a5c5c:
    // 0x3a5c5c: 0x0  nop
    ctx->pc = 0x3a5c5cu;
    // NOP
label_3a5c60:
    // 0x3a5c60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a5c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a5c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5c68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3a5c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a5c6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a5c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a5c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a5c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5c74: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C74u;
        // 0x3a5c78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5C7Cu;
    // 0x3a5c7c: 0x0  nop
    ctx->pc = 0x3a5c7cu;
    // NOP
    ctx->pc = 0x3a5c80u;
}
