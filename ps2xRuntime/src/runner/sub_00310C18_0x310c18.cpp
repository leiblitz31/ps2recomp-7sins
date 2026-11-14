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

// Function: sub_00310C18
// Address: 0x310c18 - 0x310c48
void sub_00310C18_0x310c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310C18_0x310c18");
#endif

    ctx->pc = 0x310c18u;

    // 0x310c18: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x310c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x310c1c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x310c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x310c20: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x310c20u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x310c24: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x310c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x310c28: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x310C28u;
    {
        const bool branch_taken_0x310c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c28) {
            ctx->pc = 0x310C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310C28u;
            // 0x310c2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310C30u;
            goto label_310c30;
        }
    }
    ctx->pc = 0x310C30u;
label_310c30:
    // 0x310c30: 0x1012  mflo        $v0
    ctx->pc = 0x310c30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x310c34: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x310c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x310c38: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x310c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x310C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C3Cu;
        // 0x310c40: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310C44u;
    // 0x310c44: 0x0  nop
    ctx->pc = 0x310c44u;
    // NOP
    ctx->pc = 0x310c48u;
}
