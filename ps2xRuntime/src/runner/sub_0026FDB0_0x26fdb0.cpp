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

// Function: sub_0026FDB0
// Address: 0x26fdb0 - 0x26fdf0
void sub_0026FDB0_0x26fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FDB0_0x26fdb0");
#endif

    switch (ctx->pc) {
        case 0x26fdc8u: goto label_26fdc8;
        case 0x26fdd8u: goto label_26fdd8;
        default: break;
    }

    ctx->pc = 0x26fdb0u;

    // 0x26fdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fdb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fdb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26fdbc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x26fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26fdc0: 0xc09bfbc  jal         func_26FEF0
    ctx->pc = 0x26FDC0u;
    SET_GPR_U32(ctx, 31, 0x26FDC8u);
    ctx->pc = 0x26FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FEF0u, 0x26FDC0u, 0x26FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDC8u;
label_26fdc8:
    // 0x26fdc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fdcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26fdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fdd0: 0xc09bf7c  jal         func_26FDF0
    ctx->pc = 0x26FDD0u;
    SET_GPR_U32(ctx, 31, 0x26FDD8u);
    ctx->pc = 0x26FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FDF0u, 0x26FDD0u, 0x26FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDD8u;
label_26fdd8:
    // 0x26fdd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fde0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26fde4: 0x3e00008  jr          $ra
    ctx->pc = 0x26FDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FDECu;
    // 0x26fdec: 0x0  nop
    ctx->pc = 0x26fdecu;
    // NOP
    ctx->pc = 0x26fdf0u;
}
