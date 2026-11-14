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

// Function: sub_00134E50
// Address: 0x134e50 - 0x1358d0
void sub_00134E50_0x134e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134E50_0x134e50");
#endif

    switch (ctx->pc) {
        case 0x134e9cu: goto label_134e9c;
        case 0x134eb0u: goto label_134eb0;
        case 0x134ec4u: goto label_134ec4;
        case 0x134f0cu: goto label_134f0c;
        case 0x135008u: goto label_135008;
        case 0x135094u: goto label_135094;
        case 0x1350ccu: goto label_1350cc;
        case 0x1350e4u: goto label_1350e4;
        case 0x135200u: goto label_135200;
        case 0x135210u: goto label_135210;
        case 0x1352f8u: goto label_1352f8;
        case 0x1353fcu: goto label_1353fc;
        case 0x135438u: goto label_135438;
        case 0x135444u: goto label_135444;
        case 0x135464u: goto label_135464;
        case 0x13547cu: goto label_13547c;
        case 0x13549cu: goto label_13549c;
        case 0x1354b4u: goto label_1354b4;
        case 0x1354c8u: goto label_1354c8;
        case 0x1356ecu: goto label_1356ec;
        case 0x135738u: goto label_135738;
        case 0x135804u: goto label_135804;
        case 0x135850u: goto label_135850;
        default: break;
    }

    ctx->pc = 0x134e50u;

    // 0x134e50: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x134e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x134e54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x134e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x134e58: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x134e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x134e5c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x134e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x134e60: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x134e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x134e64: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x134e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x134e68: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x134e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x134e6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x134e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x134e70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x134e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x134e74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x134e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x134e78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x134e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x134e7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x134e7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x134e80: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x134e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
    // 0x134e84: 0xafa601c0  sw          $a2, 0x1C0($sp)
    ctx->pc = 0x134e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 6));
    // 0x134e88: 0xafa701d0  sw          $a3, 0x1D0($sp)
    ctx->pc = 0x134e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 7));
    // 0x134e8c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x134e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x134e90: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x134e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134e94: 0xc085538  jal         func_2154E0
    ctx->pc = 0x134E94u;
    SET_GPR_U32(ctx, 31, 0x134E9Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x134E94u, 0x134E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E9Cu;
label_134e9c:
    // 0x134e9c: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x134e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x134ea0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x134ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x134ea4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x134ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x134ea8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x134EA8u;
    SET_GPR_U32(ctx, 31, 0x134EB0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x134EA8u, 0x134EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134EB0u;
label_134eb0:
    // 0x134eb0: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x134eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x134eb4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x134eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x134eb8: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x134eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x134ebc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x134EBCu;
    SET_GPR_U32(ctx, 31, 0x134EC4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x134EBCu, 0x134EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134EC4u;
label_134ec4:
    // 0x134ec4: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x134ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x134ec8: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x134ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x134ecc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x134eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134ed0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x134ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ed4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x134ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134ed8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x134ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x134edc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x134edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x134ee0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x134ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x134ee4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x134ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x134ee8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x134ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134eec: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x134eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x134ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134ef4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x134ef4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x134ef8: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x134ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x134efc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x134efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x134f00: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134F00u;
    {
        const bool branch_taken_0x134f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134f00) {
            ctx->pc = 0x134F28u;
            goto label_134f28;
        }
    }
    ctx->pc = 0x134F08u;
    // 0x134f08: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x134f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_134f0c:
    // 0x134f0c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x134f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x134f10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x134f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x134f14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x134f18: 0x0  nop
    ctx->pc = 0x134f18u;
    // NOP
    // 0x134f1c: 0x0  nop
    ctx->pc = 0x134f1cu;
    // NOP
    // 0x134f20: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x134F20u;
    {
        const bool branch_taken_0x134f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x134f20) {
            ctx->pc = 0x134F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134f0c;
        }
    }
    ctx->pc = 0x134F28u;
label_134f28:
    // 0x134f28: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x134f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x134f2c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x134f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134f30: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x134f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134f34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134f34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134f38: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x134f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x134f3c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x134f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x134f40: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x134f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134f44: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x134f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134f48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134f4c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x134f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x134f50: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x134f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x134f54: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x134f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134f58: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x134f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x134f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134f60: 0x0  nop
    ctx->pc = 0x134f60u;
    // NOP
    // 0x134f64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x134f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134f68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x134F68u;
    {
        const bool branch_taken_0x134f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134f68) {
            ctx->pc = 0x134F80u;
            goto label_134f80;
        }
    }
    ctx->pc = 0x134F70u;
    // 0x134f70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x134f74: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x134f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134f78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x134F78u;
    {
        const bool branch_taken_0x134f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134f78) {
            ctx->pc = 0x134F94u;
            goto label_134f94;
        }
    }
    ctx->pc = 0x134F80u;
