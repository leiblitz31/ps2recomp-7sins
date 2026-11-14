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

// Function: sub_0014A5A0
// Address: 0x14a5a0 - 0x14a5f0
void sub_0014A5A0_0x14a5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A5A0_0x14a5a0");
#endif

    switch (ctx->pc) {
        case 0x14a5c4u: goto label_14a5c4;
        default: break;
    }

    ctx->pc = 0x14a5a0u;

    // 0x14a5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14a5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14a5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a5a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a5ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14a5b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x14a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x14a5b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a5b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a5bc: 0xc05297c  jal         func_14A5F0
    ctx->pc = 0x14A5BCu;
    SET_GPR_U32(ctx, 31, 0x14A5C4u);
    ctx->pc = 0x14A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A5F0u, 0x14A5BCu, 0x14A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5C4u;
label_14a5c4:
    // 0x14a5c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x14a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a5c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a5cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14a5d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a5d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14a5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14a5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A5E4u;
    // 0x14a5e4: 0x0  nop
    ctx->pc = 0x14a5e4u;
    // NOP
    // 0x14a5e8: 0x0  nop
    ctx->pc = 0x14a5e8u;
    // NOP
    // 0x14a5ec: 0x0  nop
    ctx->pc = 0x14a5ecu;
    // NOP
    ctx->pc = 0x14a5f0u;
}
