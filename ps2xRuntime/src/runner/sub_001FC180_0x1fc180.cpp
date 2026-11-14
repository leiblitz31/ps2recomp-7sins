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

// Function: sub_001FC180
// Address: 0x1fc180 - 0x1fc1e0
void sub_001FC180_0x1fc180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC180_0x1fc180");
#endif

    ctx->pc = 0x1fc180u;

    // 0x1fc180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc184: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1fc184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1fc188: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1fc188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1fc18c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1fc18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1fc190: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1fc190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc194: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC194u;
    {
        const bool branch_taken_0x1fc194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc194) {
            ctx->pc = 0x1FC1A8u;
            goto label_1fc1a8;
        }
    }
    ctx->pc = 0x1FC19Cu;
    // 0x1fc19c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc1a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC1A0u;
    {
        const bool branch_taken_0x1fc1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1a0) {
            ctx->pc = 0x1FC1B0u;
            goto label_1fc1b0;
        }
    }
    ctx->pc = 0x1FC1A8u;
label_1fc1a8:
    // 0x1fc1a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC1A8u;
    {
        const bool branch_taken_0x1fc1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1a8) {
            ctx->pc = 0x1FC1D0u;
            goto label_1fc1d0;
        }
    }
    ctx->pc = 0x1FC1B0u;
label_1fc1b0:
    // 0x1fc1b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fc1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc1b4: 0x8c6400ec  lw          $a0, 0xEC($v1)
    ctx->pc = 0x1fc1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x1fc1b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1fc1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc1bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1fc1c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fc1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc1c4: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1fc1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1fc1c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fc1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc1cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fc1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1fc1d0:
    // 0x1fc1d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fc1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC1DCu;
    // 0x1fc1dc: 0x0  nop
    ctx->pc = 0x1fc1dcu;
    // NOP
    ctx->pc = 0x1fc1e0u;
}
