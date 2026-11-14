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

// Function: sub_00102DB0
// Address: 0x102db0 - 0x102df0
void sub_00102DB0_0x102db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102DB0_0x102db0");
#endif

    switch (ctx->pc) {
        case 0x102dc8u: goto label_102dc8;
        case 0x102dd8u: goto label_102dd8;
        default: break;
    }

    ctx->pc = 0x102db0u;

    // 0x102db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102db8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x102db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x102dbc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x102dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x102dc0: 0xc040bbc  jal         func_102EF0
    ctx->pc = 0x102DC0u;
    SET_GPR_U32(ctx, 31, 0x102DC8u);
    ctx->pc = 0x102EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102EF0u, 0x102DC0u, 0x102DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DC8u;
label_102dc8:
    // 0x102dc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x102dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102dcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102dd0: 0xc040b7c  jal         func_102DF0
    ctx->pc = 0x102DD0u;
    SET_GPR_U32(ctx, 31, 0x102DD8u);
    ctx->pc = 0x102DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102DF0u, 0x102DD0u, 0x102DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DD8u;
label_102dd8:
    // 0x102dd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102de0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102de4: 0x3e00008  jr          $ra
    ctx->pc = 0x102DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102DECu;
    // 0x102dec: 0x0  nop
    ctx->pc = 0x102decu;
    // NOP
    ctx->pc = 0x102df0u;
}
