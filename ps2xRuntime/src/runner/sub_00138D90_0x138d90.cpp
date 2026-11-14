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

// Function: sub_00138D90
// Address: 0x138d90 - 0x138dc0
void sub_00138D90_0x138d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138D90_0x138d90");
#endif

    switch (ctx->pc) {
        case 0x138dacu: goto label_138dac;
        default: break;
    }

    ctx->pc = 0x138d90u;

    // 0x138d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x138d9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x138d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138da0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x138da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138da4: 0xc113e98  jal         func_44FA60
    ctx->pc = 0x138DA4u;
    SET_GPR_U32(ctx, 31, 0x138DACu);
    ctx->pc = 0x44FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FA60u, 0x138DA4u, 0x138DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DACu;
label_138dac:
    // 0x138dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138db0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x138db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x138db4: 0x3e00008  jr          $ra
    ctx->pc = 0x138DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138DBCu;
    // 0x138dbc: 0x0  nop
    ctx->pc = 0x138dbcu;
    // NOP
    ctx->pc = 0x138dc0u;
}
