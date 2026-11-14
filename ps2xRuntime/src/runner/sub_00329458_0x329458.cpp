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

// Function: sub_00329458
// Address: 0x329458 - 0x329498
void sub_00329458_0x329458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329458_0x329458");
#endif

    switch (ctx->pc) {
        case 0x329480u: goto label_329480;
        default: break;
    }

    ctx->pc = 0x329458u;

    // 0x329458: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x329458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32945c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32945cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329460: 0x8c432320  lw          $v1, 0x2320($v0)
    ctx->pc = 0x329460u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F2320u));
    // 0x329464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329468: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x329468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32946c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x32946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329470: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x329470u;
    {
        const bool branch_taken_0x329470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x329474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329470u;
        // 0x329474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329470) {
            ctx->pc = 0x329484u;
            goto label_329484;
        }
    }
    ctx->pc = 0x329478u;
    // 0x329478: 0xc0ca6ae  jal         func_329AB8
    ctx->pc = 0x329478u;
    SET_GPR_U32(ctx, 31, 0x329480u);
    ctx->pc = 0x329AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329AB8u, 0x329478u, 0x329480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329480u;
label_329480:
    // 0x329480: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329484:
    // 0x329484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329488: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x329488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32948c: 0x3e00008  jr          $ra
    ctx->pc = 0x32948Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32948Cu;
        // 0x329490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32948Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329494u;
    // 0x329494: 0x0  nop
    ctx->pc = 0x329494u;
    // NOP
    ctx->pc = 0x329498u;
}
