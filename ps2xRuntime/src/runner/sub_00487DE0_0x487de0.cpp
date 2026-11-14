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

// Function: sub_00487DE0
// Address: 0x487de0 - 0x487e60
void sub_00487DE0_0x487de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487DE0_0x487de0");
#endif

    switch (ctx->pc) {
        case 0x487e00u: goto label_487e00;
        case 0x487e2cu: goto label_487e2c;
        case 0x487e48u: goto label_487e48;
        default: break;
    }

    ctx->pc = 0x487de0u;

    // 0x487de0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x487de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x487de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x487de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x487de8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x487de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x487dec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x487decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x487df0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x487df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x487df4: 0x24a54070  addiu       $a1, $a1, 0x4070
    ctx->pc = 0x487df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16496));
    // 0x487df8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x487df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x487dfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x487dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_487e00:
    // 0x487e00: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x487e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x487e04: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x487e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x487e08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x487e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x487e0c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x487e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x487e10: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x487e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x487e14: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x487E14u;
    {
        const bool branch_taken_0x487e14 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x487e14) {
            ctx->pc = 0x487E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487e00;
        }
    }
    ctx->pc = 0x487E1Cu;
    // 0x487e1c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x487e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x487e20: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x487e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x487e24: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x487E24u;
    SET_GPR_U32(ctx, 31, 0x487E2Cu);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x487E24u, 0x487E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487E2Cu;
label_487e2c:
    // 0x487e2c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x487e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x487e30: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x487e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x487e34: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x487e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x487e38: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x487e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x487e3c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x487e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x487e40: 0xc104d64  jal         func_413590
    ctx->pc = 0x487E40u;
    SET_GPR_U32(ctx, 31, 0x487E48u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x487E40u, 0x487E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487E48u;
label_487e48:
    // 0x487e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x487e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487e4c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x487e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x487e50: 0x3e00008  jr          $ra
    ctx->pc = 0x487E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487E58u;
    // 0x487e58: 0x0  nop
    ctx->pc = 0x487e58u;
    // NOP
    // 0x487e5c: 0x0  nop
    ctx->pc = 0x487e5cu;
    // NOP
    ctx->pc = 0x487e60u;
}
