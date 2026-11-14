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

// Function: sub_001E6650
// Address: 0x1e6650 - 0x1e68e0
void sub_001E6650_0x1e6650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6650_0x1e6650");
#endif

    switch (ctx->pc) {
        case 0x1e6680u: goto label_1e6680;
        case 0x1e66a0u: goto label_1e66a0;
        default: break;
    }

    ctx->pc = 0x1e6650u;

    // 0x1e6650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e6654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e6658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e665c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6660: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e6660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e6664: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e6664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e6668: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e6668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e666c: 0xa3a70060  sb          $a3, 0x60($sp)
    ctx->pc = 0x1e666cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 7));
    // 0x1e6670: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6674: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e6674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e6678: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E6678u;
    SET_GPR_U32(ctx, 31, 0x1E6680u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E6678u, 0x1E6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6680u;
label_1e6680:
    // 0x1e6680: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e6680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6684: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1e6684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e6688: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e6688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e668c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6690: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1e6690u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6694: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e6694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6698: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1E6698u;
    {
        const bool branch_taken_0x1e6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6698) {
            ctx->pc = 0x1E68B0u;
            goto label_1e68b0;
        }
    }
    ctx->pc = 0x1E66A0u;
label_1e66a0:
    // 0x1e66a0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e66a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e66a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e66a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e66a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e66ac: 0xc4610140  lwc1        $f1, 0x140($v1)
    ctx->pc = 0x1e66acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e66b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1e66b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1e66b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e66b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e66b8: 0x0  nop
    ctx->pc = 0x1e66b8u;
    // NOP
    // 0x1e66bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e66bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e66c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E66C0u;
    {
        const bool branch_taken_0x1e66c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e66c0) {
            ctx->pc = 0x1E66D8u;
            goto label_1e66d8;
        }
    }
    ctx->pc = 0x1E66C8u;
    // 0x1e66c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e66c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e66cc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e66ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e66d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E66D0u;
    {
        const bool branch_taken_0x1e66d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e66d0) {
            ctx->pc = 0x1E66ECu;
            goto label_1e66ec;
        }
    }
    ctx->pc = 0x1E66D8u;
label_1e66d8:
    // 0x1e66d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e66d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e66dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e66dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e66e0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e66e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e66e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e66e8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e66e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1e66ec:
    // 0x1e66ec: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E66ECu;
    {
        const bool branch_taken_0x1e66ec = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e66ec) {
            ctx->pc = 0x1E6708u;
            goto label_1e6708;
        }
    }
    ctx->pc = 0x1E66F4u;
    // 0x1e66f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e66f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e66f8: 0x0  nop
    ctx->pc = 0x1e66f8u;
    // NOP
    // 0x1e66fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e66fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e6700: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6700u;
    {
        const bool branch_taken_0x1e6700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6700) {
            ctx->pc = 0x1E6724u;
            goto label_1e6724;
        }
    }
    ctx->pc = 0x1E6708u;
label_1e6708:
    // 0x1e6708: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x1e6708u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1e670c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1e670cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1e6710: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e6710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e6714: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e6714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6718: 0x0  nop
    ctx->pc = 0x1e6718u;
    // NOP
    // 0x1e671c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e671cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e6720: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e6720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e6724:
    // 0x1e6724: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6728: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e6728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e672c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6730: 0xe4600140  swc1        $f0, 0x140($v1)
    ctx->pc = 0x1e6730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
    // 0x1e6734: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6738: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e6738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e673c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6740: 0xc4610144  lwc1        $f1, 0x144($v1)
    ctx->pc = 0x1e6740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6744: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1e6744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1e6748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e674c: 0x0  nop
    ctx->pc = 0x1e674cu;
    // NOP
    // 0x1e6750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e6750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6754: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6754u;
    {
        const bool branch_taken_0x1e6754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6754) {
            ctx->pc = 0x1E676Cu;
            goto label_1e676c;
        }
    }
    ctx->pc = 0x1E675Cu;
    // 0x1e675c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e675cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e6760: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e6760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e6764: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6764u;
    {
        const bool branch_taken_0x1e6764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6764) {
            ctx->pc = 0x1E6780u;
            goto label_1e6780;
        }
    }
    ctx->pc = 0x1E676Cu;
label_1e676c:
    // 0x1e676c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e676cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e6770: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e6770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e6774: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e6774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e6778: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e6778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e677c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e677cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1e6780:
    // 0x1e6780: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6780u;
    {
        const bool branch_taken_0x1e6780 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e6780) {
            ctx->pc = 0x1E679Cu;
            goto label_1e679c;
        }
    }
    ctx->pc = 0x1E6788u;
    // 0x1e6788: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e6788u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e678c: 0x0  nop
    ctx->pc = 0x1e678cu;
    // NOP
    // 0x1e6790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e6790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e6794: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6794u;
    {
        const bool branch_taken_0x1e6794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6794) {
            ctx->pc = 0x1E67B8u;
            goto label_1e67b8;
        }
    }
    ctx->pc = 0x1E679Cu;
