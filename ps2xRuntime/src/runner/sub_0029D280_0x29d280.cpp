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

// Function: sub_0029D280
// Address: 0x29d280 - 0x29d2c0
void sub_0029D280_0x29d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D280_0x29d280");
#endif

    switch (ctx->pc) {
        case 0x29d29cu: goto label_29d29c;
        default: break;
    }

    ctx->pc = 0x29d280u;

    // 0x29d280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29d284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29d288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29d288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29d28c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x29d290: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29d290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d294: 0xc0a7498  jal         func_29D260
    ctx->pc = 0x29D294u;
    SET_GPR_U32(ctx, 31, 0x29D29Cu);
    ctx->pc = 0x29D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D260u, 0x29D294u, 0x29D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D29Cu;
label_29d29c:
    // 0x29d29c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d2a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x29d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x29d2a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29d2a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29d2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d2b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29d2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29d2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29D2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D2C0u;
}
