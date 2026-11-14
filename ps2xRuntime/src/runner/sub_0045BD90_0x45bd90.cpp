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

// Function: sub_0045BD90
// Address: 0x45bd90 - 0x45bdc0
void sub_0045BD90_0x45bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045BD90_0x45bd90");
#endif

    ctx->pc = 0x45bd90u;

    // 0x45bd90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45bd94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45bd98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x45bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45bd9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45bda0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x45bda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x45bda4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x45bda4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x45bda8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45bdac: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x45bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x45bdb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45bdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x45BDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45BDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45BDBCu;
    // 0x45bdbc: 0x0  nop
    ctx->pc = 0x45bdbcu;
    // NOP
    ctx->pc = 0x45bdc0u;
}
