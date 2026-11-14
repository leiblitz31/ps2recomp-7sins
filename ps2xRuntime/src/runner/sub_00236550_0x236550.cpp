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

// Function: sub_00236550
// Address: 0x236550 - 0x236570
void sub_00236550_0x236550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236550_0x236550");
#endif

    ctx->pc = 0x236550u;

    // 0x236550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236554: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x236554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x236558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x236558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23655c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23655cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x236560: 0x3e00008  jr          $ra
    ctx->pc = 0x236560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236568u;
    // 0x236568: 0x0  nop
    ctx->pc = 0x236568u;
    // NOP
    // 0x23656c: 0x0  nop
    ctx->pc = 0x23656cu;
    // NOP
    ctx->pc = 0x236570u;
}
