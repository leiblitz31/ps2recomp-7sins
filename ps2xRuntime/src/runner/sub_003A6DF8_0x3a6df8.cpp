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

// Function: sub_003A6DF8
// Address: 0x3a6df8 - 0x3a6e38
void sub_003A6DF8_0x3a6df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6DF8_0x3a6df8");
#endif

    switch (ctx->pc) {
        case 0x3a6e20u: goto label_3a6e20;
        default: break;
    }

    ctx->pc = 0x3a6df8u;

    // 0x3a6df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6dfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6e08: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x3a6e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3a6e0c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3a6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a6e10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6E10u;
    {
        const bool branch_taken_0x3a6e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E10u;
        // 0x3a6e14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6e10) {
            ctx->pc = 0x3A6E24u;
            goto label_3a6e24;
        }
    }
    ctx->pc = 0x3A6E18u;
    // 0x3a6e18: 0xc0e7f34  jal         func_39FCD0
    ctx->pc = 0x3A6E18u;
    SET_GPR_U32(ctx, 31, 0x3A6E20u);
    ctx->pc = 0x39FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FCD0u, 0x3A6E18u, 0x3A6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E20u;
label_3a6e20:
    // 0x3a6e20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a6e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a6e24:
    // 0x3a6e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6e28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E2Cu;
        // 0x3a6e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6E34u;
    // 0x3a6e34: 0x0  nop
    ctx->pc = 0x3a6e34u;
    // NOP
    ctx->pc = 0x3a6e38u;
}
