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

// Function: sub_0011C0E0
// Address: 0x11c0e0 - 0x11c120
void sub_0011C0E0_0x11c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C0E0_0x11c0e0");
#endif

    switch (ctx->pc) {
        case 0x11c100u: goto label_11c100;
        default: break;
    }

    ctx->pc = 0x11c0e0u;

    // 0x11c0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c0e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11c0ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11c0f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c0f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c0f8: 0xc047048  jal         func_11C120
    ctx->pc = 0x11C0F8u;
    SET_GPR_U32(ctx, 31, 0x11C100u);
    ctx->pc = 0x11C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C120u, 0x11C0F8u, 0x11C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C100u;
label_11c100:
    // 0x11c100: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c108: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11c108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11c10c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C114u;
    // 0x11c114: 0x0  nop
    ctx->pc = 0x11c114u;
    // NOP
    // 0x11c118: 0x0  nop
    ctx->pc = 0x11c118u;
    // NOP
    // 0x11c11c: 0x0  nop
    ctx->pc = 0x11c11cu;
    // NOP
    ctx->pc = 0x11c120u;
}
