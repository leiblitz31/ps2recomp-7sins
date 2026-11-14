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

// Function: sub_00378A20
// Address: 0x378a20 - 0x378a58
void sub_00378A20_0x378a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378A20_0x378a20");
#endif

    ctx->pc = 0x378a20u;

    // 0x378a20: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x378a20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a24: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x378a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x378a28: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x378A28u;
    {
        const bool branch_taken_0x378a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x378A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A28u;
        // 0x378a2c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a28) {
            ctx->pc = 0x378A4Cu;
            goto label_378a4c;
        }
    }
    ctx->pc = 0x378A30u;
    // 0x378a30: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x378a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x378a34: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x378a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x378a38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x378a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x378a3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x378a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x378a40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x378a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378a44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x378a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x378a48: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x378a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_378a4c:
    // 0x378a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x378A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378A54u;
    // 0x378a54: 0x0  nop
    ctx->pc = 0x378a54u;
    // NOP
    ctx->pc = 0x378a58u;
}
