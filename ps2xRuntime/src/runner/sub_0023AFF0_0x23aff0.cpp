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

// Function: sub_0023AFF0
// Address: 0x23aff0 - 0x23b040
void sub_0023AFF0_0x23aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AFF0_0x23aff0");
#endif

    switch (ctx->pc) {
        case 0x23b020u: goto label_23b020;
        default: break;
    }

    ctx->pc = 0x23aff0u;

    // 0x23aff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23aff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23aff8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23affc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b000: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B000u;
    {
        const bool branch_taken_0x23b000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b000) {
            ctx->pc = 0x23B024u;
            goto label_23b024;
        }
    }
    ctx->pc = 0x23B008u;
    // 0x23b008: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b00c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B00Cu;
    {
        const bool branch_taken_0x23b00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b00c) {
            ctx->pc = 0x23B024u;
            goto label_23b024;
        }
    }
    ctx->pc = 0x23B014u;
    // 0x23b014: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23b014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b018: 0xc119c5c  jal         func_467170
    ctx->pc = 0x23B018u;
    SET_GPR_U32(ctx, 31, 0x23B020u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x23B018u, 0x23B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B020u;
label_23b020:
    // 0x23b020: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23b020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_23b024:
    // 0x23b024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b028: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23b028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23b02c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B034u;
    // 0x23b034: 0x0  nop
    ctx->pc = 0x23b034u;
    // NOP
    // 0x23b038: 0x0  nop
    ctx->pc = 0x23b038u;
    // NOP
    // 0x23b03c: 0x0  nop
    ctx->pc = 0x23b03cu;
    // NOP
    ctx->pc = 0x23b040u;
}
