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

// Function: sub_00113930
// Address: 0x113930 - 0x113980
void sub_00113930_0x113930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113930_0x113930");
#endif

    switch (ctx->pc) {
        case 0x113954u: goto label_113954;
        case 0x113964u: goto label_113964;
        default: break;
    }

    ctx->pc = 0x113930u;

    // 0x113930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x113934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11393c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11393cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x113940: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x113940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x113944: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x113944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113948: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x113948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11394c: 0xc044e60  jal         func_113980
    ctx->pc = 0x11394Cu;
    SET_GPR_U32(ctx, 31, 0x113954u);
    ctx->pc = 0x113980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113980u, 0x11394Cu, 0x113954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113954u;
label_113954:
    // 0x113954: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11395c: 0xc044e14  jal         func_113850
    ctx->pc = 0x11395Cu;
    SET_GPR_U32(ctx, 31, 0x113964u);
    ctx->pc = 0x113850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113850u, 0x11395Cu, 0x113964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113964u;
label_113964:
    // 0x113964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113968: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x113968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11396c: 0x3e00008  jr          $ra
    ctx->pc = 0x11396Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11396Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113974u;
    // 0x113974: 0x0  nop
    ctx->pc = 0x113974u;
    // NOP
    // 0x113978: 0x0  nop
    ctx->pc = 0x113978u;
    // NOP
    // 0x11397c: 0x0  nop
    ctx->pc = 0x11397cu;
    // NOP
    ctx->pc = 0x113980u;
}
