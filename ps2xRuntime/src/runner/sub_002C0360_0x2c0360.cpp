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

// Function: sub_002C0360
// Address: 0x2c0360 - 0x2c0e60
void sub_002C0360_0x2c0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0360_0x2c0360");
#endif

    switch (ctx->pc) {
        case 0x2c03a8u: goto label_2c03a8;
        case 0x2c03c0u: goto label_2c03c0;
        case 0x2c03d4u: goto label_2c03d4;
        case 0x2c03ecu: goto label_2c03ec;
        case 0x2c040cu: goto label_2c040c;
        case 0x2c042cu: goto label_2c042c;
        case 0x2c044cu: goto label_2c044c;
        case 0x2c046cu: goto label_2c046c;
        case 0x2c048cu: goto label_2c048c;
        case 0x2c04b0u: goto label_2c04b0;
        case 0x2c04d0u: goto label_2c04d0;
        case 0x2c04f0u: goto label_2c04f0;
        case 0x2c0514u: goto label_2c0514;
        case 0x2c0940u: goto label_2c0940;
        case 0x2c0978u: goto label_2c0978;
        case 0x2c0984u: goto label_2c0984;
        case 0x2c0a50u: goto label_2c0a50;
        case 0x2c0a90u: goto label_2c0a90;
        case 0x2c0ab0u: goto label_2c0ab0;
        case 0x2c0ae4u: goto label_2c0ae4;
        case 0x2c0b08u: goto label_2c0b08;
        case 0x2c0bd0u: goto label_2c0bd0;
        case 0x2c0c74u: goto label_2c0c74;
        case 0x2c0ddcu: goto label_2c0ddc;
        case 0x2c0decu: goto label_2c0dec;
        case 0x2c0dfcu: goto label_2c0dfc;
        default: break;
    }

    ctx->pc = 0x2c0360u;

    // 0x2c0360: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2c0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2c0364: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c0368: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2c0368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2c036c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2c036cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2c0370: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c0370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2c0374: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c0374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c0378: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c0378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c037c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c0380: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c0380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c0384: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c0384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c0388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c0388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c038c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c038cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c0390: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x2c0390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x2c0394: 0x8fbe0140  lw          $fp, 0x140($sp)
    ctx->pc = 0x2c0394u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c0398: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c0398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c039c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c03a0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C03A0u;
    SET_GPR_U32(ctx, 31, 0x2C03A8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C03A0u, 0x2C03A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03A8u;
label_2c03a8:
    // 0x2c03a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c03a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03ac: 0xa2600054  sb          $zero, 0x54($s3)
    ctx->pc = 0x2c03acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c03b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c03b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03b4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c03b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c03b8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C03B8u;
    SET_GPR_U32(ctx, 31, 0x2C03C0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C03B8u, 0x2C03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03C0u;
label_2c03c0:
    // 0x2c03c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c03c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03c4: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x2c03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x2c03c8: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x2c03c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x2c03cc: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2C03CCu;
    SET_GPR_U32(ctx, 31, 0x2C03D4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2C03CCu, 0x2C03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03D4u;
label_2c03d4:
    // 0x2c03d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c03d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03d8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2c03d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c03dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c03e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c03e4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C03E4u;
    SET_GPR_U32(ctx, 31, 0x2C03ECu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C03E4u, 0x2C03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03ECu;
label_2c03ec:
    // 0x2c03ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c03f0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c03f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c03f4: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x2c03f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c03f8: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x2c03f8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c03fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c03fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0400: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c0400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0404: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0404u;
    SET_GPR_U32(ctx, 31, 0x2C040Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0404u, 0x2C040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C040Cu;
label_2c040c:
    // 0x2c040c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0410: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c0410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0414: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c0414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c0418: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x2c0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2c041c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0420: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c0420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c0424: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0424u;
    SET_GPR_U32(ctx, 31, 0x2C042Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0424u, 0x2C042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C042Cu;
label_2c042c:
    // 0x2c042c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0430: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c0430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0434: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2c0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0438: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x2c0438u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c043c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0440: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c0440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c0444: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0444u;
    SET_GPR_U32(ctx, 31, 0x2C044Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0444u, 0x2C044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C044Cu;
label_2c044c:
    // 0x2c044c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0450: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c0450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0454: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c0454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c0458: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2c0458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2c045c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0460: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c0460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0464: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0464u;
    SET_GPR_U32(ctx, 31, 0x2C046Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0464u, 0x2C046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C046Cu;
label_2c046c:
    // 0x2c046c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0470: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c0470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0474: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x2c0474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0478: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x2c0478u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c047c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c047cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0480: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c0480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0484: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0484u;
    SET_GPR_U32(ctx, 31, 0x2C048Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0484u, 0x2C048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C048Cu;
label_2c048c:
    // 0x2c048c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c048cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0490: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2c0490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0494: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c0494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c0498: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2c0498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2c049c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c049cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c04a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c04a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c04a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04a8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C04A8u;
    SET_GPR_U32(ctx, 31, 0x2C04B0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C04A8u, 0x2C04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04B0u;
label_2c04b0:
    // 0x2c04b0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2c04b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c04b4: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x2c04b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c04b8: 0xc660003c  lwc1        $f0, 0x3C($s3)
    ctx->pc = 0x2c04b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c04bc: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x2c04bcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c04c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c04c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c04c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c04c8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C04C8u;
    SET_GPR_U32(ctx, 31, 0x2C04D0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C04C8u, 0x2C04D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04D0u;
label_2c04d0:
    // 0x2c04d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c04d4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2c04d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c04d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c04d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c04dc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2c04dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2c04e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c04e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c04e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04e8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C04E8u;
    SET_GPR_U32(ctx, 31, 0x2C04F0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C04E8u, 0x2C04F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04F0u;
label_2c04f0:
    // 0x2c04f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c04f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c04f8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2c04f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c04fc: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x2c04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0500: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x2c0500u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c0504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c050c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C050Cu;
    SET_GPR_U32(ctx, 31, 0x2C0514u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C050Cu, 0x2C0514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0514u;
label_2c0514:
    // 0x2c0514: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c0514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0518: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2c0518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2c051c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2c051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0520: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c0520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c0524: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2c0524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2c0528: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2c0528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c052c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c052cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0530: 0x0  nop
    ctx->pc = 0x2c0530u;
    // NOP
    // 0x2c0534: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0538: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0538u;
    {
        const bool branch_taken_0x2c0538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0538) {
            ctx->pc = 0x2C054Cu;
            goto label_2c054c;
        }
    }
    ctx->pc = 0x2C0540u;
    // 0x2c0540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0544: 0x0  nop
    ctx->pc = 0x2c0544u;
    // NOP
    // 0x2c0548: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x2c0548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_2c054c:
    // 0x2c054c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2c054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0554: 0x0  nop
    ctx->pc = 0x2c0554u;
    // NOP
    // 0x2c0558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c055c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C055Cu;
    {
        const bool branch_taken_0x2c055c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c055c) {
            ctx->pc = 0x2C0570u;
            goto label_2c0570;
        }
    }
    ctx->pc = 0x2C0564u;
    // 0x2c0564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0568: 0x0  nop
    ctx->pc = 0x2c0568u;
    // NOP
    // 0x2c056c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2c056cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_2c0570:
    // 0x2c0570: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2c0570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0578: 0x0  nop
    ctx->pc = 0x2c0578u;
    // NOP
    // 0x2c057c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c057cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0580: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0580u;
    {
        const bool branch_taken_0x2c0580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0580) {
            ctx->pc = 0x2C0594u;
            goto label_2c0594;
        }
    }
    ctx->pc = 0x2C0588u;
    // 0x2c0588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c058c: 0x0  nop
    ctx->pc = 0x2c058cu;
    // NOP
    // 0x2c0590: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2c0590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2c0594:
    // 0x2c0594: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x2c0594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c059c: 0x0  nop
    ctx->pc = 0x2c059cu;
    // NOP
    // 0x2c05a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c05a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c05a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C05A4u;
    {
        const bool branch_taken_0x2c05a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c05a4) {
            ctx->pc = 0x2C05B8u;
            goto label_2c05b8;
        }
    }
    ctx->pc = 0x2C05ACu;
    // 0x2c05ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c05acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c05b0: 0x0  nop
    ctx->pc = 0x2c05b0u;
    // NOP
    // 0x2c05b4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2c05b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_2c05b8:
    // 0x2c05b8: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2c05b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c05bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c05bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c05c0: 0x0  nop
    ctx->pc = 0x2c05c0u;
    // NOP
    // 0x2c05c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c05c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c05c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C05C8u;
    {
        const bool branch_taken_0x2c05c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c05c8) {
            ctx->pc = 0x2C05DCu;
            goto label_2c05dc;
        }
    }
    ctx->pc = 0x2C05D0u;
    // 0x2c05d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c05d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c05d4: 0x0  nop
    ctx->pc = 0x2c05d4u;
    // NOP
    // 0x2c05d8: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2c05d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2c05dc:
    // 0x2c05dc: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x2c05dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c05e0: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2c05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c05e4: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2c05e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c05e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c05e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c05ec: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x2c05ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c05f0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2c05f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c05f4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c05f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c05f8: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2c05f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c05fc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c05fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0604: 0x0  nop
    ctx->pc = 0x2c0604u;
    // NOP
    // 0x2c0608: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c0608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c060c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C060Cu;
    {
        const bool branch_taken_0x2c060c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c060c) {
            ctx->pc = 0x2C0624u;
            goto label_2c0624;
        }
    }
    ctx->pc = 0x2C0614u;
    // 0x2c0614: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c0614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c0618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c061c: 0x0  nop
    ctx->pc = 0x2c061cu;
    // NOP
    // 0x2c0620: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2c0620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_2c0624:
    // 0x2c0624: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2c0624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0628: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2c0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c062c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c062cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0634: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0634u;
    {
        const bool branch_taken_0x2c0634 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0634) {
            ctx->pc = 0x2C0640u;
            goto label_2c0640;
        }
    }
    ctx->pc = 0x2C063Cu;
    // 0x2c063c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c063cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0640:
    // 0x2c0640: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c0640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0644: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2c0644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0648: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2c0648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c064c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c064cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0654: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0654u;
    {
        const bool branch_taken_0x2c0654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0654) {
            ctx->pc = 0x2C0660u;
            goto label_2c0660;
        }
    }
    ctx->pc = 0x2C065Cu;
    // 0x2c065c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c065cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0660:
    // 0x2c0660: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c0660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0664: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c0664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0668: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2c0668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c066c: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2c066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0670: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0678: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0678u;
    {
        const bool branch_taken_0x2c0678 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0678) {
            ctx->pc = 0x2C0684u;
            goto label_2c0684;
        }
    }
    ctx->pc = 0x2C0680u;
    // 0x2c0680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0684:
    // 0x2c0684: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c0684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0688: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c0688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c068c: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2c068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0690: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2c0690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0694: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c069c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C069Cu;
    {
        const bool branch_taken_0x2c069c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c069c) {
            ctx->pc = 0x2C06A8u;
            goto label_2c06a8;
        }
    }
    ctx->pc = 0x2C06A4u;
    // 0x2c06a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c06a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c06a8:
    // 0x2c06a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c06a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c06ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c06acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c06b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c06b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c06b4: 0x0  nop
    ctx->pc = 0x2c06b4u;
    // NOP
    // 0x2c06b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c06b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c06bc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2c06bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2c06c0: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x2c06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c06c4: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2c06c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c06c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c06c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c06cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c06d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C06D0u;
    {
        const bool branch_taken_0x2c06d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c06d0) {
            ctx->pc = 0x2C06DCu;
            goto label_2c06dc;
        }
    }
    ctx->pc = 0x2C06D8u;
    // 0x2c06d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c06d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c06dc:
    // 0x2c06dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c06dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c06e0: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x2c06e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c06e4: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2c06e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c06e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c06e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c06ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c06f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C06F0u;
    {
        const bool branch_taken_0x2c06f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c06f0) {
            ctx->pc = 0x2C06FCu;
            goto label_2c06fc;
        }
    }
    ctx->pc = 0x2C06F8u;
    // 0x2c06f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c06f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c06fc:
    // 0x2c06fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c06fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c0700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0704: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x2c0704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0708: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2c0708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c070c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c070cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0714: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0714u;
    {
        const bool branch_taken_0x2c0714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0714) {
            ctx->pc = 0x2C0720u;
            goto label_2c0720;
        }
    }
    ctx->pc = 0x2C071Cu;
    // 0x2c071c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c071cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0720:
    // 0x2c0720: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c0720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0724: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c0724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0728: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x2c0728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c072c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2c072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0730: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0738: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0738u;
    {
        const bool branch_taken_0x2c0738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0738) {
            ctx->pc = 0x2C0744u;
            goto label_2c0744;
        }
    }
    ctx->pc = 0x2C0740u;
    // 0x2c0740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0744:
    // 0x2c0744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c0744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c074c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c074cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0750: 0x0  nop
    ctx->pc = 0x2c0750u;
    // NOP
    // 0x2c0754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0758: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2c0758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2c075c: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2c075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0760: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2c0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0764: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c076c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C076Cu;
    {
        const bool branch_taken_0x2c076c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c076c) {
            ctx->pc = 0x2C0778u;
            goto label_2c0778;
        }
    }
    ctx->pc = 0x2C0774u;
    // 0x2c0774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0778:
    // 0x2c0778: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c0778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c077c: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2c077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0780: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2c0780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0784: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c078c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C078Cu;
    {
        const bool branch_taken_0x2c078c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c078c) {
            ctx->pc = 0x2C0798u;
            goto label_2c0798;
        }
    }
    ctx->pc = 0x2C0794u;
    // 0x2c0794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0798:
    // 0x2c0798: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c0798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c079c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c07a0: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2c07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c07a4: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2c07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c07a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c07a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c07ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c07acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c07b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C07B0u;
    {
        const bool branch_taken_0x2c07b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c07b0) {
            ctx->pc = 0x2C07BCu;
            goto label_2c07bc;
        }
    }
    ctx->pc = 0x2C07B8u;
    // 0x2c07b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c07b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c07bc:
    // 0x2c07bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c07bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c07c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c07c4: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2c07c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c07c8: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2c07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c07cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c07ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c07d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c07d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C07D4u;
    {
        const bool branch_taken_0x2c07d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c07d4) {
            ctx->pc = 0x2C07E0u;
            goto label_2c07e0;
        }
    }
    ctx->pc = 0x2C07DCu;
    // 0x2c07dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c07dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c07e0:
    // 0x2c07e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c07e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c07e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c07e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c07e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c07ec: 0x0  nop
    ctx->pc = 0x2c07ecu;
    // NOP
    // 0x2c07f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c07f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c07f4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2c07f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2c07f8: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2c07f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c07fc: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2c07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0800: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0808: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0808u;
    {
        const bool branch_taken_0x2c0808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0808) {
            ctx->pc = 0x2C0814u;
            goto label_2c0814;
        }
    }
    ctx->pc = 0x2C0810u;
    // 0x2c0810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0814:
    // 0x2c0814: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c0814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0818: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2c0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c081c: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2c081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0820: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0828: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0828u;
    {
        const bool branch_taken_0x2c0828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0828) {
            ctx->pc = 0x2C0834u;
            goto label_2c0834;
        }
    }
    ctx->pc = 0x2C0830u;
    // 0x2c0830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0834:
    // 0x2c0834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c0834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0838: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c0838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c083c: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2c083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0840: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2c0840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0844: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c084c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C084Cu;
    {
        const bool branch_taken_0x2c084c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c084c) {
            ctx->pc = 0x2C0858u;
            goto label_2c0858;
        }
    }
    ctx->pc = 0x2C0854u;
    // 0x2c0854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0858:
    // 0x2c0858: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c0858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c085c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0860: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2c0860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0864: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2c0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0868: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c086c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0870: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0870u;
    {
        const bool branch_taken_0x2c0870 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0870) {
            ctx->pc = 0x2C087Cu;
            goto label_2c087c;
        }
    }
    ctx->pc = 0x2C0878u;
    // 0x2c0878: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c087c:
    // 0x2c087c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0888: 0x0  nop
    ctx->pc = 0x2c0888u;
    // NOP
    // 0x2c088c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c088cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0890: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2c0890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2c0894: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2c0894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0898: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2c0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c089c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c089cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c08a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c08a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C08A4u;
    {
        const bool branch_taken_0x2c08a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c08a4) {
            ctx->pc = 0x2C08B0u;
            goto label_2c08b0;
        }
    }
    ctx->pc = 0x2C08ACu;
    // 0x2c08ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c08acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c08b0:
    // 0x2c08b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c08b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c08b4: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2c08b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c08b8: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2c08b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c08bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c08bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c08c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c08c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C08C4u;
    {
        const bool branch_taken_0x2c08c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c08c4) {
            ctx->pc = 0x2C08D0u;
            goto label_2c08d0;
        }
    }
    ctx->pc = 0x2C08CCu;
    // 0x2c08cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c08ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c08d0:
    // 0x2c08d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c08d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c08d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c08d8: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2c08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c08dc: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2c08dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c08e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c08e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c08e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c08e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C08E8u;
    {
        const bool branch_taken_0x2c08e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c08e8) {
            ctx->pc = 0x2C08F4u;
            goto label_2c08f4;
        }
    }
    ctx->pc = 0x2C08F0u;
    // 0x2c08f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c08f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c08f4:
    // 0x2c08f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c08f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c08f8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c08f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c08fc: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2c08fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0900: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2c0900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0904: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c090c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C090Cu;
    {
        const bool branch_taken_0x2c090c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c090c) {
            ctx->pc = 0x2C0918u;
            goto label_2c0918;
        }
    }
    ctx->pc = 0x2C0914u;
    // 0x2c0914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0918:
    // 0x2c0918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c0918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c091c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0924: 0x0  nop
    ctx->pc = 0x2c0924u;
    // NOP
    // 0x2c0928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c092c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2c092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2c0930: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c0930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c0934: 0x24a5e100  addiu       $a1, $a1, -0x1F00
    ctx->pc = 0x2c0934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959360));
    // 0x2c0938: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2c0938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c093c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c0940:
    // 0x2c0940: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2c0940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c0944: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c0944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c0948: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c0948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c094c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c094cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c0950: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2c0950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2c0954: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C0954u;
    {
        const bool branch_taken_0x2c0954 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2c0954) {
            ctx->pc = 0x2C0940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0940;
        }
    }
    ctx->pc = 0x2C095Cu;
    // 0x2c095c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c095cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0960: 0x0  nop
    ctx->pc = 0x2c0960u;
    // NOP
    // 0x2c0964: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2c0964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2c0968: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c0968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c096c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c096cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0970: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2C0970u;
    {
        const bool branch_taken_0x2c0970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0970) {
            ctx->pc = 0x2C0A38u;
            goto label_2c0a38;
        }
    }
    ctx->pc = 0x2C0978u;
