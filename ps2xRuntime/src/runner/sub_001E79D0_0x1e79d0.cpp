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

// Function: sub_001E79D0
// Address: 0x1e79d0 - 0x1e7a40
void sub_001E79D0_0x1e79d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E79D0_0x1e79d0");
#endif

    switch (ctx->pc) {
        case 0x1e79f4u: goto label_1e79f4;
        case 0x1e7a2cu: goto label_1e7a2c;
        default: break;
    }

    ctx->pc = 0x1e79d0u;

    // 0x1e79d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e79d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e79d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e79d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e79d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e79dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e79e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e79e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e79e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e79e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e79ec: 0xc075800  jal         func_1D6000
    ctx->pc = 0x1E79ECu;
    SET_GPR_U32(ctx, 31, 0x1E79F4u);
    ctx->pc = 0x1D6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6000u, 0x1E79ECu, 0x1E79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E79F4u;
label_1e79f4:
    // 0x1e79f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e79f8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1e79f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e79fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7a00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7a04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7a08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7a0c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7a10: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e7a14: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e7a14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e7a18: 0x3012  mflo        $a2
    ctx->pc = 0x1e7a18u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1e7a1c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e7a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e7a20: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e7a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7a24: 0xc079c74  jal         func_1E71D0
    ctx->pc = 0x1E7A24u;
    SET_GPR_U32(ctx, 31, 0x1E7A2Cu);
    ctx->pc = 0x1E71D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E71D0u, 0x1E7A24u, 0x1E7A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7A2Cu;
label_1e7a2c:
    // 0x1e7a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7a30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e7a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e7a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7A3Cu;
    // 0x1e7a3c: 0x0  nop
    ctx->pc = 0x1e7a3cu;
    // NOP
    ctx->pc = 0x1e7a40u;
}
