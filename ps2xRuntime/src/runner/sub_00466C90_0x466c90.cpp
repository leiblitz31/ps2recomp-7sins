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

// Function: sub_00466C90
// Address: 0x466c90 - 0x466ce0
void sub_00466C90_0x466c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466C90_0x466c90");
#endif

    switch (ctx->pc) {
        case 0x466cc0u: goto label_466cc0;
        default: break;
    }

    ctx->pc = 0x466c90u;

    // 0x466c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x466c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x466c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466c98: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x466c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x466c9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x466c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466ca0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x466CA0u;
    {
        const bool branch_taken_0x466ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x466ca0) {
            ctx->pc = 0x466CC4u;
            goto label_466cc4;
        }
    }
    ctx->pc = 0x466CA8u;
    // 0x466ca8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x466ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466cac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x466CACu;
    {
        const bool branch_taken_0x466cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x466cac) {
            ctx->pc = 0x466CC4u;
            goto label_466cc4;
        }
    }
    ctx->pc = 0x466CB4u;
    // 0x466cb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x466cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466cb8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x466CB8u;
    SET_GPR_U32(ctx, 31, 0x466CC0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x466CB8u, 0x466CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466CC0u;
label_466cc0:
    // 0x466cc0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x466cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_466cc4:
    // 0x466cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466cc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x466cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x466ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x466CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466CD4u;
    // 0x466cd4: 0x0  nop
    ctx->pc = 0x466cd4u;
    // NOP
    // 0x466cd8: 0x0  nop
    ctx->pc = 0x466cd8u;
    // NOP
    // 0x466cdc: 0x0  nop
    ctx->pc = 0x466cdcu;
    // NOP
    ctx->pc = 0x466ce0u;
}
