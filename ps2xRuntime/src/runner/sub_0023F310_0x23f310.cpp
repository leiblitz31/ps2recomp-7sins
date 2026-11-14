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

// Function: sub_0023F310
// Address: 0x23f310 - 0x23f370
void sub_0023F310_0x23f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F310_0x23f310");
#endif

    switch (ctx->pc) {
        case 0x23f328u: goto label_23f328;
        case 0x23f348u: goto label_23f348;
        default: break;
    }

    ctx->pc = 0x23f310u;

    // 0x23f310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23f318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23f31c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f320: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x23F320u;
    SET_GPR_U32(ctx, 31, 0x23F328u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x23F320u, 0x23F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F328u;
label_23f328:
    // 0x23f328: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23f328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23f32c: 0x24635680  addiu       $v1, $v1, 0x5680
    ctx->pc = 0x23f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22144));
    // 0x23f330: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f334: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23f334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23f338: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f33c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23f340: 0xc08fd7c  jal         func_23F5F0
    ctx->pc = 0x23F340u;
    SET_GPR_U32(ctx, 31, 0x23F348u);
    ctx->pc = 0x23F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F5F0u, 0x23F340u, 0x23F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F348u;
label_23f348:
    // 0x23f348: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f34c: 0xaf82bbf0  sw          $v0, -0x4410($gp)
    ctx->pc = 0x23f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949872), GPR_U32(ctx, 2));
    // 0x23f350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f358: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23f358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23f35c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F364u;
    // 0x23f364: 0x0  nop
    ctx->pc = 0x23f364u;
    // NOP
    // 0x23f368: 0x0  nop
    ctx->pc = 0x23f368u;
    // NOP
    // 0x23f36c: 0x0  nop
    ctx->pc = 0x23f36cu;
    // NOP
    ctx->pc = 0x23f370u;
}
