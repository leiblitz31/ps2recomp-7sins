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

// Function: sub_003E2888
// Address: 0x3e2888 - 0x3e28d0
void sub_003E2888_0x3e2888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2888_0x3e2888");
#endif

    ctx->pc = 0x3e2888u;

    // 0x3e2888: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E2888u;
    {
        const bool branch_taken_0x3e2888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2888) {
            ctx->pc = 0x3E28C4u;
            goto label_3e28c4;
        }
    }
    ctx->pc = 0x3E2890u;
    // 0x3e2890: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2890u;
    {
        const bool branch_taken_0x3e2890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2890) {
            ctx->pc = 0x3E28C4u;
            goto label_3e28c4;
        }
    }
    ctx->pc = 0x3E2898u;
    // 0x3e2898: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2898u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e289c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3e289cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3e28a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E28A0u;
    {
        const bool branch_taken_0x3e28a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e28a0) {
            ctx->pc = 0x3E28C4u;
            goto label_3e28c4;
        }
    }
    ctx->pc = 0x3E28A8u;
    // 0x3e28a8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E28A8u;
    {
        const bool branch_taken_0x3e28a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E28A8u;
        // 0x3e28ac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e28a8) {
            ctx->pc = 0x3E28C4u;
            goto label_3e28c4;
        }
    }
    ctx->pc = 0x3E28B0u;
    // 0x3e28b0: 0x94a40024  lhu         $a0, 0x24($a1)
    ctx->pc = 0x3e28b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x3e28b4: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x3e28b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3e28b8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3e28b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x3e28bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E28BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E28BCu;
        // 0x3e28c0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E28BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E28C4u;
label_3e28c4:
    // 0x3e28c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E28C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E28C4u;
        // 0x3e28c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E28C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E28CCu;
    // 0x3e28cc: 0x0  nop
    ctx->pc = 0x3e28ccu;
    // NOP
    ctx->pc = 0x3e28d0u;
}
