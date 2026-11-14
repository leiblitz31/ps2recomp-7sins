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

// Function: sub_001E8470
// Address: 0x1e8470 - 0x1e84f0
void sub_001E8470_0x1e8470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8470_0x1e8470");
#endif

    switch (ctx->pc) {
        case 0x1e84a8u: goto label_1e84a8;
        case 0x1e84c8u: goto label_1e84c8;
        default: break;
    }

    ctx->pc = 0x1e8470u;

    // 0x1e8470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e8474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e847c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e847cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e8480: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e8480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e8484: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e8484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e8488: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e8488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e848c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8490: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e8490u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8494: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e8494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e8498: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e8498u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e849c: 0x8012  mflo        $s0
    ctx->pc = 0x1e849cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1e84a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E84A0u;
    {
        const bool branch_taken_0x1e84a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e84a0) {
            ctx->pc = 0x1E84CCu;
            goto label_1e84cc;
        }
    }
    ctx->pc = 0x1E84A8u;
label_1e84a8:
    // 0x1e84a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e84ac: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x1e84acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1e84b0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1e84b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1e84b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e84b8: 0x2445fff4  addiu       $a1, $v0, -0xC
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1e84bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e84bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e84c0: 0xc0785f0  jal         func_1E17C0
    ctx->pc = 0x1E84C0u;
    SET_GPR_U32(ctx, 31, 0x1E84C8u);
    ctx->pc = 0x1E17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E17C0u, 0x1E84C0u, 0x1E84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84C8u;
label_1e84c8:
    // 0x1e84c8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e84cc:
    // 0x1e84cc: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E84CCu;
    {
        const bool branch_taken_0x1e84cc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e84cc) {
            ctx->pc = 0x1E84A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e84a8;
        }
    }
    ctx->pc = 0x1E84D4u;
    // 0x1e84d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e84d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e84d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e84dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e84dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e84e0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e84e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e84e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E84E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E84E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E84ECu;
    // 0x1e84ec: 0x0  nop
    ctx->pc = 0x1e84ecu;
    // NOP
    ctx->pc = 0x1e84f0u;
}
