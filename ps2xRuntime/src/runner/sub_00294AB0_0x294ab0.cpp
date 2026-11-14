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

// Function: sub_00294AB0
// Address: 0x294ab0 - 0x294b00
void sub_00294AB0_0x294ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294AB0_0x294ab0");
#endif

    switch (ctx->pc) {
        case 0x294ad4u: goto label_294ad4;
        default: break;
    }

    ctx->pc = 0x294ab0u;

    // 0x294ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294ab8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x294ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x294abc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x294abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x294ac0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x294ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x294ac4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x294ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294ac8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x294ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294acc: 0xc0a52c0  jal         func_294B00
    ctx->pc = 0x294ACCu;
    SET_GPR_U32(ctx, 31, 0x294AD4u);
    ctx->pc = 0x294B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B00u, 0x294ACCu, 0x294AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294AD4u;
label_294ad4:
    // 0x294ad4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x294ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294ad8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294adc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x294adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x294ae0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294ae8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x294ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x294aec: 0x3e00008  jr          $ra
    ctx->pc = 0x294AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294AF4u;
    // 0x294af4: 0x0  nop
    ctx->pc = 0x294af4u;
    // NOP
    // 0x294af8: 0x0  nop
    ctx->pc = 0x294af8u;
    // NOP
    // 0x294afc: 0x0  nop
    ctx->pc = 0x294afcu;
    // NOP
    ctx->pc = 0x294b00u;
}
