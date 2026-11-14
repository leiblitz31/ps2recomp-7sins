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

// Function: sub_00250B80
// Address: 0x250b80 - 0x250bd0
void sub_00250B80_0x250b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250B80_0x250b80");
#endif

    switch (ctx->pc) {
        case 0x250ba4u: goto label_250ba4;
        default: break;
    }

    ctx->pc = 0x250b80u;

    // 0x250b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x250b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x250b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250b88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x250b8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x250b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x250b90: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x250b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x250b94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x250b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250b9c: 0xc0942f4  jal         func_250BD0
    ctx->pc = 0x250B9Cu;
    SET_GPR_U32(ctx, 31, 0x250BA4u);
    ctx->pc = 0x250BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250BD0u, 0x250B9Cu, 0x250BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250BA4u;
label_250ba4:
    // 0x250ba4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x250ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250ba8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250bac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x250bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x250bb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250bb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x250bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x250bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x250BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250BC4u;
    // 0x250bc4: 0x0  nop
    ctx->pc = 0x250bc4u;
    // NOP
    // 0x250bc8: 0x0  nop
    ctx->pc = 0x250bc8u;
    // NOP
    // 0x250bcc: 0x0  nop
    ctx->pc = 0x250bccu;
    // NOP
    ctx->pc = 0x250bd0u;
}
