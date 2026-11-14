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

// Function: sub_001EF0D0
// Address: 0x1ef0d0 - 0x1ef2c0
void sub_001EF0D0_0x1ef0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF0D0_0x1ef0d0");
#endif

    switch (ctx->pc) {
        case 0x1ef1c4u: goto label_1ef1c4;
        case 0x1ef1d0u: goto label_1ef1d0;
        case 0x1ef1e8u: goto label_1ef1e8;
        case 0x1ef210u: goto label_1ef210;
        case 0x1ef22cu: goto label_1ef22c;
        case 0x1ef238u: goto label_1ef238;
        case 0x1ef250u: goto label_1ef250;
        case 0x1ef278u: goto label_1ef278;
        default: break;
    }

    ctx->pc = 0x1ef0d0u;

    // 0x1ef0d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ef0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ef0d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ef0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ef0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef0e0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1ef0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1ef0e4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1ef0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1ef0e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ef0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef0ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF0ECu;
    {
        const bool branch_taken_0x1ef0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0ec) {
            ctx->pc = 0x1EF114u;
            goto label_1ef114;
        }
    }
    ctx->pc = 0x1EF0F4u;
    // 0x1ef0f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ef0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef0f8: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1ef0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef0fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ef0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ef100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef104: 0x0  nop
    ctx->pc = 0x1ef104u;
    // NOP
    // 0x1ef108: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ef108u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef10c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF10Cu;
    {
        const bool branch_taken_0x1ef10c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef10c) {
            ctx->pc = 0x1EF120u;
            goto label_1ef120;
        }
    }
    ctx->pc = 0x1EF114u;
label_1ef114:
    // 0x1ef114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef118: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1EF118u;
    {
        const bool branch_taken_0x1ef118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef118) {
            ctx->pc = 0x1EF29Cu;
            goto label_1ef29c;
        }
    }
    ctx->pc = 0x1EF120u;
label_1ef120:
    // 0x1ef120: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ef120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef124: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1ef124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef128: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ef128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef12c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1ef12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef130: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ef130u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ef134: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ef134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef138: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x1ef138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef13c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ef13cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ef140: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ef140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ef144: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ef144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef148: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ef148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef150: 0x0  nop
    ctx->pc = 0x1ef150u;
    // NOP
    // 0x1ef154: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ef154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef158: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF158u;
    {
        const bool branch_taken_0x1ef158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef158) {
            ctx->pc = 0x1EF16Cu;
            goto label_1ef16c;
        }
    }
    ctx->pc = 0x1EF160u;
    // 0x1ef160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef164: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1EF164u;
    {
        const bool branch_taken_0x1ef164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef164) {
            ctx->pc = 0x1EF29Cu;
            goto label_1ef29c;
        }
    }
    ctx->pc = 0x1EF16Cu;
label_1ef16c:
    // 0x1ef16c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ef16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef170: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1ef170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1ef174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef178: 0x0  nop
    ctx->pc = 0x1ef178u;
    // NOP
    // 0x1ef17c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef17cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef180: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x1EF180u;
    {
        const bool branch_taken_0x1ef180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef180) {
            ctx->pc = 0x1EF298u;
            goto label_1ef298;
        }
    }
    ctx->pc = 0x1EF188u;
    // 0x1ef188: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ef188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef18c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1ef18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef190: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ef190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ef194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef198: 0x0  nop
    ctx->pc = 0x1ef198u;
    // NOP
    // 0x1ef19c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ef19cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef1a0: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1EF1A0u;
    {
        const bool branch_taken_0x1ef1a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef1a0) {
            ctx->pc = 0x1EF298u;
            goto label_1ef298;
        }
    }
    ctx->pc = 0x1EF1A8u;
    // 0x1ef1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef1ac: 0x0  nop
    ctx->pc = 0x1ef1acu;
    // NOP
    // 0x1ef1b0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ef1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ef1b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1b8: 0x2410001e  addiu       $s0, $zero, 0x1E
    ctx->pc = 0x1ef1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ef1bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF1BCu;
    {
        const bool branch_taken_0x1ef1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef1bc) {
            ctx->pc = 0x1EF214u;
            goto label_1ef214;
        }
    }
    ctx->pc = 0x1EF1C4u;
