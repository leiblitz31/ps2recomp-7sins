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

// Function: sub_0013A1F0
// Address: 0x13a1f0 - 0x13a220
void sub_0013A1F0_0x13a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A1F0_0x13a1f0");
#endif

    switch (ctx->pc) {
        case 0x13a20cu: goto label_13a20c;
        default: break;
    }

    ctx->pc = 0x13a1f0u;

    // 0x13a1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a1f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13a1fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a200: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a204: 0xc11bfac  jal         func_46FEB0
    ctx->pc = 0x13A204u;
    SET_GPR_U32(ctx, 31, 0x13A20Cu);
    ctx->pc = 0x46FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46FEB0u, 0x13A204u, 0x13A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A20Cu;
label_13a20c:
    // 0x13a20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a210: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13a210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13a214: 0x3e00008  jr          $ra
    ctx->pc = 0x13A214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A21Cu;
    // 0x13a21c: 0x0  nop
    ctx->pc = 0x13a21cu;
    // NOP
    ctx->pc = 0x13a220u;
}
