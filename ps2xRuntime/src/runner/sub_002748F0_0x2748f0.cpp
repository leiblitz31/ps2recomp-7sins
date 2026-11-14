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

// Function: sub_002748F0
// Address: 0x2748f0 - 0x274920
void sub_002748F0_0x2748f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002748F0_0x2748f0");
#endif

    ctx->pc = 0x2748f0u;

    // 0x2748f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2748f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2748f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2748f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2748f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2748f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2748fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2748fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274900: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x274900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274904: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x274904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
    // 0x274908: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x274908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27490c: 0x3e00008  jr          $ra
    ctx->pc = 0x27490Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27490Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274914u;
    // 0x274914: 0x0  nop
    ctx->pc = 0x274914u;
    // NOP
    // 0x274918: 0x0  nop
    ctx->pc = 0x274918u;
    // NOP
    // 0x27491c: 0x0  nop
    ctx->pc = 0x27491cu;
    // NOP
    ctx->pc = 0x274920u;
}
