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

// Function: sub_0022A4B0
// Address: 0x22a4b0 - 0x22a4f0
void sub_0022A4B0_0x22a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A4B0_0x22a4b0");
#endif

    switch (ctx->pc) {
        case 0x22a4d8u: goto label_22a4d8;
        default: break;
    }

    ctx->pc = 0x22a4b0u;

    // 0x22a4b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a4b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22a4bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22a4c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x22a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x22a4c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a4c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a4cc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x22a4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a4d0: 0xc08a93c  jal         func_22A4F0
    ctx->pc = 0x22A4D0u;
    SET_GPR_U32(ctx, 31, 0x22A4D8u);
    ctx->pc = 0x22A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A4F0u, 0x22A4D0u, 0x22A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4D8u;
label_22a4d8:
    // 0x22a4d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a4e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22a4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A4ECu;
    // 0x22a4ec: 0x0  nop
    ctx->pc = 0x22a4ecu;
    // NOP
    ctx->pc = 0x22a4f0u;
}
