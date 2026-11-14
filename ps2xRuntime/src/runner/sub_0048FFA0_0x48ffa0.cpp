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

// Function: sub_0048FFA0
// Address: 0x48ffa0 - 0x48ffd0
void sub_0048FFA0_0x48ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FFA0_0x48ffa0");
#endif

    switch (ctx->pc) {
        case 0x48ffbcu: goto label_48ffbc;
        default: break;
    }

    ctx->pc = 0x48ffa0u;

    // 0x48ffa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48ffa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ffa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48ffac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ffb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48ffb4: 0xc123e14  jal         func_48F850
    ctx->pc = 0x48FFB4u;
    SET_GPR_U32(ctx, 31, 0x48FFBCu);
    ctx->pc = 0x48F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F850u, 0x48FFB4u, 0x48FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FFBCu;
label_48ffbc:
    // 0x48ffbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ffc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48ffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x48FFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FFCCu;
    // 0x48ffcc: 0x0  nop
    ctx->pc = 0x48ffccu;
    // NOP
    ctx->pc = 0x48ffd0u;
}
