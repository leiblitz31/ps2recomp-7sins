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

// Function: sub_0025BAB0
// Address: 0x25bab0 - 0x25bb00
void sub_0025BAB0_0x25bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BAB0_0x25bab0");
#endif

    switch (ctx->pc) {
        case 0x25badcu: goto label_25badc;
        default: break;
    }

    ctx->pc = 0x25bab0u;

    // 0x25bab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25bab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25bab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25babc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25babcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25bac0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25bac4: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x25bac4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25bac8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bacc: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25bad0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x25bad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25bad4: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25BAD4u;
    SET_GPR_U32(ctx, 31, 0x25BADCu);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25BAD4u, 0x25BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BADCu;
label_25badc:
    // 0x25badc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25badcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25bae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25bae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25bae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bae8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25baec: 0x3e00008  jr          $ra
    ctx->pc = 0x25BAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BAF4u;
    // 0x25baf4: 0x0  nop
    ctx->pc = 0x25baf4u;
    // NOP
    // 0x25baf8: 0x0  nop
    ctx->pc = 0x25baf8u;
    // NOP
    // 0x25bafc: 0x0  nop
    ctx->pc = 0x25bafcu;
    // NOP
    ctx->pc = 0x25bb00u;
}
