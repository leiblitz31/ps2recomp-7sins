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

// Function: sub_0014AD30
// Address: 0x14ad30 - 0x14ad60
void sub_0014AD30_0x14ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AD30_0x14ad30");
#endif

    ctx->pc = 0x14ad30u;

    // 0x14ad30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ad34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14ad38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14ad3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad40: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x14ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14ad44: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x14ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad48: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x14ad48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ad4c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x14ad4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14ad50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14ad54: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AD5Cu;
    // 0x14ad5c: 0x0  nop
    ctx->pc = 0x14ad5cu;
    // NOP
    ctx->pc = 0x14ad60u;
}
