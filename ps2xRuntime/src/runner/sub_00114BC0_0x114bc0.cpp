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

// Function: sub_00114BC0
// Address: 0x114bc0 - 0x114c00
void sub_00114BC0_0x114bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114BC0_0x114bc0");
#endif

    switch (ctx->pc) {
        case 0x114be0u: goto label_114be0;
        default: break;
    }

    ctx->pc = 0x114bc0u;

    // 0x114bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x114bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x114bcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x114bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x114bd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x114bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114bd4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x114bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114bd8: 0xc045300  jal         func_114C00
    ctx->pc = 0x114BD8u;
    SET_GPR_U32(ctx, 31, 0x114BE0u);
    ctx->pc = 0x114C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114C00u, 0x114BD8u, 0x114BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BE0u;
label_114be0:
    // 0x114be0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114be8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x114be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114bec: 0x3e00008  jr          $ra
    ctx->pc = 0x114BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114BF4u;
    // 0x114bf4: 0x0  nop
    ctx->pc = 0x114bf4u;
    // NOP
    // 0x114bf8: 0x0  nop
    ctx->pc = 0x114bf8u;
    // NOP
    // 0x114bfc: 0x0  nop
    ctx->pc = 0x114bfcu;
    // NOP
    ctx->pc = 0x114c00u;
}
