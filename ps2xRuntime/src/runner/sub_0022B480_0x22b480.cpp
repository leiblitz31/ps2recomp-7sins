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

// Function: sub_0022B480
// Address: 0x22b480 - 0x22b4c0
void sub_0022B480_0x22b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B480_0x22b480");
#endif

    switch (ctx->pc) {
        case 0x22b49cu: goto label_22b49c;
        default: break;
    }

    ctx->pc = 0x22b480u;

    // 0x22b480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22b488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22b48c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b490: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b494: 0xc042734  jal         func_109CD0
    ctx->pc = 0x22B494u;
    SET_GPR_U32(ctx, 31, 0x22B49Cu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x22B494u, 0x22B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B49Cu;
label_22b49c:
    // 0x22b49c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b4a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22b4a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b4ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22b4acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22b4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x22B4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B4B8u;
    // 0x22b4b8: 0x0  nop
    ctx->pc = 0x22b4b8u;
    // NOP
    // 0x22b4bc: 0x0  nop
    ctx->pc = 0x22b4bcu;
    // NOP
    ctx->pc = 0x22b4c0u;
}
