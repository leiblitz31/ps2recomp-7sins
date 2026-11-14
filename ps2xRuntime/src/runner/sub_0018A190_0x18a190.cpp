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

// Function: sub_0018A190
// Address: 0x18a190 - 0x18a1f0
void sub_0018A190_0x18a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A190_0x18a190");
#endif

    switch (ctx->pc) {
        case 0x18a1b0u: goto label_18a1b0;
        default: break;
    }

    ctx->pc = 0x18a190u;

    // 0x18a190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18a198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18a19c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18a1a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a1a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a1a8: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x18A1A8u;
    SET_GPR_U32(ctx, 31, 0x18A1B0u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x18A1A8u, 0x18A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1B0u;
label_18a1b0:
    // 0x18a1b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a1b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18a1b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a1bc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x18a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x18a1c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a1c4: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x18a1c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18a1c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a1cc: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x18a1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a1d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a1d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a1d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18a1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18a1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x18A1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A1E4u;
    // 0x18a1e4: 0x0  nop
    ctx->pc = 0x18a1e4u;
    // NOP
    // 0x18a1e8: 0x0  nop
    ctx->pc = 0x18a1e8u;
    // NOP
    // 0x18a1ec: 0x0  nop
    ctx->pc = 0x18a1ecu;
    // NOP
    ctx->pc = 0x18a1f0u;
}
