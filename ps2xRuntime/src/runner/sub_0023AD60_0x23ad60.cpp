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

// Function: sub_0023AD60
// Address: 0x23ad60 - 0x23ad90
void sub_0023AD60_0x23ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AD60_0x23ad60");
#endif

    switch (ctx->pc) {
        case 0x23ad7cu: goto label_23ad7c;
        default: break;
    }

    ctx->pc = 0x23ad60u;

    // 0x23ad60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ad64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ad68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ad6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ad70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ad74: 0xc08eb64  jal         func_23AD90
    ctx->pc = 0x23AD74u;
    SET_GPR_U32(ctx, 31, 0x23AD7Cu);
    ctx->pc = 0x23AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD90u, 0x23AD74u, 0x23AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD7Cu;
label_23ad7c:
    // 0x23ad7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ad7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ad80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ad84: 0x3e00008  jr          $ra
    ctx->pc = 0x23AD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AD8Cu;
    // 0x23ad8c: 0x0  nop
    ctx->pc = 0x23ad8cu;
    // NOP
    ctx->pc = 0x23ad90u;
}
