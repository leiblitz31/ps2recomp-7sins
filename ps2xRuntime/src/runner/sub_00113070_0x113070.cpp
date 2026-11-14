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

// Function: sub_00113070
// Address: 0x113070 - 0x1130d0
void sub_00113070_0x113070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113070_0x113070");
#endif

    switch (ctx->pc) {
        case 0x113088u: goto label_113088;
        case 0x1130a8u: goto label_1130a8;
        default: break;
    }

    ctx->pc = 0x113070u;

    // 0x113070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11307c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11307cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113080: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x113080u;
    SET_GPR_U32(ctx, 31, 0x113088u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x113080u, 0x113088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113088u;
label_113088:
    // 0x113088: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x113088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11308c: 0x24633330  addiu       $v1, $v1, 0x3330
    ctx->pc = 0x11308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13104));
    // 0x113090: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113094: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x113094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x113098: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11309c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1130a0: 0xc044cdc  jal         func_113370
    ctx->pc = 0x1130A0u;
    SET_GPR_U32(ctx, 31, 0x1130A8u);
    ctx->pc = 0x113370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113370u, 0x1130A0u, 0x1130A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130A8u;
label_1130a8:
    // 0x1130a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1130a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1130ac: 0xaf82b9b0  sw          $v0, -0x4650($gp)
    ctx->pc = 0x1130acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 2));
    // 0x1130b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1130b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1130b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1130b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1130b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1130b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1130bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1130BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1130C4u;
    // 0x1130c4: 0x0  nop
    ctx->pc = 0x1130c4u;
    // NOP
    // 0x1130c8: 0x0  nop
    ctx->pc = 0x1130c8u;
    // NOP
    // 0x1130cc: 0x0  nop
    ctx->pc = 0x1130ccu;
    // NOP
    ctx->pc = 0x1130d0u;
}
