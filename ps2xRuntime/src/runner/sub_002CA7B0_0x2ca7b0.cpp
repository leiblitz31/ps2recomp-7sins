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

// Function: sub_002CA7B0
// Address: 0x2ca7b0 - 0x2ca800
void sub_002CA7B0_0x2ca7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA7B0_0x2ca7b0");
#endif

    switch (ctx->pc) {
        case 0x2ca7e0u: goto label_2ca7e0;
        default: break;
    }

    ctx->pc = 0x2ca7b0u;

    // 0x2ca7b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ca7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ca7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca7b8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ca7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ca7bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ca7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca7c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA7C0u;
    {
        const bool branch_taken_0x2ca7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca7c0) {
            ctx->pc = 0x2CA7E4u;
            goto label_2ca7e4;
        }
    }
    ctx->pc = 0x2CA7C8u;
    // 0x2ca7c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ca7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca7cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA7CCu;
    {
        const bool branch_taken_0x2ca7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca7cc) {
            ctx->pc = 0x2CA7E4u;
            goto label_2ca7e4;
        }
    }
    ctx->pc = 0x2CA7D4u;
    // 0x2ca7d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ca7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca7d8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2CA7D8u;
    SET_GPR_U32(ctx, 31, 0x2CA7E0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2CA7D8u, 0x2CA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7E0u;
label_2ca7e0:
    // 0x2ca7e0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2ca7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2ca7e4:
    // 0x2ca7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca7e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2ca7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ca7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA7F4u;
    // 0x2ca7f4: 0x0  nop
    ctx->pc = 0x2ca7f4u;
    // NOP
    // 0x2ca7f8: 0x0  nop
    ctx->pc = 0x2ca7f8u;
    // NOP
    // 0x2ca7fc: 0x0  nop
    ctx->pc = 0x2ca7fcu;
    // NOP
    ctx->pc = 0x2ca800u;
}
