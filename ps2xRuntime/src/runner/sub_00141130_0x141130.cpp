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

// Function: sub_00141130
// Address: 0x141130 - 0x141410
void sub_00141130_0x141130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141130_0x141130");
#endif

    switch (ctx->pc) {
        case 0x141194u: goto label_141194;
        case 0x1411acu: goto label_1411ac;
        case 0x1411ecu: goto label_1411ec;
        case 0x141238u: goto label_141238;
        case 0x141260u: goto label_141260;
        case 0x141288u: goto label_141288;
        case 0x1412a4u: goto label_1412a4;
        case 0x1412bcu: goto label_1412bc;
        case 0x1412d4u: goto label_1412d4;
        case 0x1412ecu: goto label_1412ec;
        case 0x141304u: goto label_141304;
        case 0x1413e0u: goto label_1413e0;
        case 0x1413f0u: goto label_1413f0;
        default: break;
    }

    ctx->pc = 0x141130u;

    // 0x141130: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x141134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x141134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x141138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x141138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14113c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14113cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x141140: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x141140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x141144: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x141144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x141148: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x141148u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x14114c: 0xe7ad0080  swc1        $f13, 0x80($sp)
    ctx->pc = 0x14114cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x141150: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x141150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x141154: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141158: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x141158u;
    {
        const bool branch_taken_0x141158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141158) {
            ctx->pc = 0x141180u;
            goto label_141180;
        }
    }
    ctx->pc = 0x141160u;
    // 0x141160: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141164: 0x90420061  lbu         $v0, 0x61($v0)
    ctx->pc = 0x141164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 97)));
    // 0x141168: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141168u;
    {
        const bool branch_taken_0x141168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141168) {
            ctx->pc = 0x141180u;
            goto label_141180;
        }
    }
    ctx->pc = 0x141170u;
    // 0x141170: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141174: 0x90420060  lbu         $v0, 0x60($v0)
    ctx->pc = 0x141174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x141178: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141178u;
    {
        const bool branch_taken_0x141178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141178) {
            ctx->pc = 0x14118Cu;
            goto label_14118c;
        }
    }
    ctx->pc = 0x141180u;
label_141180:
    // 0x141180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x141180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141184: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x141184u;
    {
        const bool branch_taken_0x141184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141184) {
            ctx->pc = 0x1413F4u;
            goto label_1413f4;
        }
    }
    ctx->pc = 0x14118Cu;
label_14118c:
    // 0x14118c: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x14118Cu;
    SET_GPR_U32(ctx, 31, 0x141194u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x14118Cu, 0x141194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141194u;
label_141194:
    // 0x141194: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x141194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141198: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x141198u;
    {
        const bool branch_taken_0x141198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x141198) {
            ctx->pc = 0x1411C0u;
            goto label_1411c0;
        }
    }
    ctx->pc = 0x1411A0u;
    // 0x1411a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1411a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1411a4: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x1411A4u;
    SET_GPR_U32(ctx, 31, 0x1411ACu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x1411A4u, 0x1411ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411ACu;
label_1411ac:
    // 0x1411ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1411ACu;
    {
        const bool branch_taken_0x1411ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1411ac) {
            ctx->pc = 0x1411C0u;
            goto label_1411c0;
        }
    }
    ctx->pc = 0x1411B4u;
    // 0x1411b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1411b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1411b8: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1411B8u;
    {
        const bool branch_taken_0x1411b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1411b8) {
            ctx->pc = 0x1413F4u;
            goto label_1413f4;
        }
    }
    ctx->pc = 0x1411C0u;
label_1411c0:
    // 0x1411c0: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x1411c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1411c4: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x1411c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1411c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1411C8u;
    {
        const bool branch_taken_0x1411c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1411c8) {
            ctx->pc = 0x1411DCu;
            goto label_1411dc;
        }
    }
    ctx->pc = 0x1411D0u;
    // 0x1411d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1411d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1411d4: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1411D4u;
    {
        const bool branch_taken_0x1411d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1411d4) {
            ctx->pc = 0x1413F4u;
            goto label_1413f4;
        }
    }
    ctx->pc = 0x1411DCu;
label_1411dc:
    // 0x1411dc: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1411dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1411e0: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1411e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1411e4: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x1411E4u;
    SET_GPR_U32(ctx, 31, 0x1411ECu);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x1411E4u, 0x1411ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411ECu;
label_1411ec:
    // 0x1411ec: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1411ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1411f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1411f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1411f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1411f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1411f8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1411f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1411fc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1411fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x141200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x141200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141204: 0x0  nop
    ctx->pc = 0x141204u;
    // NOP
    // 0x141208: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x141208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14120c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14120Cu;
    {
        const bool branch_taken_0x14120c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14120c) {
            ctx->pc = 0x141218u;
            goto label_141218;
        }
    }
    ctx->pc = 0x141214u;
    // 0x141214: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141218:
    // 0x141218: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x141218u;
    {
        const bool branch_taken_0x141218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x141218) {
            ctx->pc = 0x141294u;
            goto label_141294;
        }
    }
    ctx->pc = 0x141220u;
    // 0x141220: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141224: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141228: 0xc46c0064  lwc1        $f12, 0x64($v1)
    ctx->pc = 0x141228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14122c: 0xc44d0068  lwc1        $f13, 0x68($v0)
    ctx->pc = 0x14122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x141230: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x141230u;
    SET_GPR_U32(ctx, 31, 0x141238u);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x141230u, 0x141238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141238u;
