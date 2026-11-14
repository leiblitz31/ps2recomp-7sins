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

// Function: sub_002BED70
// Address: 0x2bed70 - 0x2bedc0
void sub_002BED70_0x2bed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BED70_0x2bed70");
#endif

    switch (ctx->pc) {
        case 0x2bed94u: goto label_2bed94;
        default: break;
    }

    ctx->pc = 0x2bed70u;

    // 0x2bed70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bed74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bed78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bed78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bed7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bed80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2bed80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2bed84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bed88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bed88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bed8c: 0xc0afb70  jal         func_2BEDC0
    ctx->pc = 0x2BED8Cu;
    SET_GPR_U32(ctx, 31, 0x2BED94u);
    ctx->pc = 0x2BEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDC0u, 0x2BED8Cu, 0x2BED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED94u;
label_2bed94:
    // 0x2bed94: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2bed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bed98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bed9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2bed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2beda0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2beda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2beda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beda8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2beda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bedac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDB4u;
    // 0x2bedb4: 0x0  nop
    ctx->pc = 0x2bedb4u;
    // NOP
    // 0x2bedb8: 0x0  nop
    ctx->pc = 0x2bedb8u;
    // NOP
    // 0x2bedbc: 0x0  nop
    ctx->pc = 0x2bedbcu;
    // NOP
    ctx->pc = 0x2bedc0u;
}
