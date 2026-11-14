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

// Function: sub_003771B0
// Address: 0x3771b0 - 0x3771e8
void sub_003771B0_0x3771b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003771B0_0x3771b0");
#endif

    ctx->pc = 0x3771b0u;

    // 0x3771b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3771b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3771b4: 0x2442c430  addiu       $v0, $v0, -0x3BD0
    ctx->pc = 0x3771b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x3771b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3771b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C438u));
    // 0x3771bc: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x3771bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x61C460u));
    // 0x3771c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3771c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3771c4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3771c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3771c8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x3771c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3771cc: 0x510c3  sra         $v0, $a1, 3
    ctx->pc = 0x3771ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 3));
    // 0x3771d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3771d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3771d4: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x3771d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x3771d8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3771d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3771dc: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x3771dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3771e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3771E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3771E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3771E0u;
        // 0x3771e4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3771E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3771E8u;
}
