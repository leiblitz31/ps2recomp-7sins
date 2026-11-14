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

// Function: sub_0023FD80
// Address: 0x23fd80 - 0x23fdd0
void sub_0023FD80_0x23fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FD80_0x23fd80");
#endif

    ctx->pc = 0x23fd80u;

    // 0x23fd80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23fd84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23fd88: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x23fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x23fd8c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x23fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x23fd90: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x23fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x23fd94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fd98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fd9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x23fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x23fda0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fda4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fda8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x23fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x23fdac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fdb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fdb4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x23fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x23fdb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23fdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23fdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x23FDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FDC4u;
    // 0x23fdc4: 0x0  nop
    ctx->pc = 0x23fdc4u;
    // NOP
    // 0x23fdc8: 0x0  nop
    ctx->pc = 0x23fdc8u;
    // NOP
    // 0x23fdcc: 0x0  nop
    ctx->pc = 0x23fdccu;
    // NOP
    ctx->pc = 0x23fdd0u;
}
