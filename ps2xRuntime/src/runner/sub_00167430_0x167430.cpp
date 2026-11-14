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

// Function: sub_00167430
// Address: 0x167430 - 0x167480
void sub_00167430_0x167430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167430_0x167430");
#endif

    switch (ctx->pc) {
        case 0x167460u: goto label_167460;
        default: break;
    }

    ctx->pc = 0x167430u;

    // 0x167430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167438: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x167438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x16743c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167440: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x167440u;
    {
        const bool branch_taken_0x167440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167440) {
            ctx->pc = 0x167464u;
            goto label_167464;
        }
    }
    ctx->pc = 0x167448u;
    // 0x167448: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16744c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16744Cu;
    {
        const bool branch_taken_0x16744c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16744c) {
            ctx->pc = 0x167464u;
            goto label_167464;
        }
    }
    ctx->pc = 0x167454u;
    // 0x167454: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x167454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167458: 0xc119c5c  jal         func_467170
    ctx->pc = 0x167458u;
    SET_GPR_U32(ctx, 31, 0x167460u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x167458u, 0x167460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167460u;
label_167460:
    // 0x167460: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x167460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_167464:
    // 0x167464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167468: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x167468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16746c: 0x3e00008  jr          $ra
    ctx->pc = 0x16746Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16746Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167474u;
    // 0x167474: 0x0  nop
    ctx->pc = 0x167474u;
    // NOP
    // 0x167478: 0x0  nop
    ctx->pc = 0x167478u;
    // NOP
    // 0x16747c: 0x0  nop
    ctx->pc = 0x16747cu;
    // NOP
    ctx->pc = 0x167480u;
}
