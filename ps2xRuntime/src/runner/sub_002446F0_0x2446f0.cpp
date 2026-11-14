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

// Function: sub_002446F0
// Address: 0x2446f0 - 0x244730
void sub_002446F0_0x2446f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002446F0_0x2446f0");
#endif

    switch (ctx->pc) {
        case 0x24470cu: goto label_24470c;
        default: break;
    }

    ctx->pc = 0x2446f0u;

    // 0x2446f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2446f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2446f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2446f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2446f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2446fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2446fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x244700: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x244700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244704: 0xc084ecc  jal         func_213B30
    ctx->pc = 0x244704u;
    SET_GPR_U32(ctx, 31, 0x24470Cu);
    ctx->pc = 0x213B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B30u, 0x244704u, 0x24470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24470Cu;
label_24470c:
    // 0x24470c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24470cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244710: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24471c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24471cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x244720: 0x3e00008  jr          $ra
    ctx->pc = 0x244720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244728u;
    // 0x244728: 0x0  nop
    ctx->pc = 0x244728u;
    // NOP
    // 0x24472c: 0x0  nop
    ctx->pc = 0x24472cu;
    // NOP
    ctx->pc = 0x244730u;
}
