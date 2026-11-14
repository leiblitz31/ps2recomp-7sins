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

// Function: sub_00301768
// Address: 0x301768 - 0x3017b8
void sub_00301768_0x301768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301768_0x301768");
#endif

    switch (ctx->pc) {
        case 0x301778u: goto label_301778;
        case 0x301788u: goto label_301788;
        default: break;
    }

    ctx->pc = 0x301768u;

    // 0x301768: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x301768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x30176c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x30176Cu;
    {
        const bool branch_taken_0x30176c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30176c) {
            ctx->pc = 0x3017ACu;
            goto label_3017ac;
        }
    }
    ctx->pc = 0x301774u;
    // 0x301774: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x301774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_301778:
    // 0x301778: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x301778u;
    {
        const bool branch_taken_0x301778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301778) {
            ctx->pc = 0x30177Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301778u;
            // 0x30177c: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3017A4u;
            goto label_3017a4;
        }
    }
    ctx->pc = 0x301780u;
    // 0x301780: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x301780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301784: 0x0  nop
    ctx->pc = 0x301784u;
    // NOP
label_301788:
    // 0x301788: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301788u;
    {
        const bool branch_taken_0x301788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x301788) {
            ctx->pc = 0x30178Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301788u;
            // 0x30178c: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301798u;
            goto label_301798;
        }
    }
    ctx->pc = 0x301790u;
    // 0x301790: 0x3e00008  jr          $ra
    ctx->pc = 0x301790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301790u;
        // 0x301794: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301798u;
label_301798:
    // 0x301798: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x301798u;
    {
        const bool branch_taken_0x301798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x301798) {
            ctx->pc = 0x30179Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301798u;
            // 0x30179c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301788;
        }
    }
    ctx->pc = 0x3017A0u;
    // 0x3017a0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3017a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3017a4:
    // 0x3017a4: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3017A4u;
    {
        const bool branch_taken_0x3017a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3017a4) {
            ctx->pc = 0x3017A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3017A4u;
            // 0x3017a8: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301778;
        }
    }
    ctx->pc = 0x3017ACu;
label_3017ac:
    // 0x3017ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3017ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3017B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017ACu;
        // 0x3017b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3017ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3017B4u;
    // 0x3017b4: 0x0  nop
    ctx->pc = 0x3017b4u;
    // NOP
    ctx->pc = 0x3017b8u;
}
