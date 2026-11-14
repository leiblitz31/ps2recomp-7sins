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

// Function: sub_00190AC0
// Address: 0x190ac0 - 0x190b10
void sub_00190AC0_0x190ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190AC0_0x190ac0");
#endif

    switch (ctx->pc) {
        case 0x190ae4u: goto label_190ae4;
        default: break;
    }

    ctx->pc = 0x190ac0u;

    // 0x190ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190ac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x190acc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x190accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x190ad0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x190ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x190ad4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190ad8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x190ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190adc: 0xc0642c4  jal         func_190B10
    ctx->pc = 0x190ADCu;
    SET_GPR_U32(ctx, 31, 0x190AE4u);
    ctx->pc = 0x190B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B10u, 0x190ADCu, 0x190AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AE4u;
label_190ae4:
    // 0x190ae4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x190ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190ae8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190aec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x190aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x190af0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190af8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x190af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x190afc: 0x3e00008  jr          $ra
    ctx->pc = 0x190AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190B04u;
    // 0x190b04: 0x0  nop
    ctx->pc = 0x190b04u;
    // NOP
    // 0x190b08: 0x0  nop
    ctx->pc = 0x190b08u;
    // NOP
    // 0x190b0c: 0x0  nop
    ctx->pc = 0x190b0cu;
    // NOP
    ctx->pc = 0x190b10u;
}
