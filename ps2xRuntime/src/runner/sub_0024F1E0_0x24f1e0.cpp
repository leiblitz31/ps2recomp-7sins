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

// Function: sub_0024F1E0
// Address: 0x24f1e0 - 0x24f220
void sub_0024F1E0_0x24f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F1E0_0x24f1e0");
#endif

    switch (ctx->pc) {
        case 0x24f1fcu: goto label_24f1fc;
        default: break;
    }

    ctx->pc = 0x24f1e0u;

    // 0x24f1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f1e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24f1ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f1f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f1f4: 0xc042734  jal         func_109CD0
    ctx->pc = 0x24F1F4u;
    SET_GPR_U32(ctx, 31, 0x24F1FCu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x24F1F4u, 0x24F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F1FCu;
label_24f1fc:
    // 0x24f1fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f200: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24f200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24f204: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f20c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24f20cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f210: 0x3e00008  jr          $ra
    ctx->pc = 0x24F210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F218u;
    // 0x24f218: 0x0  nop
    ctx->pc = 0x24f218u;
    // NOP
    // 0x24f21c: 0x0  nop
    ctx->pc = 0x24f21cu;
    // NOP
    ctx->pc = 0x24f220u;
}
