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

// Function: sub_00115960
// Address: 0x115960 - 0x115990
void sub_00115960_0x115960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115960_0x115960");
#endif

    switch (ctx->pc) {
        case 0x115978u: goto label_115978;
        default: break;
    }

    ctx->pc = 0x115960u;

    // 0x115960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115968: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x115968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11596c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115970: 0xc045664  jal         func_115990
    ctx->pc = 0x115970u;
    SET_GPR_U32(ctx, 31, 0x115978u);
    ctx->pc = 0x115990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115990u, 0x115970u, 0x115978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115978u;
label_115978:
    // 0x115978: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x115978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11597c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11597cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115980: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x115980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x115984: 0x3e00008  jr          $ra
    ctx->pc = 0x115984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11598Cu;
    // 0x11598c: 0x0  nop
    ctx->pc = 0x11598cu;
    // NOP
    ctx->pc = 0x115990u;
}
