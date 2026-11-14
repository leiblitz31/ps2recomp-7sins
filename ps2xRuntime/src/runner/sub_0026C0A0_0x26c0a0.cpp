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

// Function: sub_0026C0A0
// Address: 0x26c0a0 - 0x26c0f0
void sub_0026C0A0_0x26c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C0A0_0x26c0a0");
#endif

    ctx->pc = 0x26c0a0u;

    // 0x26c0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c0a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26c0a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x26c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x26c0ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c0b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c0b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c0b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26c0bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c0c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c0c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c0c8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x26c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x26c0cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c0d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26c0d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c0d8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x26c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x26c0dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c0e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26C0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C0ECu;
    // 0x26c0ec: 0x0  nop
    ctx->pc = 0x26c0ecu;
    // NOP
    ctx->pc = 0x26c0f0u;
}
