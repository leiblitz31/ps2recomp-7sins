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

// Function: sub_00229040
// Address: 0x229040 - 0x229090
void sub_00229040_0x229040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229040_0x229040");
#endif

    ctx->pc = 0x229040u;

    // 0x229040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x229044: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x229044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x229048: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x229048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x22904c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x22904cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x229050: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x229050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x229054: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x229054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229058: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x229058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22905c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22905cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x229060: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x229060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229064: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x229064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229068: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x229068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x22906c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229070: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x229070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229074: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x229074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x229078: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x229078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22907c: 0x3e00008  jr          $ra
    ctx->pc = 0x22907Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22907Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229084u;
    // 0x229084: 0x0  nop
    ctx->pc = 0x229084u;
    // NOP
    // 0x229088: 0x0  nop
    ctx->pc = 0x229088u;
    // NOP
    // 0x22908c: 0x0  nop
    ctx->pc = 0x22908cu;
    // NOP
    ctx->pc = 0x229090u;
}
