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

// Function: sub_00413188
// Address: 0x413188 - 0x4131d0
void sub_00413188_0x413188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413188_0x413188");
#endif

    ctx->pc = 0x413188u;

    // 0x413188: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x413188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x41318c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x41318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x413190: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x413190u;
    {
        const bool branch_taken_0x413190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x413190) {
            ctx->pc = 0x4131C4u;
            goto label_4131c4;
        }
    }
    ctx->pc = 0x413198u;
    // 0x413198: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x413198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x41319c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41319Cu;
    {
        const bool branch_taken_0x41319c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4131A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41319Cu;
        // 0x4131a0: 0xa2102a  slt         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41319c) {
            ctx->pc = 0x4131ACu;
            goto label_4131ac;
        }
    }
    ctx->pc = 0x4131A4u;
    // 0x4131a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4131A4u;
    {
        const bool branch_taken_0x4131a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4131a4) {
            ctx->pc = 0x4131A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4131A4u;
            // 0x4131a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4131B8u;
            goto label_4131b8;
        }
    }
    ctx->pc = 0x4131ACu;
label_4131ac:
    // 0x4131ac: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x4131acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4131b0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4131b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x4131b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4131b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4131b8:
    // 0x4131b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4131b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4131bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4131BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4131C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4131BCu;
        // 0x4131c0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4131BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4131C4u;
label_4131c4:
    // 0x4131c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4131C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4131C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4131C4u;
        // 0x4131c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4131C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4131CCu;
    // 0x4131cc: 0x0  nop
    ctx->pc = 0x4131ccu;
    // NOP
    ctx->pc = 0x4131d0u;
}
