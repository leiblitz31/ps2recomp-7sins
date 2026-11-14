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

// Function: sub_001099C0
// Address: 0x1099c0 - 0x109a00
void sub_001099C0_0x1099c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001099C0_0x1099c0");
#endif

    switch (ctx->pc) {
        case 0x1099dcu: goto label_1099dc;
        default: break;
    }

    ctx->pc = 0x1099c0u;

    // 0x1099c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1099c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1099c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1099c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1099c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1099c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1099cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1099ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1099d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1099d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1099d4: 0xc042734  jal         func_109CD0
    ctx->pc = 0x1099D4u;
    SET_GPR_U32(ctx, 31, 0x1099DCu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x1099D4u, 0x1099DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099DCu;
label_1099dc:
    // 0x1099dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1099dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1099e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1099e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1099e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1099e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1099e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1099e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1099ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1099ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1099f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1099F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1099F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1099F8u;
    // 0x1099f8: 0x0  nop
    ctx->pc = 0x1099f8u;
    // NOP
    // 0x1099fc: 0x0  nop
    ctx->pc = 0x1099fcu;
    // NOP
    ctx->pc = 0x109a00u;
}
