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

// Function: sub_0026EAC0
// Address: 0x26eac0 - 0x26eaf0
void sub_0026EAC0_0x26eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EAC0_0x26eac0");
#endif

    switch (ctx->pc) {
        case 0x26eadcu: goto label_26eadc;
        default: break;
    }

    ctx->pc = 0x26eac0u;

    // 0x26eac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26eac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26eac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26eacc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ead0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x26ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x26ead4: 0xc09babc  jal         func_26EAF0
    ctx->pc = 0x26EAD4u;
    SET_GPR_U32(ctx, 31, 0x26EADCu);
    ctx->pc = 0x26EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EAF0u, 0x26EAD4u, 0x26EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EADCu;
label_26eadc:
    // 0x26eadc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26eadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eae0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26eae4: 0x3e00008  jr          $ra
    ctx->pc = 0x26EAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EAECu;
    // 0x26eaec: 0x0  nop
    ctx->pc = 0x26eaecu;
    // NOP
    ctx->pc = 0x26eaf0u;
}