label_1e679c:
    // 0x1e679c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x1e679cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1e67a0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1e67a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1e67a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e67a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e67a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e67a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e67ac: 0x0  nop
    ctx->pc = 0x1e67acu;
    // NOP
    // 0x1e67b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e67b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e67b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e67b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e67b8:
    // 0x1e67b8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e67b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e67bc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e67bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e67c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e67c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e67c4: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x1e67c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x1e67c8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e67cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e67ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e67d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e67d4: 0xc4610148  lwc1        $f1, 0x148($v1)
    ctx->pc = 0x1e67d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e67d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1e67dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e67dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e67e0: 0x0  nop
    ctx->pc = 0x1e67e0u;
    // NOP
    // 0x1e67e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e67e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e67e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E67E8u;
    {
        const bool branch_taken_0x1e67e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e67e8) {
            ctx->pc = 0x1E6800u;
            goto label_1e6800;
        }
    }
    ctx->pc = 0x1E67F0u;
    // 0x1e67f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e67f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e67f4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e67f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e67f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E67F8u;
    {
        const bool branch_taken_0x1e67f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e67f8) {
            ctx->pc = 0x1E6814u;
            goto label_1e6814;
        }
    }
    ctx->pc = 0x1E6800u;
label_1e6800:
    // 0x1e6800: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e6800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e6804: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e6804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e6808: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e6808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e680c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e680cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e6810: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e6810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1e6814:
    // 0x1e6814: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6814u;
    {
        const bool branch_taken_0x1e6814 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e6814) {
            ctx->pc = 0x1E6830u;
            goto label_1e6830;
        }
    }
    ctx->pc = 0x1E681Cu;
    // 0x1e681c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e681cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6820: 0x0  nop
    ctx->pc = 0x1e6820u;
    // NOP
    // 0x1e6824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e6824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e6828: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6828u;
    {
        const bool branch_taken_0x1e6828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6828) {
            ctx->pc = 0x1E684Cu;
            goto label_1e684c;
        }
    }
    ctx->pc = 0x1E6830u;
label_1e6830:
    // 0x1e6830: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x1e6830u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1e6834: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1e6834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1e6838: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e6838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e683c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e683cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6840: 0x0  nop
    ctx->pc = 0x1e6840u;
    // NOP
    // 0x1e6844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e6844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e6848: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e6848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e684c:
    // 0x1e684c: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e684cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6850: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e6850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6858: 0xe4600148  swc1        $f0, 0x148($v1)
    ctx->pc = 0x1e6858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 328), bits); }
    // 0x1e685c: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x1e685cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6860: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6860u;
    {
        const bool branch_taken_0x1e6860 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6860) {
            ctx->pc = 0x1E687Cu;
            goto label_1e687c;
        }
    }
    ctx->pc = 0x1E6868u;
    // 0x1e6868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e686c: 0x0  nop
    ctx->pc = 0x1e686cu;
    // NOP
    // 0x1e6870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e6870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e6874: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6874u;
    {
        const bool branch_taken_0x1e6874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6874) {
            ctx->pc = 0x1E6898u;
            goto label_1e6898;
        }
    }
    ctx->pc = 0x1E687Cu;
label_1e687c:
    // 0x1e687c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1e687cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1e6880: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e6880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e6884: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e6884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e6888: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e6888u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e688c: 0x0  nop
    ctx->pc = 0x1e688cu;
    // NOP
    // 0x1e6890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e6890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e6894: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e6894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e6898:
    // 0x1e6898: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e689c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e689cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e68a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e68a4: 0xe460014c  swc1        $f0, 0x14C($v1)
    ctx->pc = 0x1e68a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 332), bits); }
    // 0x1e68a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e68a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e68ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e68acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e68b0:
    // 0x1e68b0: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1e68b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e68b4: 0x1460ff7a  bnez        $v1, . + 4 + (-0x86 << 2)
    ctx->pc = 0x1E68B4u;
    {
        const bool branch_taken_0x1e68b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e68b4) {
            ctx->pc = 0x1E66A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e66a0;
        }
    }
    ctx->pc = 0x1E68BCu;
    // 0x1e68bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e68bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e68c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e68c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e68c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e68c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e68c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e68c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e68cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E68CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E68CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E68D4u;
    // 0x1e68d4: 0x0  nop
    ctx->pc = 0x1e68d4u;
    // NOP
    // 0x1e68d8: 0x0  nop
    ctx->pc = 0x1e68d8u;
    // NOP
    // 0x1e68dc: 0x0  nop
    ctx->pc = 0x1e68dcu;
    // NOP
    ctx->pc = 0x1e68e0u;
}
