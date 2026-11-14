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

// Function: sub_0026AFB0
// Address: 0x26afb0 - 0x26b000
void sub_0026AFB0_0x26afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AFB0_0x26afb0");
#endif

    switch (ctx->pc) {
        case 0x26afe0u: goto label_26afe0;
        default: break;
    }

    ctx->pc = 0x26afb0u;

    // 0x26afb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26afb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26afb8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26afbc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26afc0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26AFC0u;
    {
        const bool branch_taken_0x26afc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26afc0) {
            ctx->pc = 0x26AFE4u;
            goto label_26afe4;
        }
    }
    ctx->pc = 0x26AFC8u;
    // 0x26afc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26afcc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AFCCu;
    {
        const bool branch_taken_0x26afcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26afcc) {
            ctx->pc = 0x26AFE4u;
            goto label_26afe4;
        }
    }
    ctx->pc = 0x26AFD4u;
    // 0x26afd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26afd8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26AFD8u;
    SET_GPR_U32(ctx, 31, 0x26AFE0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26AFD8u, 0x26AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AFE0u;
label_26afe0:
    // 0x26afe0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x26afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_26afe4:
    // 0x26afe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26afe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26afe8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26afe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26afec: 0x3e00008  jr          $ra
    ctx->pc = 0x26AFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AFF4u;
    // 0x26aff4: 0x0  nop
    ctx->pc = 0x26aff4u;
    // NOP
    // 0x26aff8: 0x0  nop
    ctx->pc = 0x26aff8u;
    // NOP
    // 0x26affc: 0x0  nop
    ctx->pc = 0x26affcu;
    // NOP
    ctx->pc = 0x26b000u;
}
