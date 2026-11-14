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

// Function: sub_0028E4A0
// Address: 0x28e4a0 - 0x28e4f0
void sub_0028E4A0_0x28e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E4A0_0x28e4a0");
#endif

    ctx->pc = 0x28e4a0u;

    // 0x28e4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28e4a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28e4a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x28e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28e4ac: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x28e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x28e4b0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x28e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x28e4b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e4b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e4bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28e4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x28e4c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e4c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e4c8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x28e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x28e4cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x28e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e4d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e4d4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x28e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x28e4d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28e4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28e4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x28E4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E4E4u;
    // 0x28e4e4: 0x0  nop
    ctx->pc = 0x28e4e4u;
    // NOP
    // 0x28e4e8: 0x0  nop
    ctx->pc = 0x28e4e8u;
    // NOP
    // 0x28e4ec: 0x0  nop
    ctx->pc = 0x28e4ecu;
    // NOP
    ctx->pc = 0x28e4f0u;
}
