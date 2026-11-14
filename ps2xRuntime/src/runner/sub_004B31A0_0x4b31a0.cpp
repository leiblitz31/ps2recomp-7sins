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

// Function: sub_004B31A0
// Address: 0x4b31a0 - 0x4b31e0
void sub_004B31A0_0x4b31a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B31A0_0x4b31a0");
#endif

    switch (ctx->pc) {
        case 0x4b31b8u: goto label_4b31b8;
        case 0x4b31d4u: goto label_4b31d4;
        default: break;
    }

    ctx->pc = 0x4b31a0u;

    // 0x4b31a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b31a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b31a4: 0x8f82b910  lw          $v0, -0x46F0($gp)
    ctx->pc = 0x4b31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949136)));
    // 0x4b31a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B31A8u;
    {
        const bool branch_taken_0x4b31a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B31A8u;
        // 0x4b31ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b31a8) {
            ctx->pc = 0x4B31C8u;
            goto label_4b31c8;
        }
    }
    ctx->pc = 0x4B31B0u;
    // 0x4b31b0: 0xc12cea6  jal         func_4B3A98
    ctx->pc = 0x4B31B0u;
    SET_GPR_U32(ctx, 31, 0x4B31B8u);
    ctx->pc = 0x4B3A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3A98u, 0x4B31B0u, 0x4B31B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B31B8u;
label_4b31b8:
    // 0x4b31b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B31B8u;
    {
        const bool branch_taken_0x4b31b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b31b8) {
            ctx->pc = 0x4B31BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B31B8u;
            // 0x4b31bc: 0xaf80b910  sw          $zero, -0x46F0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B31C8u;
            goto label_4b31c8;
        }
    }
    ctx->pc = 0x4B31C0u;
    // 0x4b31c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B31C0u;
    {
        const bool branch_taken_0x4b31c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B31C0u;
        // 0x4b31c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b31c0) {
            ctx->pc = 0x4B31D4u;
            goto label_4b31d4;
        }
    }
    ctx->pc = 0x4B31C8u;
label_4b31c8:
    // 0x4b31c8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b31c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b31cc: 0xc126614  jal         func_499850
    ctx->pc = 0x4B31CCu;
    SET_GPR_U32(ctx, 31, 0x4B31D4u);
    ctx->pc = 0x4B31D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B31CCu;
    // 0x4b31d0: 0x2484ed60  addiu       $a0, $a0, -0x12A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x4B31CCu, 0x4B31D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B31D4u;
label_4b31d4:
    // 0x4b31d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b31d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b31d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B31D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B31D8u;
        // 0x4b31dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B31D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B31E0u;
}
