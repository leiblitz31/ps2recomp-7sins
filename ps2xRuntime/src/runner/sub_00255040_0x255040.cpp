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

// Function: sub_00255040
// Address: 0x255040 - 0x255080
void sub_00255040_0x255040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255040_0x255040");
#endif

    switch (ctx->pc) {
        case 0x255060u: goto label_255060;
        default: break;
    }

    ctx->pc = 0x255040u;

    // 0x255040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x255040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x255044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x255048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25504c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25504cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x255050: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x255050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255054: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x255054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255058: 0xc095420  jal         func_255080
    ctx->pc = 0x255058u;
    SET_GPR_U32(ctx, 31, 0x255060u);
    ctx->pc = 0x255080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255080u, 0x255058u, 0x255060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255060u;
label_255060:
    // 0x255060: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x255060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255068: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x255068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25506c: 0x3e00008  jr          $ra
    ctx->pc = 0x25506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25506Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255074u;
    // 0x255074: 0x0  nop
    ctx->pc = 0x255074u;
    // NOP
    // 0x255078: 0x0  nop
    ctx->pc = 0x255078u;
    // NOP
    // 0x25507c: 0x0  nop
    ctx->pc = 0x25507cu;
    // NOP
    ctx->pc = 0x255080u;
}
