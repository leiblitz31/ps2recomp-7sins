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

// Function: sub_002C4410
// Address: 0x2c4410 - 0x2c4440
void sub_002C4410_0x2c4410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4410_0x2c4410");
#endif

    switch (ctx->pc) {
        case 0x2c4428u: goto label_2c4428;
        default: break;
    }

    ctx->pc = 0x2c4410u;

    // 0x2c4410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c4418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c441c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4420: 0xc068ea0  jal         func_1A3A80
    ctx->pc = 0x2C4420u;
    SET_GPR_U32(ctx, 31, 0x2C4428u);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x2C4420u, 0x2C4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4428u;
label_2c4428:
    // 0x2c4428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c442c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c442cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c4430: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4438u;
    // 0x2c4438: 0x0  nop
    ctx->pc = 0x2c4438u;
    // NOP
    // 0x2c443c: 0x0  nop
    ctx->pc = 0x2c443cu;
    // NOP
    ctx->pc = 0x2c4440u;
}
