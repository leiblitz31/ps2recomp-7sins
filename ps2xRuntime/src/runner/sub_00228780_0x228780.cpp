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

// Function: sub_00228780
// Address: 0x228780 - 0x2287c0
void sub_00228780_0x228780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228780_0x228780");
#endif

    switch (ctx->pc) {
        case 0x22879cu: goto label_22879c;
        default: break;
    }

    ctx->pc = 0x228780u;

    // 0x228780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x228784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x228788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22878c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228790: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x228790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228794: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x228794u;
    SET_GPR_U32(ctx, 31, 0x22879Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x228794u, 0x22879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22879Cu;
label_22879c:
    // 0x22879c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2287a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2287a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2287a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2287a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2287a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2287a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2287ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2287acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2287b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2287B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2287B8u;
    // 0x2287b8: 0x0  nop
    ctx->pc = 0x2287b8u;
    // NOP
    // 0x2287bc: 0x0  nop
    ctx->pc = 0x2287bcu;
    // NOP
    ctx->pc = 0x2287c0u;
}
