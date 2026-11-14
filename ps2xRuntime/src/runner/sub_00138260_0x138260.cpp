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

// Function: sub_00138260
// Address: 0x138260 - 0x138300
void sub_00138260_0x138260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138260_0x138260");
#endif

    switch (ctx->pc) {
        case 0x138288u: goto label_138288;
        case 0x1382a0u: goto label_1382a0;
        case 0x1382b8u: goto label_1382b8;
        case 0x1382d4u: goto label_1382d4;
        default: break;
    }

    ctx->pc = 0x138260u;

    // 0x138260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x138260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x138264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x138264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x138268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13826c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138270: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x138270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x138274: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x138274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x138278: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x138278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13827c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x13827cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138280: 0xc04efd8  jal         func_13BF60
    ctx->pc = 0x138280u;
    SET_GPR_U32(ctx, 31, 0x138288u);
    ctx->pc = 0x13BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF60u, 0x138280u, 0x138288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138288u;
label_138288:
    // 0x138288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13828c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138290: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x138290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x138294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138298: 0xc04f260  jal         func_13C980
    ctx->pc = 0x138298u;
    SET_GPR_U32(ctx, 31, 0x1382A0u);
    ctx->pc = 0x13C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C980u, 0x138298u, 0x1382A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1382A0u;
label_1382a0:
    // 0x1382a0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1382a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1382a4: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1382a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1382a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1382ac: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1382acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1382b0: 0xc04e0d0  jal         func_138340
    ctx->pc = 0x1382B0u;
    SET_GPR_U32(ctx, 31, 0x1382B8u);
    ctx->pc = 0x138340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138340u, 0x1382B0u, 0x1382B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1382B8u;
label_1382b8:
    // 0x1382b8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1382b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1382bc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1382bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1382c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1382c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1382c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1382c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382cc: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x1382CCu;
    SET_GPR_U32(ctx, 31, 0x1382D4u);
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x1382CCu, 0x1382D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1382D4u;
label_1382d4:
    // 0x1382d4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1382d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1382d8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1382d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1382dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1382dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1382e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1382e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1382e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1382e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1382e8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1382e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1382ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1382ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1382ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1382F4u;
    // 0x1382f4: 0x0  nop
    ctx->pc = 0x1382f4u;
    // NOP
    // 0x1382f8: 0x0  nop
    ctx->pc = 0x1382f8u;
    // NOP
    // 0x1382fc: 0x0  nop
    ctx->pc = 0x1382fcu;
    // NOP
    ctx->pc = 0x138300u;
}
