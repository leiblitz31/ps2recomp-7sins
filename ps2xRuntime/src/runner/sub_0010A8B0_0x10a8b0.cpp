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

// Function: sub_0010A8B0
// Address: 0x10a8b0 - 0x10a910
void sub_0010A8B0_0x10a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A8B0_0x10a8b0");
#endif

    switch (ctx->pc) {
        case 0x10a8d4u: goto label_10a8d4;
        case 0x10a8fcu: goto label_10a8fc;
        default: break;
    }

    ctx->pc = 0x10a8b0u;

    // 0x10a8b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10a8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a8b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10a8bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10a8c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x10a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x10a8c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a8c8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a8cc: 0xc042a6c  jal         func_10A9B0
    ctx->pc = 0x10A8CCu;
    SET_GPR_U32(ctx, 31, 0x10A8D4u);
    ctx->pc = 0x10A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9B0u, 0x10A8CCu, 0x10A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8D4u;
label_10a8d4:
    // 0x10a8d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a8d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10a8dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a8e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a8e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x10a8e8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x10a8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a8ec: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x10a8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10a8f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a8f4: 0xc042a44  jal         func_10A910
    ctx->pc = 0x10A8F4u;
    SET_GPR_U32(ctx, 31, 0x10A8FCu);
    ctx->pc = 0x10A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A910u, 0x10A8F4u, 0x10A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8FCu;
label_10a8fc:
    // 0x10a8fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a904: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10a904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10a908: 0x3e00008  jr          $ra
    ctx->pc = 0x10A908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A910u;
}
