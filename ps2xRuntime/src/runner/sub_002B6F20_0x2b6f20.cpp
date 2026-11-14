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

// Function: sub_002B6F20
// Address: 0x2b6f20 - 0x2b6f80
void sub_002B6F20_0x2b6f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6F20_0x2b6f20");
#endif

    switch (ctx->pc) {
        case 0x2b6f3cu: goto label_2b6f3c;
        case 0x2b6f4cu: goto label_2b6f4c;
        case 0x2b6f60u: goto label_2b6f60;
        default: break;
    }

    ctx->pc = 0x2b6f20u;

    // 0x2b6f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6f2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b6f30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6f34: 0xc0adc14  jal         func_2B7050
    ctx->pc = 0x2B6F34u;
    SET_GPR_U32(ctx, 31, 0x2B6F3Cu);
    ctx->pc = 0x2B7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7050u, 0x2B6F34u, 0x2B6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F3Cu;
label_2b6f3c:
    // 0x2b6f3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b6f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6f44: 0xc0adc0c  jal         func_2B7030
    ctx->pc = 0x2B6F44u;
    SET_GPR_U32(ctx, 31, 0x2B6F4Cu);
    ctx->pc = 0x2B7030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7030u, 0x2B6F44u, 0x2B6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F4Cu;
label_2b6f4c:
    // 0x2b6f4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b6f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b6f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b6f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f58: 0xc0adbe0  jal         func_2B6F80
    ctx->pc = 0x2B6F58u;
    SET_GPR_U32(ctx, 31, 0x2B6F60u);
    ctx->pc = 0x2B6F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6F80u, 0x2B6F58u, 0x2B6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F60u;
label_2b6f60:
    // 0x2b6f60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6f68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6F74u;
    // 0x2b6f74: 0x0  nop
    ctx->pc = 0x2b6f74u;
    // NOP
    // 0x2b6f78: 0x0  nop
    ctx->pc = 0x2b6f78u;
    // NOP
    // 0x2b6f7c: 0x0  nop
    ctx->pc = 0x2b6f7cu;
    // NOP
    ctx->pc = 0x2b6f80u;
}
