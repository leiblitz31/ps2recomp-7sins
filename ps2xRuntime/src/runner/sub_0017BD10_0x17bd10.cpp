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

// Function: sub_0017BD10
// Address: 0x17bd10 - 0x17bd60
void sub_0017BD10_0x17bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BD10_0x17bd10");
#endif

    switch (ctx->pc) {
        case 0x17bd34u: goto label_17bd34;
        default: break;
    }

    ctx->pc = 0x17bd10u;

    // 0x17bd10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17bd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bd18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17bd1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17bd20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x17bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x17bd24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bd2c: 0xc05ef58  jal         func_17BD60
    ctx->pc = 0x17BD2Cu;
    SET_GPR_U32(ctx, 31, 0x17BD34u);
    ctx->pc = 0x17BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD60u, 0x17BD2Cu, 0x17BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD34u;
label_17bd34:
    // 0x17bd34: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bd38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17bd40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD54u;
    // 0x17bd54: 0x0  nop
    ctx->pc = 0x17bd54u;
    // NOP
    // 0x17bd58: 0x0  nop
    ctx->pc = 0x17bd58u;
    // NOP
    // 0x17bd5c: 0x0  nop
    ctx->pc = 0x17bd5cu;
    // NOP
    ctx->pc = 0x17bd60u;
}
