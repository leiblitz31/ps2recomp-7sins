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

// Function: sub_003D4BF8
// Address: 0x3d4bf8 - 0x3d4c50
void sub_003D4BF8_0x3d4bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4BF8_0x3d4bf8");
#endif

    switch (ctx->pc) {
        case 0x3d4c18u: goto label_3d4c18;
        default: break;
    }

    ctx->pc = 0x3d4bf8u;

    // 0x3d4bf8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4bfc: 0x8c43b1e4  lw          $v1, -0x4E1C($v0)
    ctx->pc = 0x3d4bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1E4u));
    // 0x3d4c00: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x3d4c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d4c04: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x3d4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3d4c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4C08u;
    {
        const bool branch_taken_0x3d4c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C08u;
        // 0x3d4c0c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4c08) {
            ctx->pc = 0x3D4C20u;
            goto label_3d4c20;
        }
    }
    ctx->pc = 0x3D4C10u;
    // 0x3d4c10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4C10u;
    {
        const bool branch_taken_0x3d4c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C10u;
        // 0x3d4c14: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4c10) {
            ctx->pc = 0x3D4C24u;
            goto label_3d4c24;
        }
    }
    ctx->pc = 0x3D4C18u;
label_3d4c18:
    // 0x3d4c18: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C18u;
        // 0x3d4c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4C20u;
label_3d4c20:
    // 0x3d4c20: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3d4c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_3d4c24:
    // 0x3d4c24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D4C24u;
    {
        const bool branch_taken_0x3d4c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C24u;
        // 0x3d4c28: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4c24) {
            ctx->pc = 0x3D4C40u;
            goto label_3d4c40;
        }
    }
    ctx->pc = 0x3D4C2Cu;
    // 0x3d4c2c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d4c30: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3d4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d4c34: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x3d4c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x3d4c38: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3D4C38u;
    {
        const bool branch_taken_0x3d4c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d4c38) {
            ctx->pc = 0x3D4C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4c18;
        }
    }
    ctx->pc = 0x3D4C40u;
label_3d4c40:
    // 0x3d4c40: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x3d4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x3d4c44: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C44u;
        // 0x3d4c48: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4C4Cu;
    // 0x3d4c4c: 0x0  nop
    ctx->pc = 0x3d4c4cu;
    // NOP
    ctx->pc = 0x3d4c50u;
}
