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

// Function: sub_002D8650
// Address: 0x2d8650 - 0x2d8890
void sub_002D8650_0x2d8650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8650_0x2d8650");
#endif

    switch (ctx->pc) {
        case 0x2d868cu: goto label_2d868c;
        case 0x2d869cu: goto label_2d869c;
        case 0x2d86a8u: goto label_2d86a8;
        case 0x2d86b8u: goto label_2d86b8;
        case 0x2d8708u: goto label_2d8708;
        case 0x2d871cu: goto label_2d871c;
        case 0x2d8748u: goto label_2d8748;
        case 0x2d87a8u: goto label_2d87a8;
        case 0x2d87bcu: goto label_2d87bc;
        case 0x2d87e8u: goto label_2d87e8;
        case 0x2d87fcu: goto label_2d87fc;
        default: break;
    }

    ctx->pc = 0x2d8650u;

    // 0x2d8650: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d8650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d8654: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d8654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d8658: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d8658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d865c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d8660: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d8660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d8664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d8664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d8668: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2d8668u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d866c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d866cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d8670: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2d8670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2d8674: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x2d8674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x2d8678: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x2d8678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x2d867c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2d867cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d8680: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2d8680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d8684: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D8684u;
    SET_GPR_U32(ctx, 31, 0x2D868Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D8684u, 0x2D868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D868Cu;
label_2d868c:
    // 0x2d868c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d868cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8690: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8694: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x2D8694u;
    SET_GPR_U32(ctx, 31, 0x2D869Cu);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x2D8694u, 0x2D869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D869Cu;
label_2d869c:
    // 0x2d869c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d869cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86a0: 0xc090864  jal         func_242190
    ctx->pc = 0x2D86A0u;
    SET_GPR_U32(ctx, 31, 0x2D86A8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2D86A0u, 0x2D86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86A8u;
label_2d86a8:
    // 0x2d86a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d86a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d86acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86b0: 0xc090844  jal         func_242110
    ctx->pc = 0x2D86B0u;
    SET_GPR_U32(ctx, 31, 0x2D86B8u);
    ctx->pc = 0x242110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242110u, 0x2D86B0u, 0x2D86B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86B8u;
label_2d86b8:
    // 0x2d86b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d86b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d86c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d86c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d86c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d86c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d86cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d86d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d86d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d86d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d86d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d86d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d86dc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d86dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d86e0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d86e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d86e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d86ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d86ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d86f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d86f4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d86f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d86f8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2d86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d86fc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d86fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d8700: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D8700u;
    SET_GPR_U32(ctx, 31, 0x2D8708u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D8700u, 0x2D8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8708u;
label_2d8708:
    // 0x2d8708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d870c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2d870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d8710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d8710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8714: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D8714u;
    SET_GPR_U32(ctx, 31, 0x2D871Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D8714u, 0x2D871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D871Cu;
label_2d871c:
    // 0x2d871c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2d871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d8720: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2d8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d8724: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d8724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8728: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d872c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8730: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d8730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d8734: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d8734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d8738: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d8738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d873c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d873cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8740: 0xc091010  jal         func_244040
    ctx->pc = 0x2D8740u;
    SET_GPR_U32(ctx, 31, 0x2D8748u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x2D8740u, 0x2D8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8748u;
label_2d8748:
    // 0x2d8748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d874c: 0x0  nop
    ctx->pc = 0x2d874cu;
    // NOP
    // 0x2d8750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d8750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d8754: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2d8754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2d8758: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2d8758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2d875c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d875cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d8760: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2d8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8764: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d8764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d8768: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x2d8768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d876c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2d876cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d8770: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2d8770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2d8774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8778: 0x0  nop
    ctx->pc = 0x2d8778u;
    // NOP
    // 0x2d877c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2d877cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d8780: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2d8780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2d8784: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d8784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8788: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d8788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d878c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2d878cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2d8790: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d8790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8794: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d8794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8798: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2d8798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d879c: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x2d879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d87a0: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2D87A0u;
    SET_GPR_U32(ctx, 31, 0x2D87A8u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2D87A0u, 0x2D87A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87A8u;
label_2d87a8:
    // 0x2d87a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d87a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d87ac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2d87acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d87b0: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x2d87b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d87b4: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2D87B4u;
    SET_GPR_U32(ctx, 31, 0x2D87BCu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2D87B4u, 0x2D87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87BCu;
label_2d87bc:
    // 0x2d87bc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2d87bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d87c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d87c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d87c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d87c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d87c8: 0x0  nop
    ctx->pc = 0x2d87c8u;
    // NOP
    // 0x2d87cc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d87ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d87d0: 0x4615a01d  msub.s      $f0, $f20, $f21
    ctx->pc = 0x2d87d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x2d87d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d87d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d87d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d87dc: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x2d87dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d87e0: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2D87E0u;
    SET_GPR_U32(ctx, 31, 0x2D87E8u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2D87E0u, 0x2D87E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87E8u;
label_2d87e8:
    // 0x2d87e8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d87e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d87ec: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2d87ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d87f0: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x2d87f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d87f4: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2D87F4u;
    SET_GPR_U32(ctx, 31, 0x2D87FCu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2D87F4u, 0x2D87FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87FCu;
label_2d87fc:
    // 0x2d87fc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2d87fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8800: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d8800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d8804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d8804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8808: 0x0  nop
    ctx->pc = 0x2d8808u;
    // NOP
    // 0x2d880c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d880cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d8810: 0x4615a01c  madd.s      $f0, $f20, $f21
    ctx->pc = 0x2d8810u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x2d8814: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2d8814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8818: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d8818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d881c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2d881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8820: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2d8820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8824: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2d8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8828: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d8828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d882c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2d882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8830: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d8830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d8834: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2d8834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8838: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d8838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d883c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2d883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8840: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d8840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d8844: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2d8844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8848: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2d8848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d884c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2d884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8850: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2d8850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8854: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2d8854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8858: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d8858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d885c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2d885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8860: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d8860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d8864: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d8864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8868: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d8868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d886c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d886cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8870: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d8870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d8874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8878: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2d8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d887c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d8880: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2d8880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d8884: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D888Cu;
    // 0x2d888c: 0x0  nop
    ctx->pc = 0x2d888cu;
    // NOP
    ctx->pc = 0x2d8890u;
}
