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

// Function: sub_00151520
// Address: 0x151520 - 0x151560
void sub_00151520_0x151520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151520_0x151520");
#endif

    switch (ctx->pc) {
        case 0x15154cu: goto label_15154c;
        default: break;
    }

    ctx->pc = 0x151520u;

    // 0x151520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151528: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x151528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15152c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15152cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151530: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x151530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x151534: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x151534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x151538: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x151538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15153c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15153cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151540: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x151540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151544: 0xc08f558  jal         func_23D560
    ctx->pc = 0x151544u;
    SET_GPR_U32(ctx, 31, 0x15154Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x151544u, 0x15154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15154Cu;
label_15154c:
    // 0x15154c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151550: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151554: 0x3e00008  jr          $ra
    ctx->pc = 0x151554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15155Cu;
    // 0x15155c: 0x0  nop
    ctx->pc = 0x15155cu;
    // NOP
    ctx->pc = 0x151560u;
}
