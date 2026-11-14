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

// Function: sub_00464B50
// Address: 0x464b50 - 0x464b90
void sub_00464B50_0x464b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464B50_0x464b50");
#endif

    switch (ctx->pc) {
        case 0x464b78u: goto label_464b78;
        default: break;
    }

    ctx->pc = 0x464b50u;

    // 0x464b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x464b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x464b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x464b5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x464b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x464b60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x464b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x464b64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x464b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464b68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x464b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464b6c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x464b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464b70: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x464B70u;
    SET_GPR_U32(ctx, 31, 0x464B78u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x464B70u, 0x464B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464B78u;
label_464b78:
    // 0x464b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464b7c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x464b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x464b80: 0x3e00008  jr          $ra
    ctx->pc = 0x464B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464B88u;
    // 0x464b88: 0x0  nop
    ctx->pc = 0x464b88u;
    // NOP
    // 0x464b8c: 0x0  nop
    ctx->pc = 0x464b8cu;
    // NOP
    ctx->pc = 0x464b90u;
}
