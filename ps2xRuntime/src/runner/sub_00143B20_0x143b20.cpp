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

// Function: sub_00143B20
// Address: 0x143b20 - 0x143b60
void sub_00143B20_0x143b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143B20_0x143b20");
#endif

    ctx->pc = 0x143b20u;

    // 0x143b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143b24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x143b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x143b28: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x143b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x143b2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x143b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143b30: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x143b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x143b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143b38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x143b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x143b3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x143b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143b44: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x143b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x143b48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x143b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x143B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143B54u;
    // 0x143b54: 0x0  nop
    ctx->pc = 0x143b54u;
    // NOP
    // 0x143b58: 0x0  nop
    ctx->pc = 0x143b58u;
    // NOP
    // 0x143b5c: 0x0  nop
    ctx->pc = 0x143b5cu;
    // NOP
    ctx->pc = 0x143b60u;
}
