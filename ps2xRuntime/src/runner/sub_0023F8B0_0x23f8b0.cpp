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

// Function: sub_0023F8B0
// Address: 0x23f8b0 - 0x23f910
void sub_0023F8B0_0x23f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F8B0_0x23f8b0");
#endif

    switch (ctx->pc) {
        case 0x23f8ccu: goto label_23f8cc;
        case 0x23f8dcu: goto label_23f8dc;
        case 0x23f8f0u: goto label_23f8f0;
        default: break;
    }

    ctx->pc = 0x23f8b0u;

    // 0x23f8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f8bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23f8c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f8c4: 0xc08feb4  jal         func_23FAD0
    ctx->pc = 0x23F8C4u;
    SET_GPR_U32(ctx, 31, 0x23F8CCu);
    ctx->pc = 0x23FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAD0u, 0x23F8C4u, 0x23F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8CCu;
label_23f8cc:
    // 0x23f8cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f8d4: 0xc08feac  jal         func_23FAB0
    ctx->pc = 0x23F8D4u;
    SET_GPR_U32(ctx, 31, 0x23F8DCu);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x23F8D4u, 0x23F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8DCu;
label_23f8dc:
    // 0x23f8dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f8e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23f8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8e8: 0xc08fe44  jal         func_23F910
    ctx->pc = 0x23F8E8u;
    SET_GPR_U32(ctx, 31, 0x23F8F0u);
    ctx->pc = 0x23F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F910u, 0x23F8E8u, 0x23F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8F0u;
label_23f8f0:
    // 0x23f8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f8f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f8f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x23F8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F904u;
    // 0x23f904: 0x0  nop
    ctx->pc = 0x23f904u;
    // NOP
    // 0x23f908: 0x0  nop
    ctx->pc = 0x23f908u;
    // NOP
    // 0x23f90c: 0x0  nop
    ctx->pc = 0x23f90cu;
    // NOP
    ctx->pc = 0x23f910u;
}
