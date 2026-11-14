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

// Function: sub_00194D40
// Address: 0x194d40 - 0x194d70
void sub_00194D40_0x194d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194D40_0x194d40");
#endif

    switch (ctx->pc) {
        case 0x194d5cu: goto label_194d5c;
        default: break;
    }

    ctx->pc = 0x194d40u;

    // 0x194d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194d48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194d4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194d50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x194d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194d54: 0xc067260  jal         func_19C980
    ctx->pc = 0x194D54u;
    SET_GPR_U32(ctx, 31, 0x194D5Cu);
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x194D54u, 0x194D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D5Cu;
label_194d5c:
    // 0x194d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194d60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x194d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x194d64: 0x3e00008  jr          $ra
    ctx->pc = 0x194D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D6Cu;
    // 0x194d6c: 0x0  nop
    ctx->pc = 0x194d6cu;
    // NOP
    ctx->pc = 0x194d70u;
}
