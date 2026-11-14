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

// Function: sub_00232BB0
// Address: 0x232bb0 - 0x232c10
void sub_00232BB0_0x232bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232BB0_0x232bb0");
#endif

    ctx->pc = 0x232bb0u;

    // 0x232bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x232bb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x232bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x232bb8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x232bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x232bbc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x232bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x232bc0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x232bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x232bc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x232bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232bc8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x232bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x232bcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x232bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232bd0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x232bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x232bd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x232bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232bd8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x232bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x232bdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x232bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232be0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x232be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232be4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x232be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x232be8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x232be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232bec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x232becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232bf0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x232bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x232bf4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x232bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232bf8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x232bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232bfc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x232bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x232c00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x232c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232c04: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x232c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x232c08: 0x3e00008  jr          $ra
    ctx->pc = 0x232C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232C10u;
}
