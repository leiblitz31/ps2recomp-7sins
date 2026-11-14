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

// Function: sub_00155BA0
// Address: 0x155ba0 - 0x155be0
void sub_00155BA0_0x155ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155BA0_0x155ba0");
#endif

    switch (ctx->pc) {
        case 0x155bb8u: goto label_155bb8;
        case 0x155bc8u: goto label_155bc8;
        default: break;
    }

    ctx->pc = 0x155ba0u;

    // 0x155ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x155ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155ba8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x155ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x155bac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x155bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155bb0: 0xc055670  jal         func_1559C0
    ctx->pc = 0x155BB0u;
    SET_GPR_U32(ctx, 31, 0x155BB8u);
    ctx->pc = 0x1559C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559C0u, 0x155BB0u, 0x155BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BB8u;
label_155bb8:
    // 0x155bb8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x155bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x155bbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bc0: 0xc0556f8  jal         func_155BE0
    ctx->pc = 0x155BC0u;
    SET_GPR_U32(ctx, 31, 0x155BC8u);
    ctx->pc = 0x155BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE0u, 0x155BC0u, 0x155BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BC8u;
label_155bc8:
    // 0x155bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155bcc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x155bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x155bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x155BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155BD8u;
    // 0x155bd8: 0x0  nop
    ctx->pc = 0x155bd8u;
    // NOP
    // 0x155bdc: 0x0  nop
    ctx->pc = 0x155bdcu;
    // NOP
    ctx->pc = 0x155be0u;
}
