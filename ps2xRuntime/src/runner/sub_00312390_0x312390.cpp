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

// Function: sub_00312390
// Address: 0x312390 - 0x3123c8
void sub_00312390_0x312390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312390_0x312390");
#endif

    ctx->pc = 0x312390u;

    // 0x312390: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x312390u;
    {
        const bool branch_taken_0x312390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312390u;
        // 0x312394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312390) {
            ctx->pc = 0x3123BCu;
            goto label_3123bc;
        }
    }
    ctx->pc = 0x312398u;
    // 0x312398: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x312398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31239c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31239Cu;
    {
        const bool branch_taken_0x31239c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31239Cu;
        // 0x3123a0: 0x8f83a584  lw          $v1, -0x5A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31239c) {
            ctx->pc = 0x3123B8u;
            goto label_3123b8;
        }
    }
    ctx->pc = 0x3123A4u;
    // 0x3123a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3123a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3123a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3123a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3123ac: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3123acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3123b0: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3123B0u;
    {
        const bool branch_taken_0x3123b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3123B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123B0u;
        // 0x3123b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123b0) {
            ctx->pc = 0x3123BCu;
            goto label_3123bc;
        }
    }
    ctx->pc = 0x3123B8u;
label_3123b8:
    // 0x3123b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3123b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3123bc:
    // 0x3123bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3123BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3123BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3123C4u;
    // 0x3123c4: 0x0  nop
    ctx->pc = 0x3123c4u;
    // NOP
    ctx->pc = 0x3123c8u;
}