label_2c0978:
    // 0x2c0978: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c0978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c097c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C097Cu;
    {
        const bool branch_taken_0x2c097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c097c) {
            ctx->pc = 0x2C0A28u;
            goto label_2c0a28;
        }
    }
    ctx->pc = 0x2C0984u;
label_2c0984:
    // 0x2c0984: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2c0984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2c0988: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c098c: 0xc44100f0  lwc1        $f1, 0xF0($v0)
    ctx->pc = 0x2c098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0990: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2c0990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c0994: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0998: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c099c: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c09a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c09a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c09a4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2C09A4u;
    {
        const bool branch_taken_0x2c09a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c09a4) {
            ctx->pc = 0x2C0A24u;
            goto label_2c0a24;
        }
    }
    ctx->pc = 0x2C09ACu;
    // 0x2c09ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2c09acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2c09b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c09b4: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c09b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c09b8: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2c09b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2c09bc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2c09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c09c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c09c4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c09c8: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c09c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c09cc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2c09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2c09d0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c09d4: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c09d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2c09d8: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2c09d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c09dc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2c09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c09e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c09e4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c09e8: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c09e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2c09ec: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2c09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2c09f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c09f4: 0x8c5500d0  lw          $s5, 0xD0($v0)
    ctx->pc = 0x2c09f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c09f8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2c09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c09fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0a00: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0a04: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2c0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c0a08: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2c0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2c0a0c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0a10: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x2c0a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x2c0a14: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2c0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c0a18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0a1c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0a20: 0xac5500d0  sw          $s5, 0xD0($v0)
    ctx->pc = 0x2c0a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 21));
