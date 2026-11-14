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

// Function: sub_0028DED0
// Address: 0x28ded0 - 0x28df20
void sub_0028DED0_0x28ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DED0_0x28ded0");
#endif

    switch (ctx->pc) {
        case 0x28df00u: goto label_28df00;
        default: break;
    }

    ctx->pc = 0x28ded0u;

    // 0x28ded0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28ded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28ded4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ded8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28dedc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dee0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28DEE0u;
    {
        const bool branch_taken_0x28dee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dee0) {
            ctx->pc = 0x28DF04u;
            goto label_28df04;
        }
    }
    ctx->pc = 0x28DEE8u;
    // 0x28dee8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28deec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DEECu;
    {
        const bool branch_taken_0x28deec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28deec) {
            ctx->pc = 0x28DF04u;
            goto label_28df04;
        }
    }
    ctx->pc = 0x28DEF4u;
    // 0x28def4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28def4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28def8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x28DEF8u;
    SET_GPR_U32(ctx, 31, 0x28DF00u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x28DEF8u, 0x28DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF00u;
label_28df00:
    // 0x28df00: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x28df00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_28df04:
    // 0x28df04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28df04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28df08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28df08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28df0c: 0x3e00008  jr          $ra
    ctx->pc = 0x28DF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DF14u;
    // 0x28df14: 0x0  nop
    ctx->pc = 0x28df14u;
    // NOP
    // 0x28df18: 0x0  nop
    ctx->pc = 0x28df18u;
    // NOP
    // 0x28df1c: 0x0  nop
    ctx->pc = 0x28df1cu;
    // NOP
    ctx->pc = 0x28df20u;
}
