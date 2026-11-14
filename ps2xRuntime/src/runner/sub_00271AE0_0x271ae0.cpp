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

// Function: sub_00271AE0
// Address: 0x271ae0 - 0x271b30
void sub_00271AE0_0x271ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271AE0_0x271ae0");
#endif

    switch (ctx->pc) {
        case 0x271b10u: goto label_271b10;
        default: break;
    }

    ctx->pc = 0x271ae0u;

    // 0x271ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x271ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x271ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x271ae8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x271ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x271aec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x271aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271af0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x271AF0u;
    {
        const bool branch_taken_0x271af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x271af0) {
            ctx->pc = 0x271B14u;
            goto label_271b14;
        }
    }
    ctx->pc = 0x271AF8u;
    // 0x271af8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x271af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271afc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x271AFCu;
    {
        const bool branch_taken_0x271afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x271afc) {
            ctx->pc = 0x271B14u;
            goto label_271b14;
        }
    }
    ctx->pc = 0x271B04u;
    // 0x271b04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x271b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271b08: 0xc119c5c  jal         func_467170
    ctx->pc = 0x271B08u;
    SET_GPR_U32(ctx, 31, 0x271B10u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x271B08u, 0x271B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B10u;
label_271b10:
    // 0x271b10: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x271b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_271b14:
    // 0x271b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271b18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x271b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x271b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x271B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271B24u;
    // 0x271b24: 0x0  nop
    ctx->pc = 0x271b24u;
    // NOP
    // 0x271b28: 0x0  nop
    ctx->pc = 0x271b28u;
    // NOP
    // 0x271b2c: 0x0  nop
    ctx->pc = 0x271b2cu;
    // NOP
    ctx->pc = 0x271b30u;
}
