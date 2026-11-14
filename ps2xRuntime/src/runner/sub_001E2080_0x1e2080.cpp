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

// Function: sub_001E2080
// Address: 0x1e2080 - 0x1e2100
void sub_001E2080_0x1e2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2080_0x1e2080");
#endif

    ctx->pc = 0x1e2080u;

    // 0x1e2080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2084: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e2084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e2088: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x1e2088u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e208c: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x1e208cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2090: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E2090u;
    {
        const bool branch_taken_0x1e2090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2090) {
            ctx->pc = 0x1E20C0u;
            goto label_1e20c0;
        }
    }
    ctx->pc = 0x1E2098u;
    // 0x1e2098: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e2098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e209c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e209cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e20a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e20a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e20ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e20acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e20b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e20b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e20b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E20B8u;
    {
        const bool branch_taken_0x1e20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e20b8) {
            ctx->pc = 0x1E20E4u;
            goto label_1e20e4;
        }
    }
    ctx->pc = 0x1E20C0u;
label_1e20c0:
    // 0x1e20c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e20c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e20c8: 0x401827  not         $v1, $v0
    ctx->pc = 0x1e20c8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1e20cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e20ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e20d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e20d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20d8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1e20d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e20dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e20e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e20e4:
    // 0x1e20e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e20e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e20e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e20ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E20ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E20ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E20F4u;
    // 0x1e20f4: 0x0  nop
    ctx->pc = 0x1e20f4u;
    // NOP
    // 0x1e20f8: 0x0  nop
    ctx->pc = 0x1e20f8u;
    // NOP
    // 0x1e20fc: 0x0  nop
    ctx->pc = 0x1e20fcu;
    // NOP
    ctx->pc = 0x1e2100u;
}
