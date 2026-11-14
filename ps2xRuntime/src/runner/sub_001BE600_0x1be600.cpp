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

// Function: sub_001BE600
// Address: 0x1be600 - 0x1be630
void sub_001BE600_0x1be600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE600_0x1be600");
#endif

    switch (ctx->pc) {
        case 0x1be618u: goto label_1be618;
        default: break;
    }

    ctx->pc = 0x1be600u;

    // 0x1be600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1be608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1be60c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be610: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1BE610u;
    SET_GPR_U32(ctx, 31, 0x1BE618u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1BE610u, 0x1BE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE618u;
label_1be618:
    // 0x1be618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be61c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1be61cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1be620: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE628u;
    // 0x1be628: 0x0  nop
    ctx->pc = 0x1be628u;
    // NOP
    // 0x1be62c: 0x0  nop
    ctx->pc = 0x1be62cu;
    // NOP
    ctx->pc = 0x1be630u;
}
