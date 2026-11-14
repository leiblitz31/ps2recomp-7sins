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

// Function: sub_00291CB0
// Address: 0x291cb0 - 0x291cf0
void sub_00291CB0_0x291cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291CB0_0x291cb0");
#endif

    switch (ctx->pc) {
        case 0x291cd4u: goto label_291cd4;
        default: break;
    }

    ctx->pc = 0x291cb0u;

    // 0x291cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291cb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x291cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x291cbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x291cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x291cc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291cc4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x291cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291cc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ccc: 0xc0a473c  jal         func_291CF0
    ctx->pc = 0x291CCCu;
    SET_GPR_U32(ctx, 31, 0x291CD4u);
    ctx->pc = 0x291CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291CF0u, 0x291CCCu, 0x291CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CD4u;
label_291cd4:
    // 0x291cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291cd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x291cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x291cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x291CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291CE4u;
    // 0x291ce4: 0x0  nop
    ctx->pc = 0x291ce4u;
    // NOP
    // 0x291ce8: 0x0  nop
    ctx->pc = 0x291ce8u;
    // NOP
    // 0x291cec: 0x0  nop
    ctx->pc = 0x291cecu;
    // NOP
    ctx->pc = 0x291cf0u;
}
