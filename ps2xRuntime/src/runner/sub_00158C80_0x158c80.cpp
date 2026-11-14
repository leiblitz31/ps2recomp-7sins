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

// Function: sub_00158C80
// Address: 0x158c80 - 0x158cd0
void sub_00158C80_0x158c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158C80_0x158c80");
#endif

    switch (ctx->pc) {
        case 0x158cb0u: goto label_158cb0;
        default: break;
    }

    ctx->pc = 0x158c80u;

    // 0x158c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158c88: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x158c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x158c8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x158c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158c90: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x158C90u;
    {
        const bool branch_taken_0x158c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c90) {
            ctx->pc = 0x158CB4u;
            goto label_158cb4;
        }
    }
    ctx->pc = 0x158C98u;
    // 0x158c98: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x158c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158c9c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158C9Cu;
    {
        const bool branch_taken_0x158c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c9c) {
            ctx->pc = 0x158CB4u;
            goto label_158cb4;
        }
    }
    ctx->pc = 0x158CA4u;
    // 0x158ca4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158ca8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x158CA8u;
    SET_GPR_U32(ctx, 31, 0x158CB0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x158CA8u, 0x158CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CB0u;
label_158cb0:
    // 0x158cb0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x158cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_158cb4:
    // 0x158cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158cb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x158cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x158cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x158CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158CC4u;
    // 0x158cc4: 0x0  nop
    ctx->pc = 0x158cc4u;
    // NOP
    // 0x158cc8: 0x0  nop
    ctx->pc = 0x158cc8u;
    // NOP
    // 0x158ccc: 0x0  nop
    ctx->pc = 0x158cccu;
    // NOP
    ctx->pc = 0x158cd0u;
}
