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

// Function: sub_00189C80
// Address: 0x189c80 - 0x189cc0
void sub_00189C80_0x189c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189C80_0x189c80");
#endif

    switch (ctx->pc) {
        case 0x189c9cu: goto label_189c9c;
        case 0x189cacu: goto label_189cac;
        default: break;
    }

    ctx->pc = 0x189c80u;

    // 0x189c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x189c8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x189c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x189c90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x189c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189c94: 0xc0626cc  jal         func_189B30
    ctx->pc = 0x189C94u;
    SET_GPR_U32(ctx, 31, 0x189C9Cu);
    ctx->pc = 0x189B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189B30u, 0x189C94u, 0x189C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C9Cu;
label_189c9c:
    // 0x189c9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ca4: 0xc062730  jal         func_189CC0
    ctx->pc = 0x189CA4u;
    SET_GPR_U32(ctx, 31, 0x189CACu);
    ctx->pc = 0x189CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189CC0u, 0x189CA4u, 0x189CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CACu;
label_189cac:
    // 0x189cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189cb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x189CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189CBCu;
    // 0x189cbc: 0x0  nop
    ctx->pc = 0x189cbcu;
    // NOP
    ctx->pc = 0x189cc0u;
}
