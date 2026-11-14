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

// Function: sub_0023D380
// Address: 0x23d380 - 0x23d410
void sub_0023D380_0x23d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D380_0x23d380");
#endif

    switch (ctx->pc) {
        case 0x23d3b8u: goto label_23d3b8;
        case 0x23d3c8u: goto label_23d3c8;
        default: break;
    }

    ctx->pc = 0x23d380u;

    // 0x23d380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23d384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23d388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23d38c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23d390: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23d390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23d394: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x23d394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x23d398: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23d398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d39c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d3a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d3a4: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x23d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23d3a8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23d3a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23d3ac: 0x8012  mflo        $s0
    ctx->pc = 0x23d3acu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x23d3b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23D3B0u;
    {
        const bool branch_taken_0x23d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d3b0) {
            ctx->pc = 0x23D3E4u;
            goto label_23d3e4;
        }
    }
    ctx->pc = 0x23D3B8u;
label_23d3b8:
    // 0x23d3b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d3bc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d3c0: 0xc08f504  jal         func_23D410
    ctx->pc = 0x23D3C0u;
    SET_GPR_U32(ctx, 31, 0x23D3C8u);
    ctx->pc = 0x23D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D410u, 0x23D3C0u, 0x23D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3C8u;
label_23d3c8:
    // 0x23d3c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d3cc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23d3d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x23d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x23d3d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d3d8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23d3dc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x23d3e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x23d3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_23d3e4:
    // 0x23d3e4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23D3E4u;
    {
        const bool branch_taken_0x23d3e4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x23d3e4) {
            ctx->pc = 0x23D3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d3b8;
        }
    }
    ctx->pc = 0x23D3ECu;
    // 0x23d3ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d3f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d3f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d3f8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23d3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x23D3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D404u;
    // 0x23d404: 0x0  nop
    ctx->pc = 0x23d404u;
    // NOP
    // 0x23d408: 0x0  nop
    ctx->pc = 0x23d408u;
    // NOP
    // 0x23d40c: 0x0  nop
    ctx->pc = 0x23d40cu;
    // NOP
    ctx->pc = 0x23d410u;
}
