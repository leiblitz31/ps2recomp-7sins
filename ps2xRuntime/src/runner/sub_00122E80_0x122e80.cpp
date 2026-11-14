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

// Function: sub_00122E80
// Address: 0x122e80 - 0x122ec0
void sub_00122E80_0x122e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122E80_0x122e80");
#endif

    switch (ctx->pc) {
        case 0x122ea8u: goto label_122ea8;
        default: break;
    }

    ctx->pc = 0x122e80u;

    // 0x122e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122e88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x122e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x122e8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x122e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x122e90: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x122e90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x122e94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x122e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122e98: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x122e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122e9c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x122e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x122ea0: 0xc048bb0  jal         func_122EC0
    ctx->pc = 0x122EA0u;
    SET_GPR_U32(ctx, 31, 0x122EA8u);
    ctx->pc = 0x122EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC0u, 0x122EA0u, 0x122EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EA8u;
label_122ea8:
    // 0x122ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122eac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x122eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x122eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x122EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122EB8u;
    // 0x122eb8: 0x0  nop
    ctx->pc = 0x122eb8u;
    // NOP
    // 0x122ebc: 0x0  nop
    ctx->pc = 0x122ebcu;
    // NOP
    ctx->pc = 0x122ec0u;
}
