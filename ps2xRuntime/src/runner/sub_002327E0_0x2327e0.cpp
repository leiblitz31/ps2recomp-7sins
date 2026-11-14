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

// Function: sub_002327E0
// Address: 0x2327e0 - 0x232830
void sub_002327E0_0x2327e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002327E0_0x2327e0");
#endif

    switch (ctx->pc) {
        case 0x232810u: goto label_232810;
        default: break;
    }

    ctx->pc = 0x2327e0u;

    // 0x2327e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2327e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2327e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2327e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2327e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2327e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2327ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2327ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2327f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2327F0u;
    {
        const bool branch_taken_0x2327f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2327f0) {
            ctx->pc = 0x232814u;
            goto label_232814;
        }
    }
    ctx->pc = 0x2327F8u;
    // 0x2327f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2327f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2327fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2327FCu;
    {
        const bool branch_taken_0x2327fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2327fc) {
            ctx->pc = 0x232814u;
            goto label_232814;
        }
    }
    ctx->pc = 0x232804u;
    // 0x232804: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x232804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232808: 0xc119c5c  jal         func_467170
    ctx->pc = 0x232808u;
    SET_GPR_U32(ctx, 31, 0x232810u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x232808u, 0x232810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232810u;
label_232810:
    // 0x232810: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x232810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_232814:
    // 0x232814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232818: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x232818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23281c: 0x3e00008  jr          $ra
    ctx->pc = 0x23281Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23281Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232824u;
    // 0x232824: 0x0  nop
    ctx->pc = 0x232824u;
    // NOP
    // 0x232828: 0x0  nop
    ctx->pc = 0x232828u;
    // NOP
    // 0x23282c: 0x0  nop
    ctx->pc = 0x23282cu;
    // NOP
    ctx->pc = 0x232830u;
}
