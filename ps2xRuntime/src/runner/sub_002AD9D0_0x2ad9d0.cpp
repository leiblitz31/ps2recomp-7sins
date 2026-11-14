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

// Function: sub_002AD9D0
// Address: 0x2ad9d0 - 0x2ada30
void sub_002AD9D0_0x2ad9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD9D0_0x2ad9d0");
#endif

    switch (ctx->pc) {
        case 0x2ad9ecu: goto label_2ad9ec;
        case 0x2ad9fcu: goto label_2ad9fc;
        case 0x2ada10u: goto label_2ada10;
        default: break;
    }

    ctx->pc = 0x2ad9d0u;

    // 0x2ad9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ad9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad9dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ad9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ad9e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ad9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad9e4: 0xc0ab594  jal         func_2AD650
    ctx->pc = 0x2AD9E4u;
    SET_GPR_U32(ctx, 31, 0x2AD9ECu);
    ctx->pc = 0x2AD650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD650u, 0x2AD9E4u, 0x2AD9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD9ECu;
label_2ad9ec:
    // 0x2ad9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ad9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad9f4: 0xc0ab550  jal         func_2AD540
    ctx->pc = 0x2AD9F4u;
    SET_GPR_U32(ctx, 31, 0x2AD9FCu);
    ctx->pc = 0x2AD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD540u, 0x2AD9F4u, 0x2AD9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD9FCu;
label_2ad9fc:
    // 0x2ad9fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ad9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ada00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ada00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ada04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada08: 0xc0ab68c  jal         func_2ADA30
    ctx->pc = 0x2ADA08u;
    SET_GPR_U32(ctx, 31, 0x2ADA10u);
    ctx->pc = 0x2ADA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADA30u, 0x2ADA08u, 0x2ADA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA10u;
label_2ada10:
    // 0x2ada10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ada10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ada14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ada14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ada18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ada18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ada1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADA24u;
    // 0x2ada24: 0x0  nop
    ctx->pc = 0x2ada24u;
    // NOP
    // 0x2ada28: 0x0  nop
    ctx->pc = 0x2ada28u;
    // NOP
    // 0x2ada2c: 0x0  nop
    ctx->pc = 0x2ada2cu;
    // NOP
    ctx->pc = 0x2ada30u;
}
