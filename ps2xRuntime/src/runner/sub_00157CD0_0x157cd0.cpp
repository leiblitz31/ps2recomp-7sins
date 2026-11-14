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

// Function: sub_00157CD0
// Address: 0x157cd0 - 0x157d20
void sub_00157CD0_0x157cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157CD0_0x157cd0");
#endif

    switch (ctx->pc) {
        case 0x157cf8u: goto label_157cf8;
        case 0x157d0cu: goto label_157d0c;
        default: break;
    }

    ctx->pc = 0x157cd0u;

    // 0x157cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x157cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x157cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157cd8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x157cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x157cdc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x157cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x157ce0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x157ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x157ce4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x157ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x157ce8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x157ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157cec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x157cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157cf0: 0xc0563c4  jal         func_158F10
    ctx->pc = 0x157CF0u;
    SET_GPR_U32(ctx, 31, 0x157CF8u);
    ctx->pc = 0x158F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F10u, 0x157CF0u, 0x157CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CF8u;
label_157cf8:
    // 0x157cf8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x157cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157cfc: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x157d00: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x157d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x157d04: 0xc055f48  jal         func_157D20
    ctx->pc = 0x157D04u;
    SET_GPR_U32(ctx, 31, 0x157D0Cu);
    ctx->pc = 0x157D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157D20u, 0x157D04u, 0x157D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D0Cu;
label_157d0c:
    // 0x157d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157d10: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x157d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x157d14: 0x3e00008  jr          $ra
    ctx->pc = 0x157D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157D1Cu;
    // 0x157d1c: 0x0  nop
    ctx->pc = 0x157d1cu;
    // NOP
    ctx->pc = 0x157d20u;
}
