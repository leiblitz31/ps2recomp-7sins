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

// Function: sub_002CFAA0
// Address: 0x2cfaa0 - 0x2cfaf0
void sub_002CFAA0_0x2cfaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFAA0_0x2cfaa0");
#endif

    switch (ctx->pc) {
        case 0x2cfac4u: goto label_2cfac4;
        default: break;
    }

    ctx->pc = 0x2cfaa0u;

    // 0x2cfaa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cfaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cfaa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfaa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cfaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cfaac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cfaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cfab0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2cfab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2cfab4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cfab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfab8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cfab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfabc: 0xc0b3ebc  jal         func_2CFAF0
    ctx->pc = 0x2CFABCu;
    SET_GPR_U32(ctx, 31, 0x2CFAC4u);
    ctx->pc = 0x2CFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFAF0u, 0x2CFABCu, 0x2CFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFAC4u;
label_2cfac4:
    // 0x2cfac4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2cfac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfacc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cfaccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cfad0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfad8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cfad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cfadc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFAE4u;
    // 0x2cfae4: 0x0  nop
    ctx->pc = 0x2cfae4u;
    // NOP
    // 0x2cfae8: 0x0  nop
    ctx->pc = 0x2cfae8u;
    // NOP
    // 0x2cfaec: 0x0  nop
    ctx->pc = 0x2cfaecu;
    // NOP
    ctx->pc = 0x2cfaf0u;
}
