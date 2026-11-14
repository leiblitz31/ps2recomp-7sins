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

// Function: sub_002CB2D0
// Address: 0x2cb2d0 - 0x2cb320
void sub_002CB2D0_0x2cb2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB2D0_0x2cb2d0");
#endif

    switch (ctx->pc) {
        case 0x2cb2f4u: goto label_2cb2f4;
        default: break;
    }

    ctx->pc = 0x2cb2d0u;

    // 0x2cb2d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cb2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cb2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb2d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cb2dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cb2e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2cb2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2cb2e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb2e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cb2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb2ec: 0xc0b2cc8  jal         func_2CB320
    ctx->pc = 0x2CB2ECu;
    SET_GPR_U32(ctx, 31, 0x2CB2F4u);
    ctx->pc = 0x2CB320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB320u, 0x2CB2ECu, 0x2CB2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2F4u;
label_2cb2f4:
    // 0x2cb2f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2cb2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb2f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb2fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cb2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cb300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb308: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cb308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cb30c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB314u;
    // 0x2cb314: 0x0  nop
    ctx->pc = 0x2cb314u;
    // NOP
    // 0x2cb318: 0x0  nop
    ctx->pc = 0x2cb318u;
    // NOP
    // 0x2cb31c: 0x0  nop
    ctx->pc = 0x2cb31cu;
    // NOP
    ctx->pc = 0x2cb320u;
}
