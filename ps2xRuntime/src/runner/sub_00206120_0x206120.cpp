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

// Function: sub_00206120
// Address: 0x206120 - 0x206390
void sub_00206120_0x206120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206120_0x206120");
#endif

    switch (ctx->pc) {
        case 0x206178u: goto label_206178;
        case 0x20618cu: goto label_20618c;
        case 0x2061a4u: goto label_2061a4;
        case 0x2061b4u: goto label_2061b4;
        case 0x2061e4u: goto label_2061e4;
        case 0x2061f0u: goto label_2061f0;
        case 0x20624cu: goto label_20624c;
        case 0x206258u: goto label_206258;
        case 0x206270u: goto label_206270;
        case 0x2062d8u: goto label_2062d8;
        case 0x2062e4u: goto label_2062e4;
        case 0x2062fcu: goto label_2062fc;
        case 0x206368u: goto label_206368;
        default: break;
    }

    ctx->pc = 0x206120u;

    // 0x206120: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x206120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x206124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x206124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x206128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20612c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20612cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206130: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x206130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x206134: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x206134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x206138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20613c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206140: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x206140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x206144: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x206144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206148: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x206148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x20614c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20614Cu;
    {
        const bool branch_taken_0x20614c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20614c) {
            ctx->pc = 0x206180u;
            goto label_206180;
        }
    }
    ctx->pc = 0x206154u;
    // 0x206154: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x206154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x206158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x206158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20615c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20615cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x206160: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x206160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x206164: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x206164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    // 0x206168: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x206168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20616c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20616cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206170: 0xc08f558  jal         func_23D560
    ctx->pc = 0x206170u;
    SET_GPR_U32(ctx, 31, 0x206178u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x206170u, 0x206178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206178u;
label_206178:
    // 0x206178: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x206178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20617c: 0xac6200e8  sw          $v0, 0xE8($v1)
    ctx->pc = 0x20617cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 2));
