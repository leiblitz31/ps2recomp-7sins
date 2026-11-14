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

// Function: sub_001E1E30
// Address: 0x1e1e30 - 0x1e1ec0
void sub_001E1E30_0x1e1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1E30_0x1e1e30");
#endif

    switch (ctx->pc) {
        case 0x1e1e68u: goto label_1e1e68;
        case 0x1e1e78u: goto label_1e1e78;
        default: break;
    }

    ctx->pc = 0x1e1e30u;

    // 0x1e1e30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1e3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e1e40: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e1e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1e44: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e1e48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1e4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1e50: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1e54: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e1e58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e1e58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e1e5c: 0x8012  mflo        $s0
    ctx->pc = 0x1e1e5cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1e1e60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E1E60u;
    {
        const bool branch_taken_0x1e1e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e60) {
            ctx->pc = 0x1E1E94u;
            goto label_1e1e94;
        }
    }
    ctx->pc = 0x1E1E68u;
label_1e1e68:
    // 0x1e1e68: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1e6c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e1e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1e70: 0xc0787b0  jal         func_1E1EC0
    ctx->pc = 0x1E1E70u;
    SET_GPR_U32(ctx, 31, 0x1E1E78u);
    ctx->pc = 0x1E1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1EC0u, 0x1E1E70u, 0x1E1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E78u;
label_1e1e78:
    // 0x1e1e78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1e7c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1e1e80: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1e1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1e1e84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1e88: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1e1e8c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e1e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e1e90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e1e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e1e94:
    // 0x1e1e94: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E1E94u;
    {
        const bool branch_taken_0x1e1e94 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e1e94) {
            ctx->pc = 0x1E1E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1e68;
        }
    }
    ctx->pc = 0x1E1E9Cu;
    // 0x1e1e9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1ea8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e1ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e1eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1EB4u;
    // 0x1e1eb4: 0x0  nop
    ctx->pc = 0x1e1eb4u;
    // NOP
    // 0x1e1eb8: 0x0  nop
    ctx->pc = 0x1e1eb8u;
    // NOP
    // 0x1e1ebc: 0x0  nop
    ctx->pc = 0x1e1ebcu;
    // NOP
    ctx->pc = 0x1e1ec0u;
}
