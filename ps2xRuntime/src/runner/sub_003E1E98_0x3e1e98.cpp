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

// Function: sub_003E1E98
// Address: 0x3e1e98 - 0x3e1ee8
void sub_003E1E98_0x3e1e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1E98_0x3e1e98");
#endif

    ctx->pc = 0x3e1e98u;

    // 0x3e1e98: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1EA0u;
    // 0x3e1ea0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E1EA0u;
    {
        const bool branch_taken_0x3e1ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1EA0u;
        // 0x3e1ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ea0) {
            ctx->pc = 0x3E1EACu;
            goto label_3e1eac;
        }
    }
    ctx->pc = 0x3E1EA8u;
    // 0x3e1ea8: 0x9c82015c  lwu         $v0, 0x15C($a0)
    ctx->pc = 0x3e1ea8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 348)));
label_3e1eac:
    // 0x3e1eac: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1EB4u;
    // 0x3e1eb4: 0x0  nop
    ctx->pc = 0x3e1eb4u;
    // NOP
    // 0x3e1eb8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E1EB8u;
    {
        const bool branch_taken_0x3e1eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1EB8u;
        // 0x3e1ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1eb8) {
            ctx->pc = 0x3E1EC4u;
            goto label_3e1ec4;
        }
    }
    ctx->pc = 0x3E1EC0u;
    // 0x3e1ec0: 0x908202d0  lbu         $v0, 0x2D0($a0)
    ctx->pc = 0x3e1ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 720)));
label_3e1ec4:
    // 0x3e1ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1ECCu;
    // 0x3e1ecc: 0x0  nop
    ctx->pc = 0x3e1eccu;
    // NOP
    // 0x3e1ed0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E1ED0u;
    {
        const bool branch_taken_0x3e1ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1ED0u;
        // 0x3e1ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ed0) {
            ctx->pc = 0x3E1EDCu;
            goto label_3e1edc;
        }
    }
    ctx->pc = 0x3E1ED8u;
    // 0x3e1ed8: 0x8c8202c0  lw          $v0, 0x2C0($a0)
    ctx->pc = 0x3e1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
label_3e1edc:
    // 0x3e1edc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1EE4u;
    // 0x3e1ee4: 0x0  nop
    ctx->pc = 0x3e1ee4u;
    // NOP
    ctx->pc = 0x3e1ee8u;
}
