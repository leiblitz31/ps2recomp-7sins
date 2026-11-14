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

// Function: sub_0025C740
// Address: 0x25c740 - 0x25c790
void sub_0025C740_0x25c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C740_0x25c740");
#endif

    switch (ctx->pc) {
        case 0x25c770u: goto label_25c770;
        default: break;
    }

    ctx->pc = 0x25c740u;

    // 0x25c740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25c744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c748: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25c748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25c74c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c750: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C750u;
    {
        const bool branch_taken_0x25c750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c750) {
            ctx->pc = 0x25C774u;
            goto label_25c774;
        }
    }
    ctx->pc = 0x25C758u;
    // 0x25c758: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25c758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c75c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C75Cu;
    {
        const bool branch_taken_0x25c75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c75c) {
            ctx->pc = 0x25C774u;
            goto label_25c774;
        }
    }
    ctx->pc = 0x25C764u;
    // 0x25c764: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25c764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c768: 0xc119c5c  jal         func_467170
    ctx->pc = 0x25C768u;
    SET_GPR_U32(ctx, 31, 0x25C770u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x25C768u, 0x25C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C770u;
label_25c770:
    // 0x25c770: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x25c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_25c774:
    // 0x25c774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c778: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25c778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25c77c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C784u;
    // 0x25c784: 0x0  nop
    ctx->pc = 0x25c784u;
    // NOP
    // 0x25c788: 0x0  nop
    ctx->pc = 0x25c788u;
    // NOP
    // 0x25c78c: 0x0  nop
    ctx->pc = 0x25c78cu;
    // NOP
    ctx->pc = 0x25c790u;
}
