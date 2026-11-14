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

// Function: sub_0041C9E0
// Address: 0x41c9e0 - 0x41ca10
void sub_0041C9E0_0x41c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C9E0_0x41c9e0");
#endif

    ctx->pc = 0x41c9e0u;

    // 0x41c9e0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x41c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x41c9e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x41c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x41c9e8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x41c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x41c9ec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x41c9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41c9f0: 0x28a40009  slti        $a0, $a1, 0x9
    ctx->pc = 0x41c9f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x41c9f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41C9F4u;
    {
        const bool branch_taken_0x41c9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9F4u;
        // 0x41c9f8: 0x2443001c  addiu       $v1, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c9f4) {
            ctx->pc = 0x41CA08u;
            goto label_41ca08;
        }
    }
    ctx->pc = 0x41C9FCu;
    // 0x41c9fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x41c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41ca00: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x41ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x41ca04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41ca08:
    // 0x41ca08: 0x3e00008  jr          $ra
    ctx->pc = 0x41CA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA08u;
        // 0x41ca0c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CA10u;
}
