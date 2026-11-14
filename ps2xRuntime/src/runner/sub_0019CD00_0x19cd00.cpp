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

// Function: sub_0019CD00
// Address: 0x19cd00 - 0x19cd50
void sub_0019CD00_0x19cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CD00_0x19cd00");
#endif

    switch (ctx->pc) {
        case 0x19cd30u: goto label_19cd30;
        default: break;
    }

    ctx->pc = 0x19cd00u;

    // 0x19cd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19cd04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19cd08: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19cd0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cd10: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CD10u;
    {
        const bool branch_taken_0x19cd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd10) {
            ctx->pc = 0x19CD34u;
            goto label_19cd34;
        }
    }
    ctx->pc = 0x19CD18u;
    // 0x19cd18: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cd1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CD1Cu;
    {
        const bool branch_taken_0x19cd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd1c) {
            ctx->pc = 0x19CD34u;
            goto label_19cd34;
        }
    }
    ctx->pc = 0x19CD24u;
    // 0x19cd24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cd28: 0xc119c5c  jal         func_467170
    ctx->pc = 0x19CD28u;
    SET_GPR_U32(ctx, 31, 0x19CD30u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x19CD28u, 0x19CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD30u;
label_19cd30:
    // 0x19cd30: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_19cd34:
    // 0x19cd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19cd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19cd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD44u;
    // 0x19cd44: 0x0  nop
    ctx->pc = 0x19cd44u;
    // NOP
    // 0x19cd48: 0x0  nop
    ctx->pc = 0x19cd48u;
    // NOP
    // 0x19cd4c: 0x0  nop
    ctx->pc = 0x19cd4cu;
    // NOP
    ctx->pc = 0x19cd50u;
}
