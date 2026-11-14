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

// Function: sub_003012C0
// Address: 0x3012c0 - 0x3012e8
void sub_003012C0_0x3012c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003012C0_0x3012c0");
#endif

    switch (ctx->pc) {
        case 0x3012d0u: goto label_3012d0;
        default: break;
    }

    ctx->pc = 0x3012c0u;

    // 0x3012c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3012c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3012c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3012c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3012c8: 0xc0c0310  jal         func_300C40
    ctx->pc = 0x3012C8u;
    SET_GPR_U32(ctx, 31, 0x3012D0u);
    ctx->pc = 0x300C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300C40u, 0x3012C8u, 0x3012D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3012D0u;
label_3012d0:
    // 0x3012d0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3012d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3012d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3012d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3012d8: 0xac400b90  sw          $zero, 0xB90($v0)
    ctx->pc = 0x3012d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4F0B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F0B90u, _value); } while (0);
    // 0x3012dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3012DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3012E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012DCu;
        // 0x3012e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3012DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3012E4u;
    // 0x3012e4: 0x0  nop
    ctx->pc = 0x3012e4u;
    // NOP
    ctx->pc = 0x3012e8u;
}
