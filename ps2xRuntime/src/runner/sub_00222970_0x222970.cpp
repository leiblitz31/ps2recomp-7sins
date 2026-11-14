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

// Function: sub_00222970
// Address: 0x222970 - 0x2229b0
void sub_00222970_0x222970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222970_0x222970");
#endif

    switch (ctx->pc) {
        case 0x222990u: goto label_222990;
        default: break;
    }

    ctx->pc = 0x222970u;

    // 0x222970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222978: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22297c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22297cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x222980: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222984: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x222984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222988: 0xc088a6c  jal         func_2229B0
    ctx->pc = 0x222988u;
    SET_GPR_U32(ctx, 31, 0x222990u);
    ctx->pc = 0x2229B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2229B0u, 0x222988u, 0x222990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222990u;
label_222990:
    // 0x222990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222998: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x222998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22299c: 0x3e00008  jr          $ra
    ctx->pc = 0x22299Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22299Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2229A4u;
    // 0x2229a4: 0x0  nop
    ctx->pc = 0x2229a4u;
    // NOP
    // 0x2229a8: 0x0  nop
    ctx->pc = 0x2229a8u;
    // NOP
    // 0x2229ac: 0x0  nop
    ctx->pc = 0x2229acu;
    // NOP
    ctx->pc = 0x2229b0u;
}
