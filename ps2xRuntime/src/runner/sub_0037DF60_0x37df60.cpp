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

// Function: sub_0037DF60
// Address: 0x37df60 - 0x37e068
void sub_0037DF60_0x37df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037DF60_0x37df60");
#endif

    switch (ctx->pc) {
        case 0x37dfa4u: goto label_37dfa4;
        case 0x37dfc4u: goto label_37dfc4;
        default: break;
    }

    ctx->pc = 0x37df60u;

    // 0x37df60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x37df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37df64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37df64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37df68: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x37df68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x37df6c: 0x3e00008  jr          $ra
    ctx->pc = 0x37DF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF6Cu;
        // 0x37df70: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37DF74u;
    // 0x37df74: 0x0  nop
    ctx->pc = 0x37df74u;
    // NOP
    // 0x37df78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37df78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37df7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37df80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37df80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37df84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37df84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37df88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x37df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37df8c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x37df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x37df90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DF90u;
    {
        const bool branch_taken_0x37df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF90u;
        // 0x37df94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37df90) {
            ctx->pc = 0x37DFA8u;
            goto label_37dfa8;
        }
    }
    ctx->pc = 0x37DF98u;
    // 0x37df98: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x37df98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37df9c: 0xc0e019c  jal         func_380670
    ctx->pc = 0x37DF9Cu;
    SET_GPR_U32(ctx, 31, 0x37DFA4u);
    ctx->pc = 0x37DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DF9Cu;
    // 0x37dfa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380670u, 0x37DF9Cu, 0x37DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DFA4u;
label_37dfa4:
    // 0x37dfa4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x37dfa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37dfa8:
    // 0x37dfa8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x37dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37dfac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x37dfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37dfb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DFB0u;
    {
        const bool branch_taken_0x37dfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DFB0u;
        // 0x37dfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dfb0) {
            ctx->pc = 0x37DFC8u;
            goto label_37dfc8;
        }
    }
    ctx->pc = 0x37DFB8u;
    // 0x37dfb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37dfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dfbc: 0xc0e019c  jal         func_380670
    ctx->pc = 0x37DFBCu;
    SET_GPR_U32(ctx, 31, 0x37DFC4u);
    ctx->pc = 0x37DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DFBCu;
    // 0x37dfc0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380670u, 0x37DFBCu, 0x37DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DFC4u;
label_37dfc4:
    // 0x37dfc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x37dfc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37dfc8:
    // 0x37dfc8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x37dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x37dfcc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x37dfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dfd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37dfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37dfd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37dfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37dfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x37DFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DFD8u;
        // 0x37dfdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37DFE0u;
    // 0x37dfe0: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x37dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x37dfe4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37DFE4u;
    {
        const bool branch_taken_0x37dfe4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DFE4u;
        // 0x37dfe8: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dfe4) {
            ctx->pc = 0x37DFF8u;
            goto label_37dff8;
        }
    }
    ctx->pc = 0x37DFECu;
    // 0x37dfec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x37dff0: 0x2442e068  addiu       $v0, $v0, -0x1F98
    ctx->pc = 0x37dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959208));
    // 0x37dff4: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x37dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
label_37dff8:
    // 0x37dff8: 0x3e00008  jr          $ra
    ctx->pc = 0x37DFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DFF8u;
        // 0x37dffc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E000u;
    // 0x37e000: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37E000u;
    {
        const bool branch_taken_0x37e000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e000) {
            ctx->pc = 0x37E010u;
            goto label_37e010;
        }
    }
    ctx->pc = 0x37E008u;
    // 0x37e008: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x37e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x37e00c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37e010:
    // 0x37e010: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x37E010u;
    {
        const bool branch_taken_0x37e010 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e010) {
            ctx->pc = 0x37E020u;
            goto label_37e020;
        }
    }
    ctx->pc = 0x37E018u;
    // 0x37e018: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x37e018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x37e01c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_37e020:
    // 0x37e020: 0x3e00008  jr          $ra
    ctx->pc = 0x37E020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E020u;
        // 0x37e024: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E028u;
    // 0x37e028: 0xac85007c  sw          $a1, 0x7C($a0)
    ctx->pc = 0x37e028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
    // 0x37e02c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37e02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e030: 0xac860078  sw          $a2, 0x78($a0)
    ctx->pc = 0x37e030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
    // 0x37e034: 0x3e00008  jr          $ra
    ctx->pc = 0x37E034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E034u;
        // 0x37e038: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E03Cu;
    // 0x37e03c: 0x0  nop
    ctx->pc = 0x37e03cu;
    // NOP
    // 0x37e040: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37E040u;
    {
        const bool branch_taken_0x37e040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e040) {
            ctx->pc = 0x37E050u;
            goto label_37e050;
        }
    }
    ctx->pc = 0x37E048u;
    // 0x37e048: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x37e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x37e04c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37e050:
    // 0x37e050: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x37E050u;
    {
        const bool branch_taken_0x37e050 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e050) {
            ctx->pc = 0x37E060u;
            goto label_37e060;
        }
    }
    ctx->pc = 0x37E058u;
    // 0x37e058: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x37e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x37e05c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_37e060:
    // 0x37e060: 0x3e00008  jr          $ra
    ctx->pc = 0x37E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E060u;
        // 0x37e064: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E068u;
}
