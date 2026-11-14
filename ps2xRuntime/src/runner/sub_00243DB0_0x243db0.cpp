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

// Function: sub_00243DB0
// Address: 0x243db0 - 0x243e00
void sub_00243DB0_0x243db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243DB0_0x243db0");
#endif

    switch (ctx->pc) {
        case 0x243de8u: goto label_243de8;
        default: break;
    }

    ctx->pc = 0x243db0u;

    // 0x243db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x243db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x243dbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x243dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x243dc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x243dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243dc4: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x243dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x243dc8: 0x10030007  beq         $zero, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x243DC8u;
    {
        const bool branch_taken_0x243dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x243dc8) {
            ctx->pc = 0x243DE8u;
            goto label_243de8;
        }
    }
    ctx->pc = 0x243DD0u;
    // 0x243dd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243dd4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x243dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x243dd8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x243dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243ddc: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x243ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x243de0: 0xc041d58  jal         func_107560
    ctx->pc = 0x243DE0u;
    SET_GPR_U32(ctx, 31, 0x243DE8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x243DE0u, 0x243DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DE8u;
label_243de8:
    // 0x243de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243dec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243df0: 0x3e00008  jr          $ra
    ctx->pc = 0x243DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243DF8u;
    // 0x243df8: 0x0  nop
    ctx->pc = 0x243df8u;
    // NOP
    // 0x243dfc: 0x0  nop
    ctx->pc = 0x243dfcu;
    // NOP
    ctx->pc = 0x243e00u;
}
