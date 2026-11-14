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

// Function: sub_0046D2F0
// Address: 0x46d2f0 - 0x46d340
void sub_0046D2F0_0x46d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D2F0_0x46d2f0");
#endif

    switch (ctx->pc) {
        case 0x46d320u: goto label_46d320;
        default: break;
    }

    ctx->pc = 0x46d2f0u;

    // 0x46d2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46d2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46d2f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46d2fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d300: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x46D300u;
    {
        const bool branch_taken_0x46d300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d300) {
            ctx->pc = 0x46D324u;
            goto label_46d324;
        }
    }
    ctx->pc = 0x46D308u;
    // 0x46d308: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d30c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46D30Cu;
    {
        const bool branch_taken_0x46d30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d30c) {
            ctx->pc = 0x46D324u;
            goto label_46d324;
        }
    }
    ctx->pc = 0x46D314u;
    // 0x46d314: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46d314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d318: 0xc119c5c  jal         func_467170
    ctx->pc = 0x46D318u;
    SET_GPR_U32(ctx, 31, 0x46D320u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x46D318u, 0x46D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D320u;
label_46d320:
    // 0x46d320: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x46d320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_46d324:
    // 0x46d324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46d324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d328: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46d328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46d32c: 0x3e00008  jr          $ra
    ctx->pc = 0x46D32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D334u;
    // 0x46d334: 0x0  nop
    ctx->pc = 0x46d334u;
    // NOP
    // 0x46d338: 0x0  nop
    ctx->pc = 0x46d338u;
    // NOP
    // 0x46d33c: 0x0  nop
    ctx->pc = 0x46d33cu;
    // NOP
    ctx->pc = 0x46d340u;
}
