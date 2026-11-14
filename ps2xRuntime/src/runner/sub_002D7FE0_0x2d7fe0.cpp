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

// Function: sub_002D7FE0
// Address: 0x2d7fe0 - 0x2d8340
void sub_002D7FE0_0x2d7fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7FE0_0x2d7fe0");
#endif

    switch (ctx->pc) {
        case 0x2d8004u: goto label_2d8004;
        case 0x2d8034u: goto label_2d8034;
        case 0x2d8064u: goto label_2d8064;
        case 0x2d80f8u: goto label_2d80f8;
        case 0x2d8108u: goto label_2d8108;
        case 0x2d816cu: goto label_2d816c;
        case 0x2d8180u: goto label_2d8180;
        case 0x2d82a4u: goto label_2d82a4;
        case 0x2d82c0u: goto label_2d82c0;
        case 0x2d82d8u: goto label_2d82d8;
        case 0x2d8300u: goto label_2d8300;
        case 0x2d8318u: goto label_2d8318;
        case 0x2d8328u: goto label_2d8328;
        default: break;
    }

    ctx->pc = 0x2d7fe0u;

    // 0x2d7fe0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2d7fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d7fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7fe8: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2d7fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2d7fec: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x2d7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x2d7ff0: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x2d7ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x2d7ff4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2d7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2d7ff8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2d7ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d7ffc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D7FFCu;
    SET_GPR_U32(ctx, 31, 0x2D8004u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D7FFCu, 0x2D8004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8004u;
label_2d8004:
    // 0x2d8004: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x2d8004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2d8008: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x2d8008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2d800c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8010: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d8010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8014: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d8014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8018: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d8018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d801c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d801cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d8020: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d8020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d8024: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2d8024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2d8028: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d8028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d802c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D802Cu;
    SET_GPR_U32(ctx, 31, 0x2D8034u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D802Cu, 0x2D8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8034u;
label_2d8034:
    // 0x2d8034: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x2d8034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2d8038: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x2d8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2d803c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8040: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d8040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8044: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d8044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8048: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d8048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d804c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d804cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d8050: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d8050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d8054: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2d8054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2d8058: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2d8058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d805c: 0xc096a08  jal         func_25A820
    ctx->pc = 0x2D805Cu;
    SET_GPR_U32(ctx, 31, 0x2D8064u);
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x2D805Cu, 0x2D8064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8064u;
label_2d8064:
    // 0x2d8064: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x2d8064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2d8068: 0x27a20088  addiu       $v0, $sp, 0x88
    ctx->pc = 0x2d8068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2d806c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8070: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d8070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8074: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8078: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d8078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d807c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d807cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d8080: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d8080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d8084: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2d8084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8088: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2d8088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2d808c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2d808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8090: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2d8090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d8094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d8098: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2d8098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d809c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x2d809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d80a0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2d80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d80a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d80a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d80a8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2d80a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2d80ac: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2d80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d80b0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d80b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d80b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d80b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d80b8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2d80b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d80bc: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2d80bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d80c0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2d80c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d80c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d80c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d80c8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2d80c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d80cc: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x2d80ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d80d0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2d80d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d80d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d80d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d80d8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2d80d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2d80dc: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2d80dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d80e0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2d80e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d80e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d80e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d80e8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2d80e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d80ec: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2d80ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2d80f0: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D80F0u;
    SET_GPR_U32(ctx, 31, 0x2D80F8u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D80F0u, 0x2D80F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80F8u;
label_2d80f8:
    // 0x2d80f8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2d80f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2d80fc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2d80fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2d8100: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D8100u;
    SET_GPR_U32(ctx, 31, 0x2D8108u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D8100u, 0x2D8108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8108u;
label_2d8108:
    // 0x2d8108: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2d8108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d810c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d810cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8110: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2D8110u;
    {
        const bool branch_taken_0x2d8110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d8110) {
            ctx->pc = 0x2D8174u;
            goto label_2d8174;
        }
    }
    ctx->pc = 0x2D8118u;
    // 0x2d8118: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2d8118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d811c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d8120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8124: 0x0  nop
    ctx->pc = 0x2d8124u;
    // NOP
    // 0x2d8128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d8128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d812c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2D812Cu;
    {
        const bool branch_taken_0x2d812c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d812c) {
            ctx->pc = 0x2D815Cu;
            goto label_2d815c;
        }
    }
    ctx->pc = 0x2D8134u;
    // 0x2d8134: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d8134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d8138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d813c: 0x0  nop
    ctx->pc = 0x2d813cu;
    // NOP
    // 0x2d8140: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2d8140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2d8144: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2d8144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8148: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d8148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d814c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d814cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8150: 0x0  nop
    ctx->pc = 0x2d8150u;
    // NOP
    // 0x2d8154: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d8154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d8158: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2d8158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2d815c:
    // 0x2d815c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2d815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2d8160: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x2d8160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2d8164: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D8164u;
    SET_GPR_U32(ctx, 31, 0x2D816Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D8164u, 0x2D816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D816Cu;
label_2d816c:
    // 0x2d816c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D816Cu;
    {
        const bool branch_taken_0x2d816c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d816c) {
            ctx->pc = 0x2D8184u;
            goto label_2d8184;
        }
    }
    ctx->pc = 0x2D8174u;
label_2d8174:
    // 0x2d8174: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2d8174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2d8178: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D8178u;
    SET_GPR_U32(ctx, 31, 0x2D8180u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D8178u, 0x2D8180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8180u;
label_2d8180:
    // 0x2d8180: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2d8180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2d8184:
    // 0x2d8184: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2d8184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8188: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2d8188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2d818c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d818cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8190: 0x0  nop
    ctx->pc = 0x2d8190u;
    // NOP
    // 0x2d8194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d8194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8198: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2D8198u;
    {
        const bool branch_taken_0x2d8198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d8198) {
            ctx->pc = 0x2D8208u;
            goto label_2d8208;
        }
    }
    ctx->pc = 0x2D81A0u;
    // 0x2d81a0: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2d81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2d81a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d81a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d81a8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2d81a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d81ac: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2d81acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d81b0: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2d81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2d81b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d81b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d81b8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2d81b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d81bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d81bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d81c0: 0x0  nop
    ctx->pc = 0x2d81c0u;
    // NOP
    // 0x2d81c4: 0x0  nop
    ctx->pc = 0x2d81c4u;
    // NOP
    // 0x2d81c8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2d81c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d81cc: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x2D81CCu;
    {
        const bool branch_taken_0x2d81cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d81cc) {
            ctx->pc = 0x2D8328u;
            goto label_2d8328;
        }
    }
    ctx->pc = 0x2D81D4u;
    // 0x2d81d4: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2d81d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2d81d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d81d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d81dc: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2d81dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d81e0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2d81e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d81e4: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2d81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2d81e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d81e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d81ec: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d81ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d81f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d81f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d81f4: 0x0  nop
    ctx->pc = 0x2d81f4u;
    // NOP
    // 0x2d81f8: 0x0  nop
    ctx->pc = 0x2d81f8u;
    // NOP
    // 0x2d81fc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2d81fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8200: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x2D8200u;
    {
        const bool branch_taken_0x2d8200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d8200) {
            ctx->pc = 0x2D8328u;
            goto label_2d8328;
        }
    }
    ctx->pc = 0x2D8208u;
