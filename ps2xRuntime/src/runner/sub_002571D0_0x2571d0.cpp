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

// Function: sub_002571D0
// Address: 0x2571d0 - 0x257220
void sub_002571D0_0x2571d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002571D0_0x2571d0");
#endif

    switch (ctx->pc) {
        case 0x257200u: goto label_257200;
        default: break;
    }

    ctx->pc = 0x2571d0u;

    // 0x2571d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2571d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2571d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2571d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2571d8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2571d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2571dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2571dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2571e0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2571E0u;
    {
        const bool branch_taken_0x2571e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2571e0) {
            ctx->pc = 0x257204u;
            goto label_257204;
        }
    }
    ctx->pc = 0x2571E8u;
    // 0x2571e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2571e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2571ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2571ECu;
    {
        const bool branch_taken_0x2571ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2571ec) {
            ctx->pc = 0x257204u;
            goto label_257204;
        }
    }
    ctx->pc = 0x2571F4u;
    // 0x2571f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2571f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2571f8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2571F8u;
    SET_GPR_U32(ctx, 31, 0x257200u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2571F8u, 0x257200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257200u;
label_257200:
    // 0x257200: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x257200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_257204:
    // 0x257204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257208: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x257208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25720c: 0x3e00008  jr          $ra
    ctx->pc = 0x25720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25720Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257214u;
    // 0x257214: 0x0  nop
    ctx->pc = 0x257214u;
    // NOP
    // 0x257218: 0x0  nop
    ctx->pc = 0x257218u;
    // NOP
    // 0x25721c: 0x0  nop
    ctx->pc = 0x25721cu;
    // NOP
    ctx->pc = 0x257220u;
}
