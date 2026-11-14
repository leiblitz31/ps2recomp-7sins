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

// Function: sub_0017C700
// Address: 0x17c700 - 0x17c760
void sub_0017C700_0x17c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C700_0x17c700");
#endif

    switch (ctx->pc) {
        case 0x17c724u: goto label_17c724;
        case 0x17c750u: goto label_17c750;
        default: break;
    }

    ctx->pc = 0x17c700u;

    // 0x17c700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17c704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c708: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17c708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17c70c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17c710: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x17c710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c714: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c718: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C718u;
    {
        const bool branch_taken_0x17c718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c718) {
            ctx->pc = 0x17C740u;
            goto label_17c740;
        }
    }
    ctx->pc = 0x17C720u;
    // 0x17c720: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x17c720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_17c724:
    // 0x17c724: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17c724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17c72c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c730: 0x0  nop
    ctx->pc = 0x17c730u;
    // NOP
    // 0x17c734: 0x0  nop
    ctx->pc = 0x17c734u;
    // NOP
    // 0x17c738: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C738u;
    {
        const bool branch_taken_0x17c738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c738) {
            ctx->pc = 0x17C724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c724;
        }
    }
    ctx->pc = 0x17C740u;
label_17c740:
    // 0x17c740: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17c740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c744: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17c744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c748: 0xc05f1d8  jal         func_17C760
    ctx->pc = 0x17C748u;
    SET_GPR_U32(ctx, 31, 0x17C750u);
    ctx->pc = 0x17C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C760u, 0x17C748u, 0x17C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C750u;
label_17c750:
    // 0x17c750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c754: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17c754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c758: 0x3e00008  jr          $ra
    ctx->pc = 0x17C758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C760u;
}
