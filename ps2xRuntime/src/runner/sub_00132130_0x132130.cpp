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

// Function: sub_00132130
// Address: 0x132130 - 0x132160
void sub_00132130_0x132130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132130_0x132130");
#endif

    ctx->pc = 0x132130u;

    // 0x132130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132134: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x132134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x132138: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x132138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x13213c: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x13213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x132140: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x132140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132144: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x132144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132148: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x132148u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13214c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13214cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x132150: 0x3e00008  jr          $ra
    ctx->pc = 0x132150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132158u;
    // 0x132158: 0x0  nop
    ctx->pc = 0x132158u;
    // NOP
    // 0x13215c: 0x0  nop
    ctx->pc = 0x13215cu;
    // NOP
    ctx->pc = 0x132160u;
}
