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

// Function: sub_004AE228
// Address: 0x4ae228 - 0x4ae250
void sub_004AE228_0x4ae228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE228_0x4ae228");
#endif

    switch (ctx->pc) {
        case 0x4ae244u: goto label_4ae244;
        default: break;
    }

    ctx->pc = 0x4ae228u;

    // 0x4ae228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae22c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae230: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x4ae230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x4ae234: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE234u;
    {
        const bool branch_taken_0x4ae234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE234u;
        // 0x4ae238: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae234) {
            ctx->pc = 0x4AE248u;
            goto label_4ae248;
        }
    }
    ctx->pc = 0x4AE23Cu;
    // 0x4ae23c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AE23Cu;
    SET_GPR_U32(ctx, 31, 0x4AE244u);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AE23Cu, 0x4AE244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE244u;
label_4ae244:
    // 0x4ae244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae248:
    // 0x4ae248: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE248u;
        // 0x4ae24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE250u;
}
