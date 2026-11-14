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

// Function: sub_0014AFA0
// Address: 0x14afa0 - 0x14b000
void sub_0014AFA0_0x14afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AFA0_0x14afa0");
#endif

    switch (ctx->pc) {
        case 0x14afdcu: goto label_14afdc;
        default: break;
    }

    ctx->pc = 0x14afa0u;

    // 0x14afa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14afa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14afa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14afac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14afacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14afb0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x14afb4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x14afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x14afb8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x14afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14afbc: 0x10030008  beq         $zero, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14AFBCu;
    {
        const bool branch_taken_0x14afbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x14afbc) {
            ctx->pc = 0x14AFE0u;
            goto label_14afe0;
        }
    }
    ctx->pc = 0x14AFC4u;
    // 0x14afc4: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x14afc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14afc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14afcc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x14afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14afd0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x14afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14afd4: 0xc052aa4  jal         func_14AA90
    ctx->pc = 0x14AFD4u;
    SET_GPR_U32(ctx, 31, 0x14AFDCu);
    ctx->pc = 0x14AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA90u, 0x14AFD4u, 0x14AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFDCu;
label_14afdc:
    // 0x14afdc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x14afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_14afe0:
    // 0x14afe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14afe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14afe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14afe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14afe8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x14afe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14afec: 0x3e00008  jr          $ra
    ctx->pc = 0x14AFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AFF4u;
    // 0x14aff4: 0x0  nop
    ctx->pc = 0x14aff4u;
    // NOP
    // 0x14aff8: 0x0  nop
    ctx->pc = 0x14aff8u;
    // NOP
    // 0x14affc: 0x0  nop
    ctx->pc = 0x14affcu;
    // NOP
    ctx->pc = 0x14b000u;
}
