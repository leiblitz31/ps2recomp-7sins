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

// Function: sub_003A5778
// Address: 0x3a5778 - 0x3a57f8
void sub_003A5778_0x3a5778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5778_0x3a5778");
#endif

    switch (ctx->pc) {
        case 0x3a5780u: goto label_3a5780;
        case 0x3a57d0u: goto label_3a57d0;
        default: break;
    }

    ctx->pc = 0x3a5778u;

    // 0x3a5778: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5778u;
    {
        const bool branch_taken_0x3a5778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5778) {
            ctx->pc = 0x3A577Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5778u;
            // 0x3a577c: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5788u;
            goto label_3a5788;
        }
    }
    ctx->pc = 0x3A5780u;
label_3a5780:
    // 0x3a5780: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5780u;
        // 0x3a5784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5788u;
label_3a5788:
    // 0x3a5788: 0x10e0fffd  beqz        $a3, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3A5788u;
    {
        const bool branch_taken_0x3a5788 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5788) {
            ctx->pc = 0x3A5780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5780;
        }
    }
    ctx->pc = 0x3A5790u;
    // 0x3a5790: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5790u;
    {
        const bool branch_taken_0x3a5790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5790u;
        // 0x3a5794: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5790) {
            ctx->pc = 0x3A57ACu;
            goto label_3a57ac;
        }
    }
    ctx->pc = 0x3A5798u;
    // 0x3a5798: 0x10c0fff9  beqz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A5798u;
    {
        const bool branch_taken_0x3a5798 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5798) {
            ctx->pc = 0x3A5780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5780;
        }
    }
    ctx->pc = 0x3A57A0u;
    // 0x3a57a0: 0xace6001c  sw          $a2, 0x1C($a3)
    ctx->pc = 0x3a57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 6));
    // 0x3a57a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A57A4u;
    {
        const bool branch_taken_0x3a57a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57A4u;
        // 0x3a57a8: 0xace50018  sw          $a1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a57a4) {
            ctx->pc = 0x3A57BCu;
            goto label_3a57bc;
        }
    }
    ctx->pc = 0x3A57ACu;
label_3a57ac:
    // 0x3a57ac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3a57acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a57b0: 0x2442d500  addiu       $v0, $v0, -0x2B00
    ctx->pc = 0x3a57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956288));
    // 0x3a57b4: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x3a57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x3a57b8: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x3a57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
label_3a57bc:
    // 0x3a57bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A57BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57BCu;
        // 0x3a57c0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A57BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A57C4u;
    // 0x3a57c4: 0x0  nop
    ctx->pc = 0x3a57c4u;
    // NOP
    // 0x3a57c8: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A57C8u;
    {
        const bool branch_taken_0x3a57c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a57c8) {
            ctx->pc = 0x3A57CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A57C8u;
            // 0x3a57cc: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A57D8u;
            goto label_3a57d8;
        }
    }
    ctx->pc = 0x3A57D0u;
label_3a57d0:
    // 0x3a57d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A57D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57D0u;
        // 0x3a57d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A57D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A57D8u;
label_3a57d8:
    // 0x3a57d8: 0x1080fffd  beqz        $a0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3A57D8u;
    {
        const bool branch_taken_0x3a57d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a57d8) {
            ctx->pc = 0x3A57D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a57d0;
        }
    }
    ctx->pc = 0x3A57E0u;
    // 0x3a57e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A57E0u;
    {
        const bool branch_taken_0x3a57e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a57e0) {
            ctx->pc = 0x3A57F0u;
            goto label_3a57f0;
        }
    }
    ctx->pc = 0x3A57E8u;
    // 0x3a57e8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3a57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3a57ec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3a57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3a57f0:
    // 0x3a57f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A57F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57F0u;
        // 0x3a57f4: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A57F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A57F8u;
}
