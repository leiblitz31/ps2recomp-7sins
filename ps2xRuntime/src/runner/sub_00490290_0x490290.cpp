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

// Function: sub_00490290
// Address: 0x490290 - 0x4902e0
void sub_00490290_0x490290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490290_0x490290");
#endif

    switch (ctx->pc) {
        case 0x4902c0u: goto label_4902c0;
        default: break;
    }

    ctx->pc = 0x490290u;

    // 0x490290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x490290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x490294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490298: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x490298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x49029c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x49029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4902a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4902A0u;
    {
        const bool branch_taken_0x4902a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902a0) {
            ctx->pc = 0x4902C4u;
            goto label_4902c4;
        }
    }
    ctx->pc = 0x4902A8u;
    // 0x4902a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4902a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4902ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4902ACu;
    {
        const bool branch_taken_0x4902ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902ac) {
            ctx->pc = 0x4902C4u;
            goto label_4902c4;
        }
    }
    ctx->pc = 0x4902B4u;
    // 0x4902b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4902b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4902b8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x4902B8u;
    SET_GPR_U32(ctx, 31, 0x4902C0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x4902B8u, 0x4902C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4902C0u;
label_4902c0:
    // 0x4902c0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4902c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_4902c4:
    // 0x4902c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4902c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4902c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4902c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4902cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4902CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4902CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4902D4u;
    // 0x4902d4: 0x0  nop
    ctx->pc = 0x4902d4u;
    // NOP
    // 0x4902d8: 0x0  nop
    ctx->pc = 0x4902d8u;
    // NOP
    // 0x4902dc: 0x0  nop
    ctx->pc = 0x4902dcu;
    // NOP
    ctx->pc = 0x4902e0u;
}
