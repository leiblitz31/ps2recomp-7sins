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

// Function: sub_002938E0
// Address: 0x2938e0 - 0x293930
void sub_002938E0_0x2938e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002938E0_0x2938e0");
#endif

    switch (ctx->pc) {
        case 0x293910u: goto label_293910;
        default: break;
    }

    ctx->pc = 0x2938e0u;

    // 0x2938e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2938e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2938e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2938e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2938e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2938e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2938ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2938ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2938f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2938F0u;
    {
        const bool branch_taken_0x2938f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2938f0) {
            ctx->pc = 0x293914u;
            goto label_293914;
        }
    }
    ctx->pc = 0x2938F8u;
    // 0x2938f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2938f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2938fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2938FCu;
    {
        const bool branch_taken_0x2938fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2938fc) {
            ctx->pc = 0x293914u;
            goto label_293914;
        }
    }
    ctx->pc = 0x293904u;
    // 0x293904: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x293904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293908: 0xc119c5c  jal         func_467170
    ctx->pc = 0x293908u;
    SET_GPR_U32(ctx, 31, 0x293910u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x293908u, 0x293910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293910u;
label_293910:
    // 0x293910: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x293910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_293914:
    // 0x293914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293918: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x293918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29391c: 0x3e00008  jr          $ra
    ctx->pc = 0x29391Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29391Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293924u;
    // 0x293924: 0x0  nop
    ctx->pc = 0x293924u;
    // NOP
    // 0x293928: 0x0  nop
    ctx->pc = 0x293928u;
    // NOP
    // 0x29392c: 0x0  nop
    ctx->pc = 0x29392cu;
    // NOP
    ctx->pc = 0x293930u;
}
