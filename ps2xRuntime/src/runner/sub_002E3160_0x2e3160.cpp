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

// Function: sub_002E3160
// Address: 0x2e3160 - 0x2e31a0
void sub_002E3160_0x2e3160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3160_0x2e3160");
#endif

    switch (ctx->pc) {
        case 0x2e317cu: goto label_2e317c;
        default: break;
    }

    ctx->pc = 0x2e3160u;

    // 0x2e3160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e3168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e316c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3170: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e3170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3174: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x2E3174u;
    SET_GPR_U32(ctx, 31, 0x2E317Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x2E3174u, 0x2E317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E317Cu;
label_2e317c:
    // 0x2e317c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3180: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e3180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e3184: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e318c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e318cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3190: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3198u;
    // 0x2e3198: 0x0  nop
    ctx->pc = 0x2e3198u;
    // NOP
    // 0x2e319c: 0x0  nop
    ctx->pc = 0x2e319cu;
    // NOP
    ctx->pc = 0x2e31a0u;
}
