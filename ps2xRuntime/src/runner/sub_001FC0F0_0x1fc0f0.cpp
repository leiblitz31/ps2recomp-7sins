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

// Function: sub_001FC0F0
// Address: 0x1fc0f0 - 0x1fc140
void sub_001FC0F0_0x1fc0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC0F0_0x1fc0f0");
#endif

    switch (ctx->pc) {
        case 0x1fc114u: goto label_1fc114;
        default: break;
    }

    ctx->pc = 0x1fc0f0u;

    // 0x1fc0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fc0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fc0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc0f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fc0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1fc0fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1fc0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1fc100: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1fc100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1fc104: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fc104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc108: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1fc108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc10c: 0xc07f050  jal         func_1FC140
    ctx->pc = 0x1FC10Cu;
    SET_GPR_U32(ctx, 31, 0x1FC114u);
    ctx->pc = 0x1FC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC140u, 0x1FC10Cu, 0x1FC114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC114u;
label_1fc114:
    // 0x1fc114: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fc114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc118: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc11c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fc11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1fc120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc128: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1fc128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fc12c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC134u;
    // 0x1fc134: 0x0  nop
    ctx->pc = 0x1fc134u;
    // NOP
    // 0x1fc138: 0x0  nop
    ctx->pc = 0x1fc138u;
    // NOP
    // 0x1fc13c: 0x0  nop
    ctx->pc = 0x1fc13cu;
    // NOP
    ctx->pc = 0x1fc140u;
}
