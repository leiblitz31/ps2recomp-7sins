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

// Function: sub_0015C070
// Address: 0x15c070 - 0x15c0c0
void sub_0015C070_0x15c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C070_0x15c070");
#endif

    switch (ctx->pc) {
        case 0x15c094u: goto label_15c094;
        default: break;
    }

    ctx->pc = 0x15c070u;

    // 0x15c070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15c074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15c07c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15c080: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x15c080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x15c084: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15c084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c088: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15c088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c08c: 0xc057030  jal         func_15C0C0
    ctx->pc = 0x15C08Cu;
    SET_GPR_U32(ctx, 31, 0x15C094u);
    ctx->pc = 0x15C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C0C0u, 0x15C08Cu, 0x15C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C094u;
label_15c094:
    // 0x15c094: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x15c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c098: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c09c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15c0a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c0a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15c0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15C0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C0B4u;
    // 0x15c0b4: 0x0  nop
    ctx->pc = 0x15c0b4u;
    // NOP
    // 0x15c0b8: 0x0  nop
    ctx->pc = 0x15c0b8u;
    // NOP
    // 0x15c0bc: 0x0  nop
    ctx->pc = 0x15c0bcu;
    // NOP
    ctx->pc = 0x15c0c0u;
}
