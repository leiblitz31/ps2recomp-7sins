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

// Function: sub_0045F150
// Address: 0x45f150 - 0x45f1a0
void sub_0045F150_0x45f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F150_0x45f150");
#endif

    ctx->pc = 0x45f150u;

    // 0x45f150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45f154: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45f154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45f158: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x45f158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45f15c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45f164: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f168: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45f168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45f16c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f170: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x45f170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45f174: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f178: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x45f178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x45f17c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f180: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x45f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x45f184: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f188: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x45f188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x45f18c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f190: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45f194: 0x3e00008  jr          $ra
    ctx->pc = 0x45F194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F19Cu;
    // 0x45f19c: 0x0  nop
    ctx->pc = 0x45f19cu;
    // NOP
    ctx->pc = 0x45f1a0u;
}
