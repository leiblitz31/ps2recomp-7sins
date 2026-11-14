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

// Function: sub_00149A40
// Address: 0x149a40 - 0x149a70
void sub_00149A40_0x149a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149A40_0x149a40");
#endif

    switch (ctx->pc) {
        case 0x149a50u: goto label_149a50;
        default: break;
    }

    ctx->pc = 0x149a40u;

    // 0x149a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149a48: 0xc052648  jal         func_149920
    ctx->pc = 0x149A48u;
    SET_GPR_U32(ctx, 31, 0x149A50u);
    ctx->pc = 0x149920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149920u, 0x149A48u, 0x149A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A50u;
label_149a50:
    // 0x149a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149a58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x149A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149A64u;
    // 0x149a64: 0x0  nop
    ctx->pc = 0x149a64u;
    // NOP
    // 0x149a68: 0x0  nop
    ctx->pc = 0x149a68u;
    // NOP
    // 0x149a6c: 0x0  nop
    ctx->pc = 0x149a6cu;
    // NOP
    ctx->pc = 0x149a70u;
}
