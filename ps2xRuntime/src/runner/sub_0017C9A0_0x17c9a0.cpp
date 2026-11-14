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

// Function: sub_0017C9A0
// Address: 0x17c9a0 - 0x17ca00
void sub_0017C9A0_0x17c9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C9A0_0x17c9a0");
#endif

    ctx->pc = 0x17c9a0u;

    // 0x17c9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c9a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17c9a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x17c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x17c9ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c9b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17c9bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17c9c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9c8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x17c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17c9cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9d0: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x17c9d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17c9d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9d8: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x17c9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c9dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17c9e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9e8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x17c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x17c9ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17c9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C9FCu;
    // 0x17c9fc: 0x0  nop
    ctx->pc = 0x17c9fcu;
    // NOP
    ctx->pc = 0x17ca00u;
}
