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

// Function: sub_00122F50
// Address: 0x122f50 - 0x122f90
void sub_00122F50_0x122f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122F50_0x122f50");
#endif

    switch (ctx->pc) {
        case 0x122f70u: goto label_122f70;
        default: break;
    }

    ctx->pc = 0x122f50u;

    // 0x122f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x122f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x122f5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x122f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x122f60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x122f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122f64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x122f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122f68: 0xc048be4  jal         func_122F90
    ctx->pc = 0x122F68u;
    SET_GPR_U32(ctx, 31, 0x122F70u);
    ctx->pc = 0x122F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F90u, 0x122F68u, 0x122F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F70u;
label_122f70:
    // 0x122f70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122f78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x122f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x122f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x122F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122F84u;
    // 0x122f84: 0x0  nop
    ctx->pc = 0x122f84u;
    // NOP
    // 0x122f88: 0x0  nop
    ctx->pc = 0x122f88u;
    // NOP
    // 0x122f8c: 0x0  nop
    ctx->pc = 0x122f8cu;
    // NOP
    ctx->pc = 0x122f90u;
}
