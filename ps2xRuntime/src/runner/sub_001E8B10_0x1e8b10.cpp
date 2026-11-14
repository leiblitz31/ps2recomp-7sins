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

// Function: sub_001E8B10
// Address: 0x1e8b10 - 0x1e8b80
void sub_001E8B10_0x1e8b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8B10_0x1e8b10");
#endif

    switch (ctx->pc) {
        case 0x1e8b34u: goto label_1e8b34;
        case 0x1e8b6cu: goto label_1e8b6c;
        default: break;
    }

    ctx->pc = 0x1e8b10u;

    // 0x1e8b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e8b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e8b1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8b28: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8b2c: 0xc0759a4  jal         func_1D6690
    ctx->pc = 0x1E8B2Cu;
    SET_GPR_U32(ctx, 31, 0x1E8B34u);
    ctx->pc = 0x1D6690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6690u, 0x1E8B2Cu, 0x1E8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B34u;
label_1e8b34:
    // 0x1e8b34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b38: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1e8b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e8b44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8b4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8b50: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e8b54: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e8b54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e8b58: 0x3012  mflo        $a2
    ctx->pc = 0x1e8b58u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1e8b5c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e8b60: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e8b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8b64: 0xc079c4c  jal         func_1E7130
    ctx->pc = 0x1E8B64u;
    SET_GPR_U32(ctx, 31, 0x1E8B6Cu);
    ctx->pc = 0x1E7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7130u, 0x1E8B64u, 0x1E8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B6Cu;
label_1e8b6c:
    // 0x1e8b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8b70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e8b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e8b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8B7Cu;
    // 0x1e8b7c: 0x0  nop
    ctx->pc = 0x1e8b7cu;
    // NOP
    ctx->pc = 0x1e8b80u;
}
