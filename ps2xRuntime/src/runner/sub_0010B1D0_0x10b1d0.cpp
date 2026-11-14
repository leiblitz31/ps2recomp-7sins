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

// Function: sub_0010B1D0
// Address: 0x10b1d0 - 0x10b220
void sub_0010B1D0_0x10b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B1D0_0x10b1d0");
#endif

    switch (ctx->pc) {
        case 0x10b1f4u: goto label_10b1f4;
        case 0x10b204u: goto label_10b204;
        default: break;
    }

    ctx->pc = 0x10b1d0u;

    // 0x10b1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b1d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10b1dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10b1e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x10b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x10b1e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b1e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b1ec: 0xc042c88  jal         func_10B220
    ctx->pc = 0x10B1ECu;
    SET_GPR_U32(ctx, 31, 0x10B1F4u);
    ctx->pc = 0x10B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B220u, 0x10B1ECu, 0x10B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1F4u;
label_10b1f4:
    // 0x10b1f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b1f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1fc: 0xc042b4c  jal         func_10AD30
    ctx->pc = 0x10B1FCu;
    SET_GPR_U32(ctx, 31, 0x10B204u);
    ctx->pc = 0x10AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AD30u, 0x10B1FCu, 0x10B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B204u;
label_10b204:
    // 0x10b204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b208: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10b208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10b20c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B214u;
    // 0x10b214: 0x0  nop
    ctx->pc = 0x10b214u;
    // NOP
    // 0x10b218: 0x0  nop
    ctx->pc = 0x10b218u;
    // NOP
    // 0x10b21c: 0x0  nop
    ctx->pc = 0x10b21cu;
    // NOP
    ctx->pc = 0x10b220u;
}
