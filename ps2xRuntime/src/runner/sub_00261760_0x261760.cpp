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

// Function: sub_00261760
// Address: 0x261760 - 0x2617b0
void sub_00261760_0x261760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261760_0x261760");
#endif

    switch (ctx->pc) {
        case 0x261790u: goto label_261790;
        default: break;
    }

    ctx->pc = 0x261760u;

    // 0x261760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x261760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x261764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261768: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x261768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26176c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261770: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x261770u;
    {
        const bool branch_taken_0x261770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261770) {
            ctx->pc = 0x261794u;
            goto label_261794;
        }
    }
    ctx->pc = 0x261778u;
    // 0x261778: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x261778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26177c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26177Cu;
    {
        const bool branch_taken_0x26177c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26177c) {
            ctx->pc = 0x261794u;
            goto label_261794;
        }
    }
    ctx->pc = 0x261784u;
    // 0x261784: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261788: 0xc119c5c  jal         func_467170
    ctx->pc = 0x261788u;
    SET_GPR_U32(ctx, 31, 0x261790u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x261788u, 0x261790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261790u;
label_261790:
    // 0x261790: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x261790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_261794:
    // 0x261794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261798: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x261798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26179c: 0x3e00008  jr          $ra
    ctx->pc = 0x26179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26179Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2617A4u;
    // 0x2617a4: 0x0  nop
    ctx->pc = 0x2617a4u;
    // NOP
    // 0x2617a8: 0x0  nop
    ctx->pc = 0x2617a8u;
    // NOP
    // 0x2617ac: 0x0  nop
    ctx->pc = 0x2617acu;
    // NOP
    ctx->pc = 0x2617b0u;
}
