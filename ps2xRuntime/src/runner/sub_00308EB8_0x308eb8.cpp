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

// Function: sub_00308EB8
// Address: 0x308eb8 - 0x308f00
void sub_00308EB8_0x308eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308EB8_0x308eb8");
#endif

    switch (ctx->pc) {
        case 0x308ed0u: goto label_308ed0;
        case 0x308ed8u: goto label_308ed8;
        case 0x308ee8u: goto label_308ee8;
        default: break;
    }

    ctx->pc = 0x308eb8u;

    // 0x308eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308ebc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x308ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x308ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308ec8: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x308EC8u;
    SET_GPR_U32(ctx, 31, 0x308ED0u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x308EC8u, 0x308ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308ED0u;
label_308ed0:
    // 0x308ed0: 0xc0c2392  jal         func_308E48
    ctx->pc = 0x308ED0u;
    SET_GPR_U32(ctx, 31, 0x308ED8u);
    ctx->pc = 0x308ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308ED0u;
    // 0x308ed4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308E48u, 0x308ED0u, 0x308ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308ED8u;
label_308ed8:
    // 0x308ed8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308ED8u;
    {
        const bool branch_taken_0x308ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308ED8u;
        // 0x308edc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ed8) {
            ctx->pc = 0x308EE8u;
            goto label_308ee8;
        }
    }
    ctx->pc = 0x308EE0u;
    // 0x308ee0: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x308EE0u;
    SET_GPR_U32(ctx, 31, 0x308EE8u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x308EE0u, 0x308EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308EE8u;
label_308ee8:
    // 0x308ee8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x308ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x308eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308ef0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x308ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308ef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x308EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EF8u;
        // 0x308efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308F00u;
}
