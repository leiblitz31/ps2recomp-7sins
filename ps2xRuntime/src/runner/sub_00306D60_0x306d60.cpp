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

// Function: sub_00306D60
// Address: 0x306d60 - 0x306da0
void sub_00306D60_0x306d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306D60_0x306d60");
#endif

    switch (ctx->pc) {
        case 0x306d74u: goto label_306d74;
        case 0x306d90u: goto label_306d90;
        default: break;
    }

    ctx->pc = 0x306d60u;

    // 0x306d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x306d64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x306d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x306d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x306d6c: 0xc0c1ace  jal         func_306B38
    ctx->pc = 0x306D6Cu;
    SET_GPR_U32(ctx, 31, 0x306D74u);
    ctx->pc = 0x306D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D6Cu;
    // 0x306d70: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306B38u, 0x306D6Cu, 0x306D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D74u;
label_306d74:
    // 0x306d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x306d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306d78: 0x3e00008  jr          $ra
    ctx->pc = 0x306D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D78u;
        // 0x306d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306D80u;
    // 0x306d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x306d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306d88: 0xc0c1ace  jal         func_306B38
    ctx->pc = 0x306D88u;
    SET_GPR_U32(ctx, 31, 0x306D90u);
    ctx->pc = 0x306D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D88u;
    // 0x306d8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306B38u, 0x306D88u, 0x306D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D90u;
label_306d90:
    // 0x306d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306d94: 0x3e00008  jr          $ra
    ctx->pc = 0x306D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D94u;
        // 0x306d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306D9Cu;
    // 0x306d9c: 0x0  nop
    ctx->pc = 0x306d9cu;
    // NOP
    ctx->pc = 0x306da0u;
}
