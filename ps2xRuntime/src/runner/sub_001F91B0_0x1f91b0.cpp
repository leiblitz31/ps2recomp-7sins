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

// Function: sub_001F91B0
// Address: 0x1f91b0 - 0x1f92c0
void sub_001F91B0_0x1f91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F91B0_0x1f91b0");
#endif

    switch (ctx->pc) {
        case 0x1f91d0u: goto label_1f91d0;
        case 0x1f91dcu: goto label_1f91dc;
        case 0x1f91f4u: goto label_1f91f4;
        case 0x1f9200u: goto label_1f9200;
        case 0x1f9218u: goto label_1f9218;
        case 0x1f9224u: goto label_1f9224;
        case 0x1f923cu: goto label_1f923c;
        case 0x1f9248u: goto label_1f9248;
        case 0x1f9260u: goto label_1f9260;
        case 0x1f9274u: goto label_1f9274;
        default: break;
    }

    ctx->pc = 0x1f91b0u;

    // 0x1f91b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f91b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f91b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f91b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f91b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f91bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f91bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f91c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f91c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f91c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f91c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f91c8: 0xc07e26c  jal         func_1F89B0
    ctx->pc = 0x1F91C8u;
    SET_GPR_U32(ctx, 31, 0x1F91D0u);
    ctx->pc = 0x1F89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B0u, 0x1F91C8u, 0x1F91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F91D0u;
label_1f91d0:
    // 0x1f91d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f91d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f91d4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F91D4u;
    SET_GPR_U32(ctx, 31, 0x1F91DCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F91D4u, 0x1F91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F91DCu;
label_1f91dc:
    // 0x1f91dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f91e0: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1f91e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f91e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f91e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f91e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91ec: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F91ECu;
    SET_GPR_U32(ctx, 31, 0x1F91F4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F91ECu, 0x1F91F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F91F4u;
label_1f91f4:
    // 0x1f91f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f91f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f91f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F91F8u;
    SET_GPR_U32(ctx, 31, 0x1F9200u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F91F8u, 0x1F9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9200u;
label_1f9200:
    // 0x1f9200: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9204: 0x8c650134  lw          $a1, 0x134($v1)
    ctx->pc = 0x1f9204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1f9208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f920c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f920cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9210: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9210u;
    SET_GPR_U32(ctx, 31, 0x1F9218u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9210u, 0x1F9218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9218u;
label_1f9218:
    // 0x1f9218: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f9218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f921c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F921Cu;
    SET_GPR_U32(ctx, 31, 0x1F9224u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F921Cu, 0x1F9224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9224u;
label_1f9224:
    // 0x1f9224: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9228: 0x8c65017c  lw          $a1, 0x17C($v1)
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
    // 0x1f922c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f922cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9234: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9234u;
    SET_GPR_U32(ctx, 31, 0x1F923Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9234u, 0x1F923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F923Cu;
label_1f923c:
    // 0x1f923c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f923cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9240: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9240u;
    SET_GPR_U32(ctx, 31, 0x1F9248u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9240u, 0x1F9248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9248u;
label_1f9248:
    // 0x1f9248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f924c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9250: 0x244401f0  addiu       $a0, $v0, 0x1F0
    ctx->pc = 0x1f9250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x1f9254: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f9254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9258: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F9258u;
    SET_GPR_U32(ctx, 31, 0x1F9260u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F9258u, 0x1F9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9260u;
label_1f9260:
    // 0x1f9260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f9260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f926c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F926Cu;
    SET_GPR_U32(ctx, 31, 0x1F9274u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F926Cu, 0x1F9274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9274u;
label_1f9274:
    // 0x1f9274: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9278: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f927c: 0xac64022c  sw          $a0, 0x22C($v1)
    ctx->pc = 0x1f927cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 556), GPR_U32(ctx, 4));
    // 0x1f9280: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9284: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9288: 0xa0640280  sb          $a0, 0x280($v1)
    ctx->pc = 0x1f9288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 640), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f928c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9290: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9294: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9298: 0xc4600288  lwc1        $f0, 0x288($v1)
    ctx->pc = 0x1f9298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f929c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f929cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f92a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f92a4: 0xe4600284  swc1        $f0, 0x284($v1)
    ctx->pc = 0x1f92a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 644), bits); }
    // 0x1f92a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f92a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f92ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f92acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f92b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f92b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f92b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F92B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F92B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F92BCu;
    // 0x1f92bc: 0x0  nop
    ctx->pc = 0x1f92bcu;
    // NOP
    ctx->pc = 0x1f92c0u;
}
