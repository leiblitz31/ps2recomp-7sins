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

// Function: sub_001A0560
// Address: 0x1a0560 - 0x1a0580
void sub_001A0560_0x1a0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0560_0x1a0560");
#endif

    ctx->pc = 0x1a0560u;

    // 0x1a0560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0564: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a0564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a0568: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a0568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a056c: 0x9042004c  lbu         $v0, 0x4C($v0)
    ctx->pc = 0x1a056cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1a0570: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a0570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a0574: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A057Cu;
    // 0x1a057c: 0x0  nop
    ctx->pc = 0x1a057cu;
    // NOP
    ctx->pc = 0x1a0580u;
}
