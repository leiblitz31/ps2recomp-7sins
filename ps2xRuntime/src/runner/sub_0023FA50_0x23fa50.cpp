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

// Function: sub_0023FA50
// Address: 0x23fa50 - 0x23fab0
void sub_0023FA50_0x23fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FA50_0x23fa50");
#endif

    ctx->pc = 0x23fa50u;

    // 0x23fa50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23fa54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23fa58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x23fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x23fa5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fa64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fa68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23fa6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23fa74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fa78: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x23fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x23fa7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23fa84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fa88: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x23fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x23fa8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa90: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x23fa90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23fa94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fa98: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x23fa98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x23fa9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23faa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23faa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23faa4: 0x3e00008  jr          $ra
    ctx->pc = 0x23FAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FAACu;
    // 0x23faac: 0x0  nop
    ctx->pc = 0x23faacu;
    // NOP
    ctx->pc = 0x23fab0u;
}
