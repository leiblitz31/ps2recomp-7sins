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

// Function: sub_00109070
// Address: 0x109070 - 0x1090c0
void sub_00109070_0x109070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109070_0x109070");
#endif

    switch (ctx->pc) {
        case 0x1090a0u: goto label_1090a0;
        default: break;
    }

    ctx->pc = 0x109070u;

    // 0x109070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x109074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109078: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x109078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10907c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109080: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x109080u;
    {
        const bool branch_taken_0x109080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x109080) {
            ctx->pc = 0x1090A4u;
            goto label_1090a4;
        }
    }
    ctx->pc = 0x109088u;
    // 0x109088: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x109088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10908c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10908Cu;
    {
        const bool branch_taken_0x10908c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10908c) {
            ctx->pc = 0x1090A4u;
            goto label_1090a4;
        }
    }
    ctx->pc = 0x109094u;
    // 0x109094: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x109094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109098: 0xc119c5c  jal         func_467170
    ctx->pc = 0x109098u;
    SET_GPR_U32(ctx, 31, 0x1090A0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x109098u, 0x1090A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090A0u;
label_1090a0:
    // 0x1090a0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1090a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1090a4:
    // 0x1090a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1090a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1090a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1090a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1090ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1090ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1090ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1090B4u;
    // 0x1090b4: 0x0  nop
    ctx->pc = 0x1090b4u;
    // NOP
    // 0x1090b8: 0x0  nop
    ctx->pc = 0x1090b8u;
    // NOP
    // 0x1090bc: 0x0  nop
    ctx->pc = 0x1090bcu;
    // NOP
    ctx->pc = 0x1090c0u;
}
