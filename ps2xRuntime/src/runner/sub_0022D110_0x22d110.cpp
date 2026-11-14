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

// Function: sub_0022D110
// Address: 0x22d110 - 0x22d170
void sub_0022D110_0x22d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D110_0x22d110");
#endif

    switch (ctx->pc) {
        case 0x22d12cu: goto label_22d12c;
        case 0x22d13cu: goto label_22d13c;
        case 0x22d150u: goto label_22d150;
        default: break;
    }

    ctx->pc = 0x22d110u;

    // 0x22d110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22d114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22d118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d11c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22d120: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22d120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d124: 0xc08b490  jal         func_22D240
    ctx->pc = 0x22D124u;
    SET_GPR_U32(ctx, 31, 0x22D12Cu);
    ctx->pc = 0x22D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D240u, 0x22D124u, 0x22D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D12Cu;
label_22d12c:
    // 0x22d12c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22d12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d130: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22d130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d134: 0xc08b488  jal         func_22D220
    ctx->pc = 0x22D134u;
    SET_GPR_U32(ctx, 31, 0x22D13Cu);
    ctx->pc = 0x22D220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D220u, 0x22D134u, 0x22D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D13Cu;
label_22d13c:
    // 0x22d13c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d144: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22d144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d148: 0xc08b45c  jal         func_22D170
    ctx->pc = 0x22D148u;
    SET_GPR_U32(ctx, 31, 0x22D150u);
    ctx->pc = 0x22D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D170u, 0x22D148u, 0x22D150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D150u;
label_22d150:
    // 0x22d150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d158: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22d158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22d15c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D164u;
    // 0x22d164: 0x0  nop
    ctx->pc = 0x22d164u;
    // NOP
    // 0x22d168: 0x0  nop
    ctx->pc = 0x22d168u;
    // NOP
    // 0x22d16c: 0x0  nop
    ctx->pc = 0x22d16cu;
    // NOP
    ctx->pc = 0x22d170u;
}
