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

// Function: sub_002AC740
// Address: 0x2ac740 - 0x2ac780
void sub_002AC740_0x2ac740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC740_0x2ac740");
#endif

    switch (ctx->pc) {
        case 0x2ac764u: goto label_2ac764;
        default: break;
    }

    ctx->pc = 0x2ac740u;

    // 0x2ac740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac74c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ac74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ac750: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac754: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2ac754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac75c: 0xc0ab1e0  jal         func_2AC780
    ctx->pc = 0x2AC75Cu;
    SET_GPR_U32(ctx, 31, 0x2AC764u);
    ctx->pc = 0x2AC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC780u, 0x2AC75Cu, 0x2AC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC764u;
label_2ac764:
    // 0x2ac764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac768: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac76c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC774u;
    // 0x2ac774: 0x0  nop
    ctx->pc = 0x2ac774u;
    // NOP
    // 0x2ac778: 0x0  nop
    ctx->pc = 0x2ac778u;
    // NOP
    // 0x2ac77c: 0x0  nop
    ctx->pc = 0x2ac77cu;
    // NOP
    ctx->pc = 0x2ac780u;
}
