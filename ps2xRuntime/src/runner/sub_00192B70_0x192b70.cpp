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

// Function: sub_00192B70
// Address: 0x192b70 - 0x192bb0
void sub_00192B70_0x192b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192B70_0x192b70");
#endif

    switch (ctx->pc) {
        case 0x192b8cu: goto label_192b8c;
        case 0x192b9cu: goto label_192b9c;
        default: break;
    }

    ctx->pc = 0x192b70u;

    // 0x192b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x192b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x192b7c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x192b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x192b80: 0x24845a70  addiu       $a0, $a0, 0x5A70
    ctx->pc = 0x192b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23152));
    // 0x192b84: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x192B84u;
    SET_GPR_U32(ctx, 31, 0x192B8Cu);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x192B84u, 0x192B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B8Cu;
label_192b8c:
    // 0x192b8c: 0xaf82bc60  sw          $v0, -0x43A0($gp)
    ctx->pc = 0x192b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949984), GPR_U32(ctx, 2));
    // 0x192b90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x192b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192b94: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x192B94u;
    SET_GPR_U32(ctx, 31, 0x192B9Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x192B94u, 0x192B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B9Cu;
label_192b9c:
    // 0x192b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192ba0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x192ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x192BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192BACu;
    // 0x192bac: 0x0  nop
    ctx->pc = 0x192bacu;
    // NOP
    ctx->pc = 0x192bb0u;
}
