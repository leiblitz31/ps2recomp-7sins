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

// Function: sub_002351B0
// Address: 0x2351b0 - 0x2351f0
void sub_002351B0_0x2351b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002351B0_0x2351b0");
#endif

    switch (ctx->pc) {
        case 0x2351ccu: goto label_2351cc;
        default: break;
    }

    ctx->pc = 0x2351b0u;

    // 0x2351b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2351b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2351b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2351b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2351b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2351b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2351bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2351bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2351c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2351c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2351c4: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x2351C4u;
    SET_GPR_U32(ctx, 31, 0x2351CCu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x2351C4u, 0x2351CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351CCu;
label_2351cc:
    // 0x2351cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2351ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2351d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2351d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2351d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2351d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2351d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2351dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2351dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2351e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2351E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2351E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2351E8u;
    // 0x2351e8: 0x0  nop
    ctx->pc = 0x2351e8u;
    // NOP
    // 0x2351ec: 0x0  nop
    ctx->pc = 0x2351ecu;
    // NOP
    ctx->pc = 0x2351f0u;
}
