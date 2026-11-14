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

// Function: sub_001456F0
// Address: 0x1456f0 - 0x145750
void sub_001456F0_0x1456f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001456F0_0x1456f0");
#endif

    switch (ctx->pc) {
        case 0x14570cu: goto label_14570c;
        case 0x14571cu: goto label_14571c;
        case 0x145730u: goto label_145730;
        default: break;
    }

    ctx->pc = 0x1456f0u;

    // 0x1456f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1456f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1456f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1456f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1456f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1456f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1456fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1456fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x145700: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x145700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145704: 0xc05167c  jal         func_1459F0
    ctx->pc = 0x145704u;
    SET_GPR_U32(ctx, 31, 0x14570Cu);
    ctx->pc = 0x1459F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1459F0u, 0x145704u, 0x14570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14570Cu;
label_14570c:
    // 0x14570c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14570cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145710: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x145710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145714: 0xc051674  jal         func_1459D0
    ctx->pc = 0x145714u;
    SET_GPR_U32(ctx, 31, 0x14571Cu);
    ctx->pc = 0x1459D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1459D0u, 0x145714u, 0x14571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14571Cu;
label_14571c:
    // 0x14571c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14571cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x145720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145724: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x145724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145728: 0xc0515d4  jal         func_145750
    ctx->pc = 0x145728u;
    SET_GPR_U32(ctx, 31, 0x145730u);
    ctx->pc = 0x145750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145750u, 0x145728u, 0x145730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145730u;
label_145730:
    // 0x145730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145738: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x145738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14573c: 0x3e00008  jr          $ra
    ctx->pc = 0x14573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14573Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145744u;
    // 0x145744: 0x0  nop
    ctx->pc = 0x145744u;
    // NOP
    // 0x145748: 0x0  nop
    ctx->pc = 0x145748u;
    // NOP
    // 0x14574c: 0x0  nop
    ctx->pc = 0x14574cu;
    // NOP
    ctx->pc = 0x145750u;
}
