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

// Function: sub_002655F0
// Address: 0x2655f0 - 0x265640
void sub_002655F0_0x2655f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002655F0_0x2655f0");
#endif

    switch (ctx->pc) {
        case 0x265620u: goto label_265620;
        default: break;
    }

    ctx->pc = 0x2655f0u;

    // 0x2655f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2655f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2655f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2655f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2655f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2655f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2655fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2655fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265600: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x265600u;
    {
        const bool branch_taken_0x265600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265600) {
            ctx->pc = 0x265624u;
            goto label_265624;
        }
    }
    ctx->pc = 0x265608u;
    // 0x265608: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x265608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26560c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26560Cu;
    {
        const bool branch_taken_0x26560c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26560c) {
            ctx->pc = 0x265624u;
            goto label_265624;
        }
    }
    ctx->pc = 0x265614u;
    // 0x265614: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x265614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265618: 0xc119c5c  jal         func_467170
    ctx->pc = 0x265618u;
    SET_GPR_U32(ctx, 31, 0x265620u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x265618u, 0x265620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265620u;
label_265620:
    // 0x265620: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x265620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_265624:
    // 0x265624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265628: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x265628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26562c: 0x3e00008  jr          $ra
    ctx->pc = 0x26562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26562Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265634u;
    // 0x265634: 0x0  nop
    ctx->pc = 0x265634u;
    // NOP
    // 0x265638: 0x0  nop
    ctx->pc = 0x265638u;
    // NOP
    // 0x26563c: 0x0  nop
    ctx->pc = 0x26563cu;
    // NOP
    ctx->pc = 0x265640u;
}
