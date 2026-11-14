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

// Function: sub_00250600
// Address: 0x250600 - 0x250640
void sub_00250600_0x250600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250600_0x250600");
#endif

    ctx->pc = 0x250600u;

    // 0x250600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250604: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x250604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x250608: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x250608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25060c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250610: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x250610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x250614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250618: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25061c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250624: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x250624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x250628: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x250628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25062c: 0x3e00008  jr          $ra
    ctx->pc = 0x25062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250634u;
    // 0x250634: 0x0  nop
    ctx->pc = 0x250634u;
    // NOP
    // 0x250638: 0x0  nop
    ctx->pc = 0x250638u;
    // NOP
    // 0x25063c: 0x0  nop
    ctx->pc = 0x25063cu;
    // NOP
    ctx->pc = 0x250640u;
}
