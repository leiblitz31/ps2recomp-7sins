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

// Function: sub_001C4220
// Address: 0x1c4220 - 0x1c4260
void sub_001C4220_0x1c4220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4220_0x1c4220");
#endif

    switch (ctx->pc) {
        case 0x1c4248u: goto label_1c4248;
        default: break;
    }

    ctx->pc = 0x1c4220u;

    // 0x1c4220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c4224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c4228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c422c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c4230: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1c4230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1c4234: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c4234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4238: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c4238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c423c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1c423cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4240: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1C4240u;
    SET_GPR_U32(ctx, 31, 0x1C4248u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1C4240u, 0x1C4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4248u;
label_1c4248:
    // 0x1c4248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c424c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c424cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4250: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4258u;
    // 0x1c4258: 0x0  nop
    ctx->pc = 0x1c4258u;
    // NOP
    // 0x1c425c: 0x0  nop
    ctx->pc = 0x1c425cu;
    // NOP
    ctx->pc = 0x1c4260u;
}
