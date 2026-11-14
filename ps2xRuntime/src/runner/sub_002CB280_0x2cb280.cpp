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

// Function: sub_002CB280
// Address: 0x2cb280 - 0x2cb2d0
void sub_002CB280_0x2cb280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB280_0x2cb280");
#endif

    switch (ctx->pc) {
        case 0x2cb2b8u: goto label_2cb2b8;
        default: break;
    }

    ctx->pc = 0x2cb280u;

    // 0x2cb280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cb28c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cb28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cb290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb294: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cb294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cb298: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb29c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cb29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cb2a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb2a4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2cb2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2cb2a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cb2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb2ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2b0: 0xc0b2cb4  jal         func_2CB2D0
    ctx->pc = 0x2CB2B0u;
    SET_GPR_U32(ctx, 31, 0x2CB2B8u);
    ctx->pc = 0x2CB2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB2D0u, 0x2CB2B0u, 0x2CB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2B8u;
label_2cb2b8:
    // 0x2cb2b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb2bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb2c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB2CCu;
    // 0x2cb2cc: 0x0  nop
    ctx->pc = 0x2cb2ccu;
    // NOP
    ctx->pc = 0x2cb2d0u;
}
