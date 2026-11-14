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

// Function: sub_0017BC40
// Address: 0x17bc40 - 0x17bc80
void sub_0017BC40_0x17bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BC40_0x17bc40");
#endif

    switch (ctx->pc) {
        case 0x17bc58u: goto label_17bc58;
        case 0x17bc68u: goto label_17bc68;
        default: break;
    }

    ctx->pc = 0x17bc40u;

    // 0x17bc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bc48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17bc4c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x17bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x17bc50: 0xc05ef60  jal         func_17BD80
    ctx->pc = 0x17BC50u;
    SET_GPR_U32(ctx, 31, 0x17BC58u);
    ctx->pc = 0x17BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD80u, 0x17BC50u, 0x17BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC58u;
label_17bc58:
    // 0x17bc58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bc5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17bc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc60: 0xc05ef20  jal         func_17BC80
    ctx->pc = 0x17BC60u;
    SET_GPR_U32(ctx, 31, 0x17BC68u);
    ctx->pc = 0x17BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC80u, 0x17BC60u, 0x17BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC68u;
label_17bc68:
    // 0x17bc68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bc6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bc70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bc74: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BC7Cu;
    // 0x17bc7c: 0x0  nop
    ctx->pc = 0x17bc7cu;
    // NOP
    ctx->pc = 0x17bc80u;
}
