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

// Function: sub_002782C0
// Address: 0x2782c0 - 0x278300
void sub_002782C0_0x2782c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002782C0_0x2782c0");
#endif

    switch (ctx->pc) {
        case 0x2782e8u: goto label_2782e8;
        default: break;
    }

    ctx->pc = 0x2782c0u;

    // 0x2782c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2782c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2782c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2782c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2782c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2782c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2782cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2782ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2782d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2782d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2782d4: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2782d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2782d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2782d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2782dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2782e0: 0xc09e0c0  jal         func_278300
    ctx->pc = 0x2782E0u;
    SET_GPR_U32(ctx, 31, 0x2782E8u);
    ctx->pc = 0x278300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278300u, 0x2782E0u, 0x2782E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782E8u;
label_2782e8:
    // 0x2782e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2782e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2782ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2782ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2782f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2782f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2782f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2782f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2782f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2782F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2782F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278300u;
}
