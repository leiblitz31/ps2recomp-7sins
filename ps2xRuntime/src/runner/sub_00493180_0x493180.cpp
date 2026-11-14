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

// Function: sub_00493180
// Address: 0x493180 - 0x4931d0
void sub_00493180_0x493180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493180_0x493180");
#endif

    switch (ctx->pc) {
        case 0x4931b0u: goto label_4931b0;
        default: break;
    }

    ctx->pc = 0x493180u;

    // 0x493180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x493180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x493184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x493184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x493188: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x493188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x49318c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x49318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493190: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x493190u;
    {
        const bool branch_taken_0x493190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x493190) {
            ctx->pc = 0x4931B4u;
            goto label_4931b4;
        }
    }
    ctx->pc = 0x493198u;
    // 0x493198: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x493198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49319c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x49319Cu;
    {
        const bool branch_taken_0x49319c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49319c) {
            ctx->pc = 0x4931B4u;
            goto label_4931b4;
        }
    }
    ctx->pc = 0x4931A4u;
    // 0x4931a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4931a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4931a8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x4931A8u;
    SET_GPR_U32(ctx, 31, 0x4931B0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x4931A8u, 0x4931B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4931B0u;
label_4931b0:
    // 0x4931b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4931b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_4931b4:
    // 0x4931b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4931b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4931b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4931b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4931bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4931BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4931BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4931C4u;
    // 0x4931c4: 0x0  nop
    ctx->pc = 0x4931c4u;
    // NOP
    // 0x4931c8: 0x0  nop
    ctx->pc = 0x4931c8u;
    // NOP
    // 0x4931cc: 0x0  nop
    ctx->pc = 0x4931ccu;
    // NOP
    ctx->pc = 0x4931d0u;
}