label_134f80:
    // 0x134f80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x134f80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134f84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134f84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x134f88: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x134f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134f8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x134f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x134f90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x134f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_134f94:
    // 0x134f94: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x134f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x134f98: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x134f98u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x134f9c: 0x1012  mflo        $v0
    ctx->pc = 0x134f9cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x134fa0: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x134fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x134fa4: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x134fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134fa8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x134fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x134fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134fb0: 0x0  nop
    ctx->pc = 0x134fb0u;
    // NOP
    // 0x134fb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x134fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134fb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x134FB8u;
    {
        const bool branch_taken_0x134fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134fb8) {
            ctx->pc = 0x134FD0u;
            goto label_134fd0;
        }
    }
    ctx->pc = 0x134FC0u;
    // 0x134fc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134fc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x134fc4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x134fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134fc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x134FC8u;
    {
        const bool branch_taken_0x134fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134fc8) {
            ctx->pc = 0x134FE4u;
            goto label_134fe4;
        }
    }
    ctx->pc = 0x134FD0u;
label_134fd0:
    // 0x134fd0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x134fd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134fd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134fd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x134fd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x134fd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134fdc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x134fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x134fe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x134fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_134fe4:
    // 0x134fe4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x134fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x134fe8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x134fe8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x134fec: 0x1012  mflo        $v0
    ctx->pc = 0x134fecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x134ff0: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x134ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x134ff4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x134ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x134ff8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x134ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x134ffc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134FFCu;
    {
        const bool branch_taken_0x134ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ffc) {
            ctx->pc = 0x135024u;
            goto label_135024;
        }
    }
    ctx->pc = 0x135004u;
    // 0x135004: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x135004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_135008:
    // 0x135008: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x135008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13500c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x135010: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135014: 0x0  nop
    ctx->pc = 0x135014u;
    // NOP
    // 0x135018: 0x0  nop
    ctx->pc = 0x135018u;
    // NOP
    // 0x13501c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13501Cu;
    {
        const bool branch_taken_0x13501c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13501c) {
            ctx->pc = 0x135008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135008;
        }
    }
    ctx->pc = 0x135024u;