label_141238:
    // 0x141238: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x141238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14123c: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x14123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x141240: 0xc7828c88  lwc1        $f2, -0x7378($gp)
    ctx->pc = 0x141240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x141244: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x141244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x141248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14124c: 0x0  nop
    ctx->pc = 0x14124cu;
    // NOP
    // 0x141250: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x141250u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x141254: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x141254u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x141258: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x141258u;
    SET_GPR_U32(ctx, 31, 0x141260u);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x141258u, 0x141260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141260u;
label_141260:
    // 0x141260: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x141260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x141264: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x141264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x141268: 0xc7828c88  lwc1        $f2, -0x7378($gp)
    ctx->pc = 0x141268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14126c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x14126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x141270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141274: 0x0  nop
    ctx->pc = 0x141274u;
    // NOP
    // 0x141278: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x141278u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14127c: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x14127cu;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x141280: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x141280u;
    SET_GPR_U32(ctx, 31, 0x141288u);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x141280u, 0x141288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141288u;
label_141288:
    // 0x141288: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x141288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14128c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14128Cu;
    {
        const bool branch_taken_0x14128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14128c) {
            ctx->pc = 0x1412D8u;
            goto label_1412d8;
        }
    }
    ctx->pc = 0x141294u;
label_141294:
    // 0x141294: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x141294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x141298: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x141298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14129c: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x14129Cu;
    SET_GPR_U32(ctx, 31, 0x1412A4u);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x14129Cu, 0x1412A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412A4u;
label_1412a4:
    // 0x1412a4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1412a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1412a8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1412a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1412ac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1412acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1412b0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1412b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1412b4: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1412B4u;
    SET_GPR_U32(ctx, 31, 0x1412BCu);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x1412B4u, 0x1412BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412BCu;
label_1412bc:
    // 0x1412bc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1412bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1412c0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1412c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1412c4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1412c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1412c8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1412c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1412cc: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1412CCu;
    SET_GPR_U32(ctx, 31, 0x1412D4u);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x1412CCu, 0x1412D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412D4u;
label_1412d4:
    // 0x1412d4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1412d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1412d8:
    // 0x1412d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1412dc: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1412dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1412e0: 0xc44d0040  lwc1        $f13, 0x40($v0)
    ctx->pc = 0x1412e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1412e4: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x1412E4u;
    SET_GPR_U32(ctx, 31, 0x1412ECu);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x1412E4u, 0x1412ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412ECu;
label_1412ec:
    // 0x1412ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1412ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1412f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1412f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1412f4: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1412f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1412f8: 0xc44d0040  lwc1        $f13, 0x40($v0)
    ctx->pc = 0x1412f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1412fc: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x1412FCu;
    SET_GPR_U32(ctx, 31, 0x141304u);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x1412FCu, 0x141304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141304u;
label_141304:
    // 0x141304: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x141304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x141308: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x141308u;
    {
        const bool branch_taken_0x141308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141308) {
            ctx->pc = 0x141324u;
            goto label_141324;
        }
    }
    ctx->pc = 0x141310u;
    // 0x141310: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x141310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141314: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141318: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x141318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x14131c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14131Cu;
    {
        const bool branch_taken_0x14131c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14131c) {
            ctx->pc = 0x141330u;
            goto label_141330;
        }
    }
    ctx->pc = 0x141324u;
label_141324:
    // 0x141324: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x141324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141328: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14132c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x14132cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_141330:
    // 0x141330: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x141330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x141334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x141334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141338: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14133c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x14133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x141340: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141344: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x141344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141348: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14134c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x14134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141350: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x141350u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x141354: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141358: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x141358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14135c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x14135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141360: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x141360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141364: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x141364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x141368: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x141368u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x14136c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14136cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x141370: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141374: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x141374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141378: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14137c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x14137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141380: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x141380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x141384: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x141384u;
    {
        const bool branch_taken_0x141384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141384) {
            ctx->pc = 0x141398u;
            goto label_141398;
        }
    }
    ctx->pc = 0x14138Cu;
    // 0x14138c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14138cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141390: 0x0  nop
    ctx->pc = 0x141390u;
    // NOP
    // 0x141394: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x141394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_141398:
    // 0x141398: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14139c: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x14139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1413a0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1413a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1413a4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1413a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1413a8: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1413a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1413ac: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x1413acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1413b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1413b4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1413b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1413b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1413b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1413bc: 0x0  nop
    ctx->pc = 0x1413bcu;
    // NOP
    // 0x1413c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1413c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1413c4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1413c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1413c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1413c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1413cc: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1413ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x1413d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1413d4: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x1413d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1413d8: 0xc097444  jal         func_25D110
    ctx->pc = 0x1413D8u;
    SET_GPR_U32(ctx, 31, 0x1413E0u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x1413D8u, 0x1413E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413E0u;
label_1413e0:
    // 0x1413e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1413e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1413e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413e8: 0xc089ad8  jal         func_226B60
    ctx->pc = 0x1413E8u;
    SET_GPR_U32(ctx, 31, 0x1413F0u);
    ctx->pc = 0x226B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B60u, 0x1413E8u, 0x1413F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413F0u;
label_1413f0:
    // 0x1413f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1413f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1413f4:
    // 0x1413f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1413f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1413f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1413f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1413fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1413fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141400: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x141400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x141404: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x141404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x141408: 0x3e00008  jr          $ra
    ctx->pc = 0x141408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141410u;
}
