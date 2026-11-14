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

// Function: sub_002CF9D0
// Address: 0x2cf9d0 - 0x2cfa10
void sub_002CF9D0_0x2cf9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF9D0_0x2cf9d0");
#endif

    switch (ctx->pc) {
        case 0x2cf9e8u: goto label_2cf9e8;
        case 0x2cf9f8u: goto label_2cf9f8;
        default: break;
    }

    ctx->pc = 0x2cf9d0u;

    // 0x2cf9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf9d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf9d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cf9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cf9dc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2cf9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2cf9e0: 0xc0b3ec4  jal         func_2CFB10
    ctx->pc = 0x2CF9E0u;
    SET_GPR_U32(ctx, 31, 0x2CF9E8u);
    ctx->pc = 0x2CFB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFB10u, 0x2CF9E0u, 0x2CF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9E8u;
label_2cf9e8:
    // 0x2cf9e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cf9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf9ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf9f0: 0xc0b3e84  jal         func_2CFA10
    ctx->pc = 0x2CF9F0u;
    SET_GPR_U32(ctx, 31, 0x2CF9F8u);
    ctx->pc = 0x2CFA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFA10u, 0x2CF9F0u, 0x2CF9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9F8u;
label_2cf9f8:
    // 0x2cf9f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cf9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfa00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cfa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cfa04: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFA0Cu;
    // 0x2cfa0c: 0x0  nop
    ctx->pc = 0x2cfa0cu;
    // NOP
    ctx->pc = 0x2cfa10u;
}
