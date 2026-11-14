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

// Function: sub_002461A0
// Address: 0x2461a0 - 0x2461f0
void sub_002461A0_0x2461a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002461A0_0x2461a0");
#endif

    switch (ctx->pc) {
        case 0x2461d0u: goto label_2461d0;
        default: break;
    }

    ctx->pc = 0x2461a0u;

    // 0x2461a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2461a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2461a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2461a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2461a8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2461a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2461ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2461acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2461b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2461B0u;
    {
        const bool branch_taken_0x2461b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2461b0) {
            ctx->pc = 0x2461D4u;
            goto label_2461d4;
        }
    }
    ctx->pc = 0x2461B8u;
    // 0x2461b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2461b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2461bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2461BCu;
    {
        const bool branch_taken_0x2461bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2461bc) {
            ctx->pc = 0x2461D4u;
            goto label_2461d4;
        }
    }
    ctx->pc = 0x2461C4u;
    // 0x2461c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2461c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2461c8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2461C8u;
    SET_GPR_U32(ctx, 31, 0x2461D0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2461C8u, 0x2461D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461D0u;
label_2461d0:
    // 0x2461d0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2461d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2461d4:
    // 0x2461d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2461d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2461d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2461d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2461dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2461DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2461DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2461E4u;
    // 0x2461e4: 0x0  nop
    ctx->pc = 0x2461e4u;
    // NOP
    // 0x2461e8: 0x0  nop
    ctx->pc = 0x2461e8u;
    // NOP
    // 0x2461ec: 0x0  nop
    ctx->pc = 0x2461ecu;
    // NOP
    ctx->pc = 0x2461f0u;
}