label_2c0a24:
    // 0x2c0a24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c0a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c0a28:
    // 0x2c0a28: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2c0a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c0a2c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2C0A2Cu;
    {
        const bool branch_taken_0x2c0a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a2c) {
            ctx->pc = 0x2C0984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0984;
        }
    }
    ctx->pc = 0x2C0A34u;
    // 0x2c0a34: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2c0a34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2c0a38:
    // 0x2c0a38: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x2c0a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c0a3c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2C0A3Cu;
    {
        const bool branch_taken_0x2c0a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a3c) {
            ctx->pc = 0x2C0978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0978;
        }
    }
    ctx->pc = 0x2C0A44u;
    // 0x2c0a44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c0a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0a48: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2C0A48u;
    {
        const bool branch_taken_0x2c0a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a48) {
            ctx->pc = 0x2C0C5Cu;
            goto label_2c0c5c;
        }
    }
    ctx->pc = 0x2C0A50u;
label_2c0a50:
    // 0x2c0a50: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0a54: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0a58: 0xc44100f0  lwc1        $f1, 0xF0($v0)
    ctx->pc = 0x2c0a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0a5c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0a60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0a64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0a68: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c0a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0a6c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c0a6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0a70: 0x45000079  bc1f        . + 4 + (0x79 << 2)
    ctx->pc = 0x2C0A70u;
    {
        const bool branch_taken_0x2c0a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0a70) {
            ctx->pc = 0x2C0C58u;
            goto label_2c0c58;
        }
    }
    ctx->pc = 0x2C0A78u;
    // 0x2c0a78: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0a7c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0a80: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x2c0a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c0a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0a88: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0A88u;
    SET_GPR_U32(ctx, 31, 0x2C0A90u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0A88u, 0x2C0A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A90u;
label_2c0a90:
    // 0x2c0a90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0a94: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2c0a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2c0a98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0a9c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0aa0: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x2c0aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c0aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0aa8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0AA8u;
    SET_GPR_U32(ctx, 31, 0x2C0AB0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0AA8u, 0x2C0AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0AB0u;
label_2c0ab0:
    // 0x2c0ab0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0ab4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2c0ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c0ab8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0abc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2c0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0ac0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c0ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0ac4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2c0ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2c0ac8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0acc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0ad0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0ad4: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x2c0ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c0ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0adc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0ADCu;
    SET_GPR_U32(ctx, 31, 0x2C0AE4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0ADCu, 0x2C0AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0AE4u;
label_2c0ae4:
    // 0x2c0ae4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0ae8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2c0ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2c0aec: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0af0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0af4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0af8: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x2c0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c0afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b00: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0B00u;
    SET_GPR_U32(ctx, 31, 0x2C0B08u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0B00u, 0x2C0B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B08u;
label_2c0b08:
    // 0x2c0b08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0b0c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2c0b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c0b10: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c0b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0b14: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2c0b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c0b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0b1c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x2c0b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2c0b20: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2c0b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0b24: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x2c0b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0b2c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2C0B2Cu;
    {
        const bool branch_taken_0x2c0b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0b2c) {
            ctx->pc = 0x2C0BB4u;
            goto label_2c0bb4;
        }
    }
    ctx->pc = 0x2C0B34u;
    // 0x2c0b34: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0b38: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0b3c: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c0b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b40: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2c0b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2c0b44: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0b48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0b4c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0b50: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c0b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b54: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0b58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0b5c: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c0b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2c0b60: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2c0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b64: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0b68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0b6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0b70: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c0b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2c0b74: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0b78: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0b7c: 0x8c5500d0  lw          $s5, 0xD0($v0)
    ctx->pc = 0x2c0b7cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c0b80: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0b84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0b88: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0b8c: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2c0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c0b90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0b94: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0b98: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x2c0b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x2c0b9c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0ba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0ba4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0ba8: 0xac5500d0  sw          $s5, 0xD0($v0)
    ctx->pc = 0x2c0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 21));
    // 0x2c0bac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C0BACu;
    {
        const bool branch_taken_0x2c0bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bac) {
            ctx->pc = 0x2C0C58u;
            goto label_2c0c58;
        }
    }
    ctx->pc = 0x2C0BB4u;
