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

// Function: sub_002B0900
// Address: 0x2b0900 - 0x2b0950
void sub_002B0900_0x2b0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0900_0x2b0900");
#endif

    switch (ctx->pc) {
        case 0x2b0930u: goto label_2b0930;
        default: break;
    }

    ctx->pc = 0x2b0900u;

    // 0x2b0900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b0904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0908: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b0908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b090c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0910: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0910u;
    {
        const bool branch_taken_0x2b0910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0910) {
            ctx->pc = 0x2B0934u;
            goto label_2b0934;
        }
    }
    ctx->pc = 0x2B0918u;
    // 0x2b0918: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b0918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b091c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B091Cu;
    {
        const bool branch_taken_0x2b091c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b091c) {
            ctx->pc = 0x2B0934u;
            goto label_2b0934;
        }
    }
    ctx->pc = 0x2B0924u;
    // 0x2b0924: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b0924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0928: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2B0928u;
    SET_GPR_U32(ctx, 31, 0x2B0930u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B0928u, 0x2B0930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0930u;
label_2b0930:
    // 0x2b0930: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2b0930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2b0934:
    // 0x2b0934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0938: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b0938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b093c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B093Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0944u;
    // 0x2b0944: 0x0  nop
    ctx->pc = 0x2b0944u;
    // NOP
    // 0x2b0948: 0x0  nop
    ctx->pc = 0x2b0948u;
    // NOP
    // 0x2b094c: 0x0  nop
    ctx->pc = 0x2b094cu;
    // NOP
    ctx->pc = 0x2b0950u;
}
