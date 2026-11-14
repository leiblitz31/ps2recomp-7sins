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

// Function: sub_00258E10
// Address: 0x258e10 - 0x258e70
void sub_00258E10_0x258e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258E10_0x258e10");
#endif

    switch (ctx->pc) {
        case 0x258e2cu: goto label_258e2c;
        case 0x258e3cu: goto label_258e3c;
        case 0x258e50u: goto label_258e50;
        default: break;
    }

    ctx->pc = 0x258e10u;

    // 0x258e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x258e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258e1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x258e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x258e20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258e24: 0xc0963d0  jal         func_258F40
    ctx->pc = 0x258E24u;
    SET_GPR_U32(ctx, 31, 0x258E2Cu);
    ctx->pc = 0x258F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F40u, 0x258E24u, 0x258E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E2Cu;
label_258e2c:
    // 0x258e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258e34: 0xc0963c8  jal         func_258F20
    ctx->pc = 0x258E34u;
    SET_GPR_U32(ctx, 31, 0x258E3Cu);
    ctx->pc = 0x258F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F20u, 0x258E34u, 0x258E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E3Cu;
label_258e3c:
    // 0x258e3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258e40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x258e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x258e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e48: 0xc09639c  jal         func_258E70
    ctx->pc = 0x258E48u;
    SET_GPR_U32(ctx, 31, 0x258E50u);
    ctx->pc = 0x258E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E70u, 0x258E48u, 0x258E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E50u;
label_258e50:
    // 0x258e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258e58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x258E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258E64u;
    // 0x258e64: 0x0  nop
    ctx->pc = 0x258e64u;
    // NOP
    // 0x258e68: 0x0  nop
    ctx->pc = 0x258e68u;
    // NOP
    // 0x258e6c: 0x0  nop
    ctx->pc = 0x258e6cu;
    // NOP
    ctx->pc = 0x258e70u;
}
