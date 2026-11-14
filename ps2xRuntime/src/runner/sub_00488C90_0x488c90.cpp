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

// Function: sub_00488C90
// Address: 0x488c90 - 0x488cc0
void sub_00488C90_0x488c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488C90_0x488c90");
#endif

    switch (ctx->pc) {
        case 0x488cacu: goto label_488cac;
        default: break;
    }

    ctx->pc = 0x488c90u;

    // 0x488c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x488c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488c98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x488c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x488c9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x488c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488ca0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x488ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x488ca4: 0xc120954  jal         func_482550
    ctx->pc = 0x488CA4u;
    SET_GPR_U32(ctx, 31, 0x488CACu);
    ctx->pc = 0x482550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482550u, 0x488CA4u, 0x488CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488CACu;
label_488cac:
    // 0x488cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488cb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x488cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x488cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x488CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488CBCu;
    // 0x488cbc: 0x0  nop
    ctx->pc = 0x488cbcu;
    // NOP
    ctx->pc = 0x488cc0u;
}
