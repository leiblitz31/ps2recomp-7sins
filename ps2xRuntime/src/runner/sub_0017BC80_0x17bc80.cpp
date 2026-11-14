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

// Function: sub_0017BC80
// Address: 0x17bc80 - 0x17bcc0
void sub_0017BC80_0x17bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BC80_0x17bc80");
#endif

    switch (ctx->pc) {
        case 0x17bca0u: goto label_17bca0;
        default: break;
    }

    ctx->pc = 0x17bc80u;

    // 0x17bc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bc84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bc88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17bc8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17bc90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bc94: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bc98: 0xc05ef30  jal         func_17BCC0
    ctx->pc = 0x17BC98u;
    SET_GPR_U32(ctx, 31, 0x17BCA0u);
    ctx->pc = 0x17BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BCC0u, 0x17BC98u, 0x17BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCA0u;
label_17bca0:
    // 0x17bca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bca8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17bca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bcac: 0x3e00008  jr          $ra
    ctx->pc = 0x17BCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BCB4u;
    // 0x17bcb4: 0x0  nop
    ctx->pc = 0x17bcb4u;
    // NOP
    // 0x17bcb8: 0x0  nop
    ctx->pc = 0x17bcb8u;
    // NOP
    // 0x17bcbc: 0x0  nop
    ctx->pc = 0x17bcbcu;
    // NOP
    ctx->pc = 0x17bcc0u;
}
