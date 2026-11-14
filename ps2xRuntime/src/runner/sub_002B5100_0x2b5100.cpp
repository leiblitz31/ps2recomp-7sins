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

// Function: sub_002B5100
// Address: 0x2b5100 - 0x2b53e0
void sub_002B5100_0x2b5100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5100_0x2b5100");
#endif

    switch (ctx->pc) {
        case 0x2b5134u: goto label_2b5134;
        case 0x2b516cu: goto label_2b516c;
        case 0x2b517cu: goto label_2b517c;
        case 0x2b518cu: goto label_2b518c;
        case 0x2b5214u: goto label_2b5214;
        case 0x2b521cu: goto label_2b521c;
        case 0x2b5328u: goto label_2b5328;
        case 0x2b53b8u: goto label_2b53b8;
        default: break;
    }

    ctx->pc = 0x2b5100u;

    // 0x2b5100: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2b5100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2b5104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b510c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5110: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2b5110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2b5114: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2b5114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x2b5118: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x2b5118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x2b511c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5120: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2b5120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2b5124: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2b5124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b5128: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2b5128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b512c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B512Cu;
    SET_GPR_U32(ctx, 31, 0x2B5134u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B512Cu, 0x2B5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5134u;
label_2b5134:
    // 0x2b5134: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2b5134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5138: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x2b5138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x2b513c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b513cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5140: 0x0  nop
    ctx->pc = 0x2b5140u;
    // NOP
    // 0x2b5144: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b5144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5148: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2b5148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b514c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2b514cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2b5150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5154: 0x0  nop
    ctx->pc = 0x2b5154u;
    // NOP
    // 0x2b5158: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2b5158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2b515c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2b515cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b5160: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b5160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b5164: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B5164u;
    SET_GPR_U32(ctx, 31, 0x2B516Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B5164u, 0x2B516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B516Cu;
label_2b516c:
    // 0x2b516c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b516cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5174: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2B5174u;
    SET_GPR_U32(ctx, 31, 0x2B517Cu);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2B5174u, 0x2B517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B517Cu;
label_2b517c:
    // 0x2b517c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2b517cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2b5180: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2b5180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b5184: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2B5184u;
    SET_GPR_U32(ctx, 31, 0x2B518Cu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2B5184u, 0x2B518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B518Cu;
label_2b518c:
    // 0x2b518c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b518cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5190: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2b5190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2b5194: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2b5194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x2b5198: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b5198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b519c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b519cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b51a0: 0x0  nop
    ctx->pc = 0x2b51a0u;
    // NOP
    // 0x2b51a4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2b51a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2b51a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b51ac: 0xa3a20088  sb          $v0, 0x88($sp)
    ctx->pc = 0x2b51acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b51b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b51b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b51b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b51b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2b51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b51bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b51bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b51c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b51c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b51c4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2b51c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2b51c8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b51cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b51ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b51d0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2b51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b51d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b51d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b51d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b51d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b51dc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2b51dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b51e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b51e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b51e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b51e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2b51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b51ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b51ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b51f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b51f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b51f4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2b51f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b51f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b51f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b51fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2b51fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b5200: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x2b5200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x2b5204: 0x24c62a40  addiu       $a2, $a2, 0x2A40
    ctx->pc = 0x2b5204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10816));
    // 0x2b5208: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2b5208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b520c: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x2B520Cu;
    SET_GPR_U32(ctx, 31, 0x2B5214u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x2B520Cu, 0x2B5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5214u;
label_2b5214:
    // 0x2b5214: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2B5214u;
    {
        const bool branch_taken_0x2b5214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5214) {
            ctx->pc = 0x2B53B8u;
            goto label_2b53b8;
        }
    }
    ctx->pc = 0x2B521Cu;
label_2b521c:
    // 0x2b521c: 0x8f82bc6c  lw          $v0, -0x4394($gp)
    ctx->pc = 0x2b521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949996)));
    // 0x2b5220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5224: 0xaf82bc6c  sw          $v0, -0x4394($gp)
    ctx->pc = 0x2b5224u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949996), GPR_U32(ctx, 2));
    // 0x2b5228: 0x8f82bc6c  lw          $v0, -0x4394($gp)
    ctx->pc = 0x2b5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949996)));
    // 0x2b522c: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x2b522cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2b5230: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5230u;
    {
        const bool branch_taken_0x2b5230 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5230) {
            ctx->pc = 0x2B5248u;
            goto label_2b5248;
        }
    }
    ctx->pc = 0x2B5238u;
    // 0x2b5238: 0xaf80bc6c  sw          $zero, -0x4394($gp)
    ctx->pc = 0x2b5238u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949996), GPR_U32(ctx, 0));
    // 0x2b523c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5240: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2B5240u;
    {
        const bool branch_taken_0x2b5240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5240) {
            ctx->pc = 0x2B53C8u;
            goto label_2b53c8;
        }
    }
    ctx->pc = 0x2B5248u;
