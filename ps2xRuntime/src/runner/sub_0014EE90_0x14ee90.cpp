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

// Function: sub_0014EE90
// Address: 0x14ee90 - 0x14eed0
void sub_0014EE90_0x14ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EE90_0x14ee90");
#endif

    switch (ctx->pc) {
        case 0x14eeb0u: goto label_14eeb0;
        default: break;
    }

    ctx->pc = 0x14ee90u;

    // 0x14ee90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ee94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ee98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14ee9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14eea0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eea4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14eea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eea8: 0xc053bb4  jal         func_14EED0
    ctx->pc = 0x14EEA8u;
    SET_GPR_U32(ctx, 31, 0x14EEB0u);
    ctx->pc = 0x14EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EED0u, 0x14EEA8u, 0x14EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EEB0u;
label_14eeb0:
    // 0x14eeb0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eeb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14eebc: 0x3e00008  jr          $ra
    ctx->pc = 0x14EEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EEC4u;
    // 0x14eec4: 0x0  nop
    ctx->pc = 0x14eec4u;
    // NOP
    // 0x14eec8: 0x0  nop
    ctx->pc = 0x14eec8u;
    // NOP
    // 0x14eecc: 0x0  nop
    ctx->pc = 0x14eeccu;
    // NOP
    ctx->pc = 0x14eed0u;
}
