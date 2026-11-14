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

// Function: sub_0040D100
// Address: 0x40d100 - 0x40d128
void sub_0040D100_0x40d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D100_0x40d100");
#endif

    switch (ctx->pc) {
        case 0x40d114u: goto label_40d114;
        default: break;
    }

    ctx->pc = 0x40d100u;

    // 0x40d100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40d100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40d104: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40d104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40d108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40d10c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x40D10Cu;
    SET_GPR_U32(ctx, 31, 0x40D114u);
    ctx->pc = 0x40D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D10Cu;
    // 0x40d110: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x40D10Cu, 0x40D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D114u;
label_40d114:
    // 0x40d114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40d114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40d118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40d11c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40d11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d120: 0x3e00008  jr          $ra
    ctx->pc = 0x40D120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D120u;
        // 0x40d124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D128u;
}
