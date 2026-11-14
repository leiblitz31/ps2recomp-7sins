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

// Function: sub_0010E280
// Address: 0x10e280 - 0x10e2f0
void sub_0010E280_0x10e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E280_0x10e280");
#endif

    switch (ctx->pc) {
        case 0x10e2a0u: goto label_10e2a0;
        case 0x10e2b4u: goto label_10e2b4;
        case 0x10e2c8u: goto label_10e2c8;
        default: break;
    }

    ctx->pc = 0x10e280u;

    // 0x10e280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e288: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10e288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10e28c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10e290: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x10e290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10e294: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10e294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e298: 0xc0438d8  jal         func_10E360
    ctx->pc = 0x10E298u;
    SET_GPR_U32(ctx, 31, 0x10E2A0u);
    ctx->pc = 0x10E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E360u, 0x10E298u, 0x10E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2A0u;
label_10e2a0:
    // 0x10e2a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e2a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10e2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e2a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e2ac: 0xc0438bc  jal         func_10E2F0
    ctx->pc = 0x10E2ACu;
    SET_GPR_U32(ctx, 31, 0x10E2B4u);
    ctx->pc = 0x10E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E2F0u, 0x10E2ACu, 0x10E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2B4u;
label_10e2b4:
    // 0x10e2b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e2b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e2bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e2c0: 0xc044888  jal         func_112220
    ctx->pc = 0x10E2C0u;
    SET_GPR_U32(ctx, 31, 0x10E2C8u);
    ctx->pc = 0x112220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112220u, 0x10E2C0u, 0x10E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2C8u;
label_10e2c8:
    // 0x10e2c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e2cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10e2d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e2d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e2d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10e2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10e2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10E2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E2E4u;
    // 0x10e2e4: 0x0  nop
    ctx->pc = 0x10e2e4u;
    // NOP
    // 0x10e2e8: 0x0  nop
    ctx->pc = 0x10e2e8u;
    // NOP
    // 0x10e2ec: 0x0  nop
    ctx->pc = 0x10e2ecu;
    // NOP
    ctx->pc = 0x10e2f0u;
}
