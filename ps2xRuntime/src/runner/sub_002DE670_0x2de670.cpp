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

// Function: sub_002DE670
// Address: 0x2de670 - 0x2de6c0
void sub_002DE670_0x2de670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE670_0x2de670");
#endif

    switch (ctx->pc) {
        case 0x2de6a0u: goto label_2de6a0;
        default: break;
    }

    ctx->pc = 0x2de670u;

    // 0x2de670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de678: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2de678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2de67c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2de67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de680: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DE680u;
    {
        const bool branch_taken_0x2de680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de680) {
            ctx->pc = 0x2DE6A4u;
            goto label_2de6a4;
        }
    }
    ctx->pc = 0x2DE688u;
    // 0x2de688: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2de688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de68c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE68Cu;
    {
        const bool branch_taken_0x2de68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de68c) {
            ctx->pc = 0x2DE6A4u;
            goto label_2de6a4;
        }
    }
    ctx->pc = 0x2DE694u;
    // 0x2de694: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2de694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de698: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2DE698u;
    SET_GPR_U32(ctx, 31, 0x2DE6A0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2DE698u, 0x2DE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6A0u;
label_2de6a0:
    // 0x2de6a0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2de6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2de6a4:
    // 0x2de6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de6a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2de6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2de6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE6B4u;
    // 0x2de6b4: 0x0  nop
    ctx->pc = 0x2de6b4u;
    // NOP
    // 0x2de6b8: 0x0  nop
    ctx->pc = 0x2de6b8u;
    // NOP
    // 0x2de6bc: 0x0  nop
    ctx->pc = 0x2de6bcu;
    // NOP
    ctx->pc = 0x2de6c0u;
}
