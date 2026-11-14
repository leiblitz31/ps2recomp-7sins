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

// Function: sub_001A2240
// Address: 0x1a2240 - 0x1a2290
void sub_001A2240_0x1a2240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2240_0x1a2240");
#endif

    switch (ctx->pc) {
        case 0x1a2264u: goto label_1a2264;
        default: break;
    }

    ctx->pc = 0x1a2240u;

    // 0x1a2240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a2240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a2244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2248: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a2248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a224c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a224cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a2250: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1a2250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1a2254: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a2254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2258: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a2258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a225c: 0xc0688a4  jal         func_1A2290
    ctx->pc = 0x1A225Cu;
    SET_GPR_U32(ctx, 31, 0x1A2264u);
    ctx->pc = 0x1A2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2290u, 0x1A225Cu, 0x1A2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2264u;
label_1a2264:
    // 0x1a2264: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a2264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2268: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a226c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a226cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2270: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2278: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a2278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a227c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A227Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A227Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2284u;
    // 0x1a2284: 0x0  nop
    ctx->pc = 0x1a2284u;
    // NOP
    // 0x1a2288: 0x0  nop
    ctx->pc = 0x1a2288u;
    // NOP
    // 0x1a228c: 0x0  nop
    ctx->pc = 0x1a228cu;
    // NOP
    ctx->pc = 0x1a2290u;
}
