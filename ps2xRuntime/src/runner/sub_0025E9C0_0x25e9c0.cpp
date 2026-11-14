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

// Function: sub_0025E9C0
// Address: 0x25e9c0 - 0x25ea50
void sub_0025E9C0_0x25e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E9C0_0x25e9c0");
#endif

    switch (ctx->pc) {
        case 0x25e9f8u: goto label_25e9f8;
        case 0x25ea08u: goto label_25ea08;
        default: break;
    }

    ctx->pc = 0x25e9c0u;

    // 0x25e9c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25e9c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25e9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e9cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25e9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25e9d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25e9d4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x25e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x25e9d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e9dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e9e0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e9e4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x25e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25e9e8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x25e9e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25e9ec: 0x8012  mflo        $s0
    ctx->pc = 0x25e9ecu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x25e9f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25E9F0u;
    {
        const bool branch_taken_0x25e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e9f0) {
            ctx->pc = 0x25EA24u;
            goto label_25ea24;
        }
    }
    ctx->pc = 0x25E9F8u;
label_25e9f8:
    // 0x25e9f8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x25e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e9fc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ea00: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x25EA00u;
    SET_GPR_U32(ctx, 31, 0x25EA08u);
    ctx->pc = 0x25E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E770u, 0x25EA00u, 0x25EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA08u;
label_25ea08:
    // 0x25ea08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ea0c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x25ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x25ea10: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x25ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x25ea14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ea18: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x25ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x25ea1c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x25ea20: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25ea20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_25ea24:
    // 0x25ea24: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25EA24u;
    {
        const bool branch_taken_0x25ea24 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x25ea24) {
            ctx->pc = 0x25E9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e9f8;
        }
    }
    ctx->pc = 0x25EA2Cu;
    // 0x25ea2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ea30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ea30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ea34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ea34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ea38: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25ea38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25ea3c: 0x3e00008  jr          $ra
    ctx->pc = 0x25EA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EA44u;
    // 0x25ea44: 0x0  nop
    ctx->pc = 0x25ea44u;
    // NOP
    // 0x25ea48: 0x0  nop
    ctx->pc = 0x25ea48u;
    // NOP
    // 0x25ea4c: 0x0  nop
    ctx->pc = 0x25ea4cu;
    // NOP
    ctx->pc = 0x25ea50u;
}
