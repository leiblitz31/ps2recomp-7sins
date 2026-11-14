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

// Function: sub_0049C2D8
// Address: 0x49c2d8 - 0x49c320
void sub_0049C2D8_0x49c2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C2D8_0x49c2d8");
#endif

    switch (ctx->pc) {
        case 0x49c314u: goto label_49c314;
        default: break;
    }

    ctx->pc = 0x49c2d8u;

    // 0x49c2d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49c2dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x49c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x49c2e0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49C2E0u;
    {
        const bool branch_taken_0x49c2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49c2e0) {
            ctx->pc = 0x49C2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49C2E0u;
            // 0x49c2e4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C2F0u;
            goto label_49c2f0;
        }
    }
    ctx->pc = 0x49C2E8u;
    // 0x49c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x49C2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2E8u;
        // 0x49c2ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C2F0u;
label_49c2f0:
    // 0x49c2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x49C2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2F0u;
        // 0x49c2f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C2F8u;
    // 0x49c2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49c2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49c2fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x49c2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c300: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49c300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x49c304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49c308: 0x2784c198  addiu       $a0, $gp, -0x3E68
    ctx->pc = 0x49c308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951320));
    // 0x49c30c: 0xc12abf8  jal         func_4AAFE0
    ctx->pc = 0x49C30Cu;
    SET_GPR_U32(ctx, 31, 0x49C314u);
    ctx->pc = 0x49C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C30Cu;
    // 0x49c310: 0x24a5c928  addiu       $a1, $a1, -0x36D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAFE0u, 0x49C30Cu, 0x49C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C314u;
label_49c314:
    // 0x49c314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49c318: 0x3e00008  jr          $ra
    ctx->pc = 0x49C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C318u;
        // 0x49c31c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C320u;
}
