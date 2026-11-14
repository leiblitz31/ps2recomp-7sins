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

// Function: sub_00265C80
// Address: 0x265c80 - 0x265cc0
void sub_00265C80_0x265c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265C80_0x265c80");
#endif

    switch (ctx->pc) {
        case 0x265c98u: goto label_265c98;
        case 0x265ca8u: goto label_265ca8;
        default: break;
    }

    ctx->pc = 0x265c80u;

    // 0x265c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265c88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x265c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x265c8c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x265c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x265c90: 0xc099770  jal         func_265DC0
    ctx->pc = 0x265C90u;
    SET_GPR_U32(ctx, 31, 0x265C98u);
    ctx->pc = 0x265DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DC0u, 0x265C90u, 0x265C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C98u;
label_265c98:
    // 0x265c98: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x265c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265c9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x265c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ca0: 0xc099730  jal         func_265CC0
    ctx->pc = 0x265CA0u;
    SET_GPR_U32(ctx, 31, 0x265CA8u);
    ctx->pc = 0x265CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265CC0u, 0x265CA0u, 0x265CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265CA8u;
label_265ca8:
    // 0x265ca8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x265ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265cb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x265CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265CBCu;
    // 0x265cbc: 0x0  nop
    ctx->pc = 0x265cbcu;
    // NOP
    ctx->pc = 0x265cc0u;
}
