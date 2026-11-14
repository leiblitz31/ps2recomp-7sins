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

// Function: sub_002E7420
// Address: 0x2e7420 - 0x2e7480
void sub_002E7420_0x2e7420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7420_0x2e7420");
#endif

    switch (ctx->pc) {
        case 0x2e743cu: goto label_2e743c;
        case 0x2e744cu: goto label_2e744c;
        case 0x2e7460u: goto label_2e7460;
        default: break;
    }

    ctx->pc = 0x2e7420u;

    // 0x2e7420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e742c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e742cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e7430: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e7430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7434: 0xc0b9a28  jal         func_2E68A0
    ctx->pc = 0x2E7434u;
    SET_GPR_U32(ctx, 31, 0x2E743Cu);
    ctx->pc = 0x2E68A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68A0u, 0x2E7434u, 0x2E743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E743Cu;
label_2e743c:
    // 0x2e743c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e743cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7440: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e7440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7444: 0xc0b9a20  jal         func_2E6880
    ctx->pc = 0x2E7444u;
    SET_GPR_U32(ctx, 31, 0x2E744Cu);
    ctx->pc = 0x2E6880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6880u, 0x2E7444u, 0x2E744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E744Cu;
label_2e744c:
    // 0x2e744c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e744cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7454: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e7454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7458: 0xc0b9d20  jal         func_2E7480
    ctx->pc = 0x2E7458u;
    SET_GPR_U32(ctx, 31, 0x2E7460u);
    ctx->pc = 0x2E7480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7480u, 0x2E7458u, 0x2E7460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7460u;
label_2e7460:
    // 0x2e7460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7468: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e7468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e746c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E746Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E746Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7474u;
    // 0x2e7474: 0x0  nop
    ctx->pc = 0x2e7474u;
    // NOP
    // 0x2e7478: 0x0  nop
    ctx->pc = 0x2e7478u;
    // NOP
    // 0x2e747c: 0x0  nop
    ctx->pc = 0x2e747cu;
    // NOP
    ctx->pc = 0x2e7480u;
}
