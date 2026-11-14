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

// Function: sub_0010B4F0
// Address: 0x10b4f0 - 0x10b540
void sub_0010B4F0_0x10b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B4F0_0x10b4f0");
#endif

    switch (ctx->pc) {
        case 0x10b520u: goto label_10b520;
        default: break;
    }

    ctx->pc = 0x10b4f0u;

    // 0x10b4f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b4f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10b4fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b500: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B500u;
    {
        const bool branch_taken_0x10b500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b500) {
            ctx->pc = 0x10B524u;
            goto label_10b524;
        }
    }
    ctx->pc = 0x10B508u;
    // 0x10b508: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10b508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b50c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B50Cu;
    {
        const bool branch_taken_0x10b50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b50c) {
            ctx->pc = 0x10B524u;
            goto label_10b524;
        }
    }
    ctx->pc = 0x10B514u;
    // 0x10b514: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10b514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b518: 0xc119c5c  jal         func_467170
    ctx->pc = 0x10B518u;
    SET_GPR_U32(ctx, 31, 0x10B520u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x10B518u, 0x10B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B520u;
label_10b520:
    // 0x10b520: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10b520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_10b524:
    // 0x10b524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b528: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10b528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10b52c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B534u;
    // 0x10b534: 0x0  nop
    ctx->pc = 0x10b534u;
    // NOP
    // 0x10b538: 0x0  nop
    ctx->pc = 0x10b538u;
    // NOP
    // 0x10b53c: 0x0  nop
    ctx->pc = 0x10b53cu;
    // NOP
    ctx->pc = 0x10b540u;
}
