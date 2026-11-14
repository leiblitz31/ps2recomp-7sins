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

// Function: sub_00218600
// Address: 0x218600 - 0x218650
void sub_00218600_0x218600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218600_0x218600");
#endif

    switch (ctx->pc) {
        case 0x218630u: goto label_218630;
        default: break;
    }

    ctx->pc = 0x218600u;

    // 0x218600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218608: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x218608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x21860c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x21860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218610: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x218610u;
    {
        const bool branch_taken_0x218610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x218610) {
            ctx->pc = 0x218634u;
            goto label_218634;
        }
    }
    ctx->pc = 0x218618u;
    // 0x218618: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x218618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21861c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21861Cu;
    {
        const bool branch_taken_0x21861c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21861c) {
            ctx->pc = 0x218634u;
            goto label_218634;
        }
    }
    ctx->pc = 0x218624u;
    // 0x218624: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x218624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218628: 0xc119c5c  jal         func_467170
    ctx->pc = 0x218628u;
    SET_GPR_U32(ctx, 31, 0x218630u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x218628u, 0x218630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218630u;
label_218630:
    // 0x218630: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x218630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_218634:
    // 0x218634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218638: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21863c: 0x3e00008  jr          $ra
    ctx->pc = 0x21863Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21863Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218644u;
    // 0x218644: 0x0  nop
    ctx->pc = 0x218644u;
    // NOP
    // 0x218648: 0x0  nop
    ctx->pc = 0x218648u;
    // NOP
    // 0x21864c: 0x0  nop
    ctx->pc = 0x21864cu;
    // NOP
    ctx->pc = 0x218650u;
}
