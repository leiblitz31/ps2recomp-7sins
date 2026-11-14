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

// Function: sub_004839D0
// Address: 0x4839d0 - 0x483aa0
void sub_004839D0_0x4839d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004839D0_0x4839d0");
#endif

    switch (ctx->pc) {
        case 0x483a00u: goto label_483a00;
        case 0x483a14u: goto label_483a14;
        case 0x483a30u: goto label_483a30;
        case 0x483a3cu: goto label_483a3c;
        case 0x483a5cu: goto label_483a5c;
        case 0x483a78u: goto label_483a78;
        default: break;
    }

    ctx->pc = 0x4839d0u;

    // 0x4839d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4839d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4839d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4839d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4839d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4839d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4839dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4839dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4839e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4839e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4839e4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4839e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4839e8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4839e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4839ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4839ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4839f0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4839f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4839f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4839f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4839f8: 0xc0a09b4  jal         func_2826D0
    ctx->pc = 0x4839F8u;
    SET_GPR_U32(ctx, 31, 0x483A00u);
    ctx->pc = 0x2826D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826D0u, 0x4839F8u, 0x483A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483A00u;
label_483a00:
    // 0x483a00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x483a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483a04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x483a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x483a08: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x483a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x483a0c: 0xc04e50c  jal         func_139430
    ctx->pc = 0x483A0Cu;
    SET_GPR_U32(ctx, 31, 0x483A14u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x483A0Cu, 0x483A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483A14u;
label_483a14:
    // 0x483a14: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x483a14u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x483a18: 0x8810  mfhi        $s1
    ctx->pc = 0x483a18u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x483a1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x483a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x483a20: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x483a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x483a24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x483a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483a28: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x483A28u;
    SET_GPR_U32(ctx, 31, 0x483A30u);
    ctx->pc = 0x13B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B640u, 0x483A28u, 0x483A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483A30u;
label_483a30:
    // 0x483a30: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x483a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x483a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x483A34u;
    {
        const bool branch_taken_0x483a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483a34) {
            ctx->pc = 0x483A40u;
            goto label_483a40;
        }
    }
    ctx->pc = 0x483A3Cu;
label_483a3c:
    // 0x483a3c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x483a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_483a40:
    // 0x483a40: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x483A40u;
    {
        const bool branch_taken_0x483a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x483a40) {
            ctx->pc = 0x483A80u;
            goto label_483a80;
        }
    }
    ctx->pc = 0x483A48u;
    // 0x483a48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x483a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x483a4c: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x483a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x483a50: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x483a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x483a54: 0xc0a09dc  jal         func_282770
    ctx->pc = 0x483A54u;
    SET_GPR_U32(ctx, 31, 0x483A5Cu);
    ctx->pc = 0x282770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282770u, 0x483A54u, 0x483A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483A5Cu;
label_483a5c:
    // 0x483a5c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x483a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x483a60: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x483a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x483a64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x483a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x483a68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x483a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x483a6c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x483a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x483a70: 0xc120ea8  jal         func_483AA0
    ctx->pc = 0x483A70u;
    SET_GPR_U32(ctx, 31, 0x483A78u);
    ctx->pc = 0x483AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483AA0u, 0x483A70u, 0x483A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483A78u;
label_483a78:
    // 0x483a78: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x483A78u;
    {
        const bool branch_taken_0x483a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483a78) {
            ctx->pc = 0x483A3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483a3c;
        }
    }
    ctx->pc = 0x483A80u;
label_483a80:
    // 0x483a80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x483a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483a84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x483a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x483a88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x483a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x483a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483a94: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x483a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x483a98: 0x3e00008  jr          $ra
    ctx->pc = 0x483A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483AA0u;
}
