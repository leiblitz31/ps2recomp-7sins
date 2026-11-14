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

// Function: sub_002600F0
// Address: 0x2600f0 - 0x260240
void sub_002600F0_0x2600f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002600F0_0x2600f0");
#endif

    switch (ctx->pc) {
        case 0x260120u: goto label_260120;
        case 0x260130u: goto label_260130;
        case 0x260180u: goto label_260180;
        case 0x26019cu: goto label_26019c;
        case 0x2601b4u: goto label_2601b4;
        case 0x2601f0u: goto label_2601f0;
        case 0x260218u: goto label_260218;
        default: break;
    }

    ctx->pc = 0x2600f0u;

    // 0x2600f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2600f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2600f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2600f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2600f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2600f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2600fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2600fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x260100: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x260100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x260104: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x260104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x260108: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x260108u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26010c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260110: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x260110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260114: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260118: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260118u;
    SET_GPR_U32(ctx, 31, 0x260120u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260118u, 0x260120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260120u;
label_260120:
    // 0x260120: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260124: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x260124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260128: 0xc098588  jal         func_261620
    ctx->pc = 0x260128u;
    SET_GPR_U32(ctx, 31, 0x260130u);
    ctx->pc = 0x261620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261620u, 0x260128u, 0x260130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260130u;
label_260130:
    // 0x260130: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x260130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260134: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x260134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260138: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x260138u;
    {
        const bool branch_taken_0x260138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x260138) {
            ctx->pc = 0x260168u;
            goto label_260168;
        }
    }
    ctx->pc = 0x260140u;
    // 0x260140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260144: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x260144u;
    {
        const bool branch_taken_0x260144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x260144) {
            ctx->pc = 0x260168u;
            goto label_260168;
        }
    }
    ctx->pc = 0x26014Cu;
    // 0x26014c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x260150: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x260150u;
    {
        const bool branch_taken_0x260150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x260150) {
            ctx->pc = 0x260168u;
            goto label_260168;
        }
    }
    ctx->pc = 0x260158u;
    // 0x260158: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260158u;
    {
        const bool branch_taken_0x260158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x260158) {
            ctx->pc = 0x260168u;
            goto label_260168;
        }
    }
    ctx->pc = 0x260160u;
    // 0x260160: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x260160u;
    {
        const bool branch_taken_0x260160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260160) {
            ctx->pc = 0x260220u;
            goto label_260220;
        }
    }
    ctx->pc = 0x260168u;
label_260168:
    // 0x260168: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x260168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26016c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260170: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x260170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260174: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260178: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260178u;
    SET_GPR_U32(ctx, 31, 0x260180u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260178u, 0x260180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260180u;
label_260180:
    // 0x260180: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260184: 0xa0500020  sb          $s0, 0x20($v0)
    ctx->pc = 0x260184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 16));
    // 0x260188: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x260188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26018c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x26018cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260190: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260194: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260194u;
    SET_GPR_U32(ctx, 31, 0x26019Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260194u, 0x26019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26019Cu;
label_26019c:
    // 0x26019c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26019cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2601a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2601a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2601a4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2601a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2601a8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2601a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2601ac: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2601ACu;
    SET_GPR_U32(ctx, 31, 0x2601B4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2601ACu, 0x2601B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601B4u;
label_2601b4:
    // 0x2601b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2601b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2601b8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2601b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2601bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2601bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2601c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2601c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2601c4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2601c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2601c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2601c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2601cc: 0x0  nop
    ctx->pc = 0x2601ccu;
    // NOP
    // 0x2601d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2601d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2601d4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2601D4u;
    {
        const bool branch_taken_0x2601d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2601d4) {
            ctx->pc = 0x260220u;
            goto label_260220;
        }
    }
    ctx->pc = 0x2601DCu;
    // 0x2601dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2601dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2601e0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2601e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2601e4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2601e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2601e8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2601E8u;
    SET_GPR_U32(ctx, 31, 0x2601F0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2601E8u, 0x2601F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601F0u;
label_2601f0:
    // 0x2601f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2601f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2601f4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2601f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2601f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2601f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2601fc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2601fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260200: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x260200u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x260204: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x260204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260208: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x260208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26020c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x26020cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260210: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260210u;
    SET_GPR_U32(ctx, 31, 0x260218u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260210u, 0x260218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260218u;
label_260218:
    // 0x260218: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26021c: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x26021cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_260220:
    // 0x260220: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x260220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260224: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x260224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260228: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x260228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26022c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26022cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x260230: 0x3e00008  jr          $ra
    ctx->pc = 0x260230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260238u;
    // 0x260238: 0x0  nop
    ctx->pc = 0x260238u;
    // NOP
    // 0x26023c: 0x0  nop
    ctx->pc = 0x26023cu;
    // NOP
    ctx->pc = 0x260240u;
}
