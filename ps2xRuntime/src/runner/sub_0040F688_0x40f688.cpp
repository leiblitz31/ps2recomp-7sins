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

// Function: sub_0040F688
// Address: 0x40f688 - 0x40f6c0
void sub_0040F688_0x40f688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F688_0x40f688");
#endif

    switch (ctx->pc) {
        case 0x40f688u: goto label_40f688;
        case 0x40f68cu: goto label_40f68c;
        case 0x40f690u: goto label_40f690;
        case 0x40f694u: goto label_40f694;
        case 0x40f698u: goto label_40f698;
        case 0x40f69cu: goto label_40f69c;
        case 0x40f6a0u: goto label_40f6a0;
        case 0x40f6a4u: goto label_40f6a4;
        case 0x40f6a8u: goto label_40f6a8;
        case 0x40f6acu: goto label_40f6ac;
        case 0x40f6b0u: goto label_40f6b0;
        case 0x40f6b4u: goto label_40f6b4;
        case 0x40f6b8u: goto label_40f6b8;
        case 0x40f6bcu: goto label_40f6bc;
        default: break;
    }

    ctx->pc = 0x40f688u;

label_40f688:
    // 0x40f688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40f688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40f68c:
    // 0x40f68c: 0x8f86bdc0  lw          $a2, -0x4240($gp)
    ctx->pc = 0x40f68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950336)));
label_40f690:
    // 0x40f690: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40f690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40f694:
    // 0x40f694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40f694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40f698:
    // 0x40f698: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x40f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_40f69c:
    // 0x40f69c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x40f69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40f6a0:
    // 0x40f6a0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x40f6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_40f6a4:
    // 0x40f6a4: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x40f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_40f6a8:
    // 0x40f6a8: 0x40f809  jalr        $v0
label_40f6ac:
    if (ctx->pc == 0x40F6ACu) {
        ctx->pc = 0x40F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6A8u;
        // 0x40f6ac: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F6B0u;
        goto label_40f6b0;
    }
    ctx->pc = 0x40F6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F6B0u);
        ctx->pc = 0x40F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6A8u;
        // 0x40f6ac: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F6A8u, 0x40F6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F6B0u;
label_40f6b0:
    // 0x40f6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40f6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40f6b4:
    // 0x40f6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f6b8:
    // 0x40f6b8: 0x3e00008  jr          $ra
label_40f6bc:
    if (ctx->pc == 0x40F6BCu) {
        ctx->pc = 0x40F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6B8u;
        // 0x40f6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F6C0u;
        goto label_fallthrough_0x40f6b8;
    }
    ctx->pc = 0x40F6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6B8u;
        // 0x40f6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40f6b8:
    ctx->pc = 0x40F6C0u;
}
