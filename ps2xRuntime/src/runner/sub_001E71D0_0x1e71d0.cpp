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

// Function: sub_001E71D0
// Address: 0x1e71d0 - 0x1e7220
void sub_001E71D0_0x1e71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E71D0_0x1e71d0");
#endif

    switch (ctx->pc) {
        case 0x1e7200u: goto label_1e7200;
        default: break;
    }

    ctx->pc = 0x1e71d0u;

    // 0x1e71d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e71d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e71d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e71d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e71d8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e71d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e71dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e71e0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E71E0u;
    {
        const bool branch_taken_0x1e71e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e71e0) {
            ctx->pc = 0x1E7204u;
            goto label_1e7204;
        }
    }
    ctx->pc = 0x1E71E8u;
    // 0x1e71e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e71ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E71ECu;
    {
        const bool branch_taken_0x1e71ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e71ec) {
            ctx->pc = 0x1E7204u;
            goto label_1e7204;
        }
    }
    ctx->pc = 0x1E71F4u;
    // 0x1e71f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e71f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e71f8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1E71F8u;
    SET_GPR_U32(ctx, 31, 0x1E7200u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1E71F8u, 0x1E7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7200u;
label_1e7200:
    // 0x1e7200: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1e7200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1e7204:
    // 0x1e7204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7208: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e7208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e720c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E720Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7214u;
    // 0x1e7214: 0x0  nop
    ctx->pc = 0x1e7214u;
    // NOP
    // 0x1e7218: 0x0  nop
    ctx->pc = 0x1e7218u;
    // NOP
    // 0x1e721c: 0x0  nop
    ctx->pc = 0x1e721cu;
    // NOP
    ctx->pc = 0x1e7220u;
}
