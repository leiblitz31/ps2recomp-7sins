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

// Function: sub_00138E20
// Address: 0x138e20 - 0x138e60
void sub_00138E20_0x138e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138E20_0x138e20");
#endif

    switch (ctx->pc) {
        case 0x138e44u: goto label_138e44;
        default: break;
    }

    ctx->pc = 0x138e20u;

    // 0x138e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x138e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138e30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138e34: 0xa04300a9  sb          $v1, 0xA9($v0)
    ctx->pc = 0x138e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 169), (uint8_t)GPR_U32(ctx, 3));
    // 0x138e38: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x138e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138e3c: 0xc1140d8  jal         func_450360
    ctx->pc = 0x138E3Cu;
    SET_GPR_U32(ctx, 31, 0x138E44u);
    ctx->pc = 0x450360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450360u, 0x138E3Cu, 0x138E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E44u;
label_138e44:
    // 0x138e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138e48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x138e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x138e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x138E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138E54u;
    // 0x138e54: 0x0  nop
    ctx->pc = 0x138e54u;
    // NOP
    // 0x138e58: 0x0  nop
    ctx->pc = 0x138e58u;
    // NOP
    // 0x138e5c: 0x0  nop
    ctx->pc = 0x138e5cu;
    // NOP
    ctx->pc = 0x138e60u;
}
