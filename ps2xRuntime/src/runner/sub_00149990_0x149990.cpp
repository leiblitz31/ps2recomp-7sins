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

// Function: sub_00149990
// Address: 0x149990 - 0x1499e0
void sub_00149990_0x149990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149990_0x149990");
#endif

    switch (ctx->pc) {
        case 0x1499b4u: goto label_1499b4;
        case 0x1499c4u: goto label_1499c4;
        default: break;
    }

    ctx->pc = 0x149990u;

    // 0x149990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149998: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x149998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x14999c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1499a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1499a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1499a4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1499A4u;
    {
        const bool branch_taken_0x1499a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1499a4) {
            ctx->pc = 0x1499BCu;
            goto label_1499bc;
        }
    }
    ctx->pc = 0x1499ACu;
    // 0x1499ac: 0xc0b3cf8  jal         func_2CF3E0
    ctx->pc = 0x1499ACu;
    SET_GPR_U32(ctx, 31, 0x1499B4u);
    ctx->pc = 0x2CF3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF3E0u, 0x1499ACu, 0x1499B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499B4u;
label_1499b4:
    // 0x1499b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1499B4u;
    {
        const bool branch_taken_0x1499b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1499b4) {
            ctx->pc = 0x1499C4u;
            goto label_1499c4;
        }
    }
    ctx->pc = 0x1499BCu;
label_1499bc:
    // 0x1499bc: 0xc052640  jal         func_149900
    ctx->pc = 0x1499BCu;
    SET_GPR_U32(ctx, 31, 0x1499C4u);
    ctx->pc = 0x149900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149900u, 0x1499BCu, 0x1499C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499C4u;
label_1499c4:
    // 0x1499c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1499c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1499c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1499c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1499cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1499ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1499d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1499D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1499D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1499D8u;
    // 0x1499d8: 0x0  nop
    ctx->pc = 0x1499d8u;
    // NOP
    // 0x1499dc: 0x0  nop
    ctx->pc = 0x1499dcu;
    // NOP
    ctx->pc = 0x1499e0u;
}
