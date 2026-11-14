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

// Function: sub_002FE220
// Address: 0x2fe220 - 0x2fe248
void sub_002FE220_0x2fe220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE220_0x2fe220");
#endif

    switch (ctx->pc) {
        case 0x2fe230u: goto label_2fe230;
        default: break;
    }

    ctx->pc = 0x2fe220u;

    // 0x2fe220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe228: 0xc0bae34  jal         func_2EB8D0
    ctx->pc = 0x2FE228u;
    SET_GPR_U32(ctx, 31, 0x2FE230u);
    ctx->pc = 0x2EB8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB8D0u, 0x2FE228u, 0x2FE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE230u;
label_2fe230:
    // 0x2fe230: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2fe230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2fe234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe238: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fe238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2fe23c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fe23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fe240: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE240u;
        // 0x2fe244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE248u;
}
