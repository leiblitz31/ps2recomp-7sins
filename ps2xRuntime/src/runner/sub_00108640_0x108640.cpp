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

// Function: sub_00108640
// Address: 0x108640 - 0x108690
void sub_00108640_0x108640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108640_0x108640");
#endif

    ctx->pc = 0x108640u;

    // 0x108640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x108644: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x108644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x108648: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x108648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10864c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x10864cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x108650: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x108650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x108654: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x108654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108658: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x108658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10865c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10865cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x108660: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x108660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108664: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x108664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108668: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x108668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x10866c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108670: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x108670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108674: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x108674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x108678: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x108678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10867c: 0x3e00008  jr          $ra
    ctx->pc = 0x10867Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10867Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108684u;
    // 0x108684: 0x0  nop
    ctx->pc = 0x108684u;
    // NOP
    // 0x108688: 0x0  nop
    ctx->pc = 0x108688u;
    // NOP
    // 0x10868c: 0x0  nop
    ctx->pc = 0x10868cu;
    // NOP
    ctx->pc = 0x108690u;
}
