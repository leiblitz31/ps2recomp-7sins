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

// Function: sub_00260390
// Address: 0x260390 - 0x260420
void sub_00260390_0x260390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260390_0x260390");
#endif

    switch (ctx->pc) {
        case 0x2603b8u: goto label_2603b8;
        case 0x2603c4u: goto label_2603c4;
        case 0x2603d8u: goto label_2603d8;
        case 0x2603f0u: goto label_2603f0;
        case 0x260404u: goto label_260404;
        default: break;
    }

    ctx->pc = 0x260390u;

    // 0x260390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x260390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x260394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x260394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x260398: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x260398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26039c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x26039cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2603a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2603a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2603a4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2603a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2603a8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2603a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2603ac: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2603acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2603b0: 0xc098108  jal         func_260420
    ctx->pc = 0x2603B0u;
    SET_GPR_U32(ctx, 31, 0x2603B8u);
    ctx->pc = 0x260420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260420u, 0x2603B0u, 0x2603B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603B8u;
label_2603b8:
    // 0x2603b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2603b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2603bc: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2603BCu;
    SET_GPR_U32(ctx, 31, 0x2603C4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2603BCu, 0x2603C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603C4u;
label_2603c4:
    // 0x2603c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2603c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2603c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2603ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2603d0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2603D0u;
    SET_GPR_U32(ctx, 31, 0x2603D8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2603D0u, 0x2603D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603D8u;
label_2603d8:
    // 0x2603d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2603d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2603dc: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x2603dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2603e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2603e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2603e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2603e8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2603E8u;
    SET_GPR_U32(ctx, 31, 0x2603F0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2603E8u, 0x2603F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603F0u;
label_2603f0:
    // 0x2603f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2603f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2603f4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2603f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2603f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2603f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2603fc: 0xc098024  jal         func_260090
    ctx->pc = 0x2603FCu;
    SET_GPR_U32(ctx, 31, 0x260404u);
    ctx->pc = 0x260090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260090u, 0x2603FCu, 0x260404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260404u;
label_260404:
    // 0x260404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x260404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260408: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x260408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26040c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x260410: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x260410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x260414: 0x3e00008  jr          $ra
    ctx->pc = 0x260414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26041Cu;
    // 0x26041c: 0x0  nop
    ctx->pc = 0x26041cu;
    // NOP
    ctx->pc = 0x260420u;
}
