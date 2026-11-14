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

// Function: sub_001E7180
// Address: 0x1e7180 - 0x1e71d0
void sub_001E7180_0x1e7180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7180_0x1e7180");
#endif

    switch (ctx->pc) {
        case 0x1e71b0u: goto label_1e71b0;
        default: break;
    }

    ctx->pc = 0x1e7180u;

    // 0x1e7180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7188: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e7188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e718c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7190: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7190u;
    {
        const bool branch_taken_0x1e7190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7190) {
            ctx->pc = 0x1E71B4u;
            goto label_1e71b4;
        }
    }
    ctx->pc = 0x1E7198u;
    // 0x1e7198: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e7198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e719c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E719Cu;
    {
        const bool branch_taken_0x1e719c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e719c) {
            ctx->pc = 0x1E71B4u;
            goto label_1e71b4;
        }
    }
    ctx->pc = 0x1E71A4u;
    // 0x1e71a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e71a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e71a8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1E71A8u;
    SET_GPR_U32(ctx, 31, 0x1E71B0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1E71A8u, 0x1E71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E71B0u;
label_1e71b0:
    // 0x1e71b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1e71b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1e71b4:
    // 0x1e71b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e71b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e71b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e71b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e71bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E71BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E71BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E71C4u;
    // 0x1e71c4: 0x0  nop
    ctx->pc = 0x1e71c4u;
    // NOP
    // 0x1e71c8: 0x0  nop
    ctx->pc = 0x1e71c8u;
    // NOP
    // 0x1e71cc: 0x0  nop
    ctx->pc = 0x1e71ccu;
    // NOP
    ctx->pc = 0x1e71d0u;
}
