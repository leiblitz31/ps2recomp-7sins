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

// Function: sub_0025D880
// Address: 0x25d880 - 0x25d8b0
void sub_0025D880_0x25d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D880_0x25d880");
#endif

    switch (ctx->pc) {
        case 0x25d898u: goto label_25d898;
        default: break;
    }

    ctx->pc = 0x25d880u;

    // 0x25d880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25d888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25d88c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d890: 0xc09762c  jal         func_25D8B0
    ctx->pc = 0x25D890u;
    SET_GPR_U32(ctx, 31, 0x25D898u);
    ctx->pc = 0x25D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8B0u, 0x25D890u, 0x25D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D898u;
label_25d898:
    // 0x25d898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d89c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25d89cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25d8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D8A8u;
    // 0x25d8a8: 0x0  nop
    ctx->pc = 0x25d8a8u;
    // NOP
    // 0x25d8ac: 0x0  nop
    ctx->pc = 0x25d8acu;
    // NOP
    ctx->pc = 0x25d8b0u;
}