label_2d8208:
    // 0x2d8208: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2d8208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2d820c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2d820cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2d8210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d8210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d8214: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2d8214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8218: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d8218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d821c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2d821cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2d8220: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2d8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8224: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2d8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8228: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2d8228u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d822c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2d822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8230: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d8230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d8234: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2d8234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d8238: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2d8238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d823c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2d823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8240: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2d8240u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d8244: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2d8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8248: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d8248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d824c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2d824cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2d8250: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2d8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8254: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2d8254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8258: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2d8258u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d825c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8260: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d8260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d8264: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2d8264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d8268: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2d8268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d826c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2d826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8270: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d8270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d8274: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2d8274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d8278: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x2d8278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d827c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2d827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8280: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d8280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d8284: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2d8284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2d8288: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2d8288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d828c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8290: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d8290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d8294: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2d8294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d8298: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2d8298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2d829c: 0xc06885c  jal         func_1A2170
    ctx->pc = 0x2D829Cu;
    SET_GPR_U32(ctx, 31, 0x2D82A4u);
    ctx->pc = 0x1A2170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2170u, 0x2D829Cu, 0x2D82A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82A4u;
label_2d82a4:
    // 0x2d82a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2d82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d82a8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2d82a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d82ac: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2d82acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d82b0: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x2d82b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2d82b4: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2d82b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2d82b8: 0xc0b5cfc  jal         func_2D73F0
    ctx->pc = 0x2D82B8u;
    SET_GPR_U32(ctx, 31, 0x2D82C0u);
    ctx->pc = 0x2D73F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73F0u, 0x2D82B8u, 0x2D82C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82C0u;