label_135024:
    // 0x135024: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x135024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x135028: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x135028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13502c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x13502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135030: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135034: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x135034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x135038: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x135038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x13503c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x13503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135040: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x135040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135044: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135048: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x135048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x13504c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x13504cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x135050: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x135050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135054: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135058: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13505c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x13505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x135060: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x135060u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x135064: 0x1012  mflo        $v0
    ctx->pc = 0x135064u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x135068: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x135068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x13506c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x13506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135070: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135074: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135078: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x135078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13507c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13507cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x135080: 0x1012  mflo        $v0
    ctx->pc = 0x135080u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x135084: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x135084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x135088: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x135088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x13508c: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x13508Cu;
    SET_GPR_U32(ctx, 31, 0x135094u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x13508Cu, 0x135094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135094u;
label_135094:
    // 0x135094: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x135094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135098: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x135098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13509c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x13509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1350a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1350a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1350a4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1350a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1350a8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1350a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1350ac: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1350acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1350b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1350b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1350b4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1350b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1350b8: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x1350b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1350bc: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x1350bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1350c0: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1350c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1350c4: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x1350C4u;
    SET_GPR_U32(ctx, 31, 0x1350CCu);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x1350C4u, 0x1350CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350CCu;
label_1350cc:
    // 0x1350cc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1350ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1350d0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1350d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1350d4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1350d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1350d8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1350d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1350dc: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x1350DCu;
    SET_GPR_U32(ctx, 31, 0x1350E4u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x1350DCu, 0x1350E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350E4u;
label_1350e4:
    // 0x1350e4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1350e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1350e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1350e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1350ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1350ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1350f0: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1350f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1350f4: 0x2ee10065  sltiu       $at, $s7, 0x65
    ctx->pc = 0x1350f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x1350f8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1350F8u;
    {
        const bool branch_taken_0x1350f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1350f8) {
            ctx->pc = 0x135104u;
            goto label_135104;
        }
    }
    ctx->pc = 0x135100u;
    // 0x135100: 0x24170064  addiu       $s7, $zero, 0x64
    ctx->pc = 0x135100u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_135104:
    // 0x135104: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x135104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x135108: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13510c: 0x6e00006  bltz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x13510Cu;
    {
        const bool branch_taken_0x13510c = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x13510c) {
            ctx->pc = 0x135128u;
            goto label_135128;
        }
    }
    ctx->pc = 0x135114u;
    // 0x135114: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x135114u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135118: 0x0  nop
    ctx->pc = 0x135118u;
    // NOP
    // 0x13511c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13511cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x135120: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135120u;
    {
        const bool branch_taken_0x135120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135120) {
            ctx->pc = 0x135144u;
            goto label_135144;
        }
    }
    ctx->pc = 0x135128u;
label_135128:
    // 0x135128: 0x171842  srl         $v1, $s7, 1
    ctx->pc = 0x135128u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
    // 0x13512c: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x13512cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x135130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x135134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135138: 0x0  nop
    ctx->pc = 0x135138u;
    // NOP
    // 0x13513c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13513cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x135140: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x135140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_135144:
    // 0x135144: 0x0  nop
    ctx->pc = 0x135144u;
    // NOP
    // 0x135148: 0x0  nop
    ctx->pc = 0x135148u;
    // NOP
    // 0x13514c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x13514cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x135150: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x135150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x135154: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x135154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135158: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x135158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13515c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13515cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135160: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x135160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x135164: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x135164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135168: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x135168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13516c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13516cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135170: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x135170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x135174: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x135174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13517c: 0x0  nop
    ctx->pc = 0x13517cu;
    // NOP
    // 0x135180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x135180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135184: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x135184u;
    {
        const bool branch_taken_0x135184 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135184) {
            ctx->pc = 0x1351A4u;
            goto label_1351a4;
        }
    }
    ctx->pc = 0x13518Cu;
    // 0x13518c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x13518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x135190: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x135190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x135194: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x135194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x135198: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x135198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x13519c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13519Cu;
    {
        const bool branch_taken_0x13519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13519c) {
            ctx->pc = 0x1351B4u;
            goto label_1351b4;
        }
    }
    ctx->pc = 0x1351A4u;
label_1351a4:
    // 0x1351a4: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1351a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1351a8: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x1351a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x1351ac: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x1351acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x1351b0: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x1351b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
label_1351b4:
    // 0x1351b4: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x1351b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1351b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1351b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1351bc: 0x0  nop
    ctx->pc = 0x1351bcu;
    // NOP
    // 0x1351c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1351c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1351c4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1351C4u;
    {
        const bool branch_taken_0x1351c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1351c4) {
            ctx->pc = 0x1351E4u;
            goto label_1351e4;
        }
    }
    ctx->pc = 0x1351CCu;
    // 0x1351cc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1351ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1351d0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1351d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1351d4: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1351d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1351d8: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x1351d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x1351dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1351DCu;
    {
        const bool branch_taken_0x1351dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1351dc) {
            ctx->pc = 0x1351F4u;
            goto label_1351f4;
        }
    }
    ctx->pc = 0x1351E4u;
