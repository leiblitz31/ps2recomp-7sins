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

// Function: sub_004084B0
// Address: 0x4084b0 - 0x4084f0
void sub_004084B0_0x4084b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004084B0_0x4084b0");
#endif

    switch (ctx->pc) {
        case 0x4084d0u: goto label_4084d0;
        case 0x4084e0u: goto label_4084e0;
        default: break;
    }

    ctx->pc = 0x4084b0u;

    // 0x4084b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4084b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4084b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4084b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4084b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4084b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4084bc: 0x8c4400e4  lw          $a0, 0xE4($v0)
    ctx->pc = 0x4084bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x4084c0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4084C0u;
    {
        const bool branch_taken_0x4084c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4084c0) {
            ctx->pc = 0x4084C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4084C0u;
            // 0x4084c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4084D8u;
            goto label_4084d8;
        }
    }
    ctx->pc = 0x4084C8u;
    // 0x4084c8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x4084C8u;
    SET_GPR_U32(ctx, 31, 0x4084D0u);
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x4084C8u, 0x4084D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4084D0u;
label_4084d0:
    // 0x4084d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4084D0u;
    {
        const bool branch_taken_0x4084d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4084D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4084D0u;
        // 0x4084d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4084d0) {
            ctx->pc = 0x4084E4u;
            goto label_4084e4;
        }
    }
    ctx->pc = 0x4084D8u;
label_4084d8:
    // 0x4084d8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x4084D8u;
    SET_GPR_U32(ctx, 31, 0x4084E0u);
    ctx->pc = 0x4084DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4084D8u;
    // 0x4084dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x4084D8u, 0x4084E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4084E0u;
label_4084e0:
    // 0x4084e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4084e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4084e4:
    // 0x4084e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4084E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4084E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4084E4u;
        // 0x4084e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4084E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4084ECu;
    // 0x4084ec: 0x0  nop
    ctx->pc = 0x4084ecu;
    // NOP
    ctx->pc = 0x4084f0u;
}
