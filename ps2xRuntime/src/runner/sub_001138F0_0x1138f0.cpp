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

// Function: sub_001138F0
// Address: 0x1138f0 - 0x113930
void sub_001138F0_0x1138f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001138F0_0x1138f0");
#endif

    switch (ctx->pc) {
        case 0x113918u: goto label_113918;
        default: break;
    }

    ctx->pc = 0x1138f0u;

    // 0x1138f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1138f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1138f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1138f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1138f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1138f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1138fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1138fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x113900: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x113900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x113904: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113908: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x113908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11390c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x11390cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113910: 0xc044e4c  jal         func_113930
    ctx->pc = 0x113910u;
    SET_GPR_U32(ctx, 31, 0x113918u);
    ctx->pc = 0x113930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113930u, 0x113910u, 0x113918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113918u;
label_113918:
    // 0x113918: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x113918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11391c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113920: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x113920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x113924: 0x3e00008  jr          $ra
    ctx->pc = 0x113924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11392Cu;
    // 0x11392c: 0x0  nop
    ctx->pc = 0x11392cu;
    // NOP
    ctx->pc = 0x113930u;
}
