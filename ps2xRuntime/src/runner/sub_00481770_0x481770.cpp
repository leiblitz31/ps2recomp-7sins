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

// Function: sub_00481770
// Address: 0x481770 - 0x4817a0
void sub_00481770_0x481770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481770_0x481770");
#endif

    switch (ctx->pc) {
        case 0x48178cu: goto label_48178c;
        default: break;
    }

    ctx->pc = 0x481770u;

    // 0x481770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481778: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48177c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48177cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481784: 0xc0c962e  jal         func_3258B8
    ctx->pc = 0x481784u;
    SET_GPR_U32(ctx, 31, 0x48178Cu);
    ctx->pc = 0x3258B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258B8u, 0x481784u, 0x48178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48178Cu;
label_48178c:
    // 0x48178c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481794: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481798: 0x3e00008  jr          $ra
    ctx->pc = 0x481798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4817A0u;
}
