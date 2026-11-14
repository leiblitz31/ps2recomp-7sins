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

// Function: sub_0048DD40
// Address: 0x48dd40 - 0x48dd90
void sub_0048DD40_0x48dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DD40_0x48dd40");
#endif

    switch (ctx->pc) {
        case 0x48dd58u: goto label_48dd58;
        case 0x48dd68u: goto label_48dd68;
        case 0x48dd78u: goto label_48dd78;
        default: break;
    }

    ctx->pc = 0x48dd40u;

    // 0x48dd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48dd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48dd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48dd48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48dd4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dd50: 0xc041b48  jal         func_106D20
    ctx->pc = 0x48DD50u;
    SET_GPR_U32(ctx, 31, 0x48DD58u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x48DD50u, 0x48DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DD58u;
label_48dd58:
    // 0x48dd58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dd5c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x48dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48dd60: 0xc1237b0  jal         func_48DEC0
    ctx->pc = 0x48DD60u;
    SET_GPR_U32(ctx, 31, 0x48DD68u);
    ctx->pc = 0x48DEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DEC0u, 0x48DD60u, 0x48DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DD68u;
label_48dd68:
    // 0x48dd68: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dd6c: 0x2785b680  addiu       $a1, $gp, -0x4980
    ctx->pc = 0x48dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948480));
    // 0x48dd70: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x48DD70u;
    SET_GPR_U32(ctx, 31, 0x48DD78u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x48DD70u, 0x48DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DD78u;
label_48dd78:
    // 0x48dd78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dd7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48dd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dd80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48dd84: 0x3e00008  jr          $ra
    ctx->pc = 0x48DD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DD8Cu;
    // 0x48dd8c: 0x0  nop
    ctx->pc = 0x48dd8cu;
    // NOP
    ctx->pc = 0x48dd90u;
}
