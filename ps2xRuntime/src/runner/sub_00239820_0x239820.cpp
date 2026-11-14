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

// Function: sub_00239820
// Address: 0x239820 - 0x2398f0
void sub_00239820_0x239820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239820_0x239820");
#endif

    switch (ctx->pc) {
        case 0x239848u: goto label_239848;
        case 0x239860u: goto label_239860;
        case 0x23986cu: goto label_23986c;
        case 0x239880u: goto label_239880;
        case 0x239894u: goto label_239894;
        case 0x2398a8u: goto label_2398a8;
        case 0x2398c0u: goto label_2398c0;
        default: break;
    }

    ctx->pc = 0x239820u;

    // 0x239820: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x239820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x239824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x239824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x239828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23982c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239830: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x239830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x239834: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x239834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x239838: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x239838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x23983c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23983cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239840: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x239840u;
    SET_GPR_U32(ctx, 31, 0x239848u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x239840u, 0x239848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239848u;
label_239848:
    // 0x239848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23984c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23984cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239850: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x239850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x239854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239858: 0xc065198  jal         func_194660
    ctx->pc = 0x239858u;
    SET_GPR_U32(ctx, 31, 0x239860u);
    ctx->pc = 0x194660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194660u, 0x239858u, 0x239860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239860u;
label_239860:
    // 0x239860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239864: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x239864u;
    {
        const bool branch_taken_0x239864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239864) {
            ctx->pc = 0x2398ACu;
            goto label_2398ac;
        }
    }
    ctx->pc = 0x23986Cu;
label_23986c:
    // 0x23986c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239874: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x239874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239878: 0xc059668  jal         func_1659A0
    ctx->pc = 0x239878u;
    SET_GPR_U32(ctx, 31, 0x239880u);
    ctx->pc = 0x1659A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659A0u, 0x239878u, 0x239880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239880u;
label_239880:
    // 0x239880: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x239880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239884: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x239884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x239888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x239888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23988c: 0xc059698  jal         func_165A60
    ctx->pc = 0x23988Cu;
    SET_GPR_U32(ctx, 31, 0x239894u);
    ctx->pc = 0x165A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A60u, 0x23988Cu, 0x239894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239894u;
label_239894:
    // 0x239894: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x239894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239898: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x239898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23989c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23989cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398a0: 0xc065198  jal         func_194660
    ctx->pc = 0x2398A0u;
    SET_GPR_U32(ctx, 31, 0x2398A8u);
    ctx->pc = 0x194660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194660u, 0x2398A0u, 0x2398A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398A8u;
label_2398a8:
    // 0x2398a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2398a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2398ac:
    // 0x2398ac: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2398ACu;
    {
        const bool branch_taken_0x2398ac = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2398ac) {
            ctx->pc = 0x2398CCu;
            goto label_2398cc;
        }
    }
    ctx->pc = 0x2398B4u;
    // 0x2398b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2398b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2398b8: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x2398B8u;
    SET_GPR_U32(ctx, 31, 0x2398C0u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x2398B8u, 0x2398C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398C0u;
label_2398c0:
    // 0x2398c0: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x2398c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2398c4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2398C4u;
    {
        const bool branch_taken_0x2398c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2398c4) {
            ctx->pc = 0x23986Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23986c;
        }
    }
    ctx->pc = 0x2398CCu;
label_2398cc:
    // 0x2398cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2398ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2398d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2398d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2398d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2398d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2398d8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2398d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2398dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2398DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2398DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2398E4u;
    // 0x2398e4: 0x0  nop
    ctx->pc = 0x2398e4u;
    // NOP
    // 0x2398e8: 0x0  nop
    ctx->pc = 0x2398e8u;
    // NOP
    // 0x2398ec: 0x0  nop
    ctx->pc = 0x2398ecu;
    // NOP
    ctx->pc = 0x2398f0u;
}
