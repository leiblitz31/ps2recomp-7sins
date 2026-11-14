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

// Function: sub_002C1AC0
// Address: 0x2c1ac0 - 0x2c1b10
void sub_002C1AC0_0x2c1ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1AC0_0x2c1ac0");
#endif

    switch (ctx->pc) {
        case 0x2c1ae8u: goto label_2c1ae8;
        case 0x2c1af8u: goto label_2c1af8;
        default: break;
    }

    ctx->pc = 0x2c1ac0u;

    // 0x2c1ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c1ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1ac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c1acc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2c1accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2c1ad0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2c1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2c1ad4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1ad8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2c1ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1adc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2c1adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1ae0: 0xc0b065c  jal         func_2C1970
    ctx->pc = 0x2C1AE0u;
    SET_GPR_U32(ctx, 31, 0x2C1AE8u);
    ctx->pc = 0x2C1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1970u, 0x2C1AE0u, 0x2C1AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1AE8u;
label_2c1ae8:
    // 0x2c1ae8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1aec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c1aecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c1af0: 0xc0b0614  jal         func_2C1850
    ctx->pc = 0x2C1AF0u;
    SET_GPR_U32(ctx, 31, 0x2C1AF8u);
    ctx->pc = 0x2C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1850u, 0x2C1AF0u, 0x2C1AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1AF8u;
label_2c1af8:
    // 0x2c1af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1afc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c1afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c1b00: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1B08u;
    // 0x2c1b08: 0x0  nop
    ctx->pc = 0x2c1b08u;
    // NOP
    // 0x2c1b0c: 0x0  nop
    ctx->pc = 0x2c1b0cu;
    // NOP
    ctx->pc = 0x2c1b10u;
}
