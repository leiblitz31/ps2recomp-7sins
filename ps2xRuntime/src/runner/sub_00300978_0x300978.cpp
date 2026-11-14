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

// Function: sub_00300978
// Address: 0x300978 - 0x3009c0
void sub_00300978_0x300978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300978_0x300978");
#endif

    ctx->pc = 0x300978u;

    // 0x300978: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x300978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x30097c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30097cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x300980: 0x2442fa40  addiu       $v0, $v0, -0x5C0
    ctx->pc = 0x300980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965824));
    // 0x300984: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x300984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x300988: 0x3e00008  jr          $ra
    ctx->pc = 0x300988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300988u;
        // 0x30098c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300990u;
    // 0x300990: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x300990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x300994: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x300994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x300998: 0x2442fa40  addiu       $v0, $v0, -0x5C0
    ctx->pc = 0x300998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965824));
    // 0x30099c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3009a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3009a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3009a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3009A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3009A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009A4u;
        // 0x3009a8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3009A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3009ACu;
    // 0x3009ac: 0x0  nop
    ctx->pc = 0x3009acu;
    // NOP
    // 0x3009b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3009b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3009b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3009B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3009B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009B4u;
        // 0x3009b8: 0x2442f898  addiu       $v0, $v0, -0x768 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3009B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3009BCu;
    // 0x3009bc: 0x0  nop
    ctx->pc = 0x3009bcu;
    // NOP
    ctx->pc = 0x3009c0u;
}
