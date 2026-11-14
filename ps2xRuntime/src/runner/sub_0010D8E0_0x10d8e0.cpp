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

// Function: sub_0010D8E0
// Address: 0x10d8e0 - 0x10d930
void sub_0010D8E0_0x10d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D8E0_0x10d8e0");
#endif

    ctx->pc = 0x10d8e0u;

    // 0x10d8e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d8e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10d8e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x10d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10d8ec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x10d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x10d8f0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x10d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x10d8f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d8f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d8fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10d900: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10d900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d904: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10d904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d908: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x10d908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x10d90c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d910: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d914: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x10d914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x10d918: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10d918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10d91c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D924u;
    // 0x10d924: 0x0  nop
    ctx->pc = 0x10d924u;
    // NOP
    // 0x10d928: 0x0  nop
    ctx->pc = 0x10d928u;
    // NOP
    // 0x10d92c: 0x0  nop
    ctx->pc = 0x10d92cu;
    // NOP
    ctx->pc = 0x10d930u;
}
