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

// Function: sub_00212100
// Address: 0x212100 - 0x212130
void sub_00212100_0x212100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212100_0x212100");
#endif

    ctx->pc = 0x212100u;

    // 0x212100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212104: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x212104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x212108: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x212108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x21210c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212110: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212114: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x212114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x212118: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x212118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21211c: 0x3e00008  jr          $ra
    ctx->pc = 0x21211Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21211Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212124u;
    // 0x212124: 0x0  nop
    ctx->pc = 0x212124u;
    // NOP
    // 0x212128: 0x0  nop
    ctx->pc = 0x212128u;
    // NOP
    // 0x21212c: 0x0  nop
    ctx->pc = 0x21212cu;
    // NOP
    ctx->pc = 0x212130u;
}
