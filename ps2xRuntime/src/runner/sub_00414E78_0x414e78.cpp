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

// Function: sub_00414E78
// Address: 0x414e78 - 0x414eb0
void sub_00414E78_0x414e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414E78_0x414e78");
#endif

    switch (ctx->pc) {
        case 0x414e88u: goto label_414e88;
        default: break;
    }

    ctx->pc = 0x414e78u;

    // 0x414e78: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x414e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x414e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x414e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414e80: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x414e80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x414e84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x414e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414e88:
    // 0x414e88: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x414e88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x414e8c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x414E8Cu;
    {
        const bool branch_taken_0x414e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x414E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E8Cu;
        // 0x414e90: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414e8c) {
            ctx->pc = 0x414E9Cu;
            goto label_414e9c;
        }
    }
    ctx->pc = 0x414E94u;
    // 0x414e94: 0x3e00008  jr          $ra
    ctx->pc = 0x414E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E94u;
        // 0x414e98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414E9Cu;
label_414e9c:
    // 0x414e9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x414E9Cu;
    {
        const bool branch_taken_0x414e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x414EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E9Cu;
        // 0x414ea0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414e9c) {
            ctx->pc = 0x414E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414e88;
        }
    }
    ctx->pc = 0x414EA4u;
    // 0x414ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x414EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414EACu;
    // 0x414eac: 0x0  nop
    ctx->pc = 0x414eacu;
    // NOP
    ctx->pc = 0x414eb0u;
}
