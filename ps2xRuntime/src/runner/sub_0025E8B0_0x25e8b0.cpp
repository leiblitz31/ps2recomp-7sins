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

// Function: sub_0025E8B0
// Address: 0x25e8b0 - 0x25e910
void sub_0025E8B0_0x25e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E8B0_0x25e8b0");
#endif

    switch (ctx->pc) {
        case 0x25e8ccu: goto label_25e8cc;
        case 0x25e8dcu: goto label_25e8dc;
        case 0x25e8f0u: goto label_25e8f0;
        default: break;
    }

    ctx->pc = 0x25e8b0u;

    // 0x25e8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25e8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e8bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25e8c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e8c4: 0xc09762c  jal         func_25D8B0
    ctx->pc = 0x25E8C4u;
    SET_GPR_U32(ctx, 31, 0x25E8CCu);
    ctx->pc = 0x25D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8B0u, 0x25E8C4u, 0x25E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8CCu;
label_25e8cc:
    // 0x25e8cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e8d4: 0xc097970  jal         func_25E5C0
    ctx->pc = 0x25E8D4u;
    SET_GPR_U32(ctx, 31, 0x25E8DCu);
    ctx->pc = 0x25E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E5C0u, 0x25E8D4u, 0x25E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8DCu;
label_25e8dc:
    // 0x25e8dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e8e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25e8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25e8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8e8: 0xc097a44  jal         func_25E910
    ctx->pc = 0x25E8E8u;
    SET_GPR_U32(ctx, 31, 0x25E8F0u);
    ctx->pc = 0x25E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E910u, 0x25E8E8u, 0x25E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8F0u;
label_25e8f0:
    // 0x25e8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25e8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e8f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e8f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25e8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25e8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x25E8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E904u;
    // 0x25e904: 0x0  nop
    ctx->pc = 0x25e904u;
    // NOP
    // 0x25e908: 0x0  nop
    ctx->pc = 0x25e908u;
    // NOP
    // 0x25e90c: 0x0  nop
    ctx->pc = 0x25e90cu;
    // NOP
    ctx->pc = 0x25e910u;
}
