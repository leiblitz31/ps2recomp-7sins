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

// Function: sub_00274880
// Address: 0x274880 - 0x2748b0
void sub_00274880_0x274880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274880_0x274880");
#endif

    switch (ctx->pc) {
        case 0x27489cu: goto label_27489c;
        default: break;
    }

    ctx->pc = 0x274880u;

    // 0x274880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27488c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274890: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x274890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x274894: 0xc09d250  jal         func_274940
    ctx->pc = 0x274894u;
    SET_GPR_U32(ctx, 31, 0x27489Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x274894u, 0x27489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27489Cu;
label_27489c:
    // 0x27489c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27489cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2748a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2748a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2748a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2748A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2748A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2748ACu;
    // 0x2748ac: 0x0  nop
    ctx->pc = 0x2748acu;
    // NOP
    ctx->pc = 0x2748b0u;
}
