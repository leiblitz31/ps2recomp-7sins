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

// Function: sub_0024E010
// Address: 0x24e010 - 0x24e070
void sub_0024E010_0x24e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E010_0x24e010");
#endif

    ctx->pc = 0x24e010u;

    // 0x24e010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24e014: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24e014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24e018: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x24e018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24e01c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e020: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24e020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e024: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24e024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24e028: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e02c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x24e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x24e030: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e034: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x24e034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x24e038: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e03c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x24e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x24e040: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24e040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e044: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x24e044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x24e048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24e048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e04c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e050: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x24e050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x24e054: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e058: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24e058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e05c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E064u;
    // 0x24e064: 0x0  nop
    ctx->pc = 0x24e064u;
    // NOP
    // 0x24e068: 0x0  nop
    ctx->pc = 0x24e068u;
    // NOP
    // 0x24e06c: 0x0  nop
    ctx->pc = 0x24e06cu;
    // NOP
    ctx->pc = 0x24e070u;
}