label_2c0bb4:
    // 0x2c0bb4: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2c0bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0bb8: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x2c0bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0bbc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c0bbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0bc0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2C0BC0u;
    {
        const bool branch_taken_0x2c0bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0bc0) {
            ctx->pc = 0x2C0C58u;
            goto label_2c0c58;
        }
    }
    ctx->pc = 0x2C0BC8u;
    // 0x2c0bc8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2C0BC8u;
    SET_GPR_U32(ctx, 31, 0x2C0BD0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2C0BC8u, 0x2C0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0BD0u;
label_2c0bd0:
    // 0x2c0bd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0bd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0bd8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C0BD8u;
    {
        const bool branch_taken_0x2c0bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bd8) {
            ctx->pc = 0x2C0C58u;
            goto label_2c0c58;
        }
    }
    ctx->pc = 0x2C0BE0u;
    // 0x2c0be0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0be4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0be8: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c0be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0bec: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2c0becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2c0bf0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0bf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0bf8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0bfc: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0c00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0c04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0c08: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c0c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2c0c0c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2c0c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0c10: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0c14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0c18: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0c1c: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x2c0c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2c0c20: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0c24: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0c28: 0x8c5500d0  lw          $s5, 0xD0($v0)
    ctx->pc = 0x2c0c28u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c0c2c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0c34: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0c38: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2c0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2c0c3c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0c40: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0c44: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x2c0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x2c0c48: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0c50: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0c54: 0xac5500d0  sw          $s5, 0xD0($v0)
    ctx->pc = 0x2c0c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 21));
