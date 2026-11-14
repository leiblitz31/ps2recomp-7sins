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

// Function: sub_002B8700
// Address: 0x2b8700 - 0x2b8750
void sub_002B8700_0x2b8700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8700_0x2b8700");
#endif

    switch (ctx->pc) {
        case 0x2b8730u: goto label_2b8730;
        default: break;
    }

    ctx->pc = 0x2b8700u;

    // 0x2b8700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b8700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b8704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8708: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b8708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b870c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8710: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8710u;
    {
        const bool branch_taken_0x2b8710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8710) {
            ctx->pc = 0x2B8734u;
            goto label_2b8734;
        }
    }
    ctx->pc = 0x2B8718u;
    // 0x2b8718: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b8718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b871c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B871Cu;
    {
        const bool branch_taken_0x2b871c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b871c) {
            ctx->pc = 0x2B8734u;
            goto label_2b8734;
        }
    }
    ctx->pc = 0x2B8724u;
    // 0x2b8724: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b8724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8728: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2B8728u;
    SET_GPR_U32(ctx, 31, 0x2B8730u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B8728u, 0x2B8730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8730u;
label_2b8730:
    // 0x2b8730: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2b8730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2b8734:
    // 0x2b8734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8738: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b8738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b873c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B873Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8744u;
    // 0x2b8744: 0x0  nop
    ctx->pc = 0x2b8744u;
    // NOP
    // 0x2b8748: 0x0  nop
    ctx->pc = 0x2b8748u;
    // NOP
    // 0x2b874c: 0x0  nop
    ctx->pc = 0x2b874cu;
    // NOP
    ctx->pc = 0x2b8750u;
}
