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

// Function: sub_0022C800
// Address: 0x22c800 - 0x22c850
void sub_0022C800_0x22c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C800_0x22c800");
#endif

    switch (ctx->pc) {
        case 0x22c824u: goto label_22c824;
        default: break;
    }

    ctx->pc = 0x22c800u;

    // 0x22c800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c80c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c810: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x22c810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x22c814: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c818: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22c818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c81c: 0xc08b214  jal         func_22C850
    ctx->pc = 0x22C81Cu;
    SET_GPR_U32(ctx, 31, 0x22C824u);
    ctx->pc = 0x22C850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C850u, 0x22C81Cu, 0x22C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C824u;
label_22c824:
    // 0x22c824: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c82c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22c830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c838: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22c838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c83c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C844u;
    // 0x22c844: 0x0  nop
    ctx->pc = 0x22c844u;
    // NOP
    // 0x22c848: 0x0  nop
    ctx->pc = 0x22c848u;
    // NOP
    // 0x22c84c: 0x0  nop
    ctx->pc = 0x22c84cu;
    // NOP
    ctx->pc = 0x22c850u;
}
