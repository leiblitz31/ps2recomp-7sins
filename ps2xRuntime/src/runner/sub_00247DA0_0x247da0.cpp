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

// Function: sub_00247DA0
// Address: 0x247da0 - 0x247df0
void sub_00247DA0_0x247da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247DA0_0x247da0");
#endif

    switch (ctx->pc) {
        case 0x247dc4u: goto label_247dc4;
        default: break;
    }

    ctx->pc = 0x247da0u;

    // 0x247da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x247da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x247da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247da8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x247dac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x247dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x247db0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x247db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x247db4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247db8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x247db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247dbc: 0xc091f7c  jal         func_247DF0
    ctx->pc = 0x247DBCu;
    SET_GPR_U32(ctx, 31, 0x247DC4u);
    ctx->pc = 0x247DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247DF0u, 0x247DBCu, 0x247DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DC4u;
label_247dc4:
    // 0x247dc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x247dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247dc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247dcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x247dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x247dd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247dd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x247dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x247ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x247DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247DE4u;
    // 0x247de4: 0x0  nop
    ctx->pc = 0x247de4u;
    // NOP
    // 0x247de8: 0x0  nop
    ctx->pc = 0x247de8u;
    // NOP
    // 0x247dec: 0x0  nop
    ctx->pc = 0x247decu;
    // NOP
    ctx->pc = 0x247df0u;
}
