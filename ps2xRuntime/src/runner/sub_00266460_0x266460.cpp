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

// Function: sub_00266460
// Address: 0x266460 - 0x2664a0
void sub_00266460_0x266460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266460_0x266460");
#endif

    switch (ctx->pc) {
        case 0x266488u: goto label_266488;
        default: break;
    }

    ctx->pc = 0x266460u;

    // 0x266460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x266460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x266464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x266468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26646c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26646cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x266470: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x266470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x266474: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x266474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266478: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x266478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26647c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x26647cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266480: 0xc041934  jal         func_1064D0
    ctx->pc = 0x266480u;
    SET_GPR_U32(ctx, 31, 0x266488u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x266480u, 0x266488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266488u;
label_266488:
    // 0x266488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26648c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26648cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x266490: 0x3e00008  jr          $ra
    ctx->pc = 0x266490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266498u;
    // 0x266498: 0x0  nop
    ctx->pc = 0x266498u;
    // NOP
    // 0x26649c: 0x0  nop
    ctx->pc = 0x26649cu;
    // NOP
    ctx->pc = 0x2664a0u;
}
