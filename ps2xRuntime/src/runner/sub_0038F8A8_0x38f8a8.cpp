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

// Function: sub_0038F8A8
// Address: 0x38f8a8 - 0x38f8e8
void sub_0038F8A8_0x38f8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F8A8_0x38f8a8");
#endif

    switch (ctx->pc) {
        case 0x38f8b8u: goto label_38f8b8;
        default: break;
    }

    ctx->pc = 0x38f8a8u;

    // 0x38f8a8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x38f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38f8ac: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x38f8acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x38f8b0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x38f8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f8b4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x38f8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38f8b8:
    // 0x38f8b8: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x38f8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x38f8bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38f8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x38f8c0: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38F8C0u;
    {
        const bool branch_taken_0x38f8c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8C0u;
        // 0x38f8c4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f8c0) {
            ctx->pc = 0x38F8DCu;
            goto label_38f8dc;
        }
    }
    ctx->pc = 0x38F8C8u;
    // 0x38f8c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38f8cc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x38f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x38f8d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38f8d4: 0x1465fff8  bne         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x38F8D4u;
    {
        const bool branch_taken_0x38f8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x38F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8D4u;
        // 0x38f8d8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f8d4) {
            ctx->pc = 0x38F8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f8b8;
        }
    }
    ctx->pc = 0x38F8DCu;
label_38f8dc:
    // 0x38f8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x38F8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8DCu;
        // 0x38f8e0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F8E4u;
    // 0x38f8e4: 0x0  nop
    ctx->pc = 0x38f8e4u;
    // NOP
    ctx->pc = 0x38f8e8u;
}
