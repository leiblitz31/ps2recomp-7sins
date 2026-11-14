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

// Function: sub_0047C520
// Address: 0x47c520 - 0x47c570
void sub_0047C520_0x47c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C520_0x47c520");
#endif

    switch (ctx->pc) {
        case 0x47c550u: goto label_47c550;
        default: break;
    }

    ctx->pc = 0x47c520u;

    // 0x47c520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x47c524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47c528: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47c528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x47c52c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x47c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47c530: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x47C530u;
    {
        const bool branch_taken_0x47c530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c530) {
            ctx->pc = 0x47C554u;
            goto label_47c554;
        }
    }
    ctx->pc = 0x47C538u;
    // 0x47c538: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x47c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47c53c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x47C53Cu;
    {
        const bool branch_taken_0x47c53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c53c) {
            ctx->pc = 0x47C554u;
            goto label_47c554;
        }
    }
    ctx->pc = 0x47C544u;
    // 0x47c544: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47c544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47c548: 0xc119c5c  jal         func_467170
    ctx->pc = 0x47C548u;
    SET_GPR_U32(ctx, 31, 0x47C550u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x47C548u, 0x47C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C550u;
label_47c550:
    // 0x47c550: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x47c550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_47c554:
    // 0x47c554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47c554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c558: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x47c558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x47c55c: 0x3e00008  jr          $ra
    ctx->pc = 0x47C55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C564u;
    // 0x47c564: 0x0  nop
    ctx->pc = 0x47c564u;
    // NOP
    // 0x47c568: 0x0  nop
    ctx->pc = 0x47c568u;
    // NOP
    // 0x47c56c: 0x0  nop
    ctx->pc = 0x47c56cu;
    // NOP
    ctx->pc = 0x47c570u;
}
