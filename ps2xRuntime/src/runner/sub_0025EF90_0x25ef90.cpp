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

// Function: sub_0025EF90
// Address: 0x25ef90 - 0x25efe0
void sub_0025EF90_0x25ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EF90_0x25ef90");
#endif

    switch (ctx->pc) {
        case 0x25efc0u: goto label_25efc0;
        default: break;
    }

    ctx->pc = 0x25ef90u;

    // 0x25ef90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25ef94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ef98: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25ef9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25efa0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25EFA0u;
    {
        const bool branch_taken_0x25efa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25efa0) {
            ctx->pc = 0x25EFC4u;
            goto label_25efc4;
        }
    }
    ctx->pc = 0x25EFA8u;
    // 0x25efa8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25efac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EFACu;
    {
        const bool branch_taken_0x25efac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25efac) {
            ctx->pc = 0x25EFC4u;
            goto label_25efc4;
        }
    }
    ctx->pc = 0x25EFB4u;
    // 0x25efb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25efb8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x25EFB8u;
    SET_GPR_U32(ctx, 31, 0x25EFC0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x25EFB8u, 0x25EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFC0u;
label_25efc0:
    // 0x25efc0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x25efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_25efc4:
    // 0x25efc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25efc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25efc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25efc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25efcc: 0x3e00008  jr          $ra
    ctx->pc = 0x25EFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EFD4u;
    // 0x25efd4: 0x0  nop
    ctx->pc = 0x25efd4u;
    // NOP
    // 0x25efd8: 0x0  nop
    ctx->pc = 0x25efd8u;
    // NOP
    // 0x25efdc: 0x0  nop
    ctx->pc = 0x25efdcu;
    // NOP
    ctx->pc = 0x25efe0u;
}
