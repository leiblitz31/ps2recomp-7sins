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

// Function: sub_001FB7F0
// Address: 0x1fb7f0 - 0x1fb8b0
void sub_001FB7F0_0x1fb7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB7F0_0x1fb7f0");
#endif

    switch (ctx->pc) {
        case 0x1fb834u: goto label_1fb834;
        case 0x1fb840u: goto label_1fb840;
        case 0x1fb858u: goto label_1fb858;
        case 0x1fb880u: goto label_1fb880;
        default: break;
    }

    ctx->pc = 0x1fb7f0u;

    // 0x1fb7f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fb7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fb7f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fb7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fb7f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fb7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fb7fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fb800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fb804: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1fb804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1fb808: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1fb808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1fb80c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1fb80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1fb810: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1fb810u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fb814: 0xe7ad0080  swc1        $f13, 0x80($sp)
    ctx->pc = 0x1fb814u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1fb818: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb81c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fb81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fb820: 0x8c63bfb4  lw          $v1, -0x404C($v1)
    ctx->pc = 0x1fb820u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB4u));
    // 0x1fb824: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x1fb824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1fb828: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1fb828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fb82c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FB82Cu;
    {
        const bool branch_taken_0x1fb82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb82c) {
            ctx->pc = 0x1FB884u;
            goto label_1fb884;
        }
    }
    ctx->pc = 0x1FB834u;
label_1fb834:
    // 0x1fb834: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fb834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb838: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FB838u;
    SET_GPR_U32(ctx, 31, 0x1FB840u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FB838u, 0x1FB840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB840u;
label_1fb840:
    // 0x1fb840: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fb840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb844: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fb844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb848: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fb848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fb84c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fb84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb850: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FB850u;
    SET_GPR_U32(ctx, 31, 0x1FB858u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FB850u, 0x1FB858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB858u;
label_1fb858:
    // 0x1fb858: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fb858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fb85c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb860: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1fb860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fb864: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x1fb864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fb868: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1fb868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fb86c: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fb86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fb870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fb870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb874: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fb874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb878: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FB878u;
    SET_GPR_U32(ctx, 31, 0x1FB880u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FB878u, 0x1FB880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB880u;
label_1fb880:
    // 0x1fb880: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb884:
    // 0x1fb884: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1fb884u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fb888: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1FB888u;
    {
        const bool branch_taken_0x1fb888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb888) {
            ctx->pc = 0x1FB834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb834;
        }
    }
    ctx->pc = 0x1FB890u;
    // 0x1fb890: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fb890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb894: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fb894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb89c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb8a0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1fb8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fb8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB8ACu;
    // 0x1fb8ac: 0x0  nop
    ctx->pc = 0x1fb8acu;
    // NOP
    ctx->pc = 0x1fb8b0u;
}
