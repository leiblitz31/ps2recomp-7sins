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

// Function: sub_001E3290
// Address: 0x1e3290 - 0x1e3320
void sub_001E3290_0x1e3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3290_0x1e3290");
#endif

    switch (ctx->pc) {
        case 0x1e32c8u: goto label_1e32c8;
        case 0x1e32d8u: goto label_1e32d8;
        default: break;
    }

    ctx->pc = 0x1e3290u;

    // 0x1e3290: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e3290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e3294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e329c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e329cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e32a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e32a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e32a4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e32a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e32a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e32ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e32b0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e32b4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e32b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e32b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e32bc: 0x8012  mflo        $s0
    ctx->pc = 0x1e32bcu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1e32c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E32C0u;
    {
        const bool branch_taken_0x1e32c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e32c0) {
            ctx->pc = 0x1E32F4u;
            goto label_1e32f4;
        }
    }
    ctx->pc = 0x1E32C8u;
label_1e32c8:
    // 0x1e32c8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e32c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e32cc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e32ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e32d0: 0xc078cc8  jal         func_1E3320
    ctx->pc = 0x1E32D0u;
    SET_GPR_U32(ctx, 31, 0x1E32D8u);
    ctx->pc = 0x1E3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3320u, 0x1E32D0u, 0x1E32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E32D8u;
label_1e32d8:
    // 0x1e32d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e32dc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1e32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1e32e0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1e32e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1e32e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e32e8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1e32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1e32ec: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e32ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e32f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e32f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e32f4:
    // 0x1e32f4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E32F4u;
    {
        const bool branch_taken_0x1e32f4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e32f4) {
            ctx->pc = 0x1E32C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e32c8;
        }
    }
    ctx->pc = 0x1E32FCu;
    // 0x1e32fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3308: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e3308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e330c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E330Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E330Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3314u;
    // 0x1e3314: 0x0  nop
    ctx->pc = 0x1e3314u;
    // NOP
    // 0x1e3318: 0x0  nop
    ctx->pc = 0x1e3318u;
    // NOP
    // 0x1e331c: 0x0  nop
    ctx->pc = 0x1e331cu;
    // NOP
    ctx->pc = 0x1e3320u;
}
