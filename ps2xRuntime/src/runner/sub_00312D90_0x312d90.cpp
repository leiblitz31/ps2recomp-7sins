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

// Function: sub_00312D90
// Address: 0x312d90 - 0x312dc0
void sub_00312D90_0x312d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312D90_0x312d90");
#endif

    ctx->pc = 0x312d90u;

    // 0x312d90: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x312d90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x312d94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x312d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312d98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x312d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x312d9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x312d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x312da0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x312DA0u;
    {
        const bool branch_taken_0x312da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DA0u;
        // 0x312da4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312da0) {
            ctx->pc = 0x312DB4u;
            goto label_312db4;
        }
    }
    ctx->pc = 0x312DA8u;
    // 0x312da8: 0x9482001c  lhu         $v0, 0x1C($a0)
    ctx->pc = 0x312da8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x312dac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x312dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x312db0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x312db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_312db4:
    // 0x312db4: 0x3e00008  jr          $ra
    ctx->pc = 0x312DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DB4u;
        // 0x312db8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312DBCu;
    // 0x312dbc: 0x0  nop
    ctx->pc = 0x312dbcu;
    // NOP
    ctx->pc = 0x312dc0u;
}
