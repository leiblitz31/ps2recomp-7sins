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

// Function: sub_004851E0
// Address: 0x4851e0 - 0x485230
void sub_004851E0_0x4851e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004851E0_0x4851e0");
#endif

    switch (ctx->pc) {
        case 0x485210u: goto label_485210;
        default: break;
    }

    ctx->pc = 0x4851e0u;

    // 0x4851e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4851e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4851e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4851e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4851e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4851e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4851ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4851ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4851f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4851F0u;
    {
        const bool branch_taken_0x4851f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4851f0) {
            ctx->pc = 0x485214u;
            goto label_485214;
        }
    }
    ctx->pc = 0x4851F8u;
    // 0x4851f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4851f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4851fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4851FCu;
    {
        const bool branch_taken_0x4851fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4851fc) {
            ctx->pc = 0x485214u;
            goto label_485214;
        }
    }
    ctx->pc = 0x485204u;
    // 0x485204: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x485204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485208: 0xc119c5c  jal         func_467170
    ctx->pc = 0x485208u;
    SET_GPR_U32(ctx, 31, 0x485210u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x485208u, 0x485210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485210u;
label_485210:
    // 0x485210: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x485210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_485214:
    // 0x485214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485218: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x485218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48521c: 0x3e00008  jr          $ra
    ctx->pc = 0x48521Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48521Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485224u;
    // 0x485224: 0x0  nop
    ctx->pc = 0x485224u;
    // NOP
    // 0x485228: 0x0  nop
    ctx->pc = 0x485228u;
    // NOP
    // 0x48522c: 0x0  nop
    ctx->pc = 0x48522cu;
    // NOP
    ctx->pc = 0x485230u;
}
