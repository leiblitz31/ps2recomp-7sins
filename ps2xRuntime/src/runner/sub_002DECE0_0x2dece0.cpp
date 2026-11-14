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

// Function: sub_002DECE0
// Address: 0x2dece0 - 0x2ded20
void sub_002DECE0_0x2dece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DECE0_0x2dece0");
#endif

    ctx->pc = 0x2dece0u;

    // 0x2dece0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dece4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2dece4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2dece8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2dece8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2decec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2dececu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2decf0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2decf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2decf4: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x2decf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2decf8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2decf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2decfc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2decfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ded00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2ded00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ded04: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2ded04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2ded08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ded08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ded0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DED0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DED0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DED14u;
    // 0x2ded14: 0x0  nop
    ctx->pc = 0x2ded14u;
    // NOP
    // 0x2ded18: 0x0  nop
    ctx->pc = 0x2ded18u;
    // NOP
    // 0x2ded1c: 0x0  nop
    ctx->pc = 0x2ded1cu;
    // NOP
    ctx->pc = 0x2ded20u;
}
