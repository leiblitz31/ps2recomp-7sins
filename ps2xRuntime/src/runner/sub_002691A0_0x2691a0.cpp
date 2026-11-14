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

// Function: sub_002691A0
// Address: 0x2691a0 - 0x269200
void sub_002691A0_0x2691a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002691A0_0x2691a0");
#endif

    switch (ctx->pc) {
        case 0x2691bcu: goto label_2691bc;
        case 0x2691e4u: goto label_2691e4;
        default: break;
    }

    ctx->pc = 0x2691a0u;

    // 0x2691a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2691a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2691a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2691a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2691a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2691a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2691ac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2691acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2691b0: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2691b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2691b4: 0xc09ac00  jal         func_26B000
    ctx->pc = 0x2691B4u;
    SET_GPR_U32(ctx, 31, 0x2691BCu);
    ctx->pc = 0x26B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B000u, 0x2691B4u, 0x2691BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691BCu;
label_2691bc:
    // 0x2691bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2691bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2691c0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2691c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2691c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2691c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2691c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2691c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2691cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2691ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2691d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2691d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2691d4: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x2691d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2691d8: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x2691d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2691dc: 0xc09a480  jal         func_269200
    ctx->pc = 0x2691DCu;
    SET_GPR_U32(ctx, 31, 0x2691E4u);
    ctx->pc = 0x269200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269200u, 0x2691DCu, 0x2691E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691E4u;
label_2691e4:
    // 0x2691e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2691e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2691e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2691e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2691ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2691ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2691ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2691F4u;
    // 0x2691f4: 0x0  nop
    ctx->pc = 0x2691f4u;
    // NOP
    // 0x2691f8: 0x0  nop
    ctx->pc = 0x2691f8u;
    // NOP
    // 0x2691fc: 0x0  nop
    ctx->pc = 0x2691fcu;
    // NOP
    ctx->pc = 0x269200u;
}
