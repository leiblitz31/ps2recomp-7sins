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

// Function: sub_0023C650
// Address: 0x23c650 - 0x23c690
void sub_0023C650_0x23c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C650_0x23c650");
#endif

    switch (ctx->pc) {
        case 0x23c670u: goto label_23c670;
        default: break;
    }

    ctx->pc = 0x23c650u;

    // 0x23c650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c65c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23c660: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c664: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23c664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c668: 0xc08f1a4  jal         func_23C690
    ctx->pc = 0x23C668u;
    SET_GPR_U32(ctx, 31, 0x23C670u);
    ctx->pc = 0x23C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C690u, 0x23C668u, 0x23C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C670u;
label_23c670:
    // 0x23c670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c678: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23c678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c67c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C684u;
    // 0x23c684: 0x0  nop
    ctx->pc = 0x23c684u;
    // NOP
    // 0x23c688: 0x0  nop
    ctx->pc = 0x23c688u;
    // NOP
    // 0x23c68c: 0x0  nop
    ctx->pc = 0x23c68cu;
    // NOP
    ctx->pc = 0x23c690u;
}
