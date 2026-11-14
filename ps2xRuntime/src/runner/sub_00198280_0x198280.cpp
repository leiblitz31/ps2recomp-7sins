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

// Function: sub_00198280
// Address: 0x198280 - 0x198310
void sub_00198280_0x198280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198280_0x198280");
#endif

    switch (ctx->pc) {
        case 0x1982b8u: goto label_1982b8;
        case 0x1982c8u: goto label_1982c8;
        default: break;
    }

    ctx->pc = 0x198280u;

    // 0x198280: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x198280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x198284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x198288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19828c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19828cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x198290: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x198290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x198294: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x198294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x198298: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x198298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19829c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1982a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1982a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1982a4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1982a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1982a8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1982a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1982ac: 0x8012  mflo        $s0
    ctx->pc = 0x1982acu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1982b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1982B0u;
    {
        const bool branch_taken_0x1982b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1982b0) {
            ctx->pc = 0x1982E4u;
            goto label_1982e4;
        }
    }
    ctx->pc = 0x1982B8u;
label_1982b8:
    // 0x1982b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1982b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1982bc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1982bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1982c0: 0xc0660c4  jal         func_198310
    ctx->pc = 0x1982C0u;
    SET_GPR_U32(ctx, 31, 0x1982C8u);
    ctx->pc = 0x198310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198310u, 0x1982C0u, 0x1982C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982C8u;
label_1982c8:
    // 0x1982c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1982c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1982cc: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x1982ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x1982d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1982d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1982d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1982d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1982d8: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x1982d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x1982dc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1982dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1982e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1982e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1982e4:
    // 0x1982e4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1982E4u;
    {
        const bool branch_taken_0x1982e4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1982e4) {
            ctx->pc = 0x1982B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1982b8;
        }
    }
    ctx->pc = 0x1982ECu;
    // 0x1982ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1982ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1982f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1982f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1982f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1982f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1982f8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1982f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1982fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1982FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1982FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198304u;
    // 0x198304: 0x0  nop
    ctx->pc = 0x198304u;
    // NOP
    // 0x198308: 0x0  nop
    ctx->pc = 0x198308u;
    // NOP
    // 0x19830c: 0x0  nop
    ctx->pc = 0x19830cu;
    // NOP
    ctx->pc = 0x198310u;
}
