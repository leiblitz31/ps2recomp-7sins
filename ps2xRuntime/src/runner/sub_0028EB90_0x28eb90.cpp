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

// Function: sub_0028EB90
// Address: 0x28eb90 - 0x28ebd0
void sub_0028EB90_0x28eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EB90_0x28eb90");
#endif

    switch (ctx->pc) {
        case 0x28ebacu: goto label_28ebac;
        case 0x28ebbcu: goto label_28ebbc;
        default: break;
    }

    ctx->pc = 0x28eb90u;

    // 0x28eb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28eb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28eb98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28eb9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28eba0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28eba4: 0xc0542f8  jal         func_150BE0
    ctx->pc = 0x28EBA4u;
    SET_GPR_U32(ctx, 31, 0x28EBACu);
    ctx->pc = 0x150BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BE0u, 0x28EBA4u, 0x28EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBACu;
label_28ebac:
    // 0x28ebac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ebb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ebb4: 0xc0a3af4  jal         func_28EBD0
    ctx->pc = 0x28EBB4u;
    SET_GPR_U32(ctx, 31, 0x28EBBCu);
    ctx->pc = 0x28EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBD0u, 0x28EBB4u, 0x28EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBBCu;
label_28ebbc:
    // 0x28ebbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ebbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ebc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28ebc4: 0x3e00008  jr          $ra
    ctx->pc = 0x28EBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EBCCu;
    // 0x28ebcc: 0x0  nop
    ctx->pc = 0x28ebccu;
    // NOP
    ctx->pc = 0x28ebd0u;
}
