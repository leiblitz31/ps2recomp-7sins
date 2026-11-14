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

// Function: sub_00290F90
// Address: 0x290f90 - 0x291690
void sub_00290F90_0x290f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290F90_0x290f90");
#endif

    switch (ctx->pc) {
        case 0x290fecu: goto label_290fec;
        case 0x291000u: goto label_291000;
        case 0x291018u: goto label_291018;
        case 0x291040u: goto label_291040;
        case 0x291060u: goto label_291060;
        case 0x2910ccu: goto label_2910cc;
        case 0x2910e0u: goto label_2910e0;
        case 0x291104u: goto label_291104;
        case 0x291138u: goto label_291138;
        case 0x29115cu: goto label_29115c;
        case 0x291170u: goto label_291170;
        case 0x291194u: goto label_291194;
        case 0x2911c8u: goto label_2911c8;
        case 0x291214u: goto label_291214;
        case 0x2912a0u: goto label_2912a0;
        case 0x29132cu: goto label_29132c;
        case 0x2913b8u: goto label_2913b8;
        case 0x291444u: goto label_291444;
        case 0x2914d0u: goto label_2914d0;
        case 0x29155cu: goto label_29155c;
        case 0x2915ecu: goto label_2915ec;
        default: break;
    }

    ctx->pc = 0x290f90u;

    // 0x290f90: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x290f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x290f94: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x290f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x290f98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x290f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x290f9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x290f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x290fa0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x290fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x290fa4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x290fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x290fa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x290fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x290fac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x290facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x290fb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x290fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x290fb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290fbc: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x290fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x290fc0: 0xafa501c0  sw          $a1, 0x1C0($sp)
    ctx->pc = 0x290fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 5));
    // 0x290fc4: 0xafa601d0  sw          $a2, 0x1D0($sp)
    ctx->pc = 0x290fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 6));
    // 0x290fc8: 0xafa701e0  sw          $a3, 0x1E0($sp)
    ctx->pc = 0x290fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 7));
    // 0x290fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290fd0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x290fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x290fd4: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x290fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x290fd8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x290fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x290fdc: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x290fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x290fe0: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x290fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x290fe4: 0xc041d58  jal         func_107560
    ctx->pc = 0x290FE4u;
    SET_GPR_U32(ctx, 31, 0x290FECu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x290FE4u, 0x290FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FECu;
label_290fec:
    // 0x290fec: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x290fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x290ff0: 0x24640044  addiu       $a0, $v1, 0x44
    ctx->pc = 0x290ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x290ff4: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x290ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x290ff8: 0xc041d58  jal         func_107560
    ctx->pc = 0x290FF8u;
    SET_GPR_U32(ctx, 31, 0x291000u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x290FF8u, 0x291000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291000u;
label_291000:
    // 0x291000: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x291000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291004: 0x24850050  addiu       $a1, $a0, 0x50
    ctx->pc = 0x291004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x291008: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x291008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29100c: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x29100cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x291010: 0xc052608  jal         func_149820
    ctx->pc = 0x291010u;
    SET_GPR_U32(ctx, 31, 0x291018u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x291010u, 0x291018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291018u;
label_291018:
    // 0x291018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29101c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x29101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291020: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x291020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x291024: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x291024u;
    {
        const bool branch_taken_0x291024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291024) {
            ctx->pc = 0x29104Cu;
            goto label_29104c;
        }
    }
    ctx->pc = 0x29102Cu;
    // 0x29102c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x29102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291030: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x291030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x291034: 0x8c650064  lw          $a1, 0x64($v1)
    ctx->pc = 0x291034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x291038: 0xc0a4340  jal         func_290D00
    ctx->pc = 0x291038u;
    SET_GPR_U32(ctx, 31, 0x291040u);
    ctx->pc = 0x290D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290D00u, 0x291038u, 0x291040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291040u;
label_291040:
    // 0x291040: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291044: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291048: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x291048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_29104c:
    // 0x29104c: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x29104cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x291050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291054: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x291054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x291058: 0xc0a45a4  jal         func_291690
    ctx->pc = 0x291058u;
    SET_GPR_U32(ctx, 31, 0x291060u);
    ctx->pc = 0x291690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291690u, 0x291058u, 0x291060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291060u;
label_291060:
    // 0x291060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291064: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291068: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x291068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x29106c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29106cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291070: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291074: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x291074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291078: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29107c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x29107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291080: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x291080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x291084: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x291084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x291088: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29108c: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x29108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291090: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291094: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x291094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291098: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x291098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29109c: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x29109cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x2910a0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2910a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2910a4: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x2910a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2910a8: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2910a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2910ac: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2910acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2910b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2910b4: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2910b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2910b8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2910b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2910bc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2910bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2910c0: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x2910c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2910c4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2910C4u;
    SET_GPR_U32(ctx, 31, 0x2910CCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2910C4u, 0x2910CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2910CCu;
label_2910cc:
    // 0x2910cc: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2910ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2910d0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2910d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2910d4: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x2910d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2910d8: 0xc041d58  jal         func_107560
    ctx->pc = 0x2910D8u;
    SET_GPR_U32(ctx, 31, 0x2910E0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2910D8u, 0x2910E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2910E0u;
label_2910e0:
    // 0x2910e0: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x2910e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2910e4: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2910e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2910e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2910ec: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2910ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2910f0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2910f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2910f4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2910f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2910f8: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x2910f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2910fc: 0xc041d58  jal         func_107560
    ctx->pc = 0x2910FCu;
    SET_GPR_U32(ctx, 31, 0x291104u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2910FCu, 0x291104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291104u;
label_291104:
    // 0x291104: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x291104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291108: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x291108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29110c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29110cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x291110: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x291110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x291114: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x291114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291118: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x291118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29111c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29111cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x291120: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x291120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x291124: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291128: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x291128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x29112c: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x29112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x291130: 0xc041d58  jal         func_107560
    ctx->pc = 0x291130u;
    SET_GPR_U32(ctx, 31, 0x291138u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x291130u, 0x291138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291138u;
label_291138:
    // 0x291138: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x291138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29113c: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x29113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291140: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x291140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x291144: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x291144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x291148: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29114c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x29114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x291150: 0x24450044  addiu       $a1, $v0, 0x44
    ctx->pc = 0x291150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x291154: 0xc041d58  jal         func_107560
    ctx->pc = 0x291154u;
    SET_GPR_U32(ctx, 31, 0x29115Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x291154u, 0x29115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29115Cu;
label_29115c:
    // 0x29115c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x29115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291160: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x291160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x291164: 0x24450044  addiu       $a1, $v0, 0x44
    ctx->pc = 0x291164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x291168: 0xc041d58  jal         func_107560
    ctx->pc = 0x291168u;
    SET_GPR_U32(ctx, 31, 0x291170u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x291168u, 0x291170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291170u;
label_291170:
    // 0x291170: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x291170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291174: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x291174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291178: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x291178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29117c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x29117cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x291180: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291184: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x291184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x291188: 0x24450044  addiu       $a1, $v0, 0x44
    ctx->pc = 0x291188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x29118c: 0xc041d58  jal         func_107560
    ctx->pc = 0x29118Cu;
    SET_GPR_U32(ctx, 31, 0x291194u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x29118Cu, 0x291194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291194u;
label_291194:
    // 0x291194: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x291194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291198: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x291198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29119c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29119cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2911a0: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2911a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2911a4: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2911a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2911a8: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2911a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2911acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2911b0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2911b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2911b4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2911b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2911b8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2911b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2911bc: 0x24450044  addiu       $a1, $v0, 0x44
    ctx->pc = 0x2911bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2911c0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2911C0u;
    SET_GPR_U32(ctx, 31, 0x2911C8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2911C0u, 0x2911C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911C8u;
label_2911c8:
    // 0x2911c8: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x2911c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2911cc: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2911ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2911d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2911d4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2911d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2911d8: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2911d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911dc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2911dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2911e0: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x2911e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911e4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2911e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2911e8: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2911e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911ec: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2911ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2911f0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2911f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2911f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2911f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2911f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2911f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2911fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2911fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291200: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x291200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x291204: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x291204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291208: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x291208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29120c: 0xc041d58  jal         func_107560
    ctx->pc = 0x29120Cu;
    SET_GPR_U32(ctx, 31, 0x291214u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x29120Cu, 0x291214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291214u;
label_291214:
    // 0x291214: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x291214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291218: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x291218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x29121c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291220: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x291220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291224: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x291224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x291228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29122c: 0x245e000c  addiu       $fp, $v0, 0xC
    ctx->pc = 0x29122cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x291230: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291234: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x291234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x291238: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x291238u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29123c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x29123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291240: 0x90420051  lbu         $v0, 0x51($v0)
    ctx->pc = 0x291240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 81)));
    // 0x291244: 0xa3c20001  sb          $v0, 0x1($fp)
    ctx->pc = 0x291244u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x291248: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29124c: 0x90420052  lbu         $v0, 0x52($v0)
    ctx->pc = 0x29124cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x291250: 0xa3c20002  sb          $v0, 0x2($fp)
    ctx->pc = 0x291250u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x291254: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291258: 0x90420053  lbu         $v0, 0x53($v0)
    ctx->pc = 0x291258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
    // 0x29125c: 0xa3c20003  sb          $v0, 0x3($fp)
    ctx->pc = 0x29125cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x291260: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x291260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291264: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x291264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291268: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x291268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x29126c: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x29126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291270: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x291270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x291274: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x291274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291278: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x291278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x29127c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x29127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291280: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x291280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x291284: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x291284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291288: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x291288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29128c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x29128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x291290: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x291290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291294: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x291294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x291298: 0xc041d58  jal         func_107560
    ctx->pc = 0x291298u;
    SET_GPR_U32(ctx, 31, 0x2912A0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x291298u, 0x2912A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912A0u;
label_2912a0:
    // 0x2912a0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2912a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2912a4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2912a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2912a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2912a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2912ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2912acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2912b0: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2912b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2912b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2912b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2912b8: 0x2457000c  addiu       $s7, $v0, 0xC
    ctx->pc = 0x2912b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2912bc: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2912bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2912c0: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x2912c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2912c4: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x2912c4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2912c8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2912c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2912cc: 0x90420051  lbu         $v0, 0x51($v0)
    ctx->pc = 0x2912ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 81)));
    // 0x2912d0: 0xa2e20001  sb          $v0, 0x1($s7)
    ctx->pc = 0x2912d0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2912d4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2912d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2912d8: 0x90420052  lbu         $v0, 0x52($v0)
    ctx->pc = 0x2912d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x2912dc: 0xa2e20002  sb          $v0, 0x2($s7)
    ctx->pc = 0x2912dcu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2912e0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2912e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2912e4: 0x90420053  lbu         $v0, 0x53($v0)
    ctx->pc = 0x2912e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
    // 0x2912e8: 0xa2e20003  sb          $v0, 0x3($s7)
    ctx->pc = 0x2912e8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2912ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2912ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2912f0: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2912f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912f4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2912f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2912f8: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x2912f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912fc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2912fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x291300: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x291300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291304: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x291304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x291308: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x291308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29130c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x29130cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x291310: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x291310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291314: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x291314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291318: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x291318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x29131c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x29131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291320: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x291320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x291324: 0xc041d58  jal         func_107560
    ctx->pc = 0x291324u;
    SET_GPR_U32(ctx, 31, 0x29132Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x291324u, 0x29132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29132Cu;
label_29132c:
    // 0x29132c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x29132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291330: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x291330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x291334: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x291334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291338: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x291338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29133c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x29133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x291340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291344: 0x2456000c  addiu       $s6, $v0, 0xC
    ctx->pc = 0x291344u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x291348: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29134c: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x29134cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x291350: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x291350u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x291354: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291358: 0x90420051  lbu         $v0, 0x51($v0)
    ctx->pc = 0x291358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 81)));
    // 0x29135c: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x29135cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x291360: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291364: 0x90420052  lbu         $v0, 0x52($v0)
    ctx->pc = 0x291364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x291368: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x291368u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x29136c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x29136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291370: 0x90420053  lbu         $v0, 0x53($v0)
    ctx->pc = 0x291370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
    // 0x291374: 0xa2c20003  sb          $v0, 0x3($s6)
    ctx->pc = 0x291374u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x291378: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x291378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29137c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x29137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291380: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x291380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x291384: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x291384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291388: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x291388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x29138c: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x29138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291390: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x291390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x291394: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x291394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291398: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x291398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x29139c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2913a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2913a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2913a4: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2913a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2913a8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2913a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2913ac: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2913acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2913b0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2913B0u;
    SET_GPR_U32(ctx, 31, 0x2913B8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2913B0u, 0x2913B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2913B8u;
label_2913b8:
    // 0x2913b8: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2913b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2913bc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2913bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2913c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2913c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2913c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2913c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2913c8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2913c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2913cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2913ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2913d0: 0x2455000c  addiu       $s5, $v0, 0xC
    ctx->pc = 0x2913d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2913d4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2913d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2913d8: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x2913d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2913dc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2913dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2913e0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2913e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2913e4: 0x90420051  lbu         $v0, 0x51($v0)
    ctx->pc = 0x2913e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 81)));
    // 0x2913e8: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x2913e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2913ec: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2913ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2913f0: 0x90420052  lbu         $v0, 0x52($v0)
    ctx->pc = 0x2913f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x2913f4: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x2913f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2913f8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2913f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2913fc: 0x90420053  lbu         $v0, 0x53($v0)
    ctx->pc = 0x2913fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
    // 0x291400: 0xa2a20003  sb          $v0, 0x3($s5)
    ctx->pc = 0x291400u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x291404: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x291404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291408: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x291408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29140c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x29140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x291410: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x291410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291414: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x291414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x291418: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x291418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29141c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x29141cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x291420: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x291420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291424: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x291424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x291428: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x291428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29142c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29142cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291430: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x291430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x291434: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x291434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291438: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x291438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29143c: 0xc041d58  jal         func_107560
    ctx->pc = 0x29143Cu;
    SET_GPR_U32(ctx, 31, 0x291444u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x29143Cu, 0x291444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291444u;
label_291444:
    // 0x291444: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x291444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291448: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x291448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x29144c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291450: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x291450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291454: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x291454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x291458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29145c: 0x2454000c  addiu       $s4, $v0, 0xC
    ctx->pc = 0x29145cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x291460: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291464: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x291464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x291468: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x291468u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29146c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x29146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291470: 0x90420051  lbu         $v0, 0x51($v0)
    ctx->pc = 0x291470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 81)));
    // 0x291474: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x291474u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x291478: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29147c: 0x90420052  lbu         $v0, 0x52($v0)
    ctx->pc = 0x29147cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x291480: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x291480u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x291484: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291488: 0x90420053  lbu         $v0, 0x53($v0)
    ctx->pc = 0x291488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
    // 0x29148c: 0xa2820003  sb          $v0, 0x3($s4)
    ctx->pc = 0x29148cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x291490: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x291490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291494: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x291494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291498: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x291498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29149c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x29149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914a0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2914a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2914a4: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x2914a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914a8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2914a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2914ac: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2914acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2914b0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2914b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2914b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2914b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2914b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2914b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2914bc: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2914bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2914c0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2914c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2914c4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2914c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2914c8: 0xc041d58  jal         func_107560
    ctx->pc = 0x2914C8u;
    SET_GPR_U32(ctx, 31, 0x2914D0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2914C8u, 0x2914D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2914D0u;
label_2914d0:
    // 0x2914d0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2914d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2914d4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2914d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2914d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2914d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2914dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2914dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2914e0: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2914e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2914e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2914e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2914e8: 0x2453000c  addiu       $s3, $v0, 0xC
    ctx->pc = 0x2914e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2914ec: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2914ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2914f0: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x2914f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2914f4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2914f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2914f8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2914f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2914fc: 0x90420051  lbu         $v0, 0x51($v0)
    ctx->pc = 0x2914fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 81)));
    // 0x291500: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x291500u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x291504: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291508: 0x90420052  lbu         $v0, 0x52($v0)
    ctx->pc = 0x291508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x29150c: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x29150cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x291510: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291514: 0x90420053  lbu         $v0, 0x53($v0)
    ctx->pc = 0x291514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
    // 0x291518: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x291518u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x29151c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29151cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291520: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x291520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291524: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x291524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x291528: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x291528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29152c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x29152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x291530: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x291530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291534: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x291534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x291538: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x291538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29153c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x29153cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x291540: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x291540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291544: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x291544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291548: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x291548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x29154c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x29154cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291550: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x291550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x291554: 0xc041d58  jal         func_107560
    ctx->pc = 0x291554u;
    SET_GPR_U32(ctx, 31, 0x29155Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x291554u, 0x29155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29155Cu;
label_29155c:
    // 0x29155c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x29155cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291560: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x291560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x291564: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x291564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291568: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x291568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29156c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x29156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x291570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291574: 0x2452000c  addiu       $s2, $v0, 0xC
    ctx->pc = 0x291574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x291578: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29157c: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x29157cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x291580: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x291580u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x291584: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x291584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291588: 0x90420051  lbu         $v0, 0x51($v0)
    ctx->pc = 0x291588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 81)));
    // 0x29158c: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x29158cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x291590: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291594: 0x90620052  lbu         $v0, 0x52($v1)
    ctx->pc = 0x291594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x291598: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x291598u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x29159c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x29159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2915a0: 0x90440053  lbu         $a0, 0x53($v0)
    ctx->pc = 0x2915a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
    // 0x2915a4: 0xa2440003  sb          $a0, 0x3($s2)
    ctx->pc = 0x2915a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2915a8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2915a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2915ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2915acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2915b0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2915b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915b4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2915b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2915b8: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2915b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915bc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2915bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2915c0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2915c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915c4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2915c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2915c8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2915c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2915cc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2915ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2915d0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2915d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2915d4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2915d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2915d8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2915d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2915dc: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x2915dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2915e0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2915e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2915e4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2915E4u;
    SET_GPR_U32(ctx, 31, 0x2915ECu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2915E4u, 0x2915ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2915ECu;
label_2915ec:
    // 0x2915ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2915ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2915f0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2915f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2915f4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2915f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2915f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2915f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2915fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2915fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x291600: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x291600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x291604: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x291604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x291608: 0x24b1000c  addiu       $s1, $a1, 0xC
    ctx->pc = 0x291608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x29160c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x29160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291610: 0x90640050  lbu         $a0, 0x50($v1)
    ctx->pc = 0x291610u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x291614: 0xa2240000  sb          $a0, 0x0($s1)
    ctx->pc = 0x291614u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x291618: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x291618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29161c: 0x90c40051  lbu         $a0, 0x51($a2)
    ctx->pc = 0x29161cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 81)));
    // 0x291620: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x291620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x291624: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291628: 0x90630052  lbu         $v1, 0x52($v1)
    ctx->pc = 0x291628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x29162c: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x29162cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x291630: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x291634: 0x90630053  lbu         $v1, 0x53($v1)
    ctx->pc = 0x291634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 83)));
    // 0x291638: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x291638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x29163c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x29163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291640: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x291640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x291644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291648: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x291648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29164c: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x29164cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
    // 0x291650: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x291650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x291654: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x291654u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x291658: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x291658u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29165c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29165cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291660: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x291660u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291664: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x291664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291668: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x291668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29166c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29166cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291678: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x291678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x29167c: 0x3e00008  jr          $ra
    ctx->pc = 0x29167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29167Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291684u;
    // 0x291684: 0x0  nop
    ctx->pc = 0x291684u;
    // NOP
    // 0x291688: 0x0  nop
    ctx->pc = 0x291688u;
    // NOP
    // 0x29168c: 0x0  nop
    ctx->pc = 0x29168cu;
    // NOP
    ctx->pc = 0x291690u;
}
