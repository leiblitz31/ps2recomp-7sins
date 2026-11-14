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

// Function: sub_00131AB0
// Address: 0x131ab0 - 0x131b00
void sub_00131AB0_0x131ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131AB0_0x131ab0");
#endif

    ctx->pc = 0x131ab0u;

    // 0x131ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x131ab4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x131ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x131ab8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x131ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x131abc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x131abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x131ac0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x131ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x131ac4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x131ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131ac8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x131ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131acc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x131accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x131ad0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x131ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131ad4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x131ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131ad8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x131ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x131adc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131ae0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x131ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131ae4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x131ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x131ae8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x131ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x131aec: 0x3e00008  jr          $ra
    ctx->pc = 0x131AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131AF4u;
    // 0x131af4: 0x0  nop
    ctx->pc = 0x131af4u;
    // NOP
    // 0x131af8: 0x0  nop
    ctx->pc = 0x131af8u;
    // NOP
    // 0x131afc: 0x0  nop
    ctx->pc = 0x131afcu;
    // NOP
    ctx->pc = 0x131b00u;
}