label_2b5248:
    // 0x2b5248: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x2b5248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b524c: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x2b524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5250: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2b5250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5258: 0x0  nop
    ctx->pc = 0x2b5258u;
    // NOP
    // 0x2b525c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b525cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b5260: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2b5260u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b5264: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2b5264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2b5268: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x2b5268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b526c: 0xc7808208  lwc1        $f0, -0x7DF8($gp)
    ctx->pc = 0x2b526cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5270: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b5270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5274: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5274u;
    {
        const bool branch_taken_0x2b5274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5274) {
            ctx->pc = 0x2B5284u;
            goto label_2b5284;
        }
    }
    ctx->pc = 0x2B527Cu;
    // 0x2b527c: 0xc7808208  lwc1        $f0, -0x7DF8($gp)
    ctx->pc = 0x2b527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5280: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2b5280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2b5284:
    // 0x2b5284: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2b5284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5288: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2b5288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b528c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b528cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b5290: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2b5290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2b5294: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2b5294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5298: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2b5298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b529c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b529cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b52a0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2b52a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b52a4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2b52a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b52a8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2b52a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b52ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b52acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b52b0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b52b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2b52b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b52b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b52b8: 0x0  nop
    ctx->pc = 0x2b52b8u;
    // NOP
    // 0x2b52bc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2b52bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b52c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b52c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b52c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b52c8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2b52c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b52cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b52ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b52d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b52d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b52d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b52d8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b52dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b52dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b52e0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2b52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b52e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b52e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b52e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b52ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b52ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b52f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b52f4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b52f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b52f8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b52f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b52fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b52fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5300: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b5300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b5304: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b5304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b5308: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2b5308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2b530c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B530Cu;
    {
        const bool branch_taken_0x2b530c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b530c) {
            ctx->pc = 0x2B53B8u;
            goto label_2b53b8;
        }
    }
    ctx->pc = 0x2B5314u;
    // 0x2b5314: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2b5314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x2b5318: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2b5318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b531c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2b531cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b5320: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B5320u;
    SET_GPR_U32(ctx, 31, 0x2B5328u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B5320u, 0x2B5328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5328u;
label_2b5328:
    // 0x2b5328: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2b5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b532c: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x2b532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x2b5330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5334: 0x0  nop
    ctx->pc = 0x2b5334u;
    // NOP
    // 0x2b5338: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b5338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b533c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2b533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b5340: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2b5340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2b5344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b5344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b534c: 0x0  nop
    ctx->pc = 0x2b534cu;
    // NOP
    // 0x2b5350: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2b5350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2b5354: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b5354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b5358: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b5358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b535c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2b535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b5360: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5364: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b5364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b5368: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2b5368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2b536c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b5370: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b5370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5374: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2b5374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b5378: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b5378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b537c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b537cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b5380: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2b5380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b5384: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2b5384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b5388: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b5388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b538c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2b538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b5390: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b5390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5394: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b5394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b5398: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2b5398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b539c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53a0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2b53a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b53a4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x2b53a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x2b53a8: 0x24c62a40  addiu       $a2, $a2, 0x2A40
    ctx->pc = 0x2b53a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10816));
    // 0x2b53ac: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2b53acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b53b0: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x2B53B0u;
    SET_GPR_U32(ctx, 31, 0x2B53B8u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x2B53B0u, 0x2B53B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53B8u;
label_2b53b8:
    // 0x2b53b8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2b53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2b53bc: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x2B53BCu;
    {
        const bool branch_taken_0x2b53bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b53bc) {
            ctx->pc = 0x2B521Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b521c;
        }
    }
    ctx->pc = 0x2B53C4u;
    // 0x2b53c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b53c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b53c8:
    // 0x2b53c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b53c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b53cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b53ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b53d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b53d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b53d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2b53d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2b53d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B53D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B53D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B53E0u;
}
