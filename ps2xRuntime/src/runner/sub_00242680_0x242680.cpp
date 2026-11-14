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

// Function: sub_00242680
// Address: 0x242680 - 0x2426c0
void sub_00242680_0x242680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242680_0x242680");
#endif

    switch (ctx->pc) {
        case 0x2426a8u: goto label_2426a8;
        default: break;
    }

    ctx->pc = 0x242680u;

    // 0x242680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x242688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24268c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242690: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x242690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x242694: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242698: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x242698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x24269c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2426a0: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x2426A0u;
    SET_GPR_U32(ctx, 31, 0x2426A8u);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x2426A0u, 0x2426A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2426A8u;
label_2426a8:
    // 0x2426a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2426a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2426ac: 0xa0600014  sb          $zero, 0x14($v1)
    ctx->pc = 0x2426acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2426b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2426b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2426b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2426b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2426b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2426B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2426B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2426C0u;
}
