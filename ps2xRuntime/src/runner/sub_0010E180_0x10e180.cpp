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

// Function: sub_0010E180
// Address: 0x10e180 - 0x10e1e0
void sub_0010E180_0x10e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E180_0x10e180");
#endif

    switch (ctx->pc) {
        case 0x10e1a4u: goto label_10e1a4;
        case 0x10e1ccu: goto label_10e1cc;
        default: break;
    }

    ctx->pc = 0x10e180u;

    // 0x10e180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e188: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e18c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10e18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10e190: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x10e190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x10e194: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e198: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10e198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e19c: 0xc0438a0  jal         func_10E280
    ctx->pc = 0x10E19Cu;
    SET_GPR_U32(ctx, 31, 0x10E1A4u);
    ctx->pc = 0x10E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E280u, 0x10E19Cu, 0x10E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E1A4u;
label_10e1a4:
    // 0x10e1a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e1a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10e1ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e1b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e1b4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x10e1b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x10e1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e1bc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x10e1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10e1c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e1c4: 0xc043878  jal         func_10E1E0
    ctx->pc = 0x10E1C4u;
    SET_GPR_U32(ctx, 31, 0x10E1CCu);
    ctx->pc = 0x10E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E1E0u, 0x10E1C4u, 0x10E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E1CCu;
label_10e1cc:
    // 0x10e1cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e1d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10e1d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10e1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E1E0u;
}
