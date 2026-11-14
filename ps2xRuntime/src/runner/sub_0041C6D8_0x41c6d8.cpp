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

// Function: sub_0041C6D8
// Address: 0x41c6d8 - 0x41c9b0
void sub_0041C6D8_0x41c6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C6D8_0x41c6d8");
#endif

    switch (ctx->pc) {
        case 0x41c750u: goto label_41c750;
        case 0x41c770u: goto label_41c770;
        case 0x41c79cu: goto label_41c79c;
        case 0x41c7d8u: goto label_41c7d8;
        case 0x41c804u: goto label_41c804;
        case 0x41c83cu: goto label_41c83c;
        case 0x41c868u: goto label_41c868;
        case 0x41c970u: goto label_41c970;
        case 0x41c998u: goto label_41c998;
        default: break;
    }

    ctx->pc = 0x41c6d8u;

    // 0x41c6d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x41c6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x41c6dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41c6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41c6e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41c6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41c6e4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x41c6e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x41c6e8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x41c6ec: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x41c6ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x41c6f0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x41c6f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x41c6f4: 0x46150603  div.s       $f24, $f0, $f21
    ctx->pc = 0x41c6f4u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x41c6f8: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c6fc: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x41c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x41c700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41c700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x41c704: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x41c704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x41c708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41c708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41c70c: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x41c70cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x41c710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x41c710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c714: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x41c714u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x41c718: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x41c718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41c71c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x41c71cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x41c720: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41c720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x41c724: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41c724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x41c728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41c72c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x41c72cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x41c730: 0xa060010c  sb          $zero, 0x10C($v1)
    ctx->pc = 0x41c730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x41c734: 0xe475020c  swc1        $f21, 0x20C($v1)
    ctx->pc = 0x41c734u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 524), bits); }
    // 0x41c738: 0xa060000c  sb          $zero, 0xC($v1)
    ctx->pc = 0x41c738u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x41c73c: 0xc7998054  lwc1        $f25, -0x7FAC($gp)
    ctx->pc = 0x41c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x41c740: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x41c740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x41c744: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x41c744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x41c748: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x41c748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x41c74c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x41c74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_41c750:
    // 0x41c750: 0x4492a000  mtc1        $s2, $f20
    ctx->pc = 0x41c750u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x41c754: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x41c754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x41c758: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x41c758u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x41c75c: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x41c75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x41c760: 0x26510002  addiu       $s1, $s2, 0x2
    ctx->pc = 0x41c760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x41c764: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x41c764u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x41c768: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x41C768u;
    SET_GPR_U32(ctx, 31, 0x41C770u);
    ctx->pc = 0x41C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C768u;
    // 0x41c76c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x41C768u, 0x41C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C770u;
label_41c770:
    // 0x41c770: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x41c770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x41c774: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c778: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41c778u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x41c77c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x41c77cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x41c780: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x41c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x41c784: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x41c784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x41c788: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x41c78c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41c78cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41c790: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x41c790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x41c794: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x41C794u;
    SET_GPR_U32(ctx, 31, 0x41C79Cu);
    ctx->pc = 0x41C798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C794u;
    // 0x41c798: 0xa043000c  sb          $v1, 0xC($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x41C794u, 0x41C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C79Cu;
label_41c79c:
    // 0x41c79c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x41c79cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x41c7a0: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c7a4: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x41c7a4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x41c7a8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x41c7a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x41c7ac: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x41c7acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x41c7b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x41c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x41c7b4: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x41c7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x41c7b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x41c7bc: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x41c7bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x41c7c0: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x41c7c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x41c7c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41c7c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41c7c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x41c7c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x41c7cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41c7ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x41c7d0: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x41C7D0u;
    SET_GPR_U32(ctx, 31, 0x41C7D8u);
    ctx->pc = 0x41C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C7D0u;
    // 0x41c7d4: 0xa043010c  sb          $v1, 0x10C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 268), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x41C7D0u, 0x41C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C7D8u;
label_41c7d8:
    // 0x41c7d8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x41c7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x41c7dc: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c7e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41c7e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x41c7e4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x41c7e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x41c7e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x41c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x41c7ec: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x41c7ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x41c7f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x41c7f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41c7f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41c7f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x41c7f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x41c7fc: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x41C7FCu;
    SET_GPR_U32(ctx, 31, 0x41C804u);
    ctx->pc = 0x41C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C7FCu;
    // 0x41c800: 0xa043000c  sb          $v1, 0xC($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x41C7FCu, 0x41C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C804u;
