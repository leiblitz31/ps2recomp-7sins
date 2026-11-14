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

// Function: sub_001E0380
// Address: 0x1e0380 - 0x1e03d0
void sub_001E0380_0x1e0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0380_0x1e0380");
#endif

    switch (ctx->pc) {
        case 0x1e03a4u: goto label_1e03a4;
        default: break;
    }

    ctx->pc = 0x1e0380u;

    // 0x1e0380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e0384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0388: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e0388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e038c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e038cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e0390: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e0390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e0394: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e0394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0398: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e0398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e039c: 0xc0780f4  jal         func_1E03D0
    ctx->pc = 0x1E039Cu;
    SET_GPR_U32(ctx, 31, 0x1E03A4u);
    ctx->pc = 0x1E03D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E03D0u, 0x1E039Cu, 0x1E03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03A4u;
label_1e03a4:
    // 0x1e03a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e03a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e03a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e03ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e03acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e03b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e03b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e03b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e03b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e03b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e03bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E03BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E03BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E03C4u;
    // 0x1e03c4: 0x0  nop
    ctx->pc = 0x1e03c4u;
    // NOP
    // 0x1e03c8: 0x0  nop
    ctx->pc = 0x1e03c8u;
    // NOP
    // 0x1e03cc: 0x0  nop
    ctx->pc = 0x1e03ccu;
    // NOP
    ctx->pc = 0x1e03d0u;
}
