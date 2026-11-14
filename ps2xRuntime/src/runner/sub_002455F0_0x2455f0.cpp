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

// Function: sub_002455F0
// Address: 0x2455f0 - 0x245630
void sub_002455F0_0x2455f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002455F0_0x2455f0");
#endif

    ctx->pc = 0x2455f0u;

    // 0x2455f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2455f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2455f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2455f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2455f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2455f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2455fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2455fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245600: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x245600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x245604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245608: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x245608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24560c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245614: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x245614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x245618: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x245618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24561c: 0x3e00008  jr          $ra
    ctx->pc = 0x24561Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24561Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245624u;
    // 0x245624: 0x0  nop
    ctx->pc = 0x245624u;
    // NOP
    // 0x245628: 0x0  nop
    ctx->pc = 0x245628u;
    // NOP
    // 0x24562c: 0x0  nop
    ctx->pc = 0x24562cu;
    // NOP
    ctx->pc = 0x245630u;
}
