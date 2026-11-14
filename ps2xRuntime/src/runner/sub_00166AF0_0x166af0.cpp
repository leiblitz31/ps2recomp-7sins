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

// Function: sub_00166AF0
// Address: 0x166af0 - 0x166b40
void sub_00166AF0_0x166af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166AF0_0x166af0");
#endif

    ctx->pc = 0x166af0u;

    // 0x166af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166af4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x166af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x166af8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x166af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x166afc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x166b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166b04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x166b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x166b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x166b0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166b10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x166b14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x166b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b18: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x166b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x166b1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166b20: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x166b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x166b24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x166b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b28: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x166b28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x166b2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x166b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x166b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x166b34: 0x3e00008  jr          $ra
    ctx->pc = 0x166B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166B3Cu;
    // 0x166b3c: 0x0  nop
    ctx->pc = 0x166b3cu;
    // NOP
    ctx->pc = 0x166b40u;
}
