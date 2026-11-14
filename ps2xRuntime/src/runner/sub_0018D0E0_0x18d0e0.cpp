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

// Function: sub_0018D0E0
// Address: 0x18d0e0 - 0x18d140
void sub_0018D0E0_0x18d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D0E0_0x18d0e0");
#endif

    switch (ctx->pc) {
        case 0x18d0fcu: goto label_18d0fc;
        case 0x18d10cu: goto label_18d10c;
        case 0x18d120u: goto label_18d120;
        default: break;
    }

    ctx->pc = 0x18d0e0u;

    // 0x18d0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d0ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18d0f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d0f4: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x18D0F4u;
    SET_GPR_U32(ctx, 31, 0x18D0FCu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x18D0F4u, 0x18D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0FCu;
label_18d0fc:
    // 0x18d0fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d100: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18d100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d104: 0xc0634c0  jal         func_18D300
    ctx->pc = 0x18D104u;
    SET_GPR_U32(ctx, 31, 0x18D10Cu);
    ctx->pc = 0x18D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D300u, 0x18D104u, 0x18D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D10Cu;
label_18d10c:
    // 0x18d10c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18d110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d114: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18d114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d118: 0xc063450  jal         func_18D140
    ctx->pc = 0x18D118u;
    SET_GPR_U32(ctx, 31, 0x18D120u);
    ctx->pc = 0x18D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D140u, 0x18D118u, 0x18D120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D120u;
label_18d120:
    // 0x18d120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d128: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18d128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18d12c: 0x3e00008  jr          $ra
    ctx->pc = 0x18D12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D134u;
    // 0x18d134: 0x0  nop
    ctx->pc = 0x18d134u;
    // NOP
    // 0x18d138: 0x0  nop
    ctx->pc = 0x18d138u;
    // NOP
    // 0x18d13c: 0x0  nop
    ctx->pc = 0x18d13cu;
    // NOP
    ctx->pc = 0x18d140u;
}
