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

// Function: sub_00109DB0
// Address: 0x109db0 - 0x109e20
void sub_00109DB0_0x109db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109DB0_0x109db0");
#endif

    switch (ctx->pc) {
        case 0x109dfcu: goto label_109dfc;
        default: break;
    }

    ctx->pc = 0x109db0u;

    // 0x109db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x109db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x109dbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x109dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x109dc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x109dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109dc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109dc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109DC8u;
    {
        const bool branch_taken_0x109dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109dc8) {
            ctx->pc = 0x109DDCu;
            goto label_109ddc;
        }
    }
    ctx->pc = 0x109DD0u;
    // 0x109dd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x109dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109dd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109DD4u;
    {
        const bool branch_taken_0x109dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109dd4) {
            ctx->pc = 0x109DE8u;
            goto label_109de8;
        }
    }
    ctx->pc = 0x109DDCu;
label_109ddc:
    // 0x109ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x109ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109de0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x109DE0u;
    {
        const bool branch_taken_0x109de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109de0) {
            ctx->pc = 0x109E04u;
            goto label_109e04;
        }
    }
    ctx->pc = 0x109DE8u;
label_109de8:
    // 0x109de8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x109de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109dec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x109decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109df0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x109df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109df4: 0xc119204  jal         func_464810
    ctx->pc = 0x109DF4u;
    SET_GPR_U32(ctx, 31, 0x109DFCu);
    ctx->pc = 0x464810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464810u, 0x109DF4u, 0x109DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DFCu;
label_109dfc:
    // 0x109dfc: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x109dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x109e00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x109e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_109e04:
    // 0x109e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109e08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x109e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x109e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x109E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109E14u;
    // 0x109e14: 0x0  nop
    ctx->pc = 0x109e14u;
    // NOP
    // 0x109e18: 0x0  nop
    ctx->pc = 0x109e18u;
    // NOP
    // 0x109e1c: 0x0  nop
    ctx->pc = 0x109e1cu;
    // NOP
    ctx->pc = 0x109e20u;
}
