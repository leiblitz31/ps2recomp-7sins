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

// Function: sub_0022CEA0
// Address: 0x22cea0 - 0x22cf00
void sub_0022CEA0_0x22cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CEA0_0x22cea0");
#endif

    switch (ctx->pc) {
        case 0x22cebcu: goto label_22cebc;
        case 0x22ceccu: goto label_22cecc;
        case 0x22cee0u: goto label_22cee0;
        default: break;
    }

    ctx->pc = 0x22cea0u;

    // 0x22cea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22cea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22cea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22ceac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22ceb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ceb4: 0xc08b43c  jal         func_22D0F0
    ctx->pc = 0x22CEB4u;
    SET_GPR_U32(ctx, 31, 0x22CEBCu);
    ctx->pc = 0x22D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D0F0u, 0x22CEB4u, 0x22CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEBCu;
label_22cebc:
    // 0x22cebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22cebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cec0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cec4: 0xc08b424  jal         func_22D090
    ctx->pc = 0x22CEC4u;
    SET_GPR_U32(ctx, 31, 0x22CECCu);
    ctx->pc = 0x22D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D090u, 0x22CEC4u, 0x22CECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CECCu;
label_22cecc:
    // 0x22cecc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22ceccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ced0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ced0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ced4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22ced4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ced8: 0xc08b3c0  jal         func_22CF00
    ctx->pc = 0x22CED8u;
    SET_GPR_U32(ctx, 31, 0x22CEE0u);
    ctx->pc = 0x22CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CF00u, 0x22CED8u, 0x22CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEE0u;
label_22cee0:
    // 0x22cee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22cee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22cee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cee8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22cee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22ceec: 0x3e00008  jr          $ra
    ctx->pc = 0x22CEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CEF4u;
    // 0x22cef4: 0x0  nop
    ctx->pc = 0x22cef4u;
    // NOP
    // 0x22cef8: 0x0  nop
    ctx->pc = 0x22cef8u;
    // NOP
    // 0x22cefc: 0x0  nop
    ctx->pc = 0x22cefcu;
    // NOP
    ctx->pc = 0x22cf00u;
}
