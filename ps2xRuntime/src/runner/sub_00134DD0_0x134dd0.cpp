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

// Function: sub_00134DD0
// Address: 0x134dd0 - 0x134e30
void sub_00134DD0_0x134dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134DD0_0x134dd0");
#endif

    switch (ctx->pc) {
        case 0x134e18u: goto label_134e18;
        default: break;
    }

    ctx->pc = 0x134dd0u;

    // 0x134dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134dd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x134dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x134ddc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x134ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134de0: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x134de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x134de4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x134DE4u;
    {
        const bool branch_taken_0x134de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134de4) {
            ctx->pc = 0x134E18u;
            goto label_134e18;
        }
    }
    ctx->pc = 0x134DECu;
    // 0x134dec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x134decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134df0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x134df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x134df4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x134DF4u;
    {
        const bool branch_taken_0x134df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x134df4) {
            ctx->pc = 0x134E18u;
            goto label_134e18;
        }
    }
    ctx->pc = 0x134DFCu;
    // 0x134dfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x134dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134e00: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x134e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x134e04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x134e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134e08: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x134e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x134e0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x134e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134e10: 0xc04cea4  jal         func_133A90
    ctx->pc = 0x134E10u;
    SET_GPR_U32(ctx, 31, 0x134E18u);
    ctx->pc = 0x133A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133A90u, 0x134E10u, 0x134E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E18u;
label_134e18:
    // 0x134e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134e1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x134e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x134e20: 0x3e00008  jr          $ra
    ctx->pc = 0x134E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134E28u;
    // 0x134e28: 0x0  nop
    ctx->pc = 0x134e28u;
    // NOP
    // 0x134e2c: 0x0  nop
    ctx->pc = 0x134e2cu;
    // NOP
    ctx->pc = 0x134e30u;
}
