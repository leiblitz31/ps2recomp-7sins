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

// Function: sub_002BEAE0
// Address: 0x2beae0 - 0x2beb20
void sub_002BEAE0_0x2beae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEAE0_0x2beae0");
#endif

    switch (ctx->pc) {
        case 0x2beaf8u: goto label_2beaf8;
        case 0x2beb08u: goto label_2beb08;
        default: break;
    }

    ctx->pc = 0x2beae0u;

    // 0x2beae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2beae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2beae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2beae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2beae8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2beae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2beaec: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2beaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2beaf0: 0xc0afb78  jal         func_2BEDE0
    ctx->pc = 0x2BEAF0u;
    SET_GPR_U32(ctx, 31, 0x2BEAF8u);
    ctx->pc = 0x2BEDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDE0u, 0x2BEAF0u, 0x2BEAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAF8u;
label_2beaf8:
    // 0x2beaf8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2beaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2beafc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2beafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb00: 0xc0afb38  jal         func_2BECE0
    ctx->pc = 0x2BEB00u;
    SET_GPR_U32(ctx, 31, 0x2BEB08u);
    ctx->pc = 0x2BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BECE0u, 0x2BEB00u, 0x2BEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB08u;
label_2beb08:
    // 0x2beb08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2beb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2beb0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2beb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beb10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2beb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2beb14: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEB1Cu;
    // 0x2beb1c: 0x0  nop
    ctx->pc = 0x2beb1cu;
    // NOP
    ctx->pc = 0x2beb20u;
}
