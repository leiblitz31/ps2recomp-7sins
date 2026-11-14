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

// Function: sub_002217F0
// Address: 0x2217f0 - 0x221840
void sub_002217F0_0x2217f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002217F0_0x2217f0");
#endif

    ctx->pc = 0x2217f0u;

    // 0x2217f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2217f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2217f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2217f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2217f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2217f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2217fc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2217fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x221800: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x221800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x221804: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221808: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x221808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22180c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22180cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x221810: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x221810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221814: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x221814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221818: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x221818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x22181c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22181cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221820: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x221820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221824: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x221824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x221828: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x221828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22182c: 0x3e00008  jr          $ra
    ctx->pc = 0x22182Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22182Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221834u;
    // 0x221834: 0x0  nop
    ctx->pc = 0x221834u;
    // NOP
    // 0x221838: 0x0  nop
    ctx->pc = 0x221838u;
    // NOP
    // 0x22183c: 0x0  nop
    ctx->pc = 0x22183cu;
    // NOP
    ctx->pc = 0x221840u;
}
