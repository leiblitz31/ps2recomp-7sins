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

// Function: sub_0012A850
// Address: 0x12a850 - 0x12a8e0
void sub_0012A850_0x12a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A850_0x12a850");
#endif

    switch (ctx->pc) {
        case 0x12a888u: goto label_12a888;
        case 0x12a898u: goto label_12a898;
        default: break;
    }

    ctx->pc = 0x12a850u;

    // 0x12a850: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12a854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a85c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12a860: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x12a860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x12a864: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x12a864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x12a868: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x12a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a86c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a870: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12a870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12a874: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x12a874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12a878: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12a878u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12a87c: 0x8012  mflo        $s0
    ctx->pc = 0x12a87cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x12a880: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12A880u;
    {
        const bool branch_taken_0x12a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a880) {
            ctx->pc = 0x12A8B4u;
            goto label_12a8b4;
        }
    }
    ctx->pc = 0x12A888u;
label_12a888:
    // 0x12a888: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x12a888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a88c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12a88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a890: 0xc04aa38  jal         func_12A8E0
    ctx->pc = 0x12A890u;
    SET_GPR_U32(ctx, 31, 0x12A898u);
    ctx->pc = 0x12A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A8E0u, 0x12A890u, 0x12A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A898u;
label_12a898:
    // 0x12a898: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a89c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x12a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x12a8a0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x12a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12a8a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a8a8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x12a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x12a8ac: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x12a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x12a8b0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x12a8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_12a8b4:
    // 0x12a8b4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12A8B4u;
    {
        const bool branch_taken_0x12a8b4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x12a8b4) {
            ctx->pc = 0x12A888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a888;
        }
    }
    ctx->pc = 0x12A8BCu;
    // 0x12a8bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a8c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a8c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a8c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x12a8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12a8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12A8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A8D4u;
    // 0x12a8d4: 0x0  nop
    ctx->pc = 0x12a8d4u;
    // NOP
    // 0x12a8d8: 0x0  nop
    ctx->pc = 0x12a8d8u;
    // NOP
    // 0x12a8dc: 0x0  nop
    ctx->pc = 0x12a8dcu;
    // NOP
    ctx->pc = 0x12a8e0u;
}
