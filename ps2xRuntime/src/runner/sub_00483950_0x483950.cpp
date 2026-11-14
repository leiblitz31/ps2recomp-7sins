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

// Function: sub_00483950
// Address: 0x483950 - 0x483980
void sub_00483950_0x483950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483950_0x483950");
#endif

    ctx->pc = 0x483950u;

    // 0x483950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x483950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x483954: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x483954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x483958: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x483958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48395c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x483960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483964: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x483964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x483968: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x483968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48396c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x48396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x483970: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x483970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x483974: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x483974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x483978: 0x3e00008  jr          $ra
    ctx->pc = 0x483978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483980u;
}
