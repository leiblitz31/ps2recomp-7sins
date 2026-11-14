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

// Function: sub_001168D0
// Address: 0x1168d0 - 0x116920
void sub_001168D0_0x1168d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001168D0_0x1168d0");
#endif

    switch (ctx->pc) {
        case 0x116900u: goto label_116900;
        default: break;
    }

    ctx->pc = 0x1168d0u;

    // 0x1168d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1168d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1168d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1168d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1168d8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1168d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1168dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1168dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1168e0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1168E0u;
    {
        const bool branch_taken_0x1168e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1168e0) {
            ctx->pc = 0x116904u;
            goto label_116904;
        }
    }
    ctx->pc = 0x1168E8u;
    // 0x1168e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1168e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1168ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1168ECu;
    {
        const bool branch_taken_0x1168ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1168ec) {
            ctx->pc = 0x116904u;
            goto label_116904;
        }
    }
    ctx->pc = 0x1168F4u;
    // 0x1168f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1168f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1168f8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1168F8u;
    SET_GPR_U32(ctx, 31, 0x116900u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1168F8u, 0x116900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116900u;
label_116900:
    // 0x116900: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x116900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_116904:
    // 0x116904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116908: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x116908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11690c: 0x3e00008  jr          $ra
    ctx->pc = 0x11690Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11690Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116914u;
    // 0x116914: 0x0  nop
    ctx->pc = 0x116914u;
    // NOP
    // 0x116918: 0x0  nop
    ctx->pc = 0x116918u;
    // NOP
    // 0x11691c: 0x0  nop
    ctx->pc = 0x11691cu;
    // NOP
    ctx->pc = 0x116920u;
}
