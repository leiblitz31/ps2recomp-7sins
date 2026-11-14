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

// Function: sub_002E3B90
// Address: 0x2e3b90 - 0x2e3bd0
void sub_002E3B90_0x2e3b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3B90_0x2e3b90");
#endif

    switch (ctx->pc) {
        case 0x2e3ba8u: goto label_2e3ba8;
        case 0x2e3bb8u: goto label_2e3bb8;
        default: break;
    }

    ctx->pc = 0x2e3b90u;

    // 0x2e3b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3b98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e3b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e3b9c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2e3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e3ba0: 0xc0b8f34  jal         func_2E3CD0
    ctx->pc = 0x2E3BA0u;
    SET_GPR_U32(ctx, 31, 0x2E3BA8u);
    ctx->pc = 0x2E3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CD0u, 0x2E3BA0u, 0x2E3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BA8u;
label_2e3ba8:
    // 0x2e3ba8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e3ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e3bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3bb0: 0xc0b8ef4  jal         func_2E3BD0
    ctx->pc = 0x2E3BB0u;
    SET_GPR_U32(ctx, 31, 0x2E3BB8u);
    ctx->pc = 0x2E3BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3BD0u, 0x2E3BB0u, 0x2E3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BB8u;
label_2e3bb8:
    // 0x2e3bb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3bc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e3bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3BCCu;
    // 0x2e3bcc: 0x0  nop
    ctx->pc = 0x2e3bccu;
    // NOP
    ctx->pc = 0x2e3bd0u;
}
