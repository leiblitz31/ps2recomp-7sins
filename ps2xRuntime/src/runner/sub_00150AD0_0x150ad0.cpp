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

// Function: sub_00150AD0
// Address: 0x150ad0 - 0x150b00
void sub_00150AD0_0x150ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150AD0_0x150ad0");
#endif

    switch (ctx->pc) {
        case 0x150ae8u: goto label_150ae8;
        default: break;
    }

    ctx->pc = 0x150ad0u;

    // 0x150ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150ad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x150adc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x150adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150ae0: 0xc0542c0  jal         func_150B00
    ctx->pc = 0x150AE0u;
    SET_GPR_U32(ctx, 31, 0x150AE8u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x150AE0u, 0x150AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AE8u;
label_150ae8:
    // 0x150ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150aec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x150aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x150af0: 0x3e00008  jr          $ra
    ctx->pc = 0x150AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150AF8u;
    // 0x150af8: 0x0  nop
    ctx->pc = 0x150af8u;
    // NOP
    // 0x150afc: 0x0  nop
    ctx->pc = 0x150afcu;
    // NOP
    ctx->pc = 0x150b00u;
}
