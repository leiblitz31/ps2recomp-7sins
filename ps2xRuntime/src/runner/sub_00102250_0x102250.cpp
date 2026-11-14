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

// Function: sub_00102250
// Address: 0x102250 - 0x102280
void sub_00102250_0x102250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102250_0x102250");
#endif

    switch (ctx->pc) {
        case 0x10226cu: goto label_10226c;
        default: break;
    }

    ctx->pc = 0x102250u;

    // 0x102250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102258: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10225c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102260: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x102260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102264: 0xc050934  jal         func_1424D0
    ctx->pc = 0x102264u;
    SET_GPR_U32(ctx, 31, 0x10226Cu);
    ctx->pc = 0x1424D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1424D0u, 0x102264u, 0x10226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10226Cu;
label_10226c:
    // 0x10226c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10226cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102270: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x102270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x102274: 0x3e00008  jr          $ra
    ctx->pc = 0x102274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10227Cu;
    // 0x10227c: 0x0  nop
    ctx->pc = 0x10227cu;
    // NOP
    ctx->pc = 0x102280u;
}
