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

// Function: sub_0034FC00
// Address: 0x34fc00 - 0x34fc20
void sub_0034FC00_0x34fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FC00_0x34fc00");
#endif

    switch (ctx->pc) {
        case 0x34fc10u: goto label_34fc10;
        default: break;
    }

    ctx->pc = 0x34fc00u;

    // 0x34fc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34fc04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34fc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34fc08: 0xc0d27fc  jal         func_349FF0
    ctx->pc = 0x34FC08u;
    SET_GPR_U32(ctx, 31, 0x34FC10u);
    ctx->pc = 0x349FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FF0u, 0x34FC08u, 0x34FC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC10u;
label_34fc10:
    // 0x34fc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34fc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fc14: 0x3e00008  jr          $ra
    ctx->pc = 0x34FC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC14u;
        // 0x34fc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FC1Cu;
    // 0x34fc1c: 0x0  nop
    ctx->pc = 0x34fc1cu;
    // NOP
    ctx->pc = 0x34fc20u;
}
