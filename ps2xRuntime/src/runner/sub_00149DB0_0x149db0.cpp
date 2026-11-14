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

// Function: sub_00149DB0
// Address: 0x149db0 - 0x149e50
void sub_00149DB0_0x149db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149DB0_0x149db0");
#endif

    switch (ctx->pc) {
        case 0x149ddcu: goto label_149ddc;
        case 0x149decu: goto label_149dec;
        case 0x149e00u: goto label_149e00;
        case 0x149e10u: goto label_149e10;
        case 0x149e28u: goto label_149e28;
        default: break;
    }

    ctx->pc = 0x149db0u;

    // 0x149db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149dbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x149dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x149dc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x149dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149dc4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x149dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x149dc8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x149DC8u;
    {
        const bool branch_taken_0x149dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149dc8) {
            ctx->pc = 0x149E34u;
            goto label_149e34;
        }
    }
    ctx->pc = 0x149DD0u;
    // 0x149dd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149dd4: 0xc0527a4  jal         func_149E90
    ctx->pc = 0x149DD4u;
    SET_GPR_U32(ctx, 31, 0x149DDCu);
    ctx->pc = 0x149E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E90u, 0x149DD4u, 0x149DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DDCu;
label_149ddc:
    // 0x149ddc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149de0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x149de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149de4: 0xc054654  jal         func_151950
    ctx->pc = 0x149DE4u;
    SET_GPR_U32(ctx, 31, 0x149DECu);
    ctx->pc = 0x151950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151950u, 0x149DE4u, 0x149DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DECu;
label_149dec:
    // 0x149dec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149df0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x149df0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149df4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149df8: 0xc05279c  jal         func_149E70
    ctx->pc = 0x149DF8u;
    SET_GPR_U32(ctx, 31, 0x149E00u);
    ctx->pc = 0x149E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E70u, 0x149DF8u, 0x149E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E00u;
label_149e00:
    // 0x149e00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x149e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x149e04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149e08: 0xc0527a4  jal         func_149E90
    ctx->pc = 0x149E08u;
    SET_GPR_U32(ctx, 31, 0x149E10u);
    ctx->pc = 0x149E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E90u, 0x149E08u, 0x149E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E10u;
label_149e10:
    // 0x149e10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x149e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x149e14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149e18: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x149e18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149e1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149e20: 0xc052794  jal         func_149E50
    ctx->pc = 0x149E20u;
    SET_GPR_U32(ctx, 31, 0x149E28u);
    ctx->pc = 0x149E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E50u, 0x149E20u, 0x149E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E28u;
label_149e28:
    // 0x149e28: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x149e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x149e2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x149e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149e30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x149e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_149e34:
    // 0x149e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149e3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x149e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149e40: 0x3e00008  jr          $ra
    ctx->pc = 0x149E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149E48u;
    // 0x149e48: 0x0  nop
    ctx->pc = 0x149e48u;
    // NOP
    // 0x149e4c: 0x0  nop
    ctx->pc = 0x149e4cu;
    // NOP
    ctx->pc = 0x149e50u;
}
