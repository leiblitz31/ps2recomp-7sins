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

// Function: sub_0038A1D8
// Address: 0x38a1d8 - 0x38a208
void sub_0038A1D8_0x38a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A1D8_0x38a1d8");
#endif

    switch (ctx->pc) {
        case 0x38a1f4u: goto label_38a1f4;
        default: break;
    }

    ctx->pc = 0x38a1d8u;

    // 0x38a1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a1dc: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38a1e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a1e4: 0x24a5a660  addiu       $a1, $a1, -0x59A0
    ctx->pc = 0x38a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944352));
    // 0x38a1e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x38a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x38a1ec: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x38A1ECu;
    SET_GPR_U32(ctx, 31, 0x38A1F4u);
    ctx->pc = 0x38A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A1ECu;
    // 0x38a1f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x38A1ECu, 0x38A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A1F4u;
label_38a1f4:
    // 0x38a1f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x38a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a1f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x38A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1FCu;
        // 0x38a200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A204u;
    // 0x38a204: 0x0  nop
    ctx->pc = 0x38a204u;
    // NOP
    ctx->pc = 0x38a208u;
}
