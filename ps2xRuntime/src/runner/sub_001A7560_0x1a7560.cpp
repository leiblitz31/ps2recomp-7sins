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

// Function: sub_001A7560
// Address: 0x1a7560 - 0x1a7590
void sub_001A7560_0x1a7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7560_0x1a7560");
#endif

    ctx->pc = 0x1a7560u;

    // 0x1a7560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7564: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a7564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a7568: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1a7568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1a756c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7570: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a7570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7574: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1a7574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1a7578: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a757c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A757Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A757Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7584u;
    // 0x1a7584: 0x0  nop
    ctx->pc = 0x1a7584u;
    // NOP
    // 0x1a7588: 0x0  nop
    ctx->pc = 0x1a7588u;
    // NOP
    // 0x1a758c: 0x0  nop
    ctx->pc = 0x1a758cu;
    // NOP
    ctx->pc = 0x1a7590u;
}
