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

// Function: sub_00459DA0
// Address: 0x459da0 - 0x459e30
void sub_00459DA0_0x459da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459DA0_0x459da0");
#endif

    switch (ctx->pc) {
        case 0x459ddcu: goto label_459ddc;
        case 0x459e1cu: goto label_459e1c;
        default: break;
    }

    ctx->pc = 0x459da0u;

    // 0x459da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x459da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x459da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459da8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x459da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x459dac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x459dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x459db0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459db4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x459db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x459db8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459dbc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x459dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x459dc0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x459DC0u;
    {
        const bool branch_taken_0x459dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x459dc0) {
            ctx->pc = 0x459DF4u;
            goto label_459df4;
        }
    }
    ctx->pc = 0x459DC8u;
    // 0x459dc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459dcc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x459dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x459dd0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x459dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459dd4: 0xc116820  jal         func_45A080
    ctx->pc = 0x459DD4u;
    SET_GPR_U32(ctx, 31, 0x459DDCu);
    ctx->pc = 0x45A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A080u, 0x459DD4u, 0x459DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459DDCu;
label_459ddc:
    // 0x459ddc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x459ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459de0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x459de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x459de4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x459de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x459de8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x459de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x459dec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x459DECu;
    {
        const bool branch_taken_0x459dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x459dec) {
            ctx->pc = 0x459E1Cu;
            goto label_459e1c;
        }
    }
    ctx->pc = 0x459DF4u;
label_459df4:
    // 0x459df4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459df8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x459df8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x459dfc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x459dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459e00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x459e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x459e04: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x459e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459e08: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x459e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x459e0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x459e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x459e10: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x459e10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x459e14: 0xc11678c  jal         func_459E30
    ctx->pc = 0x459E14u;
    SET_GPR_U32(ctx, 31, 0x459E1Cu);
    ctx->pc = 0x459E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459E30u, 0x459E14u, 0x459E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459E1Cu;
label_459e1c:
    // 0x459e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459e20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x459e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x459e24: 0x3e00008  jr          $ra
    ctx->pc = 0x459E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459E2Cu;
    // 0x459e2c: 0x0  nop
    ctx->pc = 0x459e2cu;
    // NOP
    ctx->pc = 0x459e30u;
}
