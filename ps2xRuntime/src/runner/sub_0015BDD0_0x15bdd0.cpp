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

// Function: sub_0015BDD0
// Address: 0x15bdd0 - 0x15be20
void sub_0015BDD0_0x15bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BDD0_0x15bdd0");
#endif

    switch (ctx->pc) {
        case 0x15bde8u: goto label_15bde8;
        case 0x15bdf4u: goto label_15bdf4;
        default: break;
    }

    ctx->pc = 0x15bdd0u;

    // 0x15bdd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15bdd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bdd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15bddc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15bde0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15BDE0u;
    {
        const bool branch_taken_0x15bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bde0) {
            ctx->pc = 0x15BE00u;
            goto label_15be00;
        }
    }
    ctx->pc = 0x15BDE8u;
label_15bde8:
    // 0x15bde8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bdec: 0xc056f88  jal         func_15BE20
    ctx->pc = 0x15BDECu;
    SET_GPR_U32(ctx, 31, 0x15BDF4u);
    ctx->pc = 0x15BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BE20u, 0x15BDECu, 0x15BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDF4u;
label_15bdf4:
    // 0x15bdf4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bdf8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x15bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x15bdfc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x15bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_15be00:
    // 0x15be00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15be00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15be04: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15be08: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15BE08u;
    {
        const bool branch_taken_0x15be08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15be08) {
            ctx->pc = 0x15BDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bde8;
        }
    }
    ctx->pc = 0x15BE10u;
    // 0x15be10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15be10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15be14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15be14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15be18: 0x3e00008  jr          $ra
    ctx->pc = 0x15BE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BE20u;
}
