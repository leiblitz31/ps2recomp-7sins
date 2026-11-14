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

// Function: sub_002A0280
// Address: 0x2a0280 - 0x2a02b0
void sub_002A0280_0x2a0280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0280_0x2a0280");
#endif

    switch (ctx->pc) {
        case 0x2a029cu: goto label_2a029c;
        default: break;
    }

    ctx->pc = 0x2a0280u;

    // 0x2a0280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a0280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a0284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a0288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a0288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a028c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0290: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2a0290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2a0294: 0xc121d18  jal         func_487460
    ctx->pc = 0x2A0294u;
    SET_GPR_U32(ctx, 31, 0x2A029Cu);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x2A0294u, 0x2A029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A029Cu;
label_2a029c:
    // 0x2a029c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a029cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a02a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a02a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a02a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A02A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A02A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A02ACu;
    // 0x2a02ac: 0x0  nop
    ctx->pc = 0x2a02acu;
    // NOP
    ctx->pc = 0x2a02b0u;
}
