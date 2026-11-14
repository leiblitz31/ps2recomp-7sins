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

// Function: sub_00293E80
// Address: 0x293e80 - 0x293ec0
void sub_00293E80_0x293e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293E80_0x293e80");
#endif

    switch (ctx->pc) {
        case 0x293eb0u: goto label_293eb0;
        default: break;
    }

    ctx->pc = 0x293e80u;

    // 0x293e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x293e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x293e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293e88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x293e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x293e8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x293e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x293e90: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x293e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x293e94: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x293e94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x293e98: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x293e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293e9c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x293e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293ea0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x293ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293ea4: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x293ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x293ea8: 0xc0a4f64  jal         func_293D90
    ctx->pc = 0x293EA8u;
    SET_GPR_U32(ctx, 31, 0x293EB0u);
    ctx->pc = 0x293D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293D90u, 0x293EA8u, 0x293EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EB0u;
label_293eb0:
    // 0x293eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293eb4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x293eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x293eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x293EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293EC0u;
}
