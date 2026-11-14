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

// Function: sub_001C7160
// Address: 0x1c7160 - 0x1c7190
void sub_001C7160_0x1c7160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7160_0x1c7160");
#endif

    switch (ctx->pc) {
        case 0x1c717cu: goto label_1c717c;
        default: break;
    }

    ctx->pc = 0x1c7160u;

    // 0x1c7160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c7168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c716c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7170: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7174: 0xc071c64  jal         func_1C7190
    ctx->pc = 0x1C7174u;
    SET_GPR_U32(ctx, 31, 0x1C717Cu);
    ctx->pc = 0x1C7190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7190u, 0x1C7174u, 0x1C717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C717Cu;
label_1c717c:
    // 0x1c717c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c717cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7180: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c7180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c7184: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C718Cu;
    // 0x1c718c: 0x0  nop
    ctx->pc = 0x1c718cu;
    // NOP
    ctx->pc = 0x1c7190u;
}
