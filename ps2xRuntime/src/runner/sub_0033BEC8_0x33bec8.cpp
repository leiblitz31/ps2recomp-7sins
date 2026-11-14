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

// Function: sub_0033BEC8
// Address: 0x33bec8 - 0x33bf08
void sub_0033BEC8_0x33bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BEC8_0x33bec8");
#endif

    switch (ctx->pc) {
        case 0x33bee4u: goto label_33bee4;
        case 0x33bef0u: goto label_33bef0;
        default: break;
    }

    ctx->pc = 0x33bec8u;

    // 0x33bec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33bec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33becc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33bed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33bed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33bed8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33bedc: 0xc0d11e6  jal         func_344798
    ctx->pc = 0x33BEDCu;
    SET_GPR_U32(ctx, 31, 0x33BEE4u);
    ctx->pc = 0x33BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BEDCu;
    // 0x33bee0: 0x2484a730  addiu       $a0, $a0, -0x58D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344798u, 0x33BEDCu, 0x33BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEE4u;
label_33bee4:
    // 0x33bee4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33bee8: 0xc0d11f0  jal         func_3447C0
    ctx->pc = 0x33BEE8u;
    SET_GPR_U32(ctx, 31, 0x33BEF0u);
    ctx->pc = 0x33BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BEE8u;
    // 0x33beec: 0x2484bf10  addiu       $a0, $a0, -0x40F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3447C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3447C0u, 0x33BEE8u, 0x33BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEF0u;
label_33bef0:
    // 0x33bef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33bef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bef8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33bef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33befc: 0x3e00008  jr          $ra
    ctx->pc = 0x33BEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEFCu;
        // 0x33bf00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BF04u;
    // 0x33bf04: 0x0  nop
    ctx->pc = 0x33bf04u;
    // NOP
    ctx->pc = 0x33bf08u;
}