label_2d82c0:
    // 0x2d82c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D82C0u;
    {
        const bool branch_taken_0x2d82c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d82c0) {
            ctx->pc = 0x2D82E0u;
            goto label_2d82e0;
        }
    }
    ctx->pc = 0x2D82C8u;
    // 0x2d82c8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2d82c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d82cc: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2d82ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d82d0: 0xc090f14  jal         func_243C50
    ctx->pc = 0x2D82D0u;
    SET_GPR_U32(ctx, 31, 0x2D82D8u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x2D82D0u, 0x2D82D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82D8u;
label_2d82d8:
    // 0x2d82d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D82D8u;
    {
        const bool branch_taken_0x2d82d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d82d8) {
            ctx->pc = 0x2D8318u;
            goto label_2d8318;
        }
    }
    ctx->pc = 0x2D82E0u;
label_2d82e0:
    // 0x2d82e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2d82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d82e4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2d82e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d82e8: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2d82e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d82ec: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x2d82ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2d82f0: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2d82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d82f4: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2d82f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2d82f8: 0xc0b5e3c  jal         func_2D78F0
    ctx->pc = 0x2D82F8u;
    SET_GPR_U32(ctx, 31, 0x2D8300u);
    ctx->pc = 0x2D78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78F0u, 0x2D82F8u, 0x2D8300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8300u;
label_2d8300:
    // 0x2d8300: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8300u;
    {
        const bool branch_taken_0x2d8300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8300) {
            ctx->pc = 0x2D8318u;
            goto label_2d8318;
        }
    }
    ctx->pc = 0x2D8308u;
    // 0x2d8308: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2d8308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d830c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2d830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d8310: 0xc090f14  jal         func_243C50
    ctx->pc = 0x2D8310u;
    SET_GPR_U32(ctx, 31, 0x2D8318u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x2D8310u, 0x2D8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8318u;
label_2d8318:
    // 0x2d8318: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2d8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2d831c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d8320: 0xc06877c  jal         func_1A1DF0
    ctx->pc = 0x2D8320u;
    SET_GPR_U32(ctx, 31, 0x2D8328u);
    ctx->pc = 0x1A1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DF0u, 0x2D8320u, 0x2D8328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8328u;
label_2d8328:
    // 0x2d8328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d832c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2d832cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d8330: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8338u;
    // 0x2d8338: 0x0  nop
    ctx->pc = 0x2d8338u;
    // NOP
    // 0x2d833c: 0x0  nop
    ctx->pc = 0x2d833cu;
    // NOP
    ctx->pc = 0x2d8340u;
}
