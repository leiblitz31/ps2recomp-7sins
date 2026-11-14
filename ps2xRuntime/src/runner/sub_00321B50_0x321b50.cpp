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

// Function: sub_00321B50
// Address: 0x321b50 - 0x321bc0
void sub_00321B50_0x321b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321B50_0x321b50");
#endif

    ctx->pc = 0x321b50u;

    // 0x321b50: 0x8f82bce0  lw          $v0, -0x4320($gp)
    ctx->pc = 0x321b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
    // 0x321b54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x321b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x321b58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x321b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x321b5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x321b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321b60: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x321B60u;
    {
        const bool branch_taken_0x321b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x321B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B60u;
        // 0x321b64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b60) {
            ctx->pc = 0x321B74u;
            goto label_321b74;
        }
    }
    ctx->pc = 0x321B68u;
    // 0x321b68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x321b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x321b6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x321B6Cu;
    {
        const bool branch_taken_0x321b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321b6c) {
            ctx->pc = 0x321B78u;
            goto label_321b78;
        }
    }
    ctx->pc = 0x321B74u;
label_321b74:
    // 0x321b74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x321b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321b78:
    // 0x321b78: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x321B78u;
    {
        const bool branch_taken_0x321b78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x321b78) {
            ctx->pc = 0x321BB4u;
            goto label_321bb4;
        }
    }
    ctx->pc = 0x321B80u;
    // 0x321b80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x321b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x321b84: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x321B84u;
    {
        const bool branch_taken_0x321b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B84u;
        // 0x321b88: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b84) {
            ctx->pc = 0x321BACu;
            goto label_321bac;
        }
    }
    ctx->pc = 0x321B8Cu;
    // 0x321b8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x321b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x321b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x321b94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x321B94u;
    {
        const bool branch_taken_0x321b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321b94) {
            ctx->pc = 0x321BACu;
            goto label_321bac;
        }
    }
    ctx->pc = 0x321B9Cu;
    // 0x321b9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x321ba0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x321ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x321ba4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x321ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x321ba8: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x321ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_321bac:
    // 0x321bac: 0x3e00008  jr          $ra
    ctx->pc = 0x321BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BACu;
        // 0x321bb0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321BB4u;
label_321bb4:
    // 0x321bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x321BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BB4u;
        // 0x321bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321BBCu;
    // 0x321bbc: 0x0  nop
    ctx->pc = 0x321bbcu;
    // NOP
    ctx->pc = 0x321bc0u;
}
