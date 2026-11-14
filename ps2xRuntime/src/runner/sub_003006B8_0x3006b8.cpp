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

// Function: sub_003006B8
// Address: 0x3006b8 - 0x3006e0
void sub_003006B8_0x3006b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003006B8_0x3006b8");
#endif

    switch (ctx->pc) {
        case 0x3006d0u: goto label_3006d0;
        default: break;
    }

    ctx->pc = 0x3006b8u;

    // 0x3006b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3006b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3006bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3006bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3006c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3006C0u;
    {
        const bool branch_taken_0x3006c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3006C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006C0u;
        // 0x3006c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3006c0) {
            ctx->pc = 0x3006D0u;
            goto label_3006d0;
        }
    }
    ctx->pc = 0x3006C8u;
    // 0x3006c8: 0xc0bfd7e  jal         func_2FF5F8
    ctx->pc = 0x3006C8u;
    SET_GPR_U32(ctx, 31, 0x3006D0u);
    ctx->pc = 0x2FF5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF5F8u, 0x3006C8u, 0x3006D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3006D0u;
label_3006d0:
    // 0x3006d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3006d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3006d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3006d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3006d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3006D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3006DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006D8u;
        // 0x3006dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3006D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3006E0u;
}