label_1351e4:
    // 0x1351e4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1351e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1351e8: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1351e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1351ec: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x1351ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x1351f0: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x1351f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_1351f4:
    // 0x1351f4: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x1351f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1351f8: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x1351F8u;
    SET_GPR_U32(ctx, 31, 0x135200u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x1351F8u, 0x135200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135200u;
label_135200:
    // 0x135200: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x135200u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x135204: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x135204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135208: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x135208u;
    SET_GPR_U32(ctx, 31, 0x135210u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x135208u, 0x135210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135210u;
label_135210:
    // 0x135210: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x135210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135214: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x135214u;
    {
        const bool branch_taken_0x135214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135214) {
            ctx->pc = 0x13522Cu;
            goto label_13522c;
        }
    }
    ctx->pc = 0x13521Cu;
    // 0x13521c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135220: 0xa3a2019f  sb          $v0, 0x19F($sp)
    ctx->pc = 0x135220u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 415), (uint8_t)GPR_U32(ctx, 2));
    // 0x135224: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x135224u;
    {
        const bool branch_taken_0x135224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135224) {
            ctx->pc = 0x135230u;
            goto label_135230;
        }
    }
    ctx->pc = 0x13522Cu;
label_13522c:
    // 0x13522c: 0xa3a0019f  sb          $zero, 0x19F($sp)
    ctx->pc = 0x13522cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 415), (uint8_t)GPR_U32(ctx, 0));
label_135230:
    // 0x135230: 0x93a2019f  lbu         $v0, 0x19F($sp)
    ctx->pc = 0x135230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 415)));
    // 0x135234: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x135234u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135238: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x135238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x13523c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x13523cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x135240: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x135240u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135244: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x135244u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x135248: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x135248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13524c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x135250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135254: 0x0  nop
    ctx->pc = 0x135254u;
    // NOP
    // 0x135258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x135258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13525c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13525Cu;
    {
        const bool branch_taken_0x13525c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13525c) {
            ctx->pc = 0x135274u;
            goto label_135274;
        }
    }
    ctx->pc = 0x135264u;
    // 0x135264: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x135268: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x135268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13526c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13526Cu;
    {
        const bool branch_taken_0x13526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13526c) {
            ctx->pc = 0x135288u;
            goto label_135288;
        }
    }
    ctx->pc = 0x135274u;
label_135274:
    // 0x135274: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x135274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135278: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13527c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13527cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135280: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x135280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x135284: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_135288:
    // 0x135288: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x135288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13528c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x13528cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x135290: 0x1012  mflo        $v0
    ctx->pc = 0x135290u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x135294: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x135294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x135298: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x135298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13529c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13529cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1352a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1352a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1352a4: 0x0  nop
    ctx->pc = 0x1352a4u;
    // NOP
    // 0x1352a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1352a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1352ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1352ACu;
    {
        const bool branch_taken_0x1352ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1352ac) {
            ctx->pc = 0x1352C4u;
            goto label_1352c4;
        }
    }
    ctx->pc = 0x1352B4u;
    // 0x1352b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1352b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1352b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1352b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1352bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1352BCu;
    {
        const bool branch_taken_0x1352bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1352bc) {
            ctx->pc = 0x1352D8u;
            goto label_1352d8;
        }
    }
    ctx->pc = 0x1352C4u;
label_1352c4:
    // 0x1352c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1352c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1352c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1352c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1352cc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1352ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1352d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1352d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1352d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1352d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1352d8:
    // 0x1352d8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1352d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1352dc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1352dcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1352e0: 0x1012  mflo        $v0
    ctx->pc = 0x1352e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1352e4: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x1352e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x1352e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1352e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352ec: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x1352ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x1352f0: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1352F0u;
    {
        const bool branch_taken_0x1352f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1352f0) {
            ctx->pc = 0x1355A4u;
            goto label_1355a4;
        }
    }
    ctx->pc = 0x1352F8u;
label_1352f8:
    // 0x1352f8: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1352f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1352fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1352fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x135300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135304: 0x0  nop
    ctx->pc = 0x135304u;
    // NOP
    // 0x135308: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x135308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13530c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13530Cu;
    {
        const bool branch_taken_0x13530c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13530c) {
            ctx->pc = 0x135324u;
            goto label_135324;
        }
    }
    ctx->pc = 0x135314u;
    // 0x135314: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135314u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x135318: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x135318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13531c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13531Cu;
    {
        const bool branch_taken_0x13531c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13531c) {
            ctx->pc = 0x135338u;
            goto label_135338;
        }
    }
    ctx->pc = 0x135324u;
