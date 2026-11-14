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

// Function: sub_00216E80
// Address: 0x216e80 - 0x216ed0
void sub_00216E80_0x216e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216E80_0x216e80");
#endif

    switch (ctx->pc) {
        case 0x216eb0u: goto label_216eb0;
        default: break;
    }

    ctx->pc = 0x216e80u;

    // 0x216e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x216e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x216e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216e88: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x216e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x216e8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x216e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216e90: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x216E90u;
    {
        const bool branch_taken_0x216e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x216e90) {
            ctx->pc = 0x216EB4u;
            goto label_216eb4;
        }
    }
    ctx->pc = 0x216E98u;
    // 0x216e98: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x216e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216e9c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x216E9Cu;
    {
        const bool branch_taken_0x216e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x216e9c) {
            ctx->pc = 0x216EB4u;
            goto label_216eb4;
        }
    }
    ctx->pc = 0x216EA4u;
    // 0x216ea4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216ea8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x216EA8u;
    SET_GPR_U32(ctx, 31, 0x216EB0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x216EA8u, 0x216EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EB0u;
label_216eb0:
    // 0x216eb0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x216eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_216eb4:
    // 0x216eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216eb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x216eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x216ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x216EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216EC4u;
    // 0x216ec4: 0x0  nop
    ctx->pc = 0x216ec4u;
    // NOP
    // 0x216ec8: 0x0  nop
    ctx->pc = 0x216ec8u;
    // NOP
    // 0x216ecc: 0x0  nop
    ctx->pc = 0x216eccu;
    // NOP
    ctx->pc = 0x216ed0u;
}
