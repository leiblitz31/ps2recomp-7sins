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

// Function: sub_00210E70
// Address: 0x210e70 - 0x210f00
void sub_00210E70_0x210e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210E70_0x210e70");
#endif

    switch (ctx->pc) {
        case 0x210ea8u: goto label_210ea8;
        case 0x210eb8u: goto label_210eb8;
        default: break;
    }

    ctx->pc = 0x210e70u;

    // 0x210e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x210e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x210e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x210e7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x210e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x210e80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x210e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x210e84: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x210e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x210e88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x210e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210e8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x210e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210e90: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210e94: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x210e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x210e98: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x210e98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x210e9c: 0x8012  mflo        $s0
    ctx->pc = 0x210e9cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x210ea0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x210EA0u;
    {
        const bool branch_taken_0x210ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210ea0) {
            ctx->pc = 0x210ED4u;
            goto label_210ed4;
        }
    }
    ctx->pc = 0x210EA8u;
label_210ea8:
    // 0x210ea8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x210ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210eac: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x210eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210eb0: 0xc0601e0  jal         func_180780
    ctx->pc = 0x210EB0u;
    SET_GPR_U32(ctx, 31, 0x210EB8u);
    ctx->pc = 0x180780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180780u, 0x210EB0u, 0x210EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210EB8u;
label_210eb8:
    // 0x210eb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x210eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210ebc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x210ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x210ec0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x210ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x210ec4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210ec8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x210ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x210ecc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x210eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x210ed0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x210ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_210ed4:
    // 0x210ed4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210ED4u;
    {
        const bool branch_taken_0x210ed4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x210ed4) {
            ctx->pc = 0x210EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210ea8;
        }
    }
    ctx->pc = 0x210EDCu;
    // 0x210edc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210ee8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x210ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x210eec: 0x3e00008  jr          $ra
    ctx->pc = 0x210EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210EF4u;
    // 0x210ef4: 0x0  nop
    ctx->pc = 0x210ef4u;
    // NOP
    // 0x210ef8: 0x0  nop
    ctx->pc = 0x210ef8u;
    // NOP
    // 0x210efc: 0x0  nop
    ctx->pc = 0x210efcu;
    // NOP
    ctx->pc = 0x210f00u;
}
