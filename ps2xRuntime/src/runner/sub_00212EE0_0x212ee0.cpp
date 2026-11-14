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

// Function: sub_00212EE0
// Address: 0x212ee0 - 0x212f60
void sub_00212EE0_0x212ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212EE0_0x212ee0");
#endif

    ctx->pc = 0x212ee0u;

    // 0x212ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212ee4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x212ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x212ee8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x212ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x212eec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x212eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x212ef0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x212ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ef4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212ef8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x212ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x212efc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f00: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x212f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x212f04: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x212F04u;
    {
        const bool branch_taken_0x212f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x212f04) {
            ctx->pc = 0x212F48u;
            goto label_212f48;
        }
    }
    ctx->pc = 0x212F0Cu;
    // 0x212f0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x212f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212f10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x212F10u;
    {
        const bool branch_taken_0x212f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x212f10) {
            ctx->pc = 0x212F2Cu;
            goto label_212f2c;
        }
    }
    ctx->pc = 0x212F18u;
    // 0x212f18: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x212f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212f1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f20: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x212f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x212f24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x212F24u;
    {
        const bool branch_taken_0x212f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212f24) {
            ctx->pc = 0x212F50u;
            goto label_212f50;
        }
    }
    ctx->pc = 0x212F2Cu;
label_212f2c:
    // 0x212f2c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f30: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x212f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x212f34: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x212f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x212f38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f3c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x212f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x212f40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x212F40u;
    {
        const bool branch_taken_0x212f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212f40) {
            ctx->pc = 0x212F50u;
            goto label_212f50;
        }
    }
    ctx->pc = 0x212F48u;
label_212f48:
    // 0x212f48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f4c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x212f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_212f50:
    // 0x212f50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x212f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x212f54: 0x3e00008  jr          $ra
    ctx->pc = 0x212F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212F5Cu;
    // 0x212f5c: 0x0  nop
    ctx->pc = 0x212f5cu;
    // NOP
    ctx->pc = 0x212f60u;
}
