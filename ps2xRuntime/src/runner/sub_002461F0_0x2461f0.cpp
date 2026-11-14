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

// Function: sub_002461F0
// Address: 0x2461f0 - 0x246230
void sub_002461F0_0x2461f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002461F0_0x2461f0");
#endif

    switch (ctx->pc) {
        case 0x24621cu: goto label_24621c;
        default: break;
    }

    ctx->pc = 0x2461f0u;

    // 0x2461f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2461f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2461f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2461f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2461f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2461f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2461fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2461fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x246200: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x246200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x246204: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x246204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246208: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x246208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24620c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x24620cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246210: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x246210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x246214: 0xc09188c  jal         func_246230
    ctx->pc = 0x246214u;
    SET_GPR_U32(ctx, 31, 0x24621Cu);
    ctx->pc = 0x246230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246230u, 0x246214u, 0x24621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24621Cu;
label_24621c:
    // 0x24621c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24621cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246220: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x246220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x246224: 0x3e00008  jr          $ra
    ctx->pc = 0x246224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24622Cu;
    // 0x24622c: 0x0  nop
    ctx->pc = 0x24622cu;
    // NOP
    ctx->pc = 0x246230u;
}