label_135324:
    // 0x135324: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x135324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135328: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135328u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13532c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13532cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135330: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x135330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x135334: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_135338:
    // 0x135338: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x135338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13533c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x13533cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x135340: 0x8812  mflo        $s1
    ctx->pc = 0x135340u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x135344: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x135344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135348: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x135348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13534c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13534cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135350: 0x0  nop
    ctx->pc = 0x135350u;
    // NOP
    // 0x135354: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x135354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135358: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x135358u;
    {
        const bool branch_taken_0x135358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135358) {
            ctx->pc = 0x135370u;
            goto label_135370;
        }
    }
    ctx->pc = 0x135360u;
    // 0x135360: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x135364: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x135364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x135368u;
    {
        const bool branch_taken_0x135368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135368) {
            ctx->pc = 0x135384u;
            goto label_135384;
        }
    }
    ctx->pc = 0x135370u;
label_135370:
    // 0x135370: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x135370u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135374: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135374u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x135378: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x135378u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13537c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13537cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x135380: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_135384:
    // 0x135384: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x135384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x135388: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x135388u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x13538c: 0x8012  mflo        $s0
    ctx->pc = 0x13538cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x135390: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x135390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x135394: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x135394u;
    {
        const bool branch_taken_0x135394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x135394) {
            ctx->pc = 0x1353B8u;
            goto label_1353b8;
        }
    }
    ctx->pc = 0x13539Cu;
    // 0x13539c: 0xafb10160  sw          $s1, 0x160($sp)
    ctx->pc = 0x13539cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 17));
    // 0x1353a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1353a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1353a4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1353a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1353a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1353a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1353ac: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1353acu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1353b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1353B0u;
    {
        const bool branch_taken_0x1353b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353b0) {
            ctx->pc = 0x1353E0u;
            goto label_1353e0;
        }
    }
    ctx->pc = 0x1353B8u;
label_1353b8:
    // 0x1353b8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1353b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1353bc: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1353BCu;
    {
        const bool branch_taken_0x1353bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1353bc) {
            ctx->pc = 0x1353DCu;
            goto label_1353dc;
        }
    }
    ctx->pc = 0x1353C4u;
    // 0x1353c4: 0xafb0015c  sw          $s0, 0x15C($sp)
    ctx->pc = 0x1353c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 16));
    // 0x1353c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1353c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1353ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1353d0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1353d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1353d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1353D4u;
    {
        const bool branch_taken_0x1353d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353d4) {
            ctx->pc = 0x1353E0u;
            goto label_1353e0;
        }
    }
    ctx->pc = 0x1353DCu;
