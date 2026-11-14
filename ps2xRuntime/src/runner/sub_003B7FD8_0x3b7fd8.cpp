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

// Function: sub_003B7FD8
// Address: 0x3b7fd8 - 0x3b8000
void sub_003B7FD8_0x3b7fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7FD8_0x3b7fd8");
#endif

    switch (ctx->pc) {
        case 0x3b7ff0u: goto label_3b7ff0;
        default: break;
    }

    ctx->pc = 0x3b7fd8u;

    // 0x3b7fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b7fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b7fdc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3b7fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b7fe4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3b7fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3b7fe8: 0xc0ed396  jal         func_3B4E58
    ctx->pc = 0x3B7FE8u;
    SET_GPR_U32(ctx, 31, 0x3B7FF0u);
    ctx->pc = 0x3B7FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7FE8u;
    // 0x3b7fec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4E58u, 0x3B7FE8u, 0x3B7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7FF0u;
label_3b7ff0:
    // 0x3b7ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FF4u;
        // 0x3b7ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7FFCu;
    // 0x3b7ffc: 0x0  nop
    ctx->pc = 0x3b7ffcu;
    // NOP
    ctx->pc = 0x3b8000u;
}
