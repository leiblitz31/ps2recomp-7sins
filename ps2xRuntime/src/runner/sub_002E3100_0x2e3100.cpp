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

// Function: sub_002E3100
// Address: 0x2e3100 - 0x2e3140
void sub_002E3100_0x2e3100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3100_0x2e3100");
#endif

    switch (ctx->pc) {
        case 0x2e311cu: goto label_2e311c;
        default: break;
    }

    ctx->pc = 0x2e3100u;

    // 0x2e3100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e3108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e310c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3110: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e3110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3114: 0xc042734  jal         func_109CD0
    ctx->pc = 0x2E3114u;
    SET_GPR_U32(ctx, 31, 0x2E311Cu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x2E3114u, 0x2E311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E311Cu;
label_2e311c:
    // 0x2e311c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3120: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e3120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e3124: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e312c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e312cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3130: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3138u;
    // 0x2e3138: 0x0  nop
    ctx->pc = 0x2e3138u;
    // NOP
    // 0x2e313c: 0x0  nop
    ctx->pc = 0x2e313cu;
    // NOP
    ctx->pc = 0x2e3140u;
}
