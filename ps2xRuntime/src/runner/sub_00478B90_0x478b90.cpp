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

// Function: sub_00478B90
// Address: 0x478b90 - 0x478bc0
void sub_00478B90_0x478b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478B90_0x478b90");
#endif

    ctx->pc = 0x478b90u;

    // 0x478b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x478b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x478b94: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x478b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x478b98: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x478b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x478b9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x478b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478ba0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x478ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x478ba4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x478ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x478ba8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x478ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x478bac: 0x3e00008  jr          $ra
    ctx->pc = 0x478BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478BB4u;
    // 0x478bb4: 0x0  nop
    ctx->pc = 0x478bb4u;
    // NOP
    // 0x478bb8: 0x0  nop
    ctx->pc = 0x478bb8u;
    // NOP
    // 0x478bbc: 0x0  nop
    ctx->pc = 0x478bbcu;
    // NOP
    ctx->pc = 0x478bc0u;
}
