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

// Function: sub_0010C390
// Address: 0x10c390 - 0x10c3f0
void sub_0010C390_0x10c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C390_0x10c390");
#endif

    switch (ctx->pc) {
        case 0x10c3d0u: goto label_10c3d0;
        default: break;
    }

    ctx->pc = 0x10c390u;

    // 0x10c390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10c398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10c39c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10c3a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c3a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c3a8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C3A8u;
    {
        const bool branch_taken_0x10c3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10c3a8) {
            ctx->pc = 0x10C3BCu;
            goto label_10c3bc;
        }
    }
    ctx->pc = 0x10C3B0u;
    // 0x10c3b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c3b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10C3B4u;
    {
        const bool branch_taken_0x10c3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c3b4) {
            ctx->pc = 0x10C3D4u;
            goto label_10c3d4;
        }
    }
    ctx->pc = 0x10C3BCu;
label_10c3bc:
    // 0x10c3bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c3c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c3c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c3c8: 0xc040488  jal         func_101220
    ctx->pc = 0x10C3C8u;
    SET_GPR_U32(ctx, 31, 0x10C3D0u);
    ctx->pc = 0x101220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101220u, 0x10C3C8u, 0x10C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C3D0u;
label_10c3d0:
    // 0x10c3d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10c3d4:
    // 0x10c3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c3d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10c3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10c3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C3E4u;
    // 0x10c3e4: 0x0  nop
    ctx->pc = 0x10c3e4u;
    // NOP
    // 0x10c3e8: 0x0  nop
    ctx->pc = 0x10c3e8u;
    // NOP
    // 0x10c3ec: 0x0  nop
    ctx->pc = 0x10c3ecu;
    // NOP
    ctx->pc = 0x10c3f0u;
}