label_2c0c58:
    // 0x2c0c58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c0c5c:
    // 0x2c0c5c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2c0c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c0c60: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2C0C60u;
    {
        const bool branch_taken_0x2c0c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c60) {
            ctx->pc = 0x2C0A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0a50;
        }
    }
    ctx->pc = 0x2C0C68u;
    // 0x2c0c68: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c0c68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c6c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2C0C6Cu;
    {
        const bool branch_taken_0x2c0c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c6c) {
            ctx->pc = 0x2C0DB0u;
            goto label_2c0db0;
        }
    }
    ctx->pc = 0x2C0C74u;
label_2c0c74:
    // 0x2c0c74: 0x14f080  sll         $fp, $s4, 2
    ctx->pc = 0x2c0c74u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2c0c78: 0x3dd2821  addu        $a1, $fp, $sp
    ctx->pc = 0x2c0c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
    // 0x2c0c7c: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x2c0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2c0c80: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C0C80u;
    {
        const bool branch_taken_0x2c0c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c80) {
            ctx->pc = 0x2C0D80u;
            goto label_2c0d80;
        }
    }
    ctx->pc = 0x2C0C88u;
    // 0x2c0c88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0c8c: 0x10450030  beq         $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2C0C8Cu;
    {
        const bool branch_taken_0x2c0c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c0c8c) {
            ctx->pc = 0x2C0D50u;
            goto label_2c0d50;
        }
    }
    ctx->pc = 0x2C0C94u;
    // 0x2c0c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0c98: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C0C98u;
    {
        const bool branch_taken_0x2c0c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c0c98) {
            ctx->pc = 0x2C0D20u;
            goto label_2c0d20;
        }
    }
    ctx->pc = 0x2C0CA0u;
    // 0x2c0ca0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c0ca4: 0x10440012  beq         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C0CA4u;
    {
        const bool branch_taken_0x2c0ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c0ca4) {
            ctx->pc = 0x2C0CF0u;
            goto label_2c0cf0;
        }
    }
    ctx->pc = 0x2C0CACu;
    // 0x2c0cac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0cb0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0CB0u;
    {
        const bool branch_taken_0x2c0cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c0cb0) {
            ctx->pc = 0x2C0CC0u;
            goto label_2c0cc0;
        }
    }
    ctx->pc = 0x2C0CB8u;
    // 0x2c0cb8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2C0CB8u;
    {
        const bool branch_taken_0x2c0cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0cb8) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0CC0u;
