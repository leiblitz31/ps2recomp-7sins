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

// Function: sub_0046F390
// Address: 0x46f390 - 0x46f3d0
void sub_0046F390_0x46f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F390_0x46f390");
#endif

    switch (ctx->pc) {
        case 0x46f3b4u: goto label_46f3b4;
        default: break;
    }

    ctx->pc = 0x46f390u;

    // 0x46f390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46f390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46f394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46f398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46f398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46f39c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46f3a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f3a4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f3a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f3ac: 0xc11a5fc  jal         func_4697F0
    ctx->pc = 0x46F3ACu;
    SET_GPR_U32(ctx, 31, 0x46F3B4u);
    ctx->pc = 0x4697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4697F0u, 0x46F3ACu, 0x46F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F3B4u;
label_46f3b4:
    // 0x46f3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46f3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f3b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46f3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x46F3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F3C4u;
    // 0x46f3c4: 0x0  nop
    ctx->pc = 0x46f3c4u;
    // NOP
    // 0x46f3c8: 0x0  nop
    ctx->pc = 0x46f3c8u;
    // NOP
    // 0x46f3cc: 0x0  nop
    ctx->pc = 0x46f3ccu;
    // NOP
    ctx->pc = 0x46f3d0u;
}
