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

// Function: sub_00133060
// Address: 0x133060 - 0x1330a0
void sub_00133060_0x133060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133060_0x133060");
#endif

    ctx->pc = 0x133060u;

    // 0x133060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133064: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x133064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x133068: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13306c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x133070: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133074: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133078: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x133078u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13307c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x13307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x133080: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x133080u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x133084: 0x1012  mflo        $v0
    ctx->pc = 0x133084u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x133088: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x133088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13308c: 0x3e00008  jr          $ra
    ctx->pc = 0x13308Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13308Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133094u;
    // 0x133094: 0x0  nop
    ctx->pc = 0x133094u;
    // NOP
    // 0x133098: 0x0  nop
    ctx->pc = 0x133098u;
    // NOP
    // 0x13309c: 0x0  nop
    ctx->pc = 0x13309cu;
    // NOP
    ctx->pc = 0x1330a0u;
}
