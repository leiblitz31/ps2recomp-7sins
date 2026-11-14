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

// Function: sub_002882B0
// Address: 0x2882b0 - 0x2882f0
void sub_002882B0_0x2882b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002882B0_0x2882b0");
#endif

    switch (ctx->pc) {
        case 0x2882d0u: goto label_2882d0;
        case 0x2882e0u: goto label_2882e0;
        default: break;
    }

    ctx->pc = 0x2882b0u;

    // 0x2882b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2882b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2882b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2882b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2882b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2882b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2882bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2882bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2882c0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2882c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2882c4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2882c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2882c8: 0xc0a20e8  jal         func_2883A0
    ctx->pc = 0x2882C8u;
    SET_GPR_U32(ctx, 31, 0x2882D0u);
    ctx->pc = 0x2883A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883A0u, 0x2882C8u, 0x2882D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882D0u;
label_2882d0:
    // 0x2882d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2882d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2882d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2882d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882d8: 0xc0a20bc  jal         func_2882F0
    ctx->pc = 0x2882D8u;
    SET_GPR_U32(ctx, 31, 0x2882E0u);
    ctx->pc = 0x2882F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2882F0u, 0x2882D8u, 0x2882E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882E0u;
label_2882e0:
    // 0x2882e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2882e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2882e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2882e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2882e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2882E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2882E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2882F0u;
}
