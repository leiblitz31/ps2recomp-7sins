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

// Function: sub_00279E10
// Address: 0x279e10 - 0x279e70
void sub_00279E10_0x279e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279E10_0x279e10");
#endif

    switch (ctx->pc) {
        case 0x279e2cu: goto label_279e2c;
        case 0x279e3cu: goto label_279e3c;
        case 0x279e50u: goto label_279e50;
        default: break;
    }

    ctx->pc = 0x279e10u;

    // 0x279e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279e1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x279e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x279e20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279e24: 0xc09e7d0  jal         func_279F40
    ctx->pc = 0x279E24u;
    SET_GPR_U32(ctx, 31, 0x279E2Cu);
    ctx->pc = 0x279F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F40u, 0x279E24u, 0x279E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E2Cu;
label_279e2c:
    // 0x279e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x279e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279e34: 0xc09e7c8  jal         func_279F20
    ctx->pc = 0x279E34u;
    SET_GPR_U32(ctx, 31, 0x279E3Cu);
    ctx->pc = 0x279F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F20u, 0x279E34u, 0x279E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E3Cu;
label_279e3c:
    // 0x279e3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279e40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x279e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e48: 0xc09e79c  jal         func_279E70
    ctx->pc = 0x279E48u;
    SET_GPR_U32(ctx, 31, 0x279E50u);
    ctx->pc = 0x279E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E70u, 0x279E48u, 0x279E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E50u;
label_279e50:
    // 0x279e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279e58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x279e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x279e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x279E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279E64u;
    // 0x279e64: 0x0  nop
    ctx->pc = 0x279e64u;
    // NOP
    // 0x279e68: 0x0  nop
    ctx->pc = 0x279e68u;
    // NOP
    // 0x279e6c: 0x0  nop
    ctx->pc = 0x279e6cu;
    // NOP
    ctx->pc = 0x279e70u;
}
