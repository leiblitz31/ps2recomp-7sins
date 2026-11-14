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

// Function: sub_0022A270
// Address: 0x22a270 - 0x22a2a0
void sub_0022A270_0x22a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A270_0x22a270");
#endif

    ctx->pc = 0x22a270u;

    // 0x22a270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22a274: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22a274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22a278: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x22a278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x22a27c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a280: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x22a280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22a284: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22a284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a288: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x22a288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a28c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x22a28cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22a290: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22a294: 0x3e00008  jr          $ra
    ctx->pc = 0x22A294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A29Cu;
    // 0x22a29c: 0x0  nop
    ctx->pc = 0x22a29cu;
    // NOP
    ctx->pc = 0x22a2a0u;
}
