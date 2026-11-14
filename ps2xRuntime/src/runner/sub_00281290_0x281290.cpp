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

// Function: sub_00281290
// Address: 0x281290 - 0x2812d0
void sub_00281290_0x281290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281290_0x281290");
#endif

    switch (ctx->pc) {
        case 0x2812acu: goto label_2812ac;
        default: break;
    }

    ctx->pc = 0x281290u;

    // 0x281290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28129c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2812a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2812a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2812a4: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x2812A4u;
    SET_GPR_U32(ctx, 31, 0x2812ACu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x2812A4u, 0x2812ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812ACu;
label_2812ac:
    // 0x2812ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2812acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2812b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2812b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2812b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2812b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2812b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2812b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2812bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2812bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2812c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2812C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2812C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2812C8u;
    // 0x2812c8: 0x0  nop
    ctx->pc = 0x2812c8u;
    // NOP
    // 0x2812cc: 0x0  nop
    ctx->pc = 0x2812ccu;
    // NOP
    ctx->pc = 0x2812d0u;
}
