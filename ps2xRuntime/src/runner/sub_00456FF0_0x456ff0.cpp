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

// Function: sub_00456FF0
// Address: 0x456ff0 - 0x457060
void sub_00456FF0_0x456ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456FF0_0x456ff0");
#endif

    switch (ctx->pc) {
        case 0x45701cu: goto label_45701c;
        case 0x457028u: goto label_457028;
        default: break;
    }

    ctx->pc = 0x456ff0u;

    // 0x456ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x456ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x456ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x456ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x456ff8: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x456ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x456ffc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x456FFCu;
    {
        const bool branch_taken_0x456ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456ffc) {
            ctx->pc = 0x45703Cu;
            goto label_45703c;
        }
    }
    ctx->pc = 0x457004u;
    // 0x457004: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x457004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x457008: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x457008u;
    {
        const bool branch_taken_0x457008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x457008) {
            ctx->pc = 0x45702Cu;
            goto label_45702c;
        }
    }
    ctx->pc = 0x457010u;
    // 0x457010: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x457010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x457014: 0xc115c18  jal         func_457060
    ctx->pc = 0x457014u;
    SET_GPR_U32(ctx, 31, 0x45701Cu);
    ctx->pc = 0x457060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457060u, 0x457014u, 0x45701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45701Cu;
label_45701c:
    // 0x45701c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45701cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x457020: 0xc119c5c  jal         func_467170
    ctx->pc = 0x457020u;
    SET_GPR_U32(ctx, 31, 0x457028u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x457020u, 0x457028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457028u;
label_457028:
    // 0x457028: 0xaf80bf38  sw          $zero, -0x40C8($gp)
    ctx->pc = 0x457028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950712), GPR_U32(ctx, 0));
label_45702c:
    // 0x45702c: 0xaf80bf38  sw          $zero, -0x40C8($gp)
    ctx->pc = 0x45702cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950712), GPR_U32(ctx, 0));
    // 0x457030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x457030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x457034: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x457034u;
    {
        const bool branch_taken_0x457034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x457034) {
            ctx->pc = 0x457044u;
            goto label_457044;
        }
    }
    ctx->pc = 0x45703Cu;
label_45703c:
    // 0x45703c: 0xaf80bf34  sw          $zero, -0x40CC($gp)
    ctx->pc = 0x45703cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950708), GPR_U32(ctx, 0));
    // 0x457040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x457040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_457044:
    // 0x457044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x457044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457048: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x457048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45704c: 0x3e00008  jr          $ra
    ctx->pc = 0x45704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457054u;
    // 0x457054: 0x0  nop
    ctx->pc = 0x457054u;
    // NOP
    // 0x457058: 0x0  nop
    ctx->pc = 0x457058u;
    // NOP
    // 0x45705c: 0x0  nop
    ctx->pc = 0x45705cu;
    // NOP
    ctx->pc = 0x457060u;
}
