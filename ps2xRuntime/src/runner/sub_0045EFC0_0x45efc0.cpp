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

// Function: sub_0045EFC0
// Address: 0x45efc0 - 0x45f010
void sub_0045EFC0_0x45efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EFC0_0x45efc0");
#endif

    ctx->pc = 0x45efc0u;

    // 0x45efc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45efc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45efc8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x45efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45efcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45efd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45efd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45efd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45efdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45efe0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x45efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45efe4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45efe8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x45efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x45efec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45eff0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x45eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x45eff4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45eff8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x45eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x45effc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f000: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45f000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45f004: 0x3e00008  jr          $ra
    ctx->pc = 0x45F004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F00Cu;
    // 0x45f00c: 0x0  nop
    ctx->pc = 0x45f00cu;
    // NOP
    ctx->pc = 0x45f010u;
}
