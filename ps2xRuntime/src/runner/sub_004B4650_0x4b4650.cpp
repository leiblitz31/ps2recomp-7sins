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

// Function: sub_004B4650
// Address: 0x4b4650 - 0x4b4680
void sub_004B4650_0x4b4650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4650_0x4b4650");
#endif

    ctx->pc = 0x4b4650u;

    // 0x4b4650: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b4650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b4654: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b4654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b4658: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4658u;
    {
        const bool branch_taken_0x4b4658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4658u;
        // 0x4b465c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4658) {
            ctx->pc = 0x4B4674u;
            goto label_4b4674;
        }
    }
    ctx->pc = 0x4B4660u;
    // 0x4b4660: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b4660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4664: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x4b4664u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4b4668: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x4b4668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x4b466c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B466Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B466Cu;
        // 0x4b4670: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B466Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4674u;
label_4b4674:
    // 0x4b4674: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4674u;
        // 0x4b4678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B467Cu;
    // 0x4b467c: 0x0  nop
    ctx->pc = 0x4b467cu;
    // NOP
    ctx->pc = 0x4b4680u;
}
