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

// Function: sub_001BE560
// Address: 0x1be560 - 0x1be5a0
void sub_001BE560_0x1be560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE560_0x1be560");
#endif

    switch (ctx->pc) {
        case 0x1be590u: goto label_1be590;
        default: break;
    }

    ctx->pc = 0x1be560u;

    // 0x1be560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1be560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1be564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be568: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1be568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1be56c: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1be56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1be570: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1be570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be574: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE574u;
    {
        const bool branch_taken_0x1be574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be574) {
            ctx->pc = 0x1BE590u;
            goto label_1be590;
        }
    }
    ctx->pc = 0x1BE57Cu;
    // 0x1be57c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1be57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be580: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1be580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1be584: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be588: 0xc06f968  jal         func_1BE5A0
    ctx->pc = 0x1BE588u;
    SET_GPR_U32(ctx, 31, 0x1BE590u);
    ctx->pc = 0x1BE5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE5A0u, 0x1BE588u, 0x1BE590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE590u;
label_1be590:
    // 0x1be590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be594: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1be594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1be598: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE5A0u;
}
