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

// Function: sub_00158B80
// Address: 0x158b80 - 0x158bd0
void sub_00158B80_0x158b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158B80_0x158b80");
#endif

    switch (ctx->pc) {
        case 0x158bb0u: goto label_158bb0;
        default: break;
    }

    ctx->pc = 0x158b80u;

    // 0x158b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158b88: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x158b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x158b8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x158b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158b90: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x158B90u;
    {
        const bool branch_taken_0x158b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b90) {
            ctx->pc = 0x158BB4u;
            goto label_158bb4;
        }
    }
    ctx->pc = 0x158B98u;
    // 0x158b98: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158b9c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158B9Cu;
    {
        const bool branch_taken_0x158b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b9c) {
            ctx->pc = 0x158BB4u;
            goto label_158bb4;
        }
    }
    ctx->pc = 0x158BA4u;
    // 0x158ba4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x158ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158ba8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x158BA8u;
    SET_GPR_U32(ctx, 31, 0x158BB0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x158BA8u, 0x158BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BB0u;
label_158bb0:
    // 0x158bb0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x158bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_158bb4:
    // 0x158bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158bb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x158bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x158bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x158BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158BC4u;
    // 0x158bc4: 0x0  nop
    ctx->pc = 0x158bc4u;
    // NOP
    // 0x158bc8: 0x0  nop
    ctx->pc = 0x158bc8u;
    // NOP
    // 0x158bcc: 0x0  nop
    ctx->pc = 0x158bccu;
    // NOP
    ctx->pc = 0x158bd0u;
}
