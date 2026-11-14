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

// Function: sub_00267B10
// Address: 0x267b10 - 0x267ba0
void sub_00267B10_0x267b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267B10_0x267b10");
#endif

    switch (ctx->pc) {
        case 0x267b48u: goto label_267b48;
        case 0x267b58u: goto label_267b58;
        default: break;
    }

    ctx->pc = 0x267b10u;

    // 0x267b10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x267b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x267b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267b1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x267b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x267b20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x267b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x267b24: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x267b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x267b28: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x267b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267b2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267b30: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x267b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267b34: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x267b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x267b38: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x267b38u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x267b3c: 0x8012  mflo        $s0
    ctx->pc = 0x267b3cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x267b40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x267B40u;
    {
        const bool branch_taken_0x267b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b40) {
            ctx->pc = 0x267B74u;
            goto label_267b74;
        }
    }
    ctx->pc = 0x267B48u;
label_267b48:
    // 0x267b48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x267b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267b4c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x267b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267b50: 0xc099ee8  jal         func_267BA0
    ctx->pc = 0x267B50u;
    SET_GPR_U32(ctx, 31, 0x267B58u);
    ctx->pc = 0x267BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267BA0u, 0x267B50u, 0x267B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B58u;
label_267b58:
    // 0x267b58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267b5c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x267b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x267b60: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x267b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x267b64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x267b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267b68: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x267b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x267b6c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x267b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x267b70: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x267b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_267b74:
    // 0x267b74: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x267B74u;
    {
        const bool branch_taken_0x267b74 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x267b74) {
            ctx->pc = 0x267B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267b48;
        }
    }
    ctx->pc = 0x267B7Cu;
    // 0x267b7c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x267b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267b88: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x267b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x267b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x267B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267B94u;
    // 0x267b94: 0x0  nop
    ctx->pc = 0x267b94u;
    // NOP
    // 0x267b98: 0x0  nop
    ctx->pc = 0x267b98u;
    // NOP
    // 0x267b9c: 0x0  nop
    ctx->pc = 0x267b9cu;
    // NOP
    ctx->pc = 0x267ba0u;
}
