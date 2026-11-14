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

// Function: sub_003294F0
// Address: 0x3294f0 - 0x329520
void sub_003294F0_0x3294f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003294F0_0x3294f0");
#endif

    switch (ctx->pc) {
        case 0x329510u: goto label_329510;
        default: break;
    }

    ctx->pc = 0x3294f0u;

    // 0x3294f0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3294f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3294f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3294f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3294f8: 0x8c432320  lw          $v1, 0x2320($v0)
    ctx->pc = 0x3294f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F2320u));
    // 0x3294fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3294fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329504: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x329504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x329508: 0xc0ca5c4  jal         func_329710
    ctx->pc = 0x329508u;
    SET_GPR_U32(ctx, 31, 0x329510u);
    ctx->pc = 0x32950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329508u;
    // 0x32950c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329710u, 0x329508u, 0x329510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329510u;
label_329510:
    // 0x329510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329514: 0x3e00008  jr          $ra
    ctx->pc = 0x329514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329514u;
        // 0x329518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32951Cu;
    // 0x32951c: 0x0  nop
    ctx->pc = 0x32951cu;
    // NOP
    ctx->pc = 0x329520u;
}
