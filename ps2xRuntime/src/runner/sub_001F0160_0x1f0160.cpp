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

// Function: sub_001F0160
// Address: 0x1f0160 - 0x1f0270
void sub_001F0160_0x1f0160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0160_0x1f0160");
#endif

    switch (ctx->pc) {
        case 0x1f01f4u: goto label_1f01f4;
        case 0x1f0218u: goto label_1f0218;
        case 0x1f0228u: goto label_1f0228;
        case 0x1f0248u: goto label_1f0248;
        case 0x1f0258u: goto label_1f0258;
        default: break;
    }

    ctx->pc = 0x1f0160u;

    // 0x1f0160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f0168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f016c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f016cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1f0170: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0174: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0174u;
    {
        const bool branch_taken_0x1f0174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0174) {
            ctx->pc = 0x1F0188u;
            goto label_1f0188;
        }
    }
    ctx->pc = 0x1F017Cu;
    // 0x1f017c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f017cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0180: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1F0180u;
    {
        const bool branch_taken_0x1f0180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0180) {
            ctx->pc = 0x1F025Cu;
            goto label_1f025c;
        }
    }
    ctx->pc = 0x1F0188u;
label_1f0188:
    // 0x1f0188: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f0188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f018c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1f018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f0190: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f0190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0194: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1f0194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x1f0198: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f019c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f01a4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1f01a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1f01a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f01a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f01ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f01acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f01b0: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x1f01b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x1f01b4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1f01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f01b8: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x1f01b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f01c0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1f01c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1f01c4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1f01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f01c8: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1f01c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f01d0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1f01d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1f01d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f01d8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f01d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f01dc: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1f01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f01e0: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1f01e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f01e8: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x1f01e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1f01ec: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1F01ECu;
    SET_GPR_U32(ctx, 31, 0x1F01F4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1F01ECu, 0x1F01F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01F4u;
label_1f01f4:
    // 0x1f01f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f01f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1f01f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f01fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1f01fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f0200: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1f0200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0204: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1f0204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f0208: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x1f0208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x1f020c: 0x278598c8  addiu       $a1, $gp, -0x6738
    ctx->pc = 0x1f020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940872));
    // 0x1f0210: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1F0210u;
    SET_GPR_U32(ctx, 31, 0x1F0218u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1F0210u, 0x1F0218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0218u;
label_1f0218:
    // 0x1f0218: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1f0218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f021c: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x1f021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x1f0220: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F0220u;
    SET_GPR_U32(ctx, 31, 0x1F0228u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F0220u, 0x1F0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0228u;
label_1f0228:
    // 0x1f0228: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f0228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f022c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f022cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0230: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1f0230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1f0234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f0234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f023c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f023cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0240: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1F0240u;
    SET_GPR_U32(ctx, 31, 0x1F0248u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1F0240u, 0x1F0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0248u;
label_1f0248:
    // 0x1f0248: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f0248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f024c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f024cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0250: 0xc07be58  jal         func_1EF960
    ctx->pc = 0x1F0250u;
    SET_GPR_U32(ctx, 31, 0x1F0258u);
    ctx->pc = 0x1EF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF960u, 0x1F0250u, 0x1F0258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0258u;
label_1f0258:
    // 0x1f0258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f025c:
    // 0x1f025c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0260: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f0260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0264: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F026Cu;
    // 0x1f026c: 0x0  nop
    ctx->pc = 0x1f026cu;
    // NOP
    ctx->pc = 0x1f0270u;
}