label_2c0cc0:
    // 0x2c0cc0: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2c0cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0cc8: 0x0  nop
    ctx->pc = 0x2c0cc8u;
    // NOP
    // 0x2c0ccc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c0cccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0cd0: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x2C0CD0u;
    {
        const bool branch_taken_0x2c0cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0cd0) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0CD8u;
    // 0x2c0cd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c0cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0cdc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2c0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2c0ce0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0ce4: 0xac4500d0  sw          $a1, 0xD0($v0)
    ctx->pc = 0x2c0ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 5));
    // 0x2c0ce8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2C0CE8u;
    {
        const bool branch_taken_0x2c0ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ce8) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0CF0u;
label_2c0cf0:
    // 0x2c0cf0: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2c0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0cf8: 0x0  nop
    ctx->pc = 0x2c0cf8u;
    // NOP
    // 0x2c0cfc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c0cfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0d00: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x2C0D00u;
    {
        const bool branch_taken_0x2c0d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0d00) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0D08u;
    // 0x2c0d08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c0d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0d0c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2c0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2c0d10: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0d14: 0xac4500d0  sw          $a1, 0xD0($v0)
    ctx->pc = 0x2c0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 5));
    // 0x2c0d18: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C0D18u;
    {
        const bool branch_taken_0x2c0d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0d18) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0D20u;
