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

// Function: sub_004AC4F8
// Address: 0x4ac4f8 - 0x4ac538
void sub_004AC4F8_0x4ac4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC4F8_0x4ac4f8");
#endif

    switch (ctx->pc) {
        case 0x4ac510u: goto label_4ac510;
        case 0x4ac52cu: goto label_4ac52c;
        default: break;
    }

    ctx->pc = 0x4ac4f8u;

    // 0x4ac4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac4fc: 0x8f82b8a8  lw          $v0, -0x4758($gp)
    ctx->pc = 0x4ac4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949032)));
    // 0x4ac500: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC500u;
    {
        const bool branch_taken_0x4ac500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC500u;
        // 0x4ac504: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac500) {
            ctx->pc = 0x4AC520u;
            goto label_4ac520;
        }
    }
    ctx->pc = 0x4AC508u;
    // 0x4ac508: 0xc12aff4  jal         func_4ABFD0
    ctx->pc = 0x4AC508u;
    SET_GPR_U32(ctx, 31, 0x4AC510u);
    ctx->pc = 0x4ABFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABFD0u, 0x4AC508u, 0x4AC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC510u;
label_4ac510:
    // 0x4ac510: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC510u;
    {
        const bool branch_taken_0x4ac510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac510) {
            ctx->pc = 0x4AC514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC510u;
            // 0x4ac514: 0xaf80b8a8  sw          $zero, -0x4758($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949032), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC520u;
            goto label_4ac520;
        }
    }
    ctx->pc = 0x4AC518u;
    // 0x4ac518: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC518u;
    {
        const bool branch_taken_0x4ac518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC518u;
        // 0x4ac51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac518) {
            ctx->pc = 0x4AC52Cu;
            goto label_4ac52c;
        }
    }
    ctx->pc = 0x4AC520u;
label_4ac520:
    // 0x4ac520: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4ac520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4ac524: 0xc126614  jal         func_499850
    ctx->pc = 0x4AC524u;
    SET_GPR_U32(ctx, 31, 0x4AC52Cu);
    ctx->pc = 0x4AC528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC524u;
    // 0x4ac528: 0x24848a38  addiu       $a0, $a0, -0x75C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x4AC524u, 0x4AC52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC52Cu;
label_4ac52c:
    // 0x4ac52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac530: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC530u;
        // 0x4ac534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC538u;
}
