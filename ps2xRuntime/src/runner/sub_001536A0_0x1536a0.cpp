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

// Function: sub_001536A0
// Address: 0x1536a0 - 0x1536e0
void sub_001536A0_0x1536a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001536A0_0x1536a0");
#endif

    switch (ctx->pc) {
        case 0x1536c8u: goto label_1536c8;
        default: break;
    }

    ctx->pc = 0x1536a0u;

    // 0x1536a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1536a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1536a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1536a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1536a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1536ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1536acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1536b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1536b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1536b4: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1536b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1536b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1536b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536bc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1536c0: 0xc10826c  jal         func_4209B0
    ctx->pc = 0x1536C0u;
    SET_GPR_U32(ctx, 31, 0x1536C8u);
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x1536C0u, 0x1536C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536C8u;
label_1536c8:
    // 0x1536c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1536c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1536cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1536ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1536d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1536d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1536d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1536d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1536d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1536D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1536D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1536E0u;
}
