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

// Function: sub_00106E90
// Address: 0x106e90 - 0x106ed0
void sub_00106E90_0x106e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106E90_0x106e90");
#endif

    switch (ctx->pc) {
        case 0x106eb0u: goto label_106eb0;
        default: break;
    }

    ctx->pc = 0x106e90u;

    // 0x106e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106e98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x106e9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x106e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x106ea0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ea4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x106ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106ea8: 0xc040488  jal         func_101220
    ctx->pc = 0x106EA8u;
    SET_GPR_U32(ctx, 31, 0x106EB0u);
    ctx->pc = 0x101220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101220u, 0x106EA8u, 0x106EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EB0u;
label_106eb0:
    // 0x106eb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106eb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x106eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x106EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106EC4u;
    // 0x106ec4: 0x0  nop
    ctx->pc = 0x106ec4u;
    // NOP
    // 0x106ec8: 0x0  nop
    ctx->pc = 0x106ec8u;
    // NOP
    // 0x106ecc: 0x0  nop
    ctx->pc = 0x106eccu;
    // NOP
    ctx->pc = 0x106ed0u;
}
