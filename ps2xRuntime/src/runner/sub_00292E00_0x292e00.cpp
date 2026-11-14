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

// Function: sub_00292E00
// Address: 0x292e00 - 0x292e60
void sub_00292E00_0x292e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292E00_0x292e00");
#endif

    switch (ctx->pc) {
        case 0x292e1cu: goto label_292e1c;
        case 0x292e2cu: goto label_292e2c;
        case 0x292e40u: goto label_292e40;
        default: break;
    }

    ctx->pc = 0x292e00u;

    // 0x292e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292e0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x292e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x292e10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292e14: 0xc0a4ab4  jal         func_292AD0
    ctx->pc = 0x292E14u;
    SET_GPR_U32(ctx, 31, 0x292E1Cu);
    ctx->pc = 0x292AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292AD0u, 0x292E14u, 0x292E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E1Cu;
label_292e1c:
    // 0x292e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292e24: 0xc0a4b78  jal         func_292DE0
    ctx->pc = 0x292E24u;
    SET_GPR_U32(ctx, 31, 0x292E2Cu);
    ctx->pc = 0x292DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292DE0u, 0x292E24u, 0x292E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E2Cu;
label_292e2c:
    // 0x292e2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292e30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x292e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e38: 0xc0a4b14  jal         func_292C50
    ctx->pc = 0x292E38u;
    SET_GPR_U32(ctx, 31, 0x292E40u);
    ctx->pc = 0x292C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292C50u, 0x292E38u, 0x292E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E40u;
label_292e40:
    // 0x292e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292e48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x292e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x292e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x292E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292E54u;
    // 0x292e54: 0x0  nop
    ctx->pc = 0x292e54u;
    // NOP
    // 0x292e58: 0x0  nop
    ctx->pc = 0x292e58u;
    // NOP
    // 0x292e5c: 0x0  nop
    ctx->pc = 0x292e5cu;
    // NOP
    ctx->pc = 0x292e60u;
}
