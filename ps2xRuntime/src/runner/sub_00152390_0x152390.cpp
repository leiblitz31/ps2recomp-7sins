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

// Function: sub_00152390
// Address: 0x152390 - 0x1523d0
void sub_00152390_0x152390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152390_0x152390");
#endif

    switch (ctx->pc) {
        case 0x1523acu: goto label_1523ac;
        default: break;
    }

    ctx->pc = 0x152390u;

    // 0x152390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x152398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15239c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1523a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1523a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1523a4: 0xc042734  jal         func_109CD0
    ctx->pc = 0x1523A4u;
    SET_GPR_U32(ctx, 31, 0x1523ACu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x1523A4u, 0x1523ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523ACu;
label_1523ac:
    // 0x1523ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1523acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1523b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1523b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1523b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1523b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1523b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1523b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1523bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1523bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1523c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1523C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1523C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1523C8u;
    // 0x1523c8: 0x0  nop
    ctx->pc = 0x1523c8u;
    // NOP
    // 0x1523cc: 0x0  nop
    ctx->pc = 0x1523ccu;
    // NOP
    ctx->pc = 0x1523d0u;
}
