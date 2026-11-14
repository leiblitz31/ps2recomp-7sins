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

// Function: sub_002853C0
// Address: 0x2853c0 - 0x285420
void sub_002853C0_0x2853c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002853C0_0x2853c0");
#endif

    switch (ctx->pc) {
        case 0x2853e4u: goto label_2853e4;
        case 0x28540cu: goto label_28540c;
        default: break;
    }

    ctx->pc = 0x2853c0u;

    // 0x2853c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2853c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2853c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2853c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2853c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2853c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2853cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2853ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2853d0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2853d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2853d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2853d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2853d8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2853d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2853dc: 0xc0a1530  jal         func_2854C0
    ctx->pc = 0x2853DCu;
    SET_GPR_U32(ctx, 31, 0x2853E4u);
    ctx->pc = 0x2854C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2854C0u, 0x2853DCu, 0x2853E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2853E4u;
label_2853e4:
    // 0x2853e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2853e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2853e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2853e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2853ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2853ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2853f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2853f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2853f4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2853f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2853f8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2853f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2853fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2853fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x285400: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285404: 0xc0a1508  jal         func_285420
    ctx->pc = 0x285404u;
    SET_GPR_U32(ctx, 31, 0x28540Cu);
    ctx->pc = 0x285420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285420u, 0x285404u, 0x28540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28540Cu;
label_28540c:
    // 0x28540c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285414: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x285414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x285418: 0x3e00008  jr          $ra
    ctx->pc = 0x285418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285420u;
}