label_1353dc:
    // 0x1353dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1353dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1353e0:
    // 0x1353e0: 0x12a00065  beqz        $s5, . + 4 + (0x65 << 2)
    ctx->pc = 0x1353E0u;
    {
        const bool branch_taken_0x1353e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353e0) {
            ctx->pc = 0x135578u;
            goto label_135578;
        }
    }
    ctx->pc = 0x1353E8u;
    // 0x1353e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1353e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1353ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1353f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353f4: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x1353F4u;
    SET_GPR_U32(ctx, 31, 0x1353FCu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x1353F4u, 0x1353FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353FCu;
label_1353fc:
    // 0x1353fc: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x1353fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x135400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135404: 0x0  nop
    ctx->pc = 0x135404u;
    // NOP
    // 0x135408: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x135408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x13540c: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x13540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x135410: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x135410u;
    {
        const bool branch_taken_0x135410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135410) {
            ctx->pc = 0x135448u;
            goto label_135448;
        }
    }
    ctx->pc = 0x135418u;
    // 0x135418: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x135418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x13541c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135420: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x135420u;
    {
        const bool branch_taken_0x135420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135420) {
            ctx->pc = 0x135448u;
            goto label_135448;
        }
    }
    ctx->pc = 0x135428u;
    // 0x135428: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x135428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x13542c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135430: 0xc094d24  jal         func_253490
    ctx->pc = 0x135430u;
    SET_GPR_U32(ctx, 31, 0x135438u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x135430u, 0x135438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135438u;
label_135438:
    // 0x135438: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13543c: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x13543Cu;
    SET_GPR_U32(ctx, 31, 0x135444u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x13543Cu, 0x135444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135444u;
label_135444:
    // 0x135444: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x135444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_135448:
    // 0x135448: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x135448u;
    {
        const bool branch_taken_0x135448 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x135448) {
            ctx->pc = 0x135488u;
            goto label_135488;
        }
    }
    ctx->pc = 0x135450u;
    // 0x135450: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x135450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x135454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x135458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13545c: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x13545Cu;
    SET_GPR_U32(ctx, 31, 0x135464u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x13545Cu, 0x135464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135464u;
label_135464:
    // 0x135464: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x135464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x135468: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x135468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13546c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x135470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135474: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x135474u;
    SET_GPR_U32(ctx, 31, 0x13547Cu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x135474u, 0x13547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13547Cu;
label_13547c:
    // 0x13547c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13547cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x135480: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x135480u;
    {
        const bool branch_taken_0x135480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135480) {
            ctx->pc = 0x1354B8u;
            goto label_1354b8;
        }
    }
    ctx->pc = 0x135488u;
label_135488:
    // 0x135488: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x135488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13548c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135490: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135494: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x135494u;
    SET_GPR_U32(ctx, 31, 0x13549Cu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x135494u, 0x13549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13549Cu;
label_13549c:
    // 0x13549c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x13549cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1354a0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1354a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1354a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1354a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354ac: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x1354ACu;
    SET_GPR_U32(ctx, 31, 0x1354B4u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x1354ACu, 0x1354B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354B4u;
label_1354b4:
    // 0x1354b4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1354b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1354b8:
    // 0x1354b8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1354b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1354bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354c0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1354C0u;
    {
        const bool branch_taken_0x1354c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1354c0) {
            ctx->pc = 0x135554u;
            goto label_135554;
        }
    }
    ctx->pc = 0x1354C8u;
label_1354c8:
    // 0x1354c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1354c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1354cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1354ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1354d0: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1354d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1354D4u;
    {
        const bool branch_taken_0x1354d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1354d4) {
            ctx->pc = 0x135550u;
            goto label_135550;
        }
    }
    ctx->pc = 0x1354DCu;
    // 0x1354dc: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1354DCu;
    {
        const bool branch_taken_0x1354dc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1354dc) {
            ctx->pc = 0x1354FCu;
            goto label_1354fc;
        }
    }
    ctx->pc = 0x1354E4u;
    // 0x1354e4: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1354e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1354e8: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x1354e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x1354ec: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x1354ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1354f0: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x1354f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x1354f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1354F4u;
    {
        const bool branch_taken_0x1354f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1354f4) {
            ctx->pc = 0x13550Cu;
            goto label_13550c;
        }
    }
    ctx->pc = 0x1354FCu;
label_1354fc:
    // 0x1354fc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1354fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x135500: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x135500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x135504: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x135504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x135508: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x135508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_13550c:
    // 0x13550c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13550cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x135510: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x135510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x135514: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x135514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x135518: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x135518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x13551c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135520: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x135520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x135524: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x135524u;
    {
        const bool branch_taken_0x135524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135524) {
            ctx->pc = 0x135550u;
            goto label_135550;
        }
    }
    ctx->pc = 0x13552Cu;
    // 0x13552c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13552cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x135530: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x135530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x135534: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x135534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x135538: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x135538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x13553c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135540: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x135540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x135544: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135544u;
    {
        const bool branch_taken_0x135544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135544) {
            ctx->pc = 0x135560u;
            goto label_135560;
        }
    }
    ctx->pc = 0x13554Cu;
    // 0x13554c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x13554cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_135550:
    // 0x135550: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x135550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_135554:
    // 0x135554: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x135554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x135558: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x135558u;
    {
        const bool branch_taken_0x135558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135558) {
            ctx->pc = 0x1354C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1354c8;
        }
    }
    ctx->pc = 0x135560u;
