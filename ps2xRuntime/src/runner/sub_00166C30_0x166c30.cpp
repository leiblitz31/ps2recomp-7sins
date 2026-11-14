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

// Function: sub_00166C30
// Address: 0x166c30 - 0x166c80
void sub_00166C30_0x166c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166C30_0x166c30");
#endif

    switch (ctx->pc) {
        case 0x166c54u: goto label_166c54;
        default: break;
    }

    ctx->pc = 0x166c30u;

    // 0x166c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x166c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x166c3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x166c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x166c40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x166c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x166c44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x166c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x166c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166c4c: 0xc059b20  jal         func_166C80
    ctx->pc = 0x166C4Cu;
    SET_GPR_U32(ctx, 31, 0x166C54u);
    ctx->pc = 0x166C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C80u, 0x166C4Cu, 0x166C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C54u;
label_166c54:
    // 0x166c54: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x166c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166c58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x166c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x166c60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166c68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x166c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x166c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x166C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166C74u;
    // 0x166c74: 0x0  nop
    ctx->pc = 0x166c74u;
    // NOP
    // 0x166c78: 0x0  nop
    ctx->pc = 0x166c78u;
    // NOP
    // 0x166c7c: 0x0  nop
    ctx->pc = 0x166c7cu;
    // NOP
    ctx->pc = 0x166c80u;
}
