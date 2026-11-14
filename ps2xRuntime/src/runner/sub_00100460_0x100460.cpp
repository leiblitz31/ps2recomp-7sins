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

// Function: sub_00100460
// Address: 0x100460 - 0x100490
void sub_00100460_0x100460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100460_0x100460");
#endif

    switch (ctx->pc) {
        case 0x10047cu: goto label_10047c;
        default: break;
    }

    ctx->pc = 0x100460u;

    // 0x100460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x100468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10046c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10046cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100470: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x100470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x100474: 0xc0b738c  jal         func_2DCE30
    ctx->pc = 0x100474u;
    SET_GPR_U32(ctx, 31, 0x10047Cu);
    ctx->pc = 0x2DCE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE30u, 0x100474u, 0x10047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10047Cu;
label_10047c:
    // 0x10047c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10047cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100480: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x100480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x100484: 0x3e00008  jr          $ra
    ctx->pc = 0x100484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10048Cu;
    // 0x10048c: 0x0  nop
    ctx->pc = 0x10048cu;
    // NOP
    ctx->pc = 0x100490u;
}
