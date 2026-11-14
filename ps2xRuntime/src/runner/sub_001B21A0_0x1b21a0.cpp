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

// Function: sub_001B21A0
// Address: 0x1b21a0 - 0x1b2230
void sub_001B21A0_0x1b21a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B21A0_0x1b21a0");
#endif

    switch (ctx->pc) {
        case 0x1b21d8u: goto label_1b21d8;
        case 0x1b21e8u: goto label_1b21e8;
        default: break;
    }

    ctx->pc = 0x1b21a0u;

    // 0x1b21a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b21a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b21a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b21a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b21a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b21a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b21ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b21acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b21b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b21b4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1b21b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1b21b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b21bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b21c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b21c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b21c8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b21c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b21cc: 0x8012  mflo        $s0
    ctx->pc = 0x1b21ccu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1b21d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B21D0u;
    {
        const bool branch_taken_0x1b21d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21d0) {
            ctx->pc = 0x1B2204u;
            goto label_1b2204;
        }
    }
    ctx->pc = 0x1B21D8u;
label_1b21d8:
    // 0x1b21d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1b21d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b21dc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b21dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b21e0: 0xc06c88c  jal         func_1B2230
    ctx->pc = 0x1B21E0u;
    SET_GPR_U32(ctx, 31, 0x1B21E8u);
    ctx->pc = 0x1B2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2230u, 0x1B21E0u, 0x1B21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21E8u;
label_1b21e8:
    // 0x1b21e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b21ec: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1b21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b21f0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1b21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1b21f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b21f8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b21fc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1b21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1b2200: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1b2204:
    // 0x1b2204: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B2204u;
    {
        const bool branch_taken_0x1b2204 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1b2204) {
            ctx->pc = 0x1B21D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b21d8;
        }
    }
    ctx->pc = 0x1B220Cu;
    // 0x1b220c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2218: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b2218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b221c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B221Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B221Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2224u;
    // 0x1b2224: 0x0  nop
    ctx->pc = 0x1b2224u;
    // NOP
    // 0x1b2228: 0x0  nop
    ctx->pc = 0x1b2228u;
    // NOP
    // 0x1b222c: 0x0  nop
    ctx->pc = 0x1b222cu;
    // NOP
    ctx->pc = 0x1b2230u;
}
