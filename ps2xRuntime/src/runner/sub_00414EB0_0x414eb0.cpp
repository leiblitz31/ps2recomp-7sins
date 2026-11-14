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

// Function: sub_00414EB0
// Address: 0x414eb0 - 0x414ee8
void sub_00414EB0_0x414eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414EB0_0x414eb0");
#endif

    switch (ctx->pc) {
        case 0x414ec0u: goto label_414ec0;
        default: break;
    }

    ctx->pc = 0x414eb0u;

    // 0x414eb0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x414eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x414eb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x414eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414eb8: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x414eb8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x414ebc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x414ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414ec0:
    // 0x414ec0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x414ec0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x414ec4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x414ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x414ec8: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x414ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x414ecc: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x414eccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x414ed0: 0x0  nop
    ctx->pc = 0x414ed0u;
    // NOP
    // 0x414ed4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x414ED4u;
    {
        const bool branch_taken_0x414ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x414ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414ED4u;
        // 0x414ed8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414ed4) {
            ctx->pc = 0x414EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414ec0;
        }
    }
    ctx->pc = 0x414EDCu;
    // 0x414edc: 0x3e00008  jr          $ra
    ctx->pc = 0x414EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414EDCu;
        // 0x414ee0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414EE4u;
    // 0x414ee4: 0x0  nop
    ctx->pc = 0x414ee4u;
    // NOP
    ctx->pc = 0x414ee8u;
}
