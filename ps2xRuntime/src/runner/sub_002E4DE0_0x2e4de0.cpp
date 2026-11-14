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

// Function: sub_002E4DE0
// Address: 0x2e4de0 - 0x2e4e40
void sub_002E4DE0_0x2e4de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4DE0_0x2e4de0");
#endif

    switch (ctx->pc) {
        case 0x2e4dfcu: goto label_2e4dfc;
        case 0x2e4e0cu: goto label_2e4e0c;
        case 0x2e4e20u: goto label_2e4e20;
        default: break;
    }

    ctx->pc = 0x2e4de0u;

    // 0x2e4de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e4de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e4de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4dec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e4decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e4df0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e4df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4df4: 0xc0b6700  jal         func_2D9C00
    ctx->pc = 0x2E4DF4u;
    SET_GPR_U32(ctx, 31, 0x2E4DFCu);
    ctx->pc = 0x2D9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C00u, 0x2E4DF4u, 0x2E4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DFCu;
label_2e4dfc:
    // 0x2e4dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e4e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4e04: 0xc0b66f8  jal         func_2D9BE0
    ctx->pc = 0x2E4E04u;
    SET_GPR_U32(ctx, 31, 0x2E4E0Cu);
    ctx->pc = 0x2D9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BE0u, 0x2E4E04u, 0x2E4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E0Cu;
label_2e4e0c:
    // 0x2e4e0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e4e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4e10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e4e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e18: 0xc0b9390  jal         func_2E4E40
    ctx->pc = 0x2E4E18u;
    SET_GPR_U32(ctx, 31, 0x2E4E20u);
    ctx->pc = 0x2E4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4E40u, 0x2E4E18u, 0x2E4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E20u;
label_2e4e20:
    // 0x2e4e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4e28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e4e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e4e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4E34u;
    // 0x2e4e34: 0x0  nop
    ctx->pc = 0x2e4e34u;
    // NOP
    // 0x2e4e38: 0x0  nop
    ctx->pc = 0x2e4e38u;
    // NOP
    // 0x2e4e3c: 0x0  nop
    ctx->pc = 0x2e4e3cu;
    // NOP
    ctx->pc = 0x2e4e40u;
}
