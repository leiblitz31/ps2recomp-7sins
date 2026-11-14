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

// Function: sub_0038A208
// Address: 0x38a208 - 0x38a238
void sub_0038A208_0x38a208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A208_0x38a208");
#endif

    switch (ctx->pc) {
        case 0x38a224u: goto label_38a224;
        default: break;
    }

    ctx->pc = 0x38a208u;

    // 0x38a208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a20c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38a210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a214: 0x24a5a678  addiu       $a1, $a1, -0x5988
    ctx->pc = 0x38a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944376));
    // 0x38a218: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x38a218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x38a21c: 0xc0e2646  jal         func_389918
    ctx->pc = 0x38A21Cu;
    SET_GPR_U32(ctx, 31, 0x38A224u);
    ctx->pc = 0x38A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A21Cu;
    // 0x38a220: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389918u, 0x38A21Cu, 0x38A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A224u;
label_38a224:
    // 0x38a224: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x38a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a22c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A22Cu;
        // 0x38a230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A234u;
    // 0x38a234: 0x0  nop
    ctx->pc = 0x38a234u;
    // NOP
    ctx->pc = 0x38a238u;
}
