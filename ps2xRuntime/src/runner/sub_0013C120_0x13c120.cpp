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

// Function: sub_0013C120
// Address: 0x13c120 - 0x13c160
void sub_0013C120_0x13c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C120_0x13c120");
#endif

    switch (ctx->pc) {
        case 0x13c144u: goto label_13c144;
        default: break;
    }

    ctx->pc = 0x13c120u;

    // 0x13c120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c128: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13c128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13c12c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x13c130: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c134: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x13c134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c138: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x13c138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x13c13c: 0xc04f058  jal         func_13C160
    ctx->pc = 0x13C13Cu;
    SET_GPR_U32(ctx, 31, 0x13C144u);
    ctx->pc = 0x13C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C160u, 0x13C13Cu, 0x13C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C144u;
label_13c144:
    // 0x13c144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c148: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13c148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c14c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C154u;
    // 0x13c154: 0x0  nop
    ctx->pc = 0x13c154u;
    // NOP
    // 0x13c158: 0x0  nop
    ctx->pc = 0x13c158u;
    // NOP
    // 0x13c15c: 0x0  nop
    ctx->pc = 0x13c15cu;
    // NOP
    ctx->pc = 0x13c160u;
}
