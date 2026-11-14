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

// Function: sub_001317F0
// Address: 0x1317f0 - 0x131820
void sub_001317F0_0x1317f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001317F0_0x1317f0");
#endif

    ctx->pc = 0x1317f0u;

    // 0x1317f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1317f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1317f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1317f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1317f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1317f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1317fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1317fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131800: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x131800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131804: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x131804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x131808: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x131808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13180c: 0x3e00008  jr          $ra
    ctx->pc = 0x13180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13180Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131814u;
    // 0x131814: 0x0  nop
    ctx->pc = 0x131814u;
    // NOP
    // 0x131818: 0x0  nop
    ctx->pc = 0x131818u;
    // NOP
    // 0x13181c: 0x0  nop
    ctx->pc = 0x13181cu;
    // NOP
    ctx->pc = 0x131820u;
}
