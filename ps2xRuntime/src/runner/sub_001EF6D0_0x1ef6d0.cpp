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

// Function: sub_001EF6D0
// Address: 0x1ef6d0 - 0x1ef8b0
void sub_001EF6D0_0x1ef6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF6D0_0x1ef6d0");
#endif

    switch (ctx->pc) {
        case 0x1ef70cu: goto label_1ef70c;
        case 0x1ef754u: goto label_1ef754;
        case 0x1ef768u: goto label_1ef768;
        case 0x1ef78cu: goto label_1ef78c;
        case 0x1ef7b4u: goto label_1ef7b4;
        case 0x1ef858u: goto label_1ef858;
        default: break;
    }

    ctx->pc = 0x1ef6d0u;

    // 0x1ef6d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ef6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ef6d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ef6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ef6d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ef6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ef6dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ef6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ef6e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ef6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ef6e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ef6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef6f0: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1ef6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1ef6f4: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1ef6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1ef6f8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ef6fc: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1ef6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ef700: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x1ef700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1ef704: 0xc07bd0c  jal         func_1EF430
    ctx->pc = 0x1EF704u;
    SET_GPR_U32(ctx, 31, 0x1EF70Cu);
    ctx->pc = 0x1EF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF430u, 0x1EF704u, 0x1EF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF70Cu;
label_1ef70c:
    // 0x1ef70c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ef70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ef710: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x1ef710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1ef714: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1ef714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ef718: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1ef718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef71c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1ef71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef720: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1ef720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ef724: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ef724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ef728: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1ef728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ef72c: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x1ef72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1ef730: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1ef730u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef734: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1ef734u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1ef738: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1ef738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef73c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1ef73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef740: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ef740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef744: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ef744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1ef748: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef74c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1EF74Cu;
    {
        const bool branch_taken_0x1ef74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef74c) {
            ctx->pc = 0x1EF864u;
            goto label_1ef864;
        }
    }
    ctx->pc = 0x1EF754u;
label_1ef754:
    // 0x1ef754: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ef754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ef758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef75c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ef75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ef760: 0xc07c15c  jal         func_1F0570
    ctx->pc = 0x1EF760u;
    SET_GPR_U32(ctx, 31, 0x1EF768u);
    ctx->pc = 0x1F0570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0570u, 0x1EF760u, 0x1EF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF768u;
label_1ef768:
    // 0x1ef768: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ef768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef76c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ef76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef770: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ef770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ef774: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ef774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ef778: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ef778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ef77c: 0xc46c003c  lwc1        $f12, 0x3C($v1)
    ctx->pc = 0x1ef77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef780: 0xc44d0040  lwc1        $f13, 0x40($v0)
    ctx->pc = 0x1ef780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef784: 0xc07c09c  jal         func_1F0270
    ctx->pc = 0x1EF784u;
    SET_GPR_U32(ctx, 31, 0x1EF78Cu);
    ctx->pc = 0x1F0270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0270u, 0x1EF784u, 0x1EF78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF78Cu;
label_1ef78c:
    // 0x1ef78c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1ef78cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef790: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ef790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef794: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ef794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef798: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ef798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ef79c: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1ef79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1ef7a0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ef7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ef7a4: 0xc46c003c  lwc1        $f12, 0x3C($v1)
    ctx->pc = 0x1ef7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef7a8: 0xc44d0040  lwc1        $f13, 0x40($v0)
    ctx->pc = 0x1ef7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef7ac: 0xc07c09c  jal         func_1F0270
    ctx->pc = 0x1EF7ACu;
    SET_GPR_U32(ctx, 31, 0x1EF7B4u);
    ctx->pc = 0x1F0270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0270u, 0x1EF7ACu, 0x1EF7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF7B4u;
label_1ef7b4:
    // 0x1ef7b4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1ef7b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef7b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef7b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ef7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7c0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1ef7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef7c4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ef7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef7c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef7cc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1EF7CCu;
    {
        const bool branch_taken_0x1ef7cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef7cc) {
            ctx->pc = 0x1EF7FCu;
            goto label_1ef7fc;
        }
    }
    ctx->pc = 0x1EF7D4u;
    // 0x1ef7d4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ef7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef7d8: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1ef7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef7dc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ef7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef7e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ef7e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef7e4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1ef7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef7e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ef7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef7ec: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF7ECu;
    {
        const bool branch_taken_0x1ef7ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef7ec) {
            ctx->pc = 0x1EF7FCu;
            goto label_1ef7fc;
        }
    }
    ctx->pc = 0x1EF7F4u;
    // 0x1ef7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef7f8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1ef7f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ef7fc:
    // 0x1ef7fc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF7FCu;
    {
        const bool branch_taken_0x1ef7fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef7fc) {
            ctx->pc = 0x1EF82Cu;
            goto label_1ef82c;
        }
    }
    ctx->pc = 0x1EF804u;
    // 0x1ef804: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ef804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef808: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1ef808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef80c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1ef80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef810: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ef810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef814: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1ef814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef818: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ef818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef81c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF81Cu;
    {
        const bool branch_taken_0x1ef81c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef81c) {
            ctx->pc = 0x1EF82Cu;
            goto label_1ef82c;
        }
    }
    ctx->pc = 0x1EF824u;
    // 0x1ef824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef828: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1ef828u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ef82c:
    // 0x1ef82c: 0x325300ff  andi        $s3, $s2, 0xFF
    ctx->pc = 0x1ef82cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1ef830: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF830u;
    {
        const bool branch_taken_0x1ef830 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef830) {
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF838u;
    // 0x1ef838: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF838u;
    {
        const bool branch_taken_0x1ef838 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef838) {
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF840u;
    // 0x1ef840: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF840u;
    {
        const bool branch_taken_0x1ef840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef840) {
            ctx->pc = 0x1EF860u;
            goto label_1ef860;
        }
    }
    ctx->pc = 0x1EF848u;
label_1ef848:
    // 0x1ef848: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ef848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ef84c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef850: 0xc07c288  jal         func_1F0A20
    ctx->pc = 0x1EF850u;
    SET_GPR_U32(ctx, 31, 0x1EF858u);
    ctx->pc = 0x1F0A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0A20u, 0x1EF850u, 0x1EF858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF858u;
label_1ef858:
    // 0x1ef858: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF858u;
    {
        const bool branch_taken_0x1ef858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef858) {
            ctx->pc = 0x1EF87Cu;
            goto label_1ef87c;
        }
    }
    ctx->pc = 0x1EF860u;
label_1ef860:
    // 0x1ef860: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ef860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ef864:
    // 0x1ef864: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ef864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef868: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ef868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ef86c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1ef86cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ef870: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1EF870u;
    {
        const bool branch_taken_0x1ef870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef870) {
            ctx->pc = 0x1EF754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef754;
        }
    }
    ctx->pc = 0x1EF878u;
    // 0x1ef878: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef87c:
    // 0x1ef87c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ef87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef880: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ef880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef884: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ef884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef898: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1ef898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ef89c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF8A4u;
    // 0x1ef8a4: 0x0  nop
    ctx->pc = 0x1ef8a4u;
    // NOP
    // 0x1ef8a8: 0x0  nop
    ctx->pc = 0x1ef8a8u;
    // NOP
    // 0x1ef8ac: 0x0  nop
    ctx->pc = 0x1ef8acu;
    // NOP
    ctx->pc = 0x1ef8b0u;
}
