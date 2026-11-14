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

// Function: sub_002BDAF0
// Address: 0x2bdaf0 - 0x2bdb30
void sub_002BDAF0_0x2bdaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDAF0_0x2bdaf0");
#endif

    switch (ctx->pc) {
        case 0x2bdb08u: goto label_2bdb08;
        case 0x2bdb18u: goto label_2bdb18;
        default: break;
    }

    ctx->pc = 0x2bdaf0u;

    // 0x2bdaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bdaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bdaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bdaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdaf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2bdaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2bdafc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2bdafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2bdb00: 0xc0af70c  jal         func_2BDC30
    ctx->pc = 0x2BDB00u;
    SET_GPR_U32(ctx, 31, 0x2BDB08u);
    ctx->pc = 0x2BDC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDC30u, 0x2BDB00u, 0x2BDB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB08u;
label_2bdb08:
    // 0x2bdb08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdb0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bdb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb10: 0xc0af6cc  jal         func_2BDB30
    ctx->pc = 0x2BDB10u;
    SET_GPR_U32(ctx, 31, 0x2BDB18u);
    ctx->pc = 0x2BDB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDB30u, 0x2BDB10u, 0x2BDB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB18u;
label_2bdb18:
    // 0x2bdb18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2bdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdb20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bdb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bdb24: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDB2Cu;
    // 0x2bdb2c: 0x0  nop
    ctx->pc = 0x2bdb2cu;
    // NOP
    ctx->pc = 0x2bdb30u;
}
