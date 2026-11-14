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

// Function: sub_00106810
// Address: 0x106810 - 0x106850
void sub_00106810_0x106810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106810_0x106810");
#endif

    switch (ctx->pc) {
        case 0x10682cu: goto label_10682c;
        case 0x10683cu: goto label_10683c;
        default: break;
    }

    ctx->pc = 0x106810u;

    // 0x106810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10681c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10681cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x106820: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106824: 0xc041864  jal         func_106190
    ctx->pc = 0x106824u;
    SET_GPR_U32(ctx, 31, 0x10682Cu);
    ctx->pc = 0x106190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106190u, 0x106824u, 0x10682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10682Cu;
label_10682c:
    // 0x10682c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106830: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106834: 0xc0419c4  jal         func_106710
    ctx->pc = 0x106834u;
    SET_GPR_U32(ctx, 31, 0x10683Cu);
    ctx->pc = 0x106710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106710u, 0x106834u, 0x10683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10683Cu;
label_10683c:
    // 0x10683c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10683cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106840: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x106840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106844: 0x3e00008  jr          $ra
    ctx->pc = 0x106844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10684Cu;
    // 0x10684c: 0x0  nop
    ctx->pc = 0x10684cu;
    // NOP
    ctx->pc = 0x106850u;
}
