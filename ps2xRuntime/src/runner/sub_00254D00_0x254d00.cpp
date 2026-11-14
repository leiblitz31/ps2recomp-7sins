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

// Function: sub_00254D00
// Address: 0x254d00 - 0x254d60
void sub_00254D00_0x254d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254D00_0x254d00");
#endif

    switch (ctx->pc) {
        case 0x254d1cu: goto label_254d1c;
        case 0x254d2cu: goto label_254d2c;
        case 0x254d40u: goto label_254d40;
        default: break;
    }

    ctx->pc = 0x254d00u;

    // 0x254d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254d0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x254d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x254d10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254d14: 0xc09538c  jal         func_254E30
    ctx->pc = 0x254D14u;
    SET_GPR_U32(ctx, 31, 0x254D1Cu);
    ctx->pc = 0x254E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E30u, 0x254D14u, 0x254D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D1Cu;
label_254d1c:
    // 0x254d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254d24: 0xc095384  jal         func_254E10
    ctx->pc = 0x254D24u;
    SET_GPR_U32(ctx, 31, 0x254D2Cu);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x254D24u, 0x254D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D2Cu;
label_254d2c:
    // 0x254d2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x254d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d38: 0xc095358  jal         func_254D60
    ctx->pc = 0x254D38u;
    SET_GPR_U32(ctx, 31, 0x254D40u);
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x254D38u, 0x254D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D40u;
label_254d40:
    // 0x254d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254d48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x254D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254D54u;
    // 0x254d54: 0x0  nop
    ctx->pc = 0x254d54u;
    // NOP
    // 0x254d58: 0x0  nop
    ctx->pc = 0x254d58u;
    // NOP
    // 0x254d5c: 0x0  nop
    ctx->pc = 0x254d5cu;
    // NOP
    ctx->pc = 0x254d60u;
}
