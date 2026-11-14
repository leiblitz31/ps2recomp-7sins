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

// Function: sub_004814F0
// Address: 0x4814f0 - 0x481530
void sub_004814F0_0x4814f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004814F0_0x4814f0");
#endif

    switch (ctx->pc) {
        case 0x481518u: goto label_481518;
        default: break;
    }

    ctx->pc = 0x4814f0u;

    // 0x4814f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4814f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4814f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4814f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4814f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4814f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4814fc: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4814fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x481500: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x481500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481504: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x481504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x481508: 0x24a51530  addiu       $a1, $a1, 0x1530
    ctx->pc = 0x481508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5424));
    // 0x48150c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x48150cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x481510: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x481510u;
    SET_GPR_U32(ctx, 31, 0x481518u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x481510u, 0x481518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481518u;
label_481518:
    // 0x481518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48151c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48151cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x481520: 0x3e00008  jr          $ra
    ctx->pc = 0x481520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481528u;
    // 0x481528: 0x0  nop
    ctx->pc = 0x481528u;
    // NOP
    // 0x48152c: 0x0  nop
    ctx->pc = 0x48152cu;
    // NOP
    ctx->pc = 0x481530u;
}