label_1ef1c4:
    // 0x1ef1c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ef1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef1c8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EF1C8u;
    SET_GPR_U32(ctx, 31, 0x1EF1D0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EF1C8u, 0x1EF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1D0u;
label_1ef1d0:
    // 0x1ef1d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ef1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ef1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef1d8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ef1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ef1dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1e0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EF1E0u;
    SET_GPR_U32(ctx, 31, 0x1EF1E8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EF1E0u, 0x1EF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1E8u;
label_1ef1e8:
    // 0x1ef1e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ef1e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef1ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ef1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef1f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ef1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef1f8: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x1ef1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1ef1fc: 0xc78d81a0  lwc1        $f13, -0x7E60($gp)
    ctx->pc = 0x1ef1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef204: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ef204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef208: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1EF208u;
    SET_GPR_U32(ctx, 31, 0x1EF210u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1EF208u, 0x1EF210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF210u;
label_1ef210:
    // 0x1ef210: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ef210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ef214:
    // 0x1ef214: 0x2e02001f  sltiu       $v0, $s0, 0x1F
    ctx->pc = 0x1ef214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1ef218: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1EF218u;
    {
        const bool branch_taken_0x1ef218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef218) {
            ctx->pc = 0x1EF1C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef1c4;
        }
    }
    ctx->pc = 0x1EF220u;
    // 0x1ef220: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1ef220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ef224: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF224u;
    {
        const bool branch_taken_0x1ef224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef224) {
            ctx->pc = 0x1EF27Cu;
            goto label_1ef27c;
        }
    }
    ctx->pc = 0x1EF22Cu;
label_1ef22c:
    // 0x1ef22c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ef22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef230: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EF230u;
    SET_GPR_U32(ctx, 31, 0x1EF238u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EF230u, 0x1EF238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF238u;
label_1ef238:
    // 0x1ef238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ef238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef23c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ef23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef240: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ef240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ef244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef248: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EF248u;
    SET_GPR_U32(ctx, 31, 0x1EF250u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EF248u, 0x1EF250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF250u;
label_1ef250:
    // 0x1ef250: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ef250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef258: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ef258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef25c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ef25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef260: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x1ef260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1ef264: 0xc78d81a0  lwc1        $f13, -0x7E60($gp)
    ctx->pc = 0x1ef264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef26c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ef26cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef270: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1EF270u;
    SET_GPR_U32(ctx, 31, 0x1EF278u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1EF270u, 0x1EF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF278u;
label_1ef278:
    // 0x1ef278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ef278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ef27c:
    // 0x1ef27c: 0x2e020021  sltiu       $v0, $s0, 0x21
    ctx->pc = 0x1ef27cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x1ef280: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1EF280u;
    {
        const bool branch_taken_0x1ef280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef280) {
            ctx->pc = 0x1EF22Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef22c;
        }
    }
    ctx->pc = 0x1EF288u;
    // 0x1ef288: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ef288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef28c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ef28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef290: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ef290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef294: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1ef294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_1ef298:
    // 0x1ef298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef29c:
    // 0x1ef29c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ef29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef2a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef2a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef2a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ef2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ef2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF2B4u;
    // 0x1ef2b4: 0x0  nop
    ctx->pc = 0x1ef2b4u;
    // NOP
    // 0x1ef2b8: 0x0  nop
    ctx->pc = 0x1ef2b8u;
    // NOP
    // 0x1ef2bc: 0x0  nop
    ctx->pc = 0x1ef2bcu;
    // NOP
    ctx->pc = 0x1ef2c0u;
}