label_2c0d20:
    // 0x2c0d20: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x2c0d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0d28: 0x0  nop
    ctx->pc = 0x2c0d28u;
    // NOP
    // 0x2c0d2c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c0d2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0d30: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2C0D30u;
    {
        const bool branch_taken_0x2c0d30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0d30) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0D38u;
    // 0x2c0d38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c0d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0d3c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2c0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2c0d40: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0d44: 0xac4500d0  sw          $a1, 0xD0($v0)
    ctx->pc = 0x2c0d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 5));
    // 0x2c0d48: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C0D48u;
    {
        const bool branch_taken_0x2c0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0d48) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0D50u;
label_2c0d50:
    // 0x2c0d50: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2c0d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0d54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0d58: 0x0  nop
    ctx->pc = 0x2c0d58u;
    // NOP
    // 0x2c0d5c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c0d5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0d60: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2C0D60u;
    {
        const bool branch_taken_0x2c0d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0d60) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0D68u;
    // 0x2c0d68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c0d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0d6c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2c0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2c0d70: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0d74: 0xac4500d0  sw          $a1, 0xD0($v0)
    ctx->pc = 0x2c0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 5));
    // 0x2c0d78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C0D78u;
    {
        const bool branch_taken_0x2c0d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0d78) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0D80u;
