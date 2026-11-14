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

// Function: sub_0046C040
// Address: 0x46c040 - 0x46c090
void sub_0046C040_0x46c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C040_0x46c040");
#endif

    switch (ctx->pc) {
        case 0x46c064u: goto label_46c064;
        default: break;
    }

    ctx->pc = 0x46c040u;

    // 0x46c040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46c044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46c048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46c04c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46c050: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46c050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46c054: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c058: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46c058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c05c: 0xc11b024  jal         func_46C090
    ctx->pc = 0x46C05Cu;
    SET_GPR_U32(ctx, 31, 0x46C064u);
    ctx->pc = 0x46C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C090u, 0x46C05Cu, 0x46C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C064u;
label_46c064:
    // 0x46c064: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46c068: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c06c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46c070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c078: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46c078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c07c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C084u;
    // 0x46c084: 0x0  nop
    ctx->pc = 0x46c084u;
    // NOP
    // 0x46c088: 0x0  nop
    ctx->pc = 0x46c088u;
    // NOP
    // 0x46c08c: 0x0  nop
    ctx->pc = 0x46c08cu;
    // NOP
    ctx->pc = 0x46c090u;
}
