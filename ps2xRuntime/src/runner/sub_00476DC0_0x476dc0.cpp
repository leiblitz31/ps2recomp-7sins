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

// Function: sub_00476DC0
// Address: 0x476dc0 - 0x476e10
void sub_00476DC0_0x476dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476DC0_0x476dc0");
#endif

    switch (ctx->pc) {
        case 0x476de8u: goto label_476de8;
        case 0x476dfcu: goto label_476dfc;
        default: break;
    }

    ctx->pc = 0x476dc0u;

    // 0x476dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x476dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x476dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x476dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x476dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x476dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x476dcc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x476dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x476dd0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x476dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x476dd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x476dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x476dd8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x476dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x476ddc: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x476ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x476de0: 0xc0ed196  jal         func_3B4658
    ctx->pc = 0x476DE0u;
    SET_GPR_U32(ctx, 31, 0x476DE8u);
    ctx->pc = 0x3B4658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4658u, 0x476DE0u, 0x476DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476DE8u;
label_476de8:
    // 0x476de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x476de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476dec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x476decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x476df0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x476df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x476df4: 0xc0ed18e  jal         func_3B4638
    ctx->pc = 0x476DF4u;
    SET_GPR_U32(ctx, 31, 0x476DFCu);
    ctx->pc = 0x3B4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4638u, 0x476DF4u, 0x476DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476DFCu;
label_476dfc:
    // 0x476dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x476dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x476e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x476e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x476e04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x476e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x476e08: 0x3e00008  jr          $ra
    ctx->pc = 0x476E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476E10u;
}