label_41c804:
    // 0x41c804: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x41c804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x41c808: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c80c: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x41c80cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x41c810: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x41c810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x41c814: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x41c814u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x41c818: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x41c818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x41c81c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x41c81cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x41c820: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x41c824: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x41c824u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x41c828: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41c828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41c82c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x41c82cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x41c830: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41c830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x41c834: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x41C834u;
    SET_GPR_U32(ctx, 31, 0x41C83Cu);
    ctx->pc = 0x41C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C834u;
    // 0x41c838: 0xa043010c  sb          $v1, 0x10C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 268), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x41C834u, 0x41C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C83Cu;
label_41c83c:
    // 0x41c83c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x41c83cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x41c840: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c844: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41c844u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x41c848: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x41c848u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x41c84c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x41c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x41c850: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x41c850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x41c854: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x41c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x41c858: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41c858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41c85c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x41c85cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x41c860: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x41C860u;
    SET_GPR_U32(ctx, 31, 0x41C868u);
    ctx->pc = 0x41C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C860u;
    // 0x41c864: 0xa044000c  sb          $a0, 0xC($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x41C860u, 0x41C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C868u;
label_41c868:
    // 0x41c868: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x41c868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x41c86c: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c870: 0x2a430100  slti        $v1, $s2, 0x100
    ctx->pc = 0x41c870u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x41c874: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x41c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x41c878: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x41c878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x41c87c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x41c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x41c880: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41c880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41c884: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x41c884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x41c888: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x41C888u;
    {
        const bool branch_taken_0x41c888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C888u;
        // 0x41c88c: 0xa044010c  sb          $a0, 0x10C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 268), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c888) {
            ctx->pc = 0x41C750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41c750;
        }
    }
    ctx->pc = 0x41C890u;
    // 0x41c890: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41c890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41c894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41c894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41c898: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41c898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41c89c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41c89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41c8a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x41c8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41c8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c8a8: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x41c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x41c8ac: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x41c8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x41c8b0: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x41c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x41c8b4: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x41c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x41c8b8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x41c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x41c8bc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x41c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x41c8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x41C8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C8C0u;
        // 0x41c8c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C8C8u;
    // 0x41c8c8: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c8cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x41c8d0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x41c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x41c8d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41c8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x41C8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C8D8u;
        // 0x41c8dc: 0xc460020c  lwc1        $f0, 0x20C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C8E0u;
    // 0x41c8e0: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c8e4: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x41c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x41c8e8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x41c8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x41c8ec: 0x24c6e880  addiu       $a2, $a2, -0x1780
    ctx->pc = 0x41c8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
    // 0x41c8f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x41c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x41c8f4: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x41c8f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x41c8f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41c8fc: 0x90880002  lbu         $t0, 0x2($a0)
    ctx->pc = 0x41c8fcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x41c900: 0x9065000c  lbu         $a1, 0xC($v1)
    ctx->pc = 0x41c900u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x41c904: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41c904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c908: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x41c908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x41c90c: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c910: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x41c910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x41c914: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x41c914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x41c918: 0x9065000c  lbu         $a1, 0xC($v1)
    ctx->pc = 0x41c918u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x41c91c: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x41c91cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x41c920: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41c924: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x41c924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x41c928: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x41c928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x41c92c: 0x9065000c  lbu         $a1, 0xC($v1)
    ctx->pc = 0x41c92cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x41c930: 0x3e00008  jr          $ra
    ctx->pc = 0x41C930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C930u;
        // 0x41c934: 0xa0850002  sb          $a1, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C938u;
    // 0x41c938: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41c938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c93c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41c93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41c940: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x41c940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c944: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x41c944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c948: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x41c948u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c94c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x41c94cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c950: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41c950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41c954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41c958: 0x2484c9e0  addiu       $a0, $a0, -0x3620
    ctx->pc = 0x41c958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
    // 0x41c95c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41c95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c960: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x41c960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c964: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x41c964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c968: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x41C968u;
    SET_GPR_U32(ctx, 31, 0x41C970u);
    ctx->pc = 0x41C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C968u;
    // 0x41c96c: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x41C968u, 0x41C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C970u;
label_41c970:
    // 0x41c970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c974: 0x3e00008  jr          $ra
    ctx->pc = 0x41C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C974u;
        // 0x41c978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C97Cu;
    // 0x41c97c: 0x0  nop
    ctx->pc = 0x41c97cu;
    // NOP
    // 0x41c980: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41c980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c984: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41c984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41c988: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41c988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41c98c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41c990: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x41C990u;
    SET_GPR_U32(ctx, 31, 0x41C998u);
    ctx->pc = 0x41C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C990u;
    // 0x41c994: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x41C990u, 0x41C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C998u;
label_41c998:
    // 0x41c998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c99c: 0x3e00008  jr          $ra
    ctx->pc = 0x41C99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C99Cu;
        // 0x41c9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C9A4u;
    // 0x41c9a4: 0x0  nop
    ctx->pc = 0x41c9a4u;
    // NOP
    // 0x41c9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x41C9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9A8u;
        // 0x41c9ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C9B0u;
}
