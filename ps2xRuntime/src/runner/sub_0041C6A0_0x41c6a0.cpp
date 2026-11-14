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

// Function: sub_0041C6A0
// Address: 0x41c6a0 - 0x41c6d8
void sub_0041C6A0_0x41c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C6A0_0x41c6a0");
#endif

    switch (ctx->pc) {
        case 0x41c6a0u: goto label_41c6a0;
        case 0x41c6a4u: goto label_41c6a4;
        case 0x41c6a8u: goto label_41c6a8;
        case 0x41c6acu: goto label_41c6ac;
        case 0x41c6b0u: goto label_41c6b0;
        case 0x41c6b4u: goto label_41c6b4;
        case 0x41c6b8u: goto label_41c6b8;
        case 0x41c6bcu: goto label_41c6bc;
        case 0x41c6c0u: goto label_41c6c0;
        case 0x41c6c4u: goto label_41c6c4;
        case 0x41c6c8u: goto label_41c6c8;
        case 0x41c6ccu: goto label_41c6cc;
        case 0x41c6d0u: goto label_41c6d0;
        case 0x41c6d4u: goto label_41c6d4;
        default: break;
    }

    ctx->pc = 0x41c6a0u;

label_41c6a0:
    // 0x41c6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41c6a4:
    // 0x41c6a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41c6a8:
    // 0x41c6a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41c6ac:
    // 0x41c6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41c6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c6b0:
    // 0x41c6b0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x41c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_41c6b4:
    // 0x41c6b4: 0x8c62e8d4  lw          $v0, -0x172C($v1)
    ctx->pc = 0x41c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961364)));
label_41c6b8:
    // 0x41c6b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41c6bc:
    // 0x41c6bc: 0x40f809  jalr        $v0
label_41c6c0:
    if (ctx->pc == 0x41C6C0u) {
        ctx->pc = 0x41C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6BCu;
        // 0x41c6c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C6C4u;
        goto label_41c6c4;
    }
    ctx->pc = 0x41C6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C6C4u);
        ctx->pc = 0x41C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6BCu;
        // 0x41c6c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C6BCu, 0x41C6C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C6C4u;
label_41c6c4:
    // 0x41c6c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41c6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c6c8:
    // 0x41c6c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41c6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41c6cc:
    // 0x41c6cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41c6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41c6d0:
    // 0x41c6d0: 0x3e00008  jr          $ra
label_41c6d4:
    if (ctx->pc == 0x41C6D4u) {
        ctx->pc = 0x41C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6D0u;
        // 0x41c6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C6D8u;
        goto label_fallthrough_0x41c6d0;
    }
    ctx->pc = 0x41C6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6D0u;
        // 0x41c6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41c6d0:
    ctx->pc = 0x41C6D8u;
}
