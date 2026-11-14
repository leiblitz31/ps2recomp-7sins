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

// Function: sub_0048E380
// Address: 0x48e380 - 0x48e3c0
void sub_0048E380_0x48e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E380_0x48e380");
#endif

    switch (ctx->pc) {
        case 0x48e3a0u: goto label_48e3a0;
        default: break;
    }

    ctx->pc = 0x48e380u;

    // 0x48e380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48e384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e388: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48e388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48e38c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48e390: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e394: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48e394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e398: 0xc1238f0  jal         func_48E3C0
    ctx->pc = 0x48E398u;
    SET_GPR_U32(ctx, 31, 0x48E3A0u);
    ctx->pc = 0x48E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E3C0u, 0x48E398u, 0x48E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E3A0u;
label_48e3a0:
    // 0x48e3a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e3a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48e3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48e3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x48E3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E3B4u;
    // 0x48e3b4: 0x0  nop
    ctx->pc = 0x48e3b4u;
    // NOP
    // 0x48e3b8: 0x0  nop
    ctx->pc = 0x48e3b8u;
    // NOP
    // 0x48e3bc: 0x0  nop
    ctx->pc = 0x48e3bcu;
    // NOP
    ctx->pc = 0x48e3c0u;
}
