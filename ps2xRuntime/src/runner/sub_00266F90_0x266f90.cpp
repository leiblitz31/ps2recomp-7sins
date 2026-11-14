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

// Function: sub_00266F90
// Address: 0x266f90 - 0x266fe0
void sub_00266F90_0x266f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266F90_0x266f90");
#endif

    ctx->pc = 0x266f90u;

    // 0x266f90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x266f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x266f94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x266f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x266f98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x266f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x266f9c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x266f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x266fa0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x266fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x266fa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x266fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266fa8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x266fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266fac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x266facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x266fb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x266fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266fb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x266fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266fb8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x266fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x266fbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x266fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266fc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x266fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266fc4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x266fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x266fc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x266fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x266fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x266FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266FD4u;
    // 0x266fd4: 0x0  nop
    ctx->pc = 0x266fd4u;
    // NOP
    // 0x266fd8: 0x0  nop
    ctx->pc = 0x266fd8u;
    // NOP
    // 0x266fdc: 0x0  nop
    ctx->pc = 0x266fdcu;
    // NOP
    ctx->pc = 0x266fe0u;
}
