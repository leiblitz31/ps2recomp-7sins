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

// Function: sub_00250660
// Address: 0x250660 - 0x250690
void sub_00250660_0x250660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250660_0x250660");
#endif

    ctx->pc = 0x250660u;

    // 0x250660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250664: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x250664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x250668: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x250668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25066c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250670: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250674: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x250674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250678: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x250678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x25067c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25067cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x250680: 0x3e00008  jr          $ra
    ctx->pc = 0x250680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250688u;
    // 0x250688: 0x0  nop
    ctx->pc = 0x250688u;
    // NOP
    // 0x25068c: 0x0  nop
    ctx->pc = 0x25068cu;
    // NOP
    ctx->pc = 0x250690u;
}