label_135560:
    // 0x135560: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x135560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x135564: 0x17c20004  bne         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x135564u;
    {
        const bool branch_taken_0x135564 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x135564) {
            ctx->pc = 0x135578u;
            goto label_135578;
        }
    }
    ctx->pc = 0x13556Cu;
    // 0x13556c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13556cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135570: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x135570u;
    {
        const bool branch_taken_0x135570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135570) {
            ctx->pc = 0x1355B4u;
            goto label_1355b4;
        }
    }
    ctx->pc = 0x135578u;
label_135578:
    // 0x135578: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x135578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13557c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x13557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135580: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x135580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135584: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x135584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x135588: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x135588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13558c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x13558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135590: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x135590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135594: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x135594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x135598: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x135598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x13559c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1355a0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1355a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1355a4:
    // 0x1355a4: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1355a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1355a8: 0x57102b  sltu        $v0, $v0, $s7
    ctx->pc = 0x1355a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1355ac: 0x1440ff52  bnez        $v0, . + 4 + (-0xAE << 2)
    ctx->pc = 0x1355ACu;
    {
        const bool branch_taken_0x1355ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1355ac) {
            ctx->pc = 0x1352F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1352f8;
        }
    }
    ctx->pc = 0x1355B4u;
label_1355b4:
    // 0x1355b4: 0x168000b5  bnez        $s4, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1355B4u;
    {
        const bool branch_taken_0x1355b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1355b4) {
            ctx->pc = 0x13588Cu;
            goto label_13588c;
        }
    }
    ctx->pc = 0x1355BCu;
    // 0x1355bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1355bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1355c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1355c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1355c4: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1355C4u;
    {
        const bool branch_taken_0x1355c4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1355c4) {
            ctx->pc = 0x1355E0u;
            goto label_1355e0;
        }
    }
    ctx->pc = 0x1355CCu;
    // 0x1355cc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1355ccu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1355d0: 0x0  nop
    ctx->pc = 0x1355d0u;
    // NOP
    // 0x1355d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1355d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1355d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1355D8u;
    {
        const bool branch_taken_0x1355d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1355d8) {
            ctx->pc = 0x1355FCu;
            goto label_1355fc;
        }
    }
    ctx->pc = 0x1355E0u;
label_1355e0:
    // 0x1355e0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1355e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1355e4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1355e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1355e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1355e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1355ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1355ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1355f0: 0x0  nop
    ctx->pc = 0x1355f0u;
    // NOP
    // 0x1355f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1355f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1355f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1355f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1355fc:
    // 0x1355fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1355fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135600: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x135600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x135604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135608: 0x0  nop
    ctx->pc = 0x135608u;
    // NOP
    // 0x13560c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13560cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x135610: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x135610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x135614: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x135614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135618: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x135618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x13561c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x13561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x135620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135624: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135624u;
    {
        const bool branch_taken_0x135624 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x135624) {
            ctx->pc = 0x135640u;
            goto label_135640;
        }
    }
    ctx->pc = 0x13562Cu;
    // 0x13562c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x13562cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135630: 0x0  nop
    ctx->pc = 0x135630u;
    // NOP
    // 0x135634: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x135634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x135638: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135638u;
    {
        const bool branch_taken_0x135638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135638) {
            ctx->pc = 0x13565Cu;
            goto label_13565c;
        }
    }
    ctx->pc = 0x135640u;
