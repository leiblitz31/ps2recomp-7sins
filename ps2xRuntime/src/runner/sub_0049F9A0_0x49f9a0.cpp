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

// Function: sub_0049F9A0
// Address: 0x49f9a0 - 0x49f9d8
void sub_0049F9A0_0x49f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F9A0_0x49f9a0");
#endif

    switch (ctx->pc) {
        case 0x49f9b8u: goto label_49f9b8;
        case 0x49f9c0u: goto label_49f9c0;
        case 0x49f9c8u: goto label_49f9c8;
        default: break;
    }

    ctx->pc = 0x49f9a0u;

    // 0x49f9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49f9a4: 0x8f82b828  lw          $v0, -0x47D8($gp)
    ctx->pc = 0x49f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948904)));
    // 0x49f9a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49F9A8u;
    {
        const bool branch_taken_0x49f9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F9A8u;
        // 0x49f9ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f9a8) {
            ctx->pc = 0x49F9C8u;
            goto label_49f9c8;
        }
    }
    ctx->pc = 0x49F9B0u;
    // 0x49f9b0: 0xc1062bc  jal         func_418AF0
    ctx->pc = 0x49F9B0u;
    SET_GPR_U32(ctx, 31, 0x49F9B8u);
    ctx->pc = 0x418AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AF0u, 0x49F9B0u, 0x49F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F9B8u;
label_49f9b8:
    // 0x49f9b8: 0xc106332  jal         func_418CC8
    ctx->pc = 0x49F9B8u;
    SET_GPR_U32(ctx, 31, 0x49F9C0u);
    ctx->pc = 0x418CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418CC8u, 0x49F9B8u, 0x49F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F9C0u;
label_49f9c0:
    // 0x49f9c0: 0xc106410  jal         func_419040
    ctx->pc = 0x49F9C0u;
    SET_GPR_U32(ctx, 31, 0x49F9C8u);
    ctx->pc = 0x419040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419040u, 0x49F9C0u, 0x49F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F9C8u;
label_49f9c8:
    // 0x49f9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x49F9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F9CCu;
        // 0x49f9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F9D4u;
    // 0x49f9d4: 0x0  nop
    ctx->pc = 0x49f9d4u;
    // NOP
    ctx->pc = 0x49f9d8u;
}
