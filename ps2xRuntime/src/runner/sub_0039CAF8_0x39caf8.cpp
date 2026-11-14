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

// Function: sub_0039CAF8
// Address: 0x39caf8 - 0x39cb38
void sub_0039CAF8_0x39caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CAF8_0x39caf8");
#endif

    switch (ctx->pc) {
        case 0x39cb24u: goto label_39cb24;
        default: break;
    }

    ctx->pc = 0x39caf8u;

    // 0x39caf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39caf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39cafc: 0x8f82a9ec  lw          $v0, -0x5614($gp)
    ctx->pc = 0x39cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945260)));
    // 0x39cb00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39cb04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cb08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cb08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb0c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39cb10: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x39cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39cb14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CB14u;
    {
        const bool branch_taken_0x39cb14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB14u;
        // 0x39cb18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cb14) {
            ctx->pc = 0x39CB28u;
            goto label_39cb28;
        }
    }
    ctx->pc = 0x39CB1Cu;
    // 0x39cb1c: 0xc0e6f1e  jal         func_39BC78
    ctx->pc = 0x39CB1Cu;
    SET_GPR_U32(ctx, 31, 0x39CB24u);
    ctx->pc = 0x39CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB1Cu;
    // 0x39cb20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC78u, 0x39CB1Cu, 0x39CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB24u;
label_39cb24:
    // 0x39cb24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39cb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39cb28:
    // 0x39cb28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cb2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39cb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cb30: 0x3e00008  jr          $ra
    ctx->pc = 0x39CB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB30u;
        // 0x39cb34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CB38u;
}
