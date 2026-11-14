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

// Function: sub_001B7AB0
// Address: 0x1b7ab0 - 0x1b7b00
void sub_001B7AB0_0x1b7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7AB0_0x1b7ab0");
#endif

    switch (ctx->pc) {
        case 0x1b7ae0u: goto label_1b7ae0;
        default: break;
    }

    ctx->pc = 0x1b7ab0u;

    // 0x1b7ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7ab8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b7ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b7abc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7ac0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7AC0u;
    {
        const bool branch_taken_0x1b7ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ac0) {
            ctx->pc = 0x1B7AE4u;
            goto label_1b7ae4;
        }
    }
    ctx->pc = 0x1B7AC8u;
    // 0x1b7ac8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7acc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7ACCu;
    {
        const bool branch_taken_0x1b7acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7acc) {
            ctx->pc = 0x1B7AE4u;
            goto label_1b7ae4;
        }
    }
    ctx->pc = 0x1B7AD4u;
    // 0x1b7ad4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7ad8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1B7AD8u;
    SET_GPR_U32(ctx, 31, 0x1B7AE0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1B7AD8u, 0x1B7AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AE0u;
label_1b7ae0:
    // 0x1b7ae0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1b7ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1b7ae4:
    // 0x1b7ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7ae8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b7ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7aec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AF4u;
    // 0x1b7af4: 0x0  nop
    ctx->pc = 0x1b7af4u;
    // NOP
    // 0x1b7af8: 0x0  nop
    ctx->pc = 0x1b7af8u;
    // NOP
    // 0x1b7afc: 0x0  nop
    ctx->pc = 0x1b7afcu;
    // NOP
    ctx->pc = 0x1b7b00u;
}
