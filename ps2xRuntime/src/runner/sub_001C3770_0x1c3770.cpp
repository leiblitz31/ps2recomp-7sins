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

// Function: sub_001C3770
// Address: 0x1c3770 - 0x1c37c0
void sub_001C3770_0x1c3770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3770_0x1c3770");
#endif

    switch (ctx->pc) {
        case 0x1c37a0u: goto label_1c37a0;
        default: break;
    }

    ctx->pc = 0x1c3770u;

    // 0x1c3770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3778: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c3778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c377c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3780: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3780u;
    {
        const bool branch_taken_0x1c3780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3780) {
            ctx->pc = 0x1C37A4u;
            goto label_1c37a4;
        }
    }
    ctx->pc = 0x1C3788u;
    // 0x1c3788: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c3788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c378c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C378Cu;
    {
        const bool branch_taken_0x1c378c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c378c) {
            ctx->pc = 0x1C37A4u;
            goto label_1c37a4;
        }
    }
    ctx->pc = 0x1C3794u;
    // 0x1c3794: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c3794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3798: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1C3798u;
    SET_GPR_U32(ctx, 31, 0x1C37A0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1C3798u, 0x1C37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37A0u;
label_1c37a0:
    // 0x1c37a0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c37a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1c37a4:
    // 0x1c37a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c37a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c37a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c37a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c37ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C37ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C37ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C37B4u;
    // 0x1c37b4: 0x0  nop
    ctx->pc = 0x1c37b4u;
    // NOP
    // 0x1c37b8: 0x0  nop
    ctx->pc = 0x1c37b8u;
    // NOP
    // 0x1c37bc: 0x0  nop
    ctx->pc = 0x1c37bcu;
    // NOP
    ctx->pc = 0x1c37c0u;
}
