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

// Function: sub_002A0AE0
// Address: 0x2a0ae0 - 0x2a0b30
void sub_002A0AE0_0x2a0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0AE0_0x2a0ae0");
#endif

    switch (ctx->pc) {
        case 0x2a0b08u: goto label_2a0b08;
        case 0x2a0b14u: goto label_2a0b14;
        default: break;
    }

    ctx->pc = 0x2a0ae0u;

    // 0x2a0ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a0ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a0ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a0aec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a0af0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0af4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0af8: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x2a0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2a0afc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2a0afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0b00: 0xc0a85e8  jal         func_2A17A0
    ctx->pc = 0x2A0B00u;
    SET_GPR_U32(ctx, 31, 0x2A0B08u);
    ctx->pc = 0x2A17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17A0u, 0x2A0B00u, 0x2A0B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B08u;
label_2a0b08:
    // 0x2a0b08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a0b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0b0c: 0xc0a86bc  jal         func_2A1AF0
    ctx->pc = 0x2A0B0Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B14u);
    ctx->pc = 0x2A1AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1AF0u, 0x2A0B0Cu, 0x2A0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B14u;
label_2a0b14:
    // 0x2a0b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0b18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a0b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a0b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0B24u;
    // 0x2a0b24: 0x0  nop
    ctx->pc = 0x2a0b24u;
    // NOP
    // 0x2a0b28: 0x0  nop
    ctx->pc = 0x2a0b28u;
    // NOP
    // 0x2a0b2c: 0x0  nop
    ctx->pc = 0x2a0b2cu;
    // NOP
    ctx->pc = 0x2a0b30u;
}
