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

// Function: sub_0029B4F0
// Address: 0x29b4f0 - 0x29b540
void sub_0029B4F0_0x29b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B4F0_0x29b4f0");
#endif

    switch (ctx->pc) {
        case 0x29b520u: goto label_29b520;
        default: break;
    }

    ctx->pc = 0x29b4f0u;

    // 0x29b4f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29b4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b4f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x29b4fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b500: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B500u;
    {
        const bool branch_taken_0x29b500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b500) {
            ctx->pc = 0x29B524u;
            goto label_29b524;
        }
    }
    ctx->pc = 0x29B508u;
    // 0x29b508: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29b508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b50c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B50Cu;
    {
        const bool branch_taken_0x29b50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b50c) {
            ctx->pc = 0x29B524u;
            goto label_29b524;
        }
    }
    ctx->pc = 0x29B514u;
    // 0x29b514: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29b514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b518: 0xc119c5c  jal         func_467170
    ctx->pc = 0x29B518u;
    SET_GPR_U32(ctx, 31, 0x29B520u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x29B518u, 0x29B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B520u;
label_29b520:
    // 0x29b520: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x29b520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_29b524:
    // 0x29b524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b528: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29b528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29b52c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B534u;
    // 0x29b534: 0x0  nop
    ctx->pc = 0x29b534u;
    // NOP
    // 0x29b538: 0x0  nop
    ctx->pc = 0x29b538u;
    // NOP
    // 0x29b53c: 0x0  nop
    ctx->pc = 0x29b53cu;
    // NOP
    ctx->pc = 0x29b540u;
}
