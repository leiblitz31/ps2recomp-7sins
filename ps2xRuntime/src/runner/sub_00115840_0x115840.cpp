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

// Function: sub_00115840
// Address: 0x115840 - 0x115870
void sub_00115840_0x115840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115840_0x115840");
#endif

    switch (ctx->pc) {
        case 0x115858u: goto label_115858;
        default: break;
    }

    ctx->pc = 0x115840u;

    // 0x115840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x115848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11584c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11584cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115850: 0xc04561c  jal         func_115870
    ctx->pc = 0x115850u;
    SET_GPR_U32(ctx, 31, 0x115858u);
    ctx->pc = 0x115870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115870u, 0x115850u, 0x115858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115858u;
label_115858:
    // 0x115858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11585c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11585cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x115860: 0x3e00008  jr          $ra
    ctx->pc = 0x115860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115868u;
    // 0x115868: 0x0  nop
    ctx->pc = 0x115868u;
    // NOP
    // 0x11586c: 0x0  nop
    ctx->pc = 0x11586cu;
    // NOP
    ctx->pc = 0x115870u;
}
