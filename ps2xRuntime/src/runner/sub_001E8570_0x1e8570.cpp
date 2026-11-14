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

// Function: sub_001E8570
// Address: 0x1e8570 - 0x1e85b0
void sub_001E8570_0x1e8570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8570_0x1e8570");
#endif

    switch (ctx->pc) {
        case 0x1e8590u: goto label_1e8590;
        default: break;
    }

    ctx->pc = 0x1e8570u;

    // 0x1e8570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e8578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e857c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e857cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e8580: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e8580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8584: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e8584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8588: 0xc07a16c  jal         func_1E85B0
    ctx->pc = 0x1E8588u;
    SET_GPR_U32(ctx, 31, 0x1E8590u);
    ctx->pc = 0x1E85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E85B0u, 0x1E8588u, 0x1E8590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8590u;
label_1e8590:
    // 0x1e8590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8598: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e8598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e859c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E859Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E85A4u;
    // 0x1e85a4: 0x0  nop
    ctx->pc = 0x1e85a4u;
    // NOP
    // 0x1e85a8: 0x0  nop
    ctx->pc = 0x1e85a8u;
    // NOP
    // 0x1e85ac: 0x0  nop
    ctx->pc = 0x1e85acu;
    // NOP
    ctx->pc = 0x1e85b0u;
}
