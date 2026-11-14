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

// Function: sub_002CF220
// Address: 0x2cf220 - 0x2cf250
void sub_002CF220_0x2cf220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF220_0x2cf220");
#endif

    ctx->pc = 0x2cf220u;

    // 0x2cf220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cf220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cf224: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x2cf224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x2cf228: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x2cf228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x2cf22c: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x2cf22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x2cf230: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x2cf230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x2cf234: 0xffaa0040  sd          $t2, 0x40($sp)
    ctx->pc = 0x2cf234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 10));
    // 0x2cf238: 0xffab0048  sd          $t3, 0x48($sp)
    ctx->pc = 0x2cf238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 11));
    // 0x2cf23c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cf23cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cf240: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF248u;
    // 0x2cf248: 0x0  nop
    ctx->pc = 0x2cf248u;
    // NOP
    // 0x2cf24c: 0x0  nop
    ctx->pc = 0x2cf24cu;
    // NOP
    ctx->pc = 0x2cf250u;
}
