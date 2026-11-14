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

// Function: sub_00252C00
// Address: 0x252c00 - 0x252c60
void sub_00252C00_0x252c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252C00_0x252c00");
#endif

    ctx->pc = 0x252c00u;

    // 0x252c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252c04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x252c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x252c08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x252c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x252c0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252c10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252c14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x252c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x252c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x252c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252c20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x252c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252c24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x252c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x252c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x252c2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252c30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x252c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x252c34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x252c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c38: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x252c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x252c3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252c40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x252c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x252c44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x252c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c48: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x252c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x252c4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x252c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x252c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x252c54: 0x3e00008  jr          $ra
    ctx->pc = 0x252C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252C5Cu;
    // 0x252c5c: 0x0  nop
    ctx->pc = 0x252c5cu;
    // NOP
    ctx->pc = 0x252c60u;
}
