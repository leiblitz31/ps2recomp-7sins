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

// Function: sub_00153AA0
// Address: 0x153aa0 - 0x153b20
void sub_00153AA0_0x153aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153AA0_0x153aa0");
#endif

    switch (ctx->pc) {
        case 0x153ac0u: goto label_153ac0;
        case 0x153ad0u: goto label_153ad0;
        case 0x153ae8u: goto label_153ae8;
        case 0x153b00u: goto label_153b00;
        default: break;
    }

    ctx->pc = 0x153aa0u;

    // 0x153aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153aac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x153aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x153ab0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x153ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153ab4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x153ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153ab8: 0xc054ec8  jal         func_153B20
    ctx->pc = 0x153AB8u;
    SET_GPR_U32(ctx, 31, 0x153AC0u);
    ctx->pc = 0x153B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153B20u, 0x153AB8u, 0x153AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153AC0u;
label_153ac0:
    // 0x153ac0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x153ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x153ac4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153ac8: 0xc054e6c  jal         func_1539B0
    ctx->pc = 0x153AC8u;
    SET_GPR_U32(ctx, 31, 0x153AD0u);
    ctx->pc = 0x1539B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539B0u, 0x153AC8u, 0x153AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153AD0u;
label_153ad0:
    // 0x153ad0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x153ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x153ad4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x153ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153ad8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x153ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153adc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153ae0: 0xc054e64  jal         func_153990
    ctx->pc = 0x153AE0u;
    SET_GPR_U32(ctx, 31, 0x153AE8u);
    ctx->pc = 0x153990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153990u, 0x153AE0u, 0x153AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153AE8u;
label_153ae8:
    // 0x153ae8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x153ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x153aec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x153aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153af0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x153af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153af4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153af8: 0xc054e5c  jal         func_153970
    ctx->pc = 0x153AF8u;
    SET_GPR_U32(ctx, 31, 0x153B00u);
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x153AF8u, 0x153B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B00u;
label_153b00:
    // 0x153b00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x153b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x153b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153b0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153b10: 0x3e00008  jr          $ra
    ctx->pc = 0x153B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153B18u;
    // 0x153b18: 0x0  nop
    ctx->pc = 0x153b18u;
    // NOP
    // 0x153b1c: 0x0  nop
    ctx->pc = 0x153b1cu;
    // NOP
    ctx->pc = 0x153b20u;
}
