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

// Function: sub_00257940
// Address: 0x257940 - 0x257970
void sub_00257940_0x257940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257940_0x257940");
#endif

    ctx->pc = 0x257940u;

    // 0x257940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257944: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x257944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x257948: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x257948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x25794c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257950: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x257950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257954: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x257954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25795c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x25795cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x257960: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x257960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257964: 0x3e00008  jr          $ra
    ctx->pc = 0x257964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25796Cu;
    // 0x25796c: 0x0  nop
    ctx->pc = 0x25796cu;
    // NOP
    ctx->pc = 0x257970u;
}
