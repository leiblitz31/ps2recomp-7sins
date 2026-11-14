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

// Function: sub_0040D8A0
// Address: 0x40d8a0 - 0x40d908
void sub_0040D8A0_0x40d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D8A0_0x40d8a0");
#endif

    ctx->pc = 0x40d8a0u;

    // 0x40d8a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x40d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x40d8a4: 0x8f83bdb8  lw          $v1, -0x4248($gp)
    ctx->pc = 0x40d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950328)));
    // 0x40d8a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x40d8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d8ac: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x40d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x40d8b0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x40d8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40d8b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40d8b8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x40D8B8u;
    {
        const bool branch_taken_0x40d8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D8B8u;
        // 0x40d8bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d8b8) {
            ctx->pc = 0x40D8FCu;
            goto label_40d8fc;
        }
    }
    ctx->pc = 0x40D8C0u;
    // 0x40d8c0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x40d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x40d8c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x40d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x40d8c8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x40D8C8u;
    {
        const bool branch_taken_0x40d8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x40d8c8) {
            ctx->pc = 0x40D8FCu;
            goto label_40d8fc;
        }
    }
    ctx->pc = 0x40D8D0u;
    // 0x40d8d0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x40d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x40d8d4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40D8D4u;
    {
        const bool branch_taken_0x40d8d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x40d8d4) {
            ctx->pc = 0x40D8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40D8D4u;
            // 0x40d8d8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40D8E4u;
            goto label_40d8e4;
        }
    }
    ctx->pc = 0x40D8DCu;
    // 0x40d8dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x40D8DCu;
    {
        const bool branch_taken_0x40d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D8DCu;
        // 0x40d8e0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d8dc) {
            ctx->pc = 0x40D8E8u;
            goto label_40d8e8;
        }
    }
    ctx->pc = 0x40D8E4u;
label_40d8e4:
    // 0x40d8e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x40d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_40d8e8:
    // 0x40d8e8: 0x8f82bdb8  lw          $v0, -0x4248($gp)
    ctx->pc = 0x40d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950328)));
    // 0x40d8ec: 0x24e3e880  addiu       $v1, $a3, -0x1780
    ctx->pc = 0x40d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
    // 0x40d8f0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x40d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x40d8f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x40d8f8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x40d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_40d8fc:
    // 0x40d8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x40D8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D8FCu;
        // 0x40d900: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D904u;
    // 0x40d904: 0x0  nop
    ctx->pc = 0x40d904u;
    // NOP
    ctx->pc = 0x40d908u;
}
