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

// Function: sub_00112970
// Address: 0x112970 - 0x1129b0
void sub_00112970_0x112970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112970_0x112970");
#endif

    switch (ctx->pc) {
        case 0x11298cu: goto label_11298c;
        default: break;
    }

    ctx->pc = 0x112970u;

    // 0x112970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112978: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x112978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11297c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112980: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112984: 0xc042734  jal         func_109CD0
    ctx->pc = 0x112984u;
    SET_GPR_U32(ctx, 31, 0x11298Cu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x112984u, 0x11298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11298Cu;
label_11298c:
    // 0x11298c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112990: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x112990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x112994: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x112994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11299c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11299cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1129a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1129A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1129A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1129A8u;
    // 0x1129a8: 0x0  nop
    ctx->pc = 0x1129a8u;
    // NOP
    // 0x1129ac: 0x0  nop
    ctx->pc = 0x1129acu;
    // NOP
    ctx->pc = 0x1129b0u;
}
