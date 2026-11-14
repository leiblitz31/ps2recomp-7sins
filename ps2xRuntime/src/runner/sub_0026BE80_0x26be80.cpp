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

// Function: sub_0026BE80
// Address: 0x26be80 - 0x26bed0
void sub_0026BE80_0x26be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BE80_0x26be80");
#endif

    ctx->pc = 0x26be80u;

    // 0x26be80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26be84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26be84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26be88: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x26be88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x26be8c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x26be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x26be90: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x26be90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x26be94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26be94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26be98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x26be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26be9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26bea0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bea4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x26bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bea8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x26bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x26beac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26beb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x26beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26beb4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x26beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x26beb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26beb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26bebc: 0x3e00008  jr          $ra
    ctx->pc = 0x26BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BEC4u;
    // 0x26bec4: 0x0  nop
    ctx->pc = 0x26bec4u;
    // NOP
    // 0x26bec8: 0x0  nop
    ctx->pc = 0x26bec8u;
    // NOP
    // 0x26becc: 0x0  nop
    ctx->pc = 0x26beccu;
    // NOP
    ctx->pc = 0x26bed0u;
}
