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

// Function: sub_003BCD80
// Address: 0x3bcd80 - 0x3bcdc8
void sub_003BCD80_0x3bcd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCD80_0x3bcd80");
#endif

    switch (ctx->pc) {
        case 0x3bcda0u: goto label_3bcda0;
        default: break;
    }

    ctx->pc = 0x3bcd80u;

    // 0x3bcd80: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3bcd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3bcd84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bcd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcd88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bcd8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3bcd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bcd90: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3BCD90u;
    {
        const bool branch_taken_0x3bcd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD90u;
        // 0x3bcd94: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcd90) {
            ctx->pc = 0x3BCDBCu;
            goto label_3bcdbc;
        }
    }
    ctx->pc = 0x3BCD98u;
    // 0x3bcd98: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3bcd98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcd9c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3bcd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bcda0:
    // 0x3bcda0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3bcda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3bcda4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bcda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bcda8: 0x0  nop
    ctx->pc = 0x3bcda8u;
    // NOP
    // 0x3bcdac: 0x0  nop
    ctx->pc = 0x3bcdacu;
    // NOP
    // 0x3bcdb0: 0x0  nop
    ctx->pc = 0x3bcdb0u;
    // NOP
    // 0x3bcdb4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BCDB4u;
    {
        const bool branch_taken_0x3bcdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BCDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDB4u;
        // 0x3bcdb8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcdb4) {
            ctx->pc = 0x3BCDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bcda0;
        }
    }
    ctx->pc = 0x3BCDBCu;
label_3bcdbc:
    // 0x3bcdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDBCu;
        // 0x3bcdc0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCDC4u;
    // 0x3bcdc4: 0x0  nop
    ctx->pc = 0x3bcdc4u;
    // NOP
    ctx->pc = 0x3bcdc8u;
}
