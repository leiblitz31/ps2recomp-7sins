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

// Function: sub_001121D0
// Address: 0x1121d0 - 0x112220
void sub_001121D0_0x1121d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001121D0_0x1121d0");
#endif

    switch (ctx->pc) {
        case 0x112200u: goto label_112200;
        default: break;
    }

    ctx->pc = 0x1121d0u;

    // 0x1121d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1121d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1121d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1121d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1121d8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1121d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1121dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1121dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1121e0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1121E0u;
    {
        const bool branch_taken_0x1121e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121e0) {
            ctx->pc = 0x112204u;
            goto label_112204;
        }
    }
    ctx->pc = 0x1121E8u;
    // 0x1121e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1121e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1121ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1121ECu;
    {
        const bool branch_taken_0x1121ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121ec) {
            ctx->pc = 0x112204u;
            goto label_112204;
        }
    }
    ctx->pc = 0x1121F4u;
    // 0x1121f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1121f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1121f8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1121F8u;
    SET_GPR_U32(ctx, 31, 0x112200u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1121F8u, 0x112200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112200u;
label_112200:
    // 0x112200: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x112200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_112204:
    // 0x112204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112208: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x112208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11220c: 0x3e00008  jr          $ra
    ctx->pc = 0x11220Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11220Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112214u;
    // 0x112214: 0x0  nop
    ctx->pc = 0x112214u;
    // NOP
    // 0x112218: 0x0  nop
    ctx->pc = 0x112218u;
    // NOP
    // 0x11221c: 0x0  nop
    ctx->pc = 0x11221cu;
    // NOP
    ctx->pc = 0x112220u;
}
