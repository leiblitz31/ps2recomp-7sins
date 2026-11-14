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

// Function: sub_00225BF0
// Address: 0x225bf0 - 0x225c20
void sub_00225BF0_0x225bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225BF0_0x225bf0");
#endif

    switch (ctx->pc) {
        case 0x225c0cu: goto label_225c0c;
        default: break;
    }

    ctx->pc = 0x225bf0u;

    // 0x225bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x225bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x225bfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x225bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225c00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x225c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x225c04: 0xc0862ac  jal         func_218AB0
    ctx->pc = 0x225C04u;
    SET_GPR_U32(ctx, 31, 0x225C0Cu);
    ctx->pc = 0x218AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AB0u, 0x225C04u, 0x225C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C0Cu;
label_225c0c:
    // 0x225c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225c10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x225c14: 0x3e00008  jr          $ra
    ctx->pc = 0x225C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C1Cu;
    // 0x225c1c: 0x0  nop
    ctx->pc = 0x225c1cu;
    // NOP
    ctx->pc = 0x225c20u;
}
