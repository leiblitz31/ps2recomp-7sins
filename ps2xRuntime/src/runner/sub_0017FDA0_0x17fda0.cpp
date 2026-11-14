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

// Function: sub_0017FDA0
// Address: 0x17fda0 - 0x17fdf0
void sub_0017FDA0_0x17fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FDA0_0x17fda0");
#endif

    switch (ctx->pc) {
        case 0x17fdd0u: goto label_17fdd0;
        default: break;
    }

    ctx->pc = 0x17fda0u;

    // 0x17fda0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17fda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17fda8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17fdac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fdb0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FDB0u;
    {
        const bool branch_taken_0x17fdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fdb0) {
            ctx->pc = 0x17FDD4u;
            goto label_17fdd4;
        }
    }
    ctx->pc = 0x17FDB8u;
    // 0x17fdb8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fdbc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FDBCu;
    {
        const bool branch_taken_0x17fdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fdbc) {
            ctx->pc = 0x17FDD4u;
            goto label_17fdd4;
        }
    }
    ctx->pc = 0x17FDC4u;
    // 0x17fdc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fdc8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x17FDC8u;
    SET_GPR_U32(ctx, 31, 0x17FDD0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x17FDC8u, 0x17FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDD0u;
label_17fdd0:
    // 0x17fdd0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_17fdd4:
    // 0x17fdd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fdd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17fddc: 0x3e00008  jr          $ra
    ctx->pc = 0x17FDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FDE4u;
    // 0x17fde4: 0x0  nop
    ctx->pc = 0x17fde4u;
    // NOP
    // 0x17fde8: 0x0  nop
    ctx->pc = 0x17fde8u;
    // NOP
    // 0x17fdec: 0x0  nop
    ctx->pc = 0x17fdecu;
    // NOP
    ctx->pc = 0x17fdf0u;
}