label_206180:
    // 0x206180: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x206180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206184: 0xc06479c  jal         func_191E70
    ctx->pc = 0x206184u;
    SET_GPR_U32(ctx, 31, 0x20618Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x206184u, 0x20618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20618Cu;
label_20618c:
    // 0x20618c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20618cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206190: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x206190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206194: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x206194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x206198: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x206198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20619c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x20619Cu;
    SET_GPR_U32(ctx, 31, 0x2061A4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20619Cu, 0x2061A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061A4u;
label_2061a4:
    // 0x2061a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2061a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2061a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2061a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2061ac: 0xc08c510  jal         func_231440
    ctx->pc = 0x2061ACu;
    SET_GPR_U32(ctx, 31, 0x2061B4u);
    ctx->pc = 0x231440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231440u, 0x2061ACu, 0x2061B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061B4u;
label_2061b4:
    // 0x2061b4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2061b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2061b8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2061b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2061bc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2061bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2061c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2061c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2061c4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2061c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2061c8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x2061c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2061cc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2061ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2061d0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2061d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2061d4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2061d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2061d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2061d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2061dc: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x2061DCu;
    SET_GPR_U32(ctx, 31, 0x2061E4u);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x2061DCu, 0x2061E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061E4u;
label_2061e4:
    // 0x2061e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2061e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2061e8: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x2061E8u;
    SET_GPR_U32(ctx, 31, 0x2061F0u);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x2061E8u, 0x2061F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061F0u;
label_2061f0:
    // 0x2061f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2061f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2061f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2061f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2061f8: 0x0  nop
    ctx->pc = 0x2061f8u;
    // NOP
    // 0x2061fc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2061fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x206200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206204: 0x0  nop
    ctx->pc = 0x206204u;
    // NOP
    // 0x206208: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x206208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x20620c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20620cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206210: 0x0  nop
    ctx->pc = 0x206210u;
    // NOP
    // 0x206214: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x206214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x206218: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x206218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20621c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x20621cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x206220: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x206220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206224: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x206224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x206228: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x206228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20622c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x20622cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x206230: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x206230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206234: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x206234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x206238: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x206238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20623c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20623cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x206240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x206240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206244: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x206244u;
    {
        const bool branch_taken_0x206244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206244) {
            ctx->pc = 0x20636Cu;
            goto label_20636c;
        }
    }
    ctx->pc = 0x20624Cu;
label_20624c:
    // 0x20624c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x20624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206250: 0xc06479c  jal         func_191E70
    ctx->pc = 0x206250u;
    SET_GPR_U32(ctx, 31, 0x206258u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x206250u, 0x206258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206258u;
label_206258:
    // 0x206258: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20625c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206260: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x206260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x206264: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x206264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206268: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x206268u;
    SET_GPR_U32(ctx, 31, 0x206270u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x206268u, 0x206270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206270u;
label_206270:
    // 0x206270: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x206270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206274: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x206274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x206278: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206278u;
    {
        const bool branch_taken_0x206278 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x206278) {
            ctx->pc = 0x206294u;
            goto label_206294;
        }
    }
    ctx->pc = 0x206280u;
    // 0x206280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206284: 0x0  nop
    ctx->pc = 0x206284u;
    // NOP
    // 0x206288: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20628c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20628Cu;
    {
        const bool branch_taken_0x20628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20628c) {
            ctx->pc = 0x2062B0u;
            goto label_2062b0;
        }
    }
    ctx->pc = 0x206294u;
label_206294:
    // 0x206294: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x206294u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x206298: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x206298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20629c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20629cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2062a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2062a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2062a4: 0x0  nop
    ctx->pc = 0x2062a4u;
    // NOP
    // 0x2062a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2062a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2062ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2062acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2062b0:
    // 0x2062b0: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x2062b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2062b4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2062b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2062b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2062b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062bc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2062bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2062c0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2062c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2062c4: 0xc78d81b8  lwc1        $f13, -0x7E48($gp)
    ctx->pc = 0x2062c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2062c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2062c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2062ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062d0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x2062D0u;
    SET_GPR_U32(ctx, 31, 0x2062D8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x2062D0u, 0x2062D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062D8u;
label_2062d8:
    // 0x2062d8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2062d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2062dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2062DCu;
    SET_GPR_U32(ctx, 31, 0x2062E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2062DCu, 0x2062E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062E4u;
label_2062e4:
    // 0x2062e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2062e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2062e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2062ec: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2062ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2062f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2062f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2062f4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2062F4u;
    SET_GPR_U32(ctx, 31, 0x2062FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2062F4u, 0x2062FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062FCu;
label_2062fc:
    // 0x2062fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2062fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206300: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x206300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x206304: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x206304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206308: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206308u;
    {
        const bool branch_taken_0x206308 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x206308) {
            ctx->pc = 0x206324u;
            goto label_206324;
        }
    }
    ctx->pc = 0x206310u;
    // 0x206310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206314: 0x0  nop
    ctx->pc = 0x206314u;
    // NOP
    // 0x206318: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20631c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20631Cu;
    {
        const bool branch_taken_0x20631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20631c) {
            ctx->pc = 0x206340u;
            goto label_206340;
        }
    }
    ctx->pc = 0x206324u;
label_206324:
    // 0x206324: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x206324u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x206328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x206328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20632c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20632cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x206330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x206330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206334: 0x0  nop
    ctx->pc = 0x206334u;
    // NOP
    // 0x206338: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20633c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20633cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_206340:
    // 0x206340: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x206340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206344: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x206344u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x206348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20634c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x20634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x206350: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x206350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x206354: 0xc78d81b8  lwc1        $f13, -0x7E48($gp)
    ctx->pc = 0x206354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x206358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x206358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20635c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20635cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206360: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x206360u;
    SET_GPR_U32(ctx, 31, 0x206368u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x206360u, 0x206368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206368u;
label_206368:
    // 0x206368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x206368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20636c:
    // 0x20636c: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x20636cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x206370: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x206370u;
    {
        const bool branch_taken_0x206370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206370) {
            ctx->pc = 0x20624Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20624c;
        }
    }
    ctx->pc = 0x206378u;
    // 0x206378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20637c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20637cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206384: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x206384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x206388: 0x3e00008  jr          $ra
    ctx->pc = 0x206388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206390u;
}
