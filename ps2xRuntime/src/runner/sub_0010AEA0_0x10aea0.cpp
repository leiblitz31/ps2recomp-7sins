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

// Function: sub_0010AEA0
// Address: 0x10aea0 - 0x10aee0
void sub_0010AEA0_0x10aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AEA0_0x10aea0");
#endif

    switch (ctx->pc) {
        case 0x10aec0u: goto label_10aec0;
        default: break;
    }

    ctx->pc = 0x10aea0u;

    // 0x10aea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10aea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10aea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10aea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10aeac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10aeb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aeb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10aeb8: 0xc042bb8  jal         func_10AEE0
    ctx->pc = 0x10AEB8u;
    SET_GPR_U32(ctx, 31, 0x10AEC0u);
    ctx->pc = 0x10AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AEE0u, 0x10AEB8u, 0x10AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEC0u;
label_10aec0:
    // 0x10aec0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10aec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aec8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10aec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10aecc: 0x3e00008  jr          $ra
    ctx->pc = 0x10AECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AED4u;
    // 0x10aed4: 0x0  nop
    ctx->pc = 0x10aed4u;
    // NOP
    // 0x10aed8: 0x0  nop
    ctx->pc = 0x10aed8u;
    // NOP
    // 0x10aedc: 0x0  nop
    ctx->pc = 0x10aedcu;
    // NOP
    ctx->pc = 0x10aee0u;
}
