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

// Function: sub_0014A090
// Address: 0x14a090 - 0x14a0e0
void sub_0014A090_0x14a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A090_0x14a090");
#endif

    switch (ctx->pc) {
        case 0x14a0b4u: goto label_14a0b4;
        default: break;
    }

    ctx->pc = 0x14a090u;

    // 0x14a090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14a094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a09c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14a0a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x14a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x14a0a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a0a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a0ac: 0xc052838  jal         func_14A0E0
    ctx->pc = 0x14A0ACu;
    SET_GPR_U32(ctx, 31, 0x14A0B4u);
    ctx->pc = 0x14A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A0E0u, 0x14A0ACu, 0x14A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0B4u;
label_14a0b4:
    // 0x14a0b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x14a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a0b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a0bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14a0c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a0c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14a0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14a0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A0D4u;
    // 0x14a0d4: 0x0  nop
    ctx->pc = 0x14a0d4u;
    // NOP
    // 0x14a0d8: 0x0  nop
    ctx->pc = 0x14a0d8u;
    // NOP
    // 0x14a0dc: 0x0  nop
    ctx->pc = 0x14a0dcu;
    // NOP
    ctx->pc = 0x14a0e0u;
}
