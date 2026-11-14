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

// Function: sub_0022D370
// Address: 0x22d370 - 0x22d400
void sub_0022D370_0x22d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D370_0x22d370");
#endif

    switch (ctx->pc) {
        case 0x22d3a8u: goto label_22d3a8;
        case 0x22d3b8u: goto label_22d3b8;
        default: break;
    }

    ctx->pc = 0x22d370u;

    // 0x22d370: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22d374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22d378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d37c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22d380: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22d380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22d384: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x22d384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x22d388: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d38c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d390: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22d390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d394: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d398: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22d398u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22d39c: 0x8012  mflo        $s0
    ctx->pc = 0x22d39cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x22d3a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22D3A0u;
    {
        const bool branch_taken_0x22d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3a0) {
            ctx->pc = 0x22D3D4u;
            goto label_22d3d4;
        }
    }
    ctx->pc = 0x22D3A8u;
label_22d3a8:
    // 0x22d3a8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d3ac: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d3b0: 0xc08b500  jal         func_22D400
    ctx->pc = 0x22D3B0u;
    SET_GPR_U32(ctx, 31, 0x22D3B8u);
    ctx->pc = 0x22D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D400u, 0x22D3B0u, 0x22D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3B8u;
label_22d3b8:
    // 0x22d3b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d3bc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x22d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x22d3c0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22d3c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d3c8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x22d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x22d3cc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x22d3d0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_22d3d4:
    // 0x22d3d4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22D3D4u;
    {
        const bool branch_taken_0x22d3d4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x22d3d4) {
            ctx->pc = 0x22D3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d3a8;
        }
    }
    ctx->pc = 0x22D3DCu;
    // 0x22d3dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d3e8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x22d3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22d3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x22D3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D3F4u;
    // 0x22d3f4: 0x0  nop
    ctx->pc = 0x22d3f4u;
    // NOP
    // 0x22d3f8: 0x0  nop
    ctx->pc = 0x22d3f8u;
    // NOP
    // 0x22d3fc: 0x0  nop
    ctx->pc = 0x22d3fcu;
    // NOP
    ctx->pc = 0x22d400u;
}
