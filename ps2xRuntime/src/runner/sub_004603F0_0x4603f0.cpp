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

// Function: sub_004603F0
// Address: 0x4603f0 - 0x460440
void sub_004603F0_0x4603f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004603F0_0x4603f0");
#endif

    switch (ctx->pc) {
        case 0x460428u: goto label_460428;
        default: break;
    }

    ctx->pc = 0x4603f0u;

    // 0x4603f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4603f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4603f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4603f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4603f8: 0x8f82bfa8  lw          $v0, -0x4058($gp)
    ctx->pc = 0x4603f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
    // 0x4603fc: 0xaf82bfac  sw          $v0, -0x4054($gp)
    ctx->pc = 0x4603fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950828), GPR_U32(ctx, 2));
    // 0x460400: 0xaf80bfa8  sw          $zero, -0x4058($gp)
    ctx->pc = 0x460400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950824), GPR_U32(ctx, 0));
    // 0x460404: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x460404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x460408: 0xaf82b18c  sw          $v0, -0x4E74($gp)
    ctx->pc = 0x460408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947212), GPR_U32(ctx, 2));
    // 0x46040c: 0xaf80bfb0  sw          $zero, -0x4050($gp)
    ctx->pc = 0x46040cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 0));
    // 0x460410: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x460410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x460414: 0x24844e00  addiu       $a0, $a0, 0x4E00
    ctx->pc = 0x460414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19968));
    // 0x460418: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x460418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x46041c: 0x24a51970  addiu       $a1, $a1, 0x1970
    ctx->pc = 0x46041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6512));
    // 0x460420: 0xc118110  jal         func_460440
    ctx->pc = 0x460420u;
    SET_GPR_U32(ctx, 31, 0x460428u);
    ctx->pc = 0x460440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460440u, 0x460420u, 0x460428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460428u;
label_460428:
    // 0x460428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x460428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46042c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x46042cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x460430: 0x3e00008  jr          $ra
    ctx->pc = 0x460430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460438u;
    // 0x460438: 0x0  nop
    ctx->pc = 0x460438u;
    // NOP
    // 0x46043c: 0x0  nop
    ctx->pc = 0x46043cu;
    // NOP
    ctx->pc = 0x460440u;
}
