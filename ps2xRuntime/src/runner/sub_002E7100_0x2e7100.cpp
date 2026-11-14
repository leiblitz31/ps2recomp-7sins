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

// Function: sub_002E7100
// Address: 0x2e7100 - 0x2e7150
void sub_002E7100_0x2e7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7100_0x2e7100");
#endif

    ctx->pc = 0x2e7100u;

    // 0x2e7100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e7100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e7104: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e7104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e7108: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e7108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e710c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2e710cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2e7110: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2e7110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2e7114: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e7114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7118: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e7118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e711c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2e711cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2e7120: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e7120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7124: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e7124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7128: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2e7128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2e712c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e712cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7130: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e7130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7134: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2e7134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2e7138: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e7138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e713c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E713Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E713Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7144u;
    // 0x2e7144: 0x0  nop
    ctx->pc = 0x2e7144u;
    // NOP
    // 0x2e7148: 0x0  nop
    ctx->pc = 0x2e7148u;
    // NOP
    // 0x2e714c: 0x0  nop
    ctx->pc = 0x2e714cu;
    // NOP
    ctx->pc = 0x2e7150u;
}
