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

// Function: sub_0012B3D0
// Address: 0x12b3d0 - 0x12b410
void sub_0012B3D0_0x12b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B3D0_0x12b3d0");
#endif

    switch (ctx->pc) {
        case 0x12b3e8u: goto label_12b3e8;
        case 0x12b3f8u: goto label_12b3f8;
        default: break;
    }

    ctx->pc = 0x12b3d0u;

    // 0x12b3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b3d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12b3dc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x12b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x12b3e0: 0xc04ad44  jal         func_12B510
    ctx->pc = 0x12B3E0u;
    SET_GPR_U32(ctx, 31, 0x12B3E8u);
    ctx->pc = 0x12B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B510u, 0x12B3E0u, 0x12B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3E8u;
label_12b3e8:
    // 0x12b3e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b3ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12b3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b3f0: 0xc04ad04  jal         func_12B410
    ctx->pc = 0x12B3F0u;
    SET_GPR_U32(ctx, 31, 0x12B3F8u);
    ctx->pc = 0x12B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B410u, 0x12B3F0u, 0x12B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3F8u;
label_12b3f8:
    // 0x12b3f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b400: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b404: 0x3e00008  jr          $ra
    ctx->pc = 0x12B404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B40Cu;
    // 0x12b40c: 0x0  nop
    ctx->pc = 0x12b40cu;
    // NOP
    ctx->pc = 0x12b410u;
}
