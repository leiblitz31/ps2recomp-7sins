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

// Function: sub_002656F0
// Address: 0x2656f0 - 0x265740
void sub_002656F0_0x2656f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002656F0_0x2656f0");
#endif

    switch (ctx->pc) {
        case 0x265720u: goto label_265720;
        default: break;
    }

    ctx->pc = 0x2656f0u;

    // 0x2656f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2656f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2656f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2656f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2656f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2656f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2656fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2656fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265700: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x265700u;
    {
        const bool branch_taken_0x265700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265700) {
            ctx->pc = 0x265724u;
            goto label_265724;
        }
    }
    ctx->pc = 0x265708u;
    // 0x265708: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x265708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26570c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26570Cu;
    {
        const bool branch_taken_0x26570c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26570c) {
            ctx->pc = 0x265724u;
            goto label_265724;
        }
    }
    ctx->pc = 0x265714u;
    // 0x265714: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x265714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265718: 0xc119c5c  jal         func_467170
    ctx->pc = 0x265718u;
    SET_GPR_U32(ctx, 31, 0x265720u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x265718u, 0x265720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265720u;
label_265720:
    // 0x265720: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x265720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_265724:
    // 0x265724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265728: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x265728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26572c: 0x3e00008  jr          $ra
    ctx->pc = 0x26572Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26572Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265734u;
    // 0x265734: 0x0  nop
    ctx->pc = 0x265734u;
    // NOP
    // 0x265738: 0x0  nop
    ctx->pc = 0x265738u;
    // NOP
    // 0x26573c: 0x0  nop
    ctx->pc = 0x26573cu;
    // NOP
    ctx->pc = 0x265740u;
}
