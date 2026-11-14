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

// Function: sub_00284950
// Address: 0x284950 - 0x284990
void sub_00284950_0x284950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284950_0x284950");
#endif

    switch (ctx->pc) {
        case 0x284970u: goto label_284970;
        case 0x28497cu: goto label_28497c;
        default: break;
    }

    ctx->pc = 0x284950u;

    // 0x284950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28495c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x284960: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284964: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x284964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284968: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x284968u;
    SET_GPR_U32(ctx, 31, 0x284970u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x284968u, 0x284970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284970u;
label_284970:
    // 0x284970: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284974: 0xc0e20da  jal         func_388368
    ctx->pc = 0x284974u;
    SET_GPR_U32(ctx, 31, 0x28497Cu);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x284974u, 0x28497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28497Cu;
label_28497c:
    // 0x28497c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284984: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284988: 0x3e00008  jr          $ra
    ctx->pc = 0x284988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284990u;
}
