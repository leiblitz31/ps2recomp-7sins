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

// Function: sub_0028F540
// Address: 0x28f540 - 0x28f580
void sub_0028F540_0x28f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F540_0x28f540");
#endif

    switch (ctx->pc) {
        case 0x28f55cu: goto label_28f55c;
        default: break;
    }

    ctx->pc = 0x28f540u;

    // 0x28f540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28f548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28f54c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f550: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28f550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f554: 0xc042734  jal         func_109CD0
    ctx->pc = 0x28F554u;
    SET_GPR_U32(ctx, 31, 0x28F55Cu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x28F554u, 0x28F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F55Cu;
label_28f55c:
    // 0x28f55c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f560: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28f560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28f564: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f56c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28f56cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f570: 0x3e00008  jr          $ra
    ctx->pc = 0x28F570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F578u;
    // 0x28f578: 0x0  nop
    ctx->pc = 0x28f578u;
    // NOP
    // 0x28f57c: 0x0  nop
    ctx->pc = 0x28f57cu;
    // NOP
    ctx->pc = 0x28f580u;
}
