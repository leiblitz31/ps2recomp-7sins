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

// Function: sub_0022E640
// Address: 0x22e640 - 0x22e6d0
void sub_0022E640_0x22e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E640_0x22e640");
#endif

    switch (ctx->pc) {
        case 0x22e678u: goto label_22e678;
        case 0x22e688u: goto label_22e688;
        default: break;
    }

    ctx->pc = 0x22e640u;

    // 0x22e640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22e640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22e644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22e648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e64c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22e650: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22e650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22e654: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x22e654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x22e658: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e65c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e660: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22e660u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e664: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x22e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x22e668: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22e668u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22e66c: 0x8012  mflo        $s0
    ctx->pc = 0x22e66cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x22e670: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22E670u;
    {
        const bool branch_taken_0x22e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e670) {
            ctx->pc = 0x22E6A4u;
            goto label_22e6a4;
        }
    }
    ctx->pc = 0x22E678u;
label_22e678:
    // 0x22e678: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22e678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e67c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22e67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e680: 0xc08b9b4  jal         func_22E6D0
    ctx->pc = 0x22E680u;
    SET_GPR_U32(ctx, 31, 0x22E688u);
    ctx->pc = 0x22E6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E6D0u, 0x22E680u, 0x22E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E688u;
label_22e688:
    // 0x22e688: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e68c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x22e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22e690: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22e690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22e694: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e698: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x22e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22e69c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x22e6a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22e6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_22e6a4:
    // 0x22e6a4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22E6A4u;
    {
        const bool branch_taken_0x22e6a4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x22e6a4) {
            ctx->pc = 0x22E678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e678;
        }
    }
    ctx->pc = 0x22E6ACu;
    // 0x22e6ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22e6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e6b8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x22e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x22E6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E6C4u;
    // 0x22e6c4: 0x0  nop
    ctx->pc = 0x22e6c4u;
    // NOP
    // 0x22e6c8: 0x0  nop
    ctx->pc = 0x22e6c8u;
    // NOP
    // 0x22e6cc: 0x0  nop
    ctx->pc = 0x22e6ccu;
    // NOP
    ctx->pc = 0x22e6d0u;
}
