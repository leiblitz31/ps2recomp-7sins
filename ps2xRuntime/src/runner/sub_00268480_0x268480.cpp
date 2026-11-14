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

// Function: sub_00268480
// Address: 0x268480 - 0x2684d0
void sub_00268480_0x268480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268480_0x268480");
#endif

    switch (ctx->pc) {
        case 0x2684b0u: goto label_2684b0;
        default: break;
    }

    ctx->pc = 0x268480u;

    // 0x268480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x268480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x268484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268488: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x268488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26848c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26848cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268490: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x268490u;
    {
        const bool branch_taken_0x268490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x268490) {
            ctx->pc = 0x2684B4u;
            goto label_2684b4;
        }
    }
    ctx->pc = 0x268498u;
    // 0x268498: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x268498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26849c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26849Cu;
    {
        const bool branch_taken_0x26849c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26849c) {
            ctx->pc = 0x2684B4u;
            goto label_2684b4;
        }
    }
    ctx->pc = 0x2684A4u;
    // 0x2684a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2684a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2684a8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2684A8u;
    SET_GPR_U32(ctx, 31, 0x2684B0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2684A8u, 0x2684B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684B0u;
label_2684b0:
    // 0x2684b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2684b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2684b4:
    // 0x2684b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2684b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2684b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2684b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2684bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2684BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2684BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2684C4u;
    // 0x2684c4: 0x0  nop
    ctx->pc = 0x2684c4u;
    // NOP
    // 0x2684c8: 0x0  nop
    ctx->pc = 0x2684c8u;
    // NOP
    // 0x2684cc: 0x0  nop
    ctx->pc = 0x2684ccu;
    // NOP
    ctx->pc = 0x2684d0u;
}
