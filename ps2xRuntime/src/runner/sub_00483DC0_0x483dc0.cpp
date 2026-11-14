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

// Function: sub_00483DC0
// Address: 0x483dc0 - 0x483e20
void sub_00483DC0_0x483dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483DC0_0x483dc0");
#endif

    switch (ctx->pc) {
        case 0x483decu: goto label_483dec;
        default: break;
    }

    ctx->pc = 0x483dc0u;

    // 0x483dc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x483dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x483dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x483dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x483dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x483dcc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x483dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x483dd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x483dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x483dd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x483DD4u;
    {
        const bool branch_taken_0x483dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483dd4) {
            ctx->pc = 0x483DF8u;
            goto label_483df8;
        }
    }
    ctx->pc = 0x483DDCu;
    // 0x483ddc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x483ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x483de0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x483de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x483de4: 0xc07140c  jal         func_1C5030
    ctx->pc = 0x483DE4u;
    SET_GPR_U32(ctx, 31, 0x483DECu);
    ctx->pc = 0x1C5030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5030u, 0x483DE4u, 0x483DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483DECu;
label_483dec:
    // 0x483dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x483DF0u;
    {
        const bool branch_taken_0x483df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483df0) {
            ctx->pc = 0x483DFCu;
            goto label_483dfc;
        }
    }
    ctx->pc = 0x483DF8u;
label_483df8:
    // 0x483df8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x483df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483dfc:
    // 0x483dfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x483dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x483e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483e08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x483e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x483e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x483E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483E14u;
    // 0x483e14: 0x0  nop
    ctx->pc = 0x483e14u;
    // NOP
    // 0x483e18: 0x0  nop
    ctx->pc = 0x483e18u;
    // NOP
    // 0x483e1c: 0x0  nop
    ctx->pc = 0x483e1cu;
    // NOP
    ctx->pc = 0x483e20u;
}
