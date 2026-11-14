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

// Function: sub_00490990
// Address: 0x490990 - 0x4909e0
void sub_00490990_0x490990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490990_0x490990");
#endif

    switch (ctx->pc) {
        case 0x4909b4u: goto label_4909b4;
        default: break;
    }

    ctx->pc = 0x490990u;

    // 0x490990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x490990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x490994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490998: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x49099c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x49099cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4909a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4909a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4909a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4909a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4909a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4909a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4909ac: 0xc124278  jal         func_4909E0
    ctx->pc = 0x4909ACu;
    SET_GPR_U32(ctx, 31, 0x4909B4u);
    ctx->pc = 0x4909E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4909E0u, 0x4909ACu, 0x4909B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4909B4u;
label_4909b4:
    // 0x4909b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4909b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4909b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4909b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4909bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4909bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4909c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4909c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4909c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4909c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4909c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4909c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4909cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4909CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4909CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4909D4u;
    // 0x4909d4: 0x0  nop
    ctx->pc = 0x4909d4u;
    // NOP
    // 0x4909d8: 0x0  nop
    ctx->pc = 0x4909d8u;
    // NOP
    // 0x4909dc: 0x0  nop
    ctx->pc = 0x4909dcu;
    // NOP
    ctx->pc = 0x4909e0u;
}
