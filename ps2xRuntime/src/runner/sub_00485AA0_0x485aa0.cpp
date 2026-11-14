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

// Function: sub_00485AA0
// Address: 0x485aa0 - 0x485af0
void sub_00485AA0_0x485aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485AA0_0x485aa0");
#endif

    ctx->pc = 0x485aa0u;

    // 0x485aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x485aa4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x485aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x485aa8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x485aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x485aac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x485aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485ab0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x485ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x485ab4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x485ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x485ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x485ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x485abc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x485ABCu;
    {
        const bool branch_taken_0x485abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x485abc) {
            ctx->pc = 0x485ADCu;
            goto label_485adc;
        }
    }
    ctx->pc = 0x485AC4u;
    // 0x485ac4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x485ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485ac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485acc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x485accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x485ad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x485ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485ad4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x485AD4u;
    {
        const bool branch_taken_0x485ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485ad4) {
            ctx->pc = 0x485AE0u;
            goto label_485ae0;
        }
    }
    ctx->pc = 0x485ADCu;
label_485adc:
    // 0x485adc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x485adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_485ae0:
    // 0x485ae0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x485ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x485ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x485AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485AECu;
    // 0x485aec: 0x0  nop
    ctx->pc = 0x485aecu;
    // NOP
    ctx->pc = 0x485af0u;
}
