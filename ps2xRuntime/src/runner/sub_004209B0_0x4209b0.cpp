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

// Function: sub_004209B0
// Address: 0x4209b0 - 0x420a38
void sub_004209B0_0x4209b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004209B0_0x4209b0");
#endif

    ctx->pc = 0x4209b0u;

    // 0x4209b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4209b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4209b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4209B4u;
    {
        const bool branch_taken_0x4209b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4209B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4209B4u;
        // 0x4209b8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4209b4) {
            ctx->pc = 0x4209D4u;
            goto label_4209d4;
        }
    }
    ctx->pc = 0x4209BCu;
    // 0x4209bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4209bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4209c0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x4209c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4209c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4209c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4209c8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x4209c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4209cc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4209ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4209d0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4209d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4209d4:
    // 0x4209d4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4209d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4209d8: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x4209d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x4209dc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x4209dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x4209e0: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x4209e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4209e4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4209e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4209e8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4209e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4209ec: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x4209ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x4209f0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4209f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4209f4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x4209f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x4209f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4209F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4209FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4209F8u;
        // 0x4209fc: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4209F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420A00u;
    // 0x420a00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x420a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x420a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x420a08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x420A08u;
    {
        const bool branch_taken_0x420a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420a08) {
            ctx->pc = 0x420A2Cu;
            goto label_420a2c;
        }
    }
    ctx->pc = 0x420A10u;
    // 0x420a10: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x420a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x420a14: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x420a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x420a18: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x420a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x420a1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x420a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x420a20: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x420a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x420a24: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x420a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x420a28: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x420a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_420a2c:
    // 0x420a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x420A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420A2Cu;
        // 0x420a30: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420A34u;
    // 0x420a34: 0x0  nop
    ctx->pc = 0x420a34u;
    // NOP
    ctx->pc = 0x420a38u;
}