label_2c0d80:
    // 0x2c0d80: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2c0d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0d88: 0x0  nop
    ctx->pc = 0x2c0d88u;
    // NOP
    // 0x2c0d8c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c0d8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0d90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0D90u;
    {
        const bool branch_taken_0x2c0d90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0d90) {
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0D98u;
    // 0x2c0d98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c0d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0d9c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2c0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2c0da0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c0da4: 0xac4500d0  sw          $a1, 0xD0($v0)
    ctx->pc = 0x2c0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 5));
label_2c0da8:
    // 0x2c0da8: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x2c0da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c0dac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c0dacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0db0:
    // 0x2c0db0: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x2c0db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c0db4: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2C0DB4u;
    {
        const bool branch_taken_0x2c0db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0db4) {
            ctx->pc = 0x2C0C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0c74;
        }
    }
    ctx->pc = 0x2C0DBCu;
    // 0x2c0dbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c0dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0dc0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2c0dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c0dc4: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2c0dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2c0dc8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2c0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2c0dcc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c0dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0dd0: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x2c0dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2c0dd4: 0xc096914  jal         func_25A450
    ctx->pc = 0x2C0DD4u;
    SET_GPR_U32(ctx, 31, 0x2C0DDCu);
    ctx->pc = 0x25A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A450u, 0x2C0DD4u, 0x2C0DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0DDCu;
label_2c0ddc:
    // 0x2c0ddc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c0ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0de0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c0de0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0de4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C0DE4u;
    {
        const bool branch_taken_0x2c0de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0de4) {
            ctx->pc = 0x2C0E14u;
            goto label_2c0e14;
        }
    }
    ctx->pc = 0x2C0DECu;
label_2c0dec:
    // 0x2c0dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0df0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c0df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0df4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0DF4u;
    SET_GPR_U32(ctx, 31, 0x2C0DFCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0DF4u, 0x2C0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0DFCu;
label_2c0dfc:
    // 0x2c0dfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0e00: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c0e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0e04: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x2c0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2c0e08: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2c0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2c0e0c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2c0e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2c0e10: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2c0e10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2c0e14:
    // 0x2c0e14: 0x2ec30007  sltiu       $v1, $s6, 0x7
    ctx->pc = 0x2c0e14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c0e18: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C0E18u;
    {
        const bool branch_taken_0x2c0e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e18) {
            ctx->pc = 0x2C0DECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0dec;
        }
    }
    ctx->pc = 0x2C0E20u;
    // 0x2c0e20: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c0e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c0e24: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2c0e24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c0e28: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c0e28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c0e2c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c0e2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0e30: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c0e30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0e34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c0e34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0e38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c0e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0e3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c0e3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0e40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c0e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0e44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c0e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0e48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c0e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c0e4c: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x2c0e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2c0e50: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0E58u;
    // 0x2c0e58: 0x0  nop
    ctx->pc = 0x2c0e58u;
    // NOP
    // 0x2c0e5c: 0x0  nop
    ctx->pc = 0x2c0e5cu;
    // NOP
    ctx->pc = 0x2c0e60u;
}
