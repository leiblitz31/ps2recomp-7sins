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

// Function: sub_00117980
// Address: 0x117980 - 0x1179c0
void sub_00117980_0x117980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117980_0x117980");
#endif

    switch (ctx->pc) {
        case 0x11799cu: goto label_11799c;
        default: break;
    }

    ctx->pc = 0x117980u;

    // 0x117980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x117988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11798c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117990: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x117990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117994: 0xc042734  jal         func_109CD0
    ctx->pc = 0x117994u;
    SET_GPR_U32(ctx, 31, 0x11799Cu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x117994u, 0x11799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11799Cu;
label_11799c:
    // 0x11799c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1179a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1179a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1179a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1179a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1179a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1179a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1179ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1179acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1179b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1179B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1179B8u;
    // 0x1179b8: 0x0  nop
    ctx->pc = 0x1179b8u;
    // NOP
    // 0x1179bc: 0x0  nop
    ctx->pc = 0x1179bcu;
    // NOP
    ctx->pc = 0x1179c0u;
}
