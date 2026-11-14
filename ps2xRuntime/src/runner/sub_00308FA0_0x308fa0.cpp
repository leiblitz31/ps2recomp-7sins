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

// Function: sub_00308FA0
// Address: 0x308fa0 - 0x308ff0
void sub_00308FA0_0x308fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308FA0_0x308fa0");
#endif

    switch (ctx->pc) {
        case 0x308fb8u: goto label_308fb8;
        case 0x308fc4u: goto label_308fc4;
        case 0x308fd4u: goto label_308fd4;
        default: break;
    }

    ctx->pc = 0x308fa0u;

    // 0x308fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308fa8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x308fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x308fac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308fb0: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x308FB0u;
    SET_GPR_U32(ctx, 31, 0x308FB8u);
    ctx->pc = 0x308FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FB0u;
    // 0x308fb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x308FB0u, 0x308FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FB8u;
label_308fb8:
    // 0x308fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fbc: 0xc0c23c0  jal         func_308F00
    ctx->pc = 0x308FBCu;
    SET_GPR_U32(ctx, 31, 0x308FC4u);
    ctx->pc = 0x308FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FBCu;
    // 0x308fc0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308F00u, 0x308FBCu, 0x308FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FC4u;
label_308fc4:
    // 0x308fc4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308FC4u;
    {
        const bool branch_taken_0x308fc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FC4u;
        // 0x308fc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308fc4) {
            ctx->pc = 0x308FD4u;
            goto label_308fd4;
        }
    }
    ctx->pc = 0x308FCCu;
    // 0x308fcc: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x308FCCu;
    SET_GPR_U32(ctx, 31, 0x308FD4u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x308FCCu, 0x308FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FD4u;
label_308fd4:
    // 0x308fd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x308fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x308fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308fdc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x308fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x308FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FE4u;
        // 0x308fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308FECu;
    // 0x308fec: 0x0  nop
    ctx->pc = 0x308fecu;
    // NOP
    ctx->pc = 0x308ff0u;
}
