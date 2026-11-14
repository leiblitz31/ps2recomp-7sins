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

// Function: sub_002100B0
// Address: 0x2100b0 - 0x210100
void sub_002100B0_0x2100b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002100B0_0x2100b0");
#endif

    switch (ctx->pc) {
        case 0x2100e0u: goto label_2100e0;
        default: break;
    }

    ctx->pc = 0x2100b0u;

    // 0x2100b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2100b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2100b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2100b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2100b8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2100b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2100bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2100bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2100c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2100C0u;
    {
        const bool branch_taken_0x2100c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2100c0) {
            ctx->pc = 0x2100E4u;
            goto label_2100e4;
        }
    }
    ctx->pc = 0x2100C8u;
    // 0x2100c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2100c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2100cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2100CCu;
    {
        const bool branch_taken_0x2100cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2100cc) {
            ctx->pc = 0x2100E4u;
            goto label_2100e4;
        }
    }
    ctx->pc = 0x2100D4u;
    // 0x2100d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2100d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2100d8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2100D8u;
    SET_GPR_U32(ctx, 31, 0x2100E0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2100D8u, 0x2100E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100E0u;
label_2100e0:
    // 0x2100e0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2100e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2100e4:
    // 0x2100e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2100e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2100e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2100e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2100ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2100ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2100ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2100F4u;
    // 0x2100f4: 0x0  nop
    ctx->pc = 0x2100f4u;
    // NOP
    // 0x2100f8: 0x0  nop
    ctx->pc = 0x2100f8u;
    // NOP
    // 0x2100fc: 0x0  nop
    ctx->pc = 0x2100fcu;
    // NOP
    ctx->pc = 0x210100u;
}