label_135640:
    // 0x135640: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x135640u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x135644: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x135644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x135648: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13564c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13564cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135650: 0x0  nop
    ctx->pc = 0x135650u;
    // NOP
    // 0x135654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x135654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x135658: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x135658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13565c:
    // 0x13565c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13565cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135660: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x135660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x135664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135668: 0x0  nop
    ctx->pc = 0x135668u;
    // NOP
    // 0x13566c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13566cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x135670: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x135670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x135674: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x135674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x135678: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x135678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13567c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x13567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x135680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135684: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x135684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x135688: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x135688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13568c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13568cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135690: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x135690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x135694: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x135694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x135698: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x135698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x13569c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x13569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1356a0: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1356a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1356a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1356a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1356a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1356ac: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1356acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1356b0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1356b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1356b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1356b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1356b8: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1356b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1356bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1356bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1356c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1356c4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1356c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1356c8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1356c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1356cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1356ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1356d0: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1356d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1356d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1356d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1356d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1356dc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1356dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1356e0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1356e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1356e4: 0xc104d24  jal         func_413490
    ctx->pc = 0x1356E4u;
    SET_GPR_U32(ctx, 31, 0x1356ECu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x1356E4u, 0x1356ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1356ECu;
label_1356ec:
    // 0x1356ec: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1356ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1356f0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1356f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1356f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1356f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1356f8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1356f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1356fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135700: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x135700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x135704: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x135704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x135708: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x135708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13570c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x13570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135710: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135714: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x135714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x135718: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x135718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x13571c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x13571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135720: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x135720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135724: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135728: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x135728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x13572c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x135730: 0xc104d24  jal         func_413490
    ctx->pc = 0x135730u;
    SET_GPR_U32(ctx, 31, 0x135738u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x135730u, 0x135738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135738u;
label_135738:
    // 0x135738: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x135738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x13573c: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x13573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135740: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x135740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135744: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135748: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x135748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13574c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x13574cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x135750: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x135750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x135754: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x135754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x135758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13575c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x13575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135760: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x135760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135764: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x135764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x135768: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x135768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13576c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x13576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135770: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x135770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135774: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x135774u;
    {
        const bool branch_taken_0x135774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135774) {
            ctx->pc = 0x13578Cu;
            goto label_13578c;
        }
    }
    ctx->pc = 0x13577Cu;
    // 0x13577c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135780: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x135780u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135784: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x135784u;
    {
        const bool branch_taken_0x135784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135784) {
            ctx->pc = 0x13588Cu;
            goto label_13588c;
        }
    }
    ctx->pc = 0x13578Cu;
label_13578c:
    // 0x13578c: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x13578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135790: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x135790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135794: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135798: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x135798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x13579c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x13579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1357a0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1357a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1357a4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1357a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1357a8: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1357a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1357ac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1357acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1357b0: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1357b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1357b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1357b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1357b8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1357b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1357bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1357bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1357c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1357c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1357c4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1357c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1357c8: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1357c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1357cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1357ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1357d0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1357d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1357d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1357d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1357d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1357d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1357dc: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1357dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1357e0: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1357e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1357e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1357e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1357e8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1357e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1357ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1357ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1357f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1357f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1357f4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1357f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1357f8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1357f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1357fc: 0xc104d24  jal         func_413490
    ctx->pc = 0x1357FCu;
    SET_GPR_U32(ctx, 31, 0x135804u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x1357FCu, 0x135804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135804u;
label_135804:
    // 0x135804: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x135804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x135808: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x135808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x13580c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x13580cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135810: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x135810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135814: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135818: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x135818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x13581c: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x13581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x135820: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x135820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135824: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x135824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135828: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13582c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x13582cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x135830: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x135830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x135834: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x135834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135838: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x135838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13583c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13583cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135840: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x135840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x135844: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x135844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x135848: 0xc104d24  jal         func_413490
    ctx->pc = 0x135848u;
    SET_GPR_U32(ctx, 31, 0x135850u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x135848u, 0x135850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135850u;
label_135850:
    // 0x135850: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x135850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x135854: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x135854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135858: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x135858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13585c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13585cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135860: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x135860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135864: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x135864u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x135868: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x135868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x13586c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13586cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135870: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x135870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135874: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x135874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135878: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x135878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13587c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13587Cu;
    {
        const bool branch_taken_0x13587c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13587c) {
            ctx->pc = 0x13588Cu;
            goto label_13588c;
        }
    }
    ctx->pc = 0x135884u;
    // 0x135884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135888: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x135888u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13588c:
    // 0x13588c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x13588cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135890: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x135890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135894: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x135894u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135898: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x135898u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13589c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13589cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1358a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1358a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1358a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1358a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1358a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1358a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1358ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1358acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1358b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1358b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1358b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1358b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1358b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1358b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1358bc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x1358bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1358c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1358C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1358C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1358C8u;
    // 0x1358c8: 0x0  nop
    ctx->pc = 0x1358c8u;
    // NOP
    // 0x1358cc: 0x0  nop
    ctx->pc = 0x1358ccu;
    // NOP
    ctx->pc = 0x1358d0u;
}
