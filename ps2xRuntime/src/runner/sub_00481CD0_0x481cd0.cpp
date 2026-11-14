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

// Function: sub_00481CD0
// Address: 0x481cd0 - 0x481d10
void sub_00481CD0_0x481cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481CD0_0x481cd0");
#endif

    switch (ctx->pc) {
        case 0x481d00u: goto label_481d00;
        default: break;
    }

    ctx->pc = 0x481cd0u;

    // 0x481cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x481cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x481cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481cd8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x481cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x481cdc: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x481cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x481ce0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x481ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481ce4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x481CE4u;
    {
        const bool branch_taken_0x481ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x481ce4) {
            ctx->pc = 0x481D00u;
            goto label_481d00;
        }
    }
    ctx->pc = 0x481CECu;
    // 0x481cec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x481cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x481cf0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x481cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x481cf4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x481cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481cf8: 0xc06f968  jal         func_1BE5A0
    ctx->pc = 0x481CF8u;
    SET_GPR_U32(ctx, 31, 0x481D00u);
    ctx->pc = 0x1BE5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE5A0u, 0x481CF8u, 0x481D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481D00u;
label_481d00:
    // 0x481d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481d04: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x481d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x481d08: 0x3e00008  jr          $ra
    ctx->pc = 0x481D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481D10u;
}
