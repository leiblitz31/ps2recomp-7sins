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

// Function: sub_002811E0
// Address: 0x2811e0 - 0x281220
void sub_002811E0_0x2811e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002811E0_0x2811e0");
#endif

    switch (ctx->pc) {
        case 0x281200u: goto label_281200;
        default: break;
    }

    ctx->pc = 0x2811e0u;

    // 0x2811e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2811e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2811e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2811e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2811e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2811e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2811ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2811ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2811f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2811f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2811f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2811f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2811f8: 0xc0a0488  jal         func_281220
    ctx->pc = 0x2811F8u;
    SET_GPR_U32(ctx, 31, 0x281200u);
    ctx->pc = 0x281220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281220u, 0x2811F8u, 0x281200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281200u;
label_281200:
    // 0x281200: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x281200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281208: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x281208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28120c: 0x3e00008  jr          $ra
    ctx->pc = 0x28120Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28120Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281214u;
    // 0x281214: 0x0  nop
    ctx->pc = 0x281214u;
    // NOP
    // 0x281218: 0x0  nop
    ctx->pc = 0x281218u;
    // NOP
    // 0x28121c: 0x0  nop
    ctx->pc = 0x28121cu;
    // NOP
    ctx->pc = 0x281220u;
}
