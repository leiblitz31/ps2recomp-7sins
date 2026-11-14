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

// Function: sub_001F9CB0
// Address: 0x1f9cb0 - 0x1f9d20
void sub_001F9CB0_0x1f9cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9CB0_0x1f9cb0");
#endif

    switch (ctx->pc) {
        case 0x1f9cd4u: goto label_1f9cd4;
        case 0x1f9d0cu: goto label_1f9d0c;
        default: break;
    }

    ctx->pc = 0x1f9cb0u;

    // 0x1f9cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9cb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f9cbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9cc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f9cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9cc8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f9cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f9ccc: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x1F9CCCu;
    SET_GPR_U32(ctx, 31, 0x1F9CD4u);
    ctx->pc = 0x10C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1F0u, 0x1F9CCCu, 0x1F9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9CD4u;
label_1f9cd4:
    // 0x1f9cd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f9cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9cd8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1f9cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9cdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ce0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f9ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f9ce4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ce8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9cec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1f9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f9cf0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9cf4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f9cf4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f9cf8: 0x3012  mflo        $a2
    ctx->pc = 0x1f9cf8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1f9cfc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1f9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1f9d00: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1f9d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9d04: 0xc0459f4  jal         func_1167D0
    ctx->pc = 0x1F9D04u;
    SET_GPR_U32(ctx, 31, 0x1F9D0Cu);
    ctx->pc = 0x1167D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1167D0u, 0x1F9D04u, 0x1F9D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D0Cu;
label_1f9d0c:
    // 0x1f9d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9d10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f9d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f9d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9D1Cu;
    // 0x1f9d1c: 0x0  nop
    ctx->pc = 0x1f9d1cu;
    // NOP
    ctx->pc = 0x1f9d20u;
}
