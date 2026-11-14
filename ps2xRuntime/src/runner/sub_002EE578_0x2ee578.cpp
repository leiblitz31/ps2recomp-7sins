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

// Function: sub_002EE578
// Address: 0x2ee578 - 0x2ee5b0
void sub_002EE578_0x2ee578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE578_0x2ee578");
#endif

    switch (ctx->pc) {
        case 0x2ee590u: goto label_2ee590;
        default: break;
    }

    ctx->pc = 0x2ee578u;

    // 0x2ee578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee580: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ee580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee584: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ee584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ee588: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EE588u;
    SET_GPR_U32(ctx, 31, 0x2EE590u);
    ctx->pc = 0x2EE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE588u;
    // 0x2ee58c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EE588u, 0x2EE590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE590u;
label_2ee590:
    // 0x2ee590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ee594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee598: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ee598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee59c: 0xac900014  sw          $s0, 0x14($a0)
    ctx->pc = 0x2ee59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
    // 0x2ee5a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee5a4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2ee5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2ee5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5A8u;
        // 0x2ee5ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE5B0u;
}
