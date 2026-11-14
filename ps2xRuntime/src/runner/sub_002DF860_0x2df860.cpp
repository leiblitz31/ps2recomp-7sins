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

// Function: sub_002DF860
// Address: 0x2df860 - 0x2df8b0
void sub_002DF860_0x2df860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF860_0x2df860");
#endif

    switch (ctx->pc) {
        case 0x2df884u: goto label_2df884;
        default: break;
    }

    ctx->pc = 0x2df860u;

    // 0x2df860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df86c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2df86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2df870: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2df870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2df874: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df878: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2df878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df87c: 0xc0b7e2c  jal         func_2DF8B0
    ctx->pc = 0x2DF87Cu;
    SET_GPR_U32(ctx, 31, 0x2DF884u);
    ctx->pc = 0x2DF8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF8B0u, 0x2DF87Cu, 0x2DF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF884u;
label_2df884:
    // 0x2df884: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2df884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df888: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df88c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2df88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2df890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df898: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2df898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df89c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF8A4u;
    // 0x2df8a4: 0x0  nop
    ctx->pc = 0x2df8a4u;
    // NOP
    // 0x2df8a8: 0x0  nop
    ctx->pc = 0x2df8a8u;
    // NOP
    // 0x2df8ac: 0x0  nop
    ctx->pc = 0x2df8acu;
    // NOP
    ctx->pc = 0x2df8b0u;
}
