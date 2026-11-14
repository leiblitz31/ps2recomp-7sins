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

// Function: sub_0028EFC0
// Address: 0x28efc0 - 0x28f000
void sub_0028EFC0_0x28efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EFC0_0x28efc0");
#endif

    switch (ctx->pc) {
        case 0x28efd8u: goto label_28efd8;
        case 0x28efe8u: goto label_28efe8;
        default: break;
    }

    ctx->pc = 0x28efc0u;

    // 0x28efc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28efc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28efc8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28efcc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28efccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28efd0: 0xc0a3c00  jal         func_28F000
    ctx->pc = 0x28EFD0u;
    SET_GPR_U32(ctx, 31, 0x28EFD8u);
    ctx->pc = 0x28F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F000u, 0x28EFD0u, 0x28EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFD8u;
label_28efd8:
    // 0x28efd8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x28efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28efdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28efdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28efe0: 0xc0a3c88  jal         func_28F220
    ctx->pc = 0x28EFE0u;
    SET_GPR_U32(ctx, 31, 0x28EFE8u);
    ctx->pc = 0x28F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F220u, 0x28EFE0u, 0x28EFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFE8u;
label_28efe8:
    // 0x28efe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28efe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28efec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28efecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28eff0: 0x3e00008  jr          $ra
    ctx->pc = 0x28EFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EFF8u;
    // 0x28eff8: 0x0  nop
    ctx->pc = 0x28eff8u;
    // NOP
    // 0x28effc: 0x0  nop
    ctx->pc = 0x28effcu;
    // NOP
    ctx->pc = 0x28f000u;
}
