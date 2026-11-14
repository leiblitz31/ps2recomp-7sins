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

// Function: sub_00268CB0
// Address: 0x268cb0 - 0x268ce0
void sub_00268CB0_0x268cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268CB0_0x268cb0");
#endif

    switch (ctx->pc) {
        case 0x268cccu: goto label_268ccc;
        default: break;
    }

    ctx->pc = 0x268cb0u;

    // 0x268cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x268cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268cb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x268cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x268cbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x268cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268cc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x268cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268cc4: 0xc048004  jal         func_120010
    ctx->pc = 0x268CC4u;
    SET_GPR_U32(ctx, 31, 0x268CCCu);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x268CC4u, 0x268CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CCCu;
label_268ccc:
    // 0x268ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268cd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x268cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x268cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x268CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268CDCu;
    // 0x268cdc: 0x0  nop
    ctx->pc = 0x268cdcu;
    // NOP
    ctx->pc = 0x268ce0u;
}
