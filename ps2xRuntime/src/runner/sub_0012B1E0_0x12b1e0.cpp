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

// Function: sub_0012B1E0
// Address: 0x12b1e0 - 0x12b220
void sub_0012B1E0_0x12b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B1E0_0x12b1e0");
#endif

    switch (ctx->pc) {
        case 0x12b204u: goto label_12b204;
        default: break;
    }

    ctx->pc = 0x12b1e0u;

    // 0x12b1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b1e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b1ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12b1f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b1f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b1f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12b1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1fc: 0xc04ac88  jal         func_12B220
    ctx->pc = 0x12B1FCu;
    SET_GPR_U32(ctx, 31, 0x12B204u);
    ctx->pc = 0x12B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B220u, 0x12B1FCu, 0x12B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B204u;
label_12b204:
    // 0x12b204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b208: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b20c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B214u;
    // 0x12b214: 0x0  nop
    ctx->pc = 0x12b214u;
    // NOP
    // 0x12b218: 0x0  nop
    ctx->pc = 0x12b218u;
    // NOP
    // 0x12b21c: 0x0  nop
    ctx->pc = 0x12b21cu;
    // NOP
    ctx->pc = 0x12b220u;
}
