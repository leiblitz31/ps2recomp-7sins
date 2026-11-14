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

// Function: sub_002B6D10
// Address: 0x2b6d10 - 0x2b6d60
void sub_002B6D10_0x2b6d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6D10_0x2b6d10");
#endif

    switch (ctx->pc) {
        case 0x2b6d34u: goto label_2b6d34;
        default: break;
    }

    ctx->pc = 0x2b6d10u;

    // 0x2b6d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b6d1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b6d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b6d20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2b6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2b6d24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6d28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6d2c: 0xc0adb58  jal         func_2B6D60
    ctx->pc = 0x2B6D2Cu;
    SET_GPR_U32(ctx, 31, 0x2B6D34u);
    ctx->pc = 0x2B6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6D60u, 0x2B6D2Cu, 0x2B6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D34u;
label_2b6d34:
    // 0x2b6d34: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6d38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6d3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b6d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6d48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b6d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b6d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6D54u;
    // 0x2b6d54: 0x0  nop
    ctx->pc = 0x2b6d54u;
    // NOP
    // 0x2b6d58: 0x0  nop
    ctx->pc = 0x2b6d58u;
    // NOP
    // 0x2b6d5c: 0x0  nop
    ctx->pc = 0x2b6d5cu;
    // NOP
    ctx->pc = 0x2b6d60u;
}
