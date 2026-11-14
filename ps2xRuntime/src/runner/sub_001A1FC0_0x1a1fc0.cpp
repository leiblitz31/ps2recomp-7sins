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

// Function: sub_001A1FC0
// Address: 0x1a1fc0 - 0x1a2000
void sub_001A1FC0_0x1a1fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1FC0_0x1a1fc0");
#endif

    switch (ctx->pc) {
        case 0x1a1fe8u: goto label_1a1fe8;
        default: break;
    }

    ctx->pc = 0x1a1fc0u;

    // 0x1a1fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1fc8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a1fcc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1a1fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a1fd0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1a1fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1fd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1fd8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1a1fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1fdc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1a1fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a1fe0: 0xc068800  jal         func_1A2000
    ctx->pc = 0x1A1FE0u;
    SET_GPR_U32(ctx, 31, 0x1A1FE8u);
    ctx->pc = 0x1A2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2000u, 0x1A1FE0u, 0x1A1FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FE8u;
label_1a1fe8:
    // 0x1a1fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1fec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a1fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1FF8u;
    // 0x1a1ff8: 0x0  nop
    ctx->pc = 0x1a1ff8u;
    // NOP
    // 0x1a1ffc: 0x0  nop
    ctx->pc = 0x1a1ffcu;
    // NOP
    ctx->pc = 0x1a2000u;
}
