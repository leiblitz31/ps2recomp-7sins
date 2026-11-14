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

// Function: sub_0024AEE0
// Address: 0x24aee0 - 0x24b350
void sub_0024AEE0_0x24aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AEE0_0x24aee0");
#endif

    switch (ctx->pc) {
        case 0x24af2cu: goto label_24af2c;
        case 0x24af40u: goto label_24af40;
        case 0x24af54u: goto label_24af54;
        case 0x24af80u: goto label_24af80;
        case 0x24af94u: goto label_24af94;
        case 0x24afbcu: goto label_24afbc;
        case 0x24aff4u: goto label_24aff4;
        case 0x24b028u: goto label_24b028;
        case 0x24b03cu: goto label_24b03c;
        case 0x24b04cu: goto label_24b04c;
        case 0x24b054u: goto label_24b054;
        case 0x24b060u: goto label_24b060;
        case 0x24b078u: goto label_24b078;
        case 0x24b08cu: goto label_24b08c;
        case 0x24b09cu: goto label_24b09c;
        case 0x24b0b8u: goto label_24b0b8;
        case 0x24b0c8u: goto label_24b0c8;
        case 0x24b0f0u: goto label_24b0f0;
        case 0x24b134u: goto label_24b134;
        case 0x24b144u: goto label_24b144;
        case 0x24b150u: goto label_24b150;
        case 0x24b160u: goto label_24b160;
        case 0x24b16cu: goto label_24b16c;
        case 0x24b190u: goto label_24b190;
        case 0x24b19cu: goto label_24b19c;
        case 0x24b1a8u: goto label_24b1a8;
        case 0x24b1c8u: goto label_24b1c8;
        case 0x24b1d8u: goto label_24b1d8;
        case 0x24b1f4u: goto label_24b1f4;
        case 0x24b204u: goto label_24b204;
        case 0x24b224u: goto label_24b224;
        case 0x24b248u: goto label_24b248;
        case 0x24b26cu: goto label_24b26c;
        case 0x24b278u: goto label_24b278;
        case 0x24b290u: goto label_24b290;
        case 0x24b29cu: goto label_24b29c;
        case 0x24b2b0u: goto label_24b2b0;
        case 0x24b2bcu: goto label_24b2bc;
        case 0x24b2e0u: goto label_24b2e0;
        case 0x24b304u: goto label_24b304;
        default: break;
    }

    ctx->pc = 0x24aee0u;

    // 0x24aee0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x24aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x24aee4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24aee8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x24aee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x24aeec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x24aef0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24aef4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24aef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24aef8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24aef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24aefc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24af00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24af00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24af04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24af04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24af08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24af08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24af0c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x24af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x24af10: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x24af10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x24af14: 0xafa60110  sw          $a2, 0x110($sp)
    ctx->pc = 0x24af14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 6));
    // 0x24af18: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24af1c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x24af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x24af20: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24af20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24af24: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24AF24u;
    SET_GPR_U32(ctx, 31, 0x24AF2Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24AF24u, 0x24AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF2Cu;
label_24af2c:
    // 0x24af2c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24af2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af30: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x24af30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24af34: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24af34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24af38: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24AF38u;
    SET_GPR_U32(ctx, 31, 0x24AF40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24AF38u, 0x24AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF40u;
label_24af40:
    // 0x24af40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24af40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af44: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x24af44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24af48: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x24af48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af4c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x24AF4Cu;
    SET_GPR_U32(ctx, 31, 0x24AF54u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x24AF4Cu, 0x24AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF54u;
label_24af54:
    // 0x24af54: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x24af54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24af58: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x24af58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x24af5c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24af60: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24af64: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24af68: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x24af68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24af6c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x24af6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24af70: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24af70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24af74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af78: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x24AF78u;
    SET_GPR_U32(ctx, 31, 0x24AF80u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x24AF78u, 0x24AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF80u;
label_24af80:
    // 0x24af80: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x24af80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x24af84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24af84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af88: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x24af88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x24af8c: 0xc094f2c  jal         func_253CB0
    ctx->pc = 0x24AF8Cu;
    SET_GPR_U32(ctx, 31, 0x24AF94u);
    ctx->pc = 0x253CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253CB0u, 0x24AF8Cu, 0x24AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF94u;
label_24af94:
    // 0x24af94: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x24af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x24af98: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x24af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af9c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afa0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x24afa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afa4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x24afa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24afa8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24afa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24afac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24afb0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24afb4: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24AFB4u;
    SET_GPR_U32(ctx, 31, 0x24AFBCu);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24AFB4u, 0x24AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFBCu;
label_24afbc:
    // 0x24afbc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x24afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24afc0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x24afc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24afc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x24afc8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24afc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24afcc: 0x0  nop
    ctx->pc = 0x24afccu;
    // NOP
    // 0x24afd0: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x24afd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24afd4: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x24afd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24afd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x24afdc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24afdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24afe0: 0x0  nop
    ctx->pc = 0x24afe0u;
    // NOP
    // 0x24afe4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x24afe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24afe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24afe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afec: 0xc091010  jal         func_244040
    ctx->pc = 0x24AFECu;
    SET_GPR_U32(ctx, 31, 0x24AFF4u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24AFECu, 0x24AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFF4u;
label_24aff4:
    // 0x24aff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aff8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24AFF8u;
    {
        const bool branch_taken_0x24aff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24aff8) {
            ctx->pc = 0x24B014u;
            goto label_24b014;
        }
    }
    ctx->pc = 0x24B000u;
    // 0x24b000: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24b000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24b004: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B004u;
    {
        const bool branch_taken_0x24b004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b004) {
            ctx->pc = 0x24B014u;
            goto label_24b014;
        }
    }
    ctx->pc = 0x24B00Cu;
    // 0x24b00c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24B00Cu;
    {
        const bool branch_taken_0x24b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b00c) {
            ctx->pc = 0x24B01Cu;
            goto label_24b01c;
        }
    }
    ctx->pc = 0x24B014u;
label_24b014:
    // 0x24b014: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24b014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24b018: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x24b018u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_24b01c:
    // 0x24b01c: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b020: 0xc064754  jal         func_191D50
    ctx->pc = 0x24B020u;
    SET_GPR_U32(ctx, 31, 0x24B028u);
    ctx->pc = 0x191D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D50u, 0x24B020u, 0x24B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B028u;
label_24b028:
    // 0x24b028: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24b02c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x24b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x24b030: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24b030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24b034: 0xc064064  jal         func_190190
    ctx->pc = 0x24B034u;
    SET_GPR_U32(ctx, 31, 0x24B03Cu);
    ctx->pc = 0x190190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190190u, 0x24B034u, 0x24B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B03Cu;
label_24b03c:
    // 0x24b03c: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b040: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x24b040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x24b044: 0xc064744  jal         func_191D10
    ctx->pc = 0x24B044u;
    SET_GPR_U32(ctx, 31, 0x24B04Cu);
    ctx->pc = 0x191D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D10u, 0x24B044u, 0x24B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B04Cu;
label_24b04c:
    // 0x24b04c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24B04Cu;
    {
        const bool branch_taken_0x24b04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b04c) {
            ctx->pc = 0x24B078u;
            goto label_24b078;
        }
    }
    ctx->pc = 0x24B054u;
label_24b054:
    // 0x24b054: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b058: 0xc054648  jal         func_151920
    ctx->pc = 0x24B058u;
    SET_GPR_U32(ctx, 31, 0x24B060u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x24B058u, 0x24B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B060u;
label_24b060:
    // 0x24b060: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b064: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24B064u;
    {
        const bool branch_taken_0x24b064 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x24b064) {
            ctx->pc = 0x24B0A4u;
            goto label_24b0a4;
        }
    }
    ctx->pc = 0x24B06Cu;
    // 0x24b06c: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b070: 0xc064054  jal         func_190150
    ctx->pc = 0x24B070u;
    SET_GPR_U32(ctx, 31, 0x24B078u);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x24B070u, 0x24B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B078u;
label_24b078:
    // 0x24b078: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24b07c: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x24b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x24b080: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24b080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24b084: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x24B084u;
    SET_GPR_U32(ctx, 31, 0x24B08Cu);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x24B084u, 0x24B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B08Cu;
label_24b08c:
    // 0x24b08c: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b090: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x24b090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x24b094: 0xc041998  jal         func_106660
    ctx->pc = 0x24B094u;
    SET_GPR_U32(ctx, 31, 0x24B09Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x24B094u, 0x24B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B09Cu;
label_24b09c:
    // 0x24b09c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x24B09Cu;
    {
        const bool branch_taken_0x24b09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b09c) {
            ctx->pc = 0x24B054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b054;
        }
    }
    ctx->pc = 0x24B0A4u;
label_24b0a4:
    // 0x24b0a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24b0a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x24b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24b0ac: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24b0b0: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x24B0B0u;
    SET_GPR_U32(ctx, 31, 0x24B0B8u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x24B0B0u, 0x24B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0B8u;
label_24b0b8:
    // 0x24b0b8: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b0bc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24b0c0: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x24B0C0u;
    SET_GPR_U32(ctx, 31, 0x24B0C8u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x24B0C0u, 0x24B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0C8u;
label_24b0c8:
    // 0x24b0c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B0C8u;
    {
        const bool branch_taken_0x24b0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b0c8) {
            ctx->pc = 0x24B0DCu;
            goto label_24b0dc;
        }
    }
    ctx->pc = 0x24B0D0u;
    // 0x24b0d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24b0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b0d4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x24B0D4u;
    {
        const bool branch_taken_0x24b0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b0d4) {
            ctx->pc = 0x24B318u;
            goto label_24b318;
        }
    }
    ctx->pc = 0x24B0DCu;
label_24b0dc:
    // 0x24b0dc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24b0e0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x24b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x24b0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b0e8: 0xc091010  jal         func_244040
    ctx->pc = 0x24B0E8u;
    SET_GPR_U32(ctx, 31, 0x24B0F0u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24B0E8u, 0x24B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0F0u;
label_24b0f0:
    // 0x24b0f0: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x24B0F0u;
    {
        const bool branch_taken_0x24b0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b0f0) {
            ctx->pc = 0x24B260u;
            goto label_24b260;
        }
    }
    ctx->pc = 0x24B0F8u;
    // 0x24b0f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b0fc: 0x10430058  beq         $v0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x24B0FCu;
    {
        const bool branch_taken_0x24b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b0fc) {
            ctx->pc = 0x24B260u;
            goto label_24b260;
        }
    }
    ctx->pc = 0x24B104u;
    // 0x24b104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24b104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b108: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B108u;
    {
        const bool branch_taken_0x24b108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b108) {
            ctx->pc = 0x24B124u;
            goto label_24b124;
        }
    }
    ctx->pc = 0x24B110u;
    // 0x24b110: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24b110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24b114: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B114u;
    {
        const bool branch_taken_0x24b114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b114) {
            ctx->pc = 0x24B124u;
            goto label_24b124;
        }
    }
    ctx->pc = 0x24B11Cu;
    // 0x24b11c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x24B11Cu;
    {
        const bool branch_taken_0x24b11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b11c) {
            ctx->pc = 0x24B314u;
            goto label_24b314;
        }
    }
    ctx->pc = 0x24B124u;
label_24b124:
    // 0x24b124: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24b128: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24b128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24b12c: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24B12Cu;
    SET_GPR_U32(ctx, 31, 0x24B134u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24B12Cu, 0x24B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B134u;
label_24b134:
    // 0x24b134: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x24b134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24b138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b13c: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x24B13Cu;
    SET_GPR_U32(ctx, 31, 0x24B144u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x24B13Cu, 0x24B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B144u;
label_24b144:
    // 0x24b144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b148: 0xc042214  jal         func_108850
    ctx->pc = 0x24B148u;
    SET_GPR_U32(ctx, 31, 0x24B150u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x24B148u, 0x24B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B150u;
label_24b150:
    // 0x24b150: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x24b150u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b158: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x24B158u;
    SET_GPR_U32(ctx, 31, 0x24B160u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x24B158u, 0x24B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B160u;
label_24b160:
    // 0x24b160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b164: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x24B164u;
    SET_GPR_U32(ctx, 31, 0x24B16Cu);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x24B164u, 0x24B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B16Cu;
label_24b16c:
    // 0x24b16c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x24b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x24b170: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x24b170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24b174: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24b174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24b178: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b17c: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x24b17cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b180: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24b184: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x24b184u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b188: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24B188u;
    {
        const bool branch_taken_0x24b188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b188) {
            ctx->pc = 0x24B24Cu;
            goto label_24b24c;
        }
    }
    ctx->pc = 0x24B190u;
label_24b190:
    // 0x24b190: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b194: 0xc064054  jal         func_190150
    ctx->pc = 0x24B194u;
    SET_GPR_U32(ctx, 31, 0x24B19Cu);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x24B194u, 0x24B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B19Cu;
label_24b19c:
    // 0x24b19c: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b1a0: 0xc054648  jal         func_151920
    ctx->pc = 0x24B1A0u;
    SET_GPR_U32(ctx, 31, 0x24B1A8u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x24B1A0u, 0x24B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1A8u;
label_24b1a8:
    // 0x24b1a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b1ac: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24B1ACu;
    {
        const bool branch_taken_0x24b1ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x24b1ac) {
            ctx->pc = 0x24B1E0u;
            goto label_24b1e0;
        }
    }
    ctx->pc = 0x24B1B4u;
    // 0x24b1b4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24b1b8: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x24b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x24b1bc: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24b1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24b1c0: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x24B1C0u;
    SET_GPR_U32(ctx, 31, 0x24B1C8u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x24B1C0u, 0x24B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1C8u;
label_24b1c8:
    // 0x24b1c8: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b1cc: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x24b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x24b1d0: 0xc041998  jal         func_106660
    ctx->pc = 0x24B1D0u;
    SET_GPR_U32(ctx, 31, 0x24B1D8u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x24B1D0u, 0x24B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1D8u;
label_24b1d8:
    // 0x24b1d8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x24B1D8u;
    {
        const bool branch_taken_0x24b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b1d8) {
            ctx->pc = 0x24B190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b190;
        }
    }
    ctx->pc = 0x24B1E0u;
label_24b1e0:
    // 0x24b1e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24b1e4: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x24b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x24b1e8: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24b1ec: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x24B1ECu;
    SET_GPR_U32(ctx, 31, 0x24B1F4u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x24B1ECu, 0x24B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1F4u;
label_24b1f4:
    // 0x24b1f4: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b1f8: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x24b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x24b1fc: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x24B1FCu;
    SET_GPR_U32(ctx, 31, 0x24B204u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x24B1FCu, 0x24B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B204u;
label_24b204:
    // 0x24b204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B204u;
    {
        const bool branch_taken_0x24b204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b204) {
            ctx->pc = 0x24B218u;
            goto label_24b218;
        }
    }
    ctx->pc = 0x24B20Cu;
    // 0x24b20c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24b20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b210: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x24B210u;
    {
        const bool branch_taken_0x24b210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b210) {
            ctx->pc = 0x24B318u;
            goto label_24b318;
        }
    }
    ctx->pc = 0x24B218u;
label_24b218:
    // 0x24b218: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b21c: 0xc054648  jal         func_151920
    ctx->pc = 0x24B21Cu;
    SET_GPR_U32(ctx, 31, 0x24B224u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x24B21Cu, 0x24B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B224u;
label_24b224:
    // 0x24b224: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x24b224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24b228: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B228u;
    {
        const bool branch_taken_0x24b228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b228) {
            ctx->pc = 0x24B23Cu;
            goto label_24b23c;
        }
    }
    ctx->pc = 0x24B230u;
    // 0x24b230: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24b230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b234: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x24B234u;
    {
        const bool branch_taken_0x24b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b234) {
            ctx->pc = 0x24B318u;
            goto label_24b318;
        }
    }
    ctx->pc = 0x24B23Cu;
label_24b23c:
    // 0x24b23c: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b240: 0xc064054  jal         func_190150
    ctx->pc = 0x24B240u;
    SET_GPR_U32(ctx, 31, 0x24B248u);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x24B240u, 0x24B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B248u;
label_24b248:
    // 0x24b248: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x24b248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_24b24c:
    // 0x24b24c: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x24b24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x24b250: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x24B250u;
    {
        const bool branch_taken_0x24b250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b250) {
            ctx->pc = 0x24B19Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b19c;
        }
    }
    ctx->pc = 0x24B258u;
    // 0x24b258: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x24B258u;
    {
        const bool branch_taken_0x24b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b258) {
            ctx->pc = 0x24B314u;
            goto label_24b314;
        }
    }
    ctx->pc = 0x24B260u;
label_24b260:
    // 0x24b260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b264: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x24B264u;
    SET_GPR_U32(ctx, 31, 0x24B26Cu);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x24B264u, 0x24B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B26Cu;
label_24b26c:
    // 0x24b26c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b270: 0xc042214  jal         func_108850
    ctx->pc = 0x24B270u;
    SET_GPR_U32(ctx, 31, 0x24B278u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x24B270u, 0x24B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B278u;
label_24b278:
    // 0x24b278: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x24b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24b27c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b280: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x24b280u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24b284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b288: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x24B288u;
    SET_GPR_U32(ctx, 31, 0x24B290u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x24B288u, 0x24B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B290u;
label_24b290:
    // 0x24b290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b294: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x24B294u;
    SET_GPR_U32(ctx, 31, 0x24B29Cu);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x24B294u, 0x24B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B29Cu;
label_24b29c:
    // 0x24b29c: 0x3c2a821  addu        $s5, $fp, $v0
    ctx->pc = 0x24b29cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x24b2a0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24b2a4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x24b2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b2a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24B2A8u;
    {
        const bool branch_taken_0x24b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2a8) {
            ctx->pc = 0x24B308u;
            goto label_24b308;
        }
    }
    ctx->pc = 0x24B2B0u;
label_24b2b0:
    // 0x24b2b0: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b2b4: 0xc054648  jal         func_151920
    ctx->pc = 0x24B2B4u;
    SET_GPR_U32(ctx, 31, 0x24B2BCu);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x24B2B4u, 0x24B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2BCu;
label_24b2bc:
    // 0x24b2bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b2c0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B2C0u;
    {
        const bool branch_taken_0x24b2c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x24b2c0) {
            ctx->pc = 0x24B2D4u;
            goto label_24b2d4;
        }
    }
    ctx->pc = 0x24B2C8u;
    // 0x24b2c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24b2c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b2cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24B2CCu;
    {
        const bool branch_taken_0x24b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2cc) {
            ctx->pc = 0x24B318u;
            goto label_24b318;
        }
    }
    ctx->pc = 0x24B2D4u;
label_24b2d4:
    // 0x24b2d4: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b2d8: 0xc054648  jal         func_151920
    ctx->pc = 0x24B2D8u;
    SET_GPR_U32(ctx, 31, 0x24B2E0u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x24B2D8u, 0x24B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2E0u;
label_24b2e0:
    // 0x24b2e0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x24b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24b2e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B2E4u;
    {
        const bool branch_taken_0x24b2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2e4) {
            ctx->pc = 0x24B2F8u;
            goto label_24b2f8;
        }
    }
    ctx->pc = 0x24B2ECu;
    // 0x24b2ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24b2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b2f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24B2F0u;
    {
        const bool branch_taken_0x24b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2f0) {
            ctx->pc = 0x24B318u;
            goto label_24b318;
        }
    }
    ctx->pc = 0x24B2F8u;
label_24b2f8:
    // 0x24b2f8: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x24b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x24b2fc: 0xc064054  jal         func_190150
    ctx->pc = 0x24B2FCu;
    SET_GPR_U32(ctx, 31, 0x24B304u);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x24B2FCu, 0x24B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B304u;
label_24b304:
    // 0x24b304: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24b304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24b308:
    // 0x24b308: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x24b308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x24b30c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x24B30Cu;
    {
        const bool branch_taken_0x24b30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b30c) {
            ctx->pc = 0x24B2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b2b0;
        }
    }
    ctx->pc = 0x24B314u;
label_24b314:
    // 0x24b314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b318:
    // 0x24b318: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24b318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24b31c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24b31cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24b320: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24b320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24b324: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24b324u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24b328: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24b328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b32c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24b32cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24b330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24b334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24b338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b33c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24b33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b340: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x24b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24b344: 0x3e00008  jr          $ra
    ctx->pc = 0x24B344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B34Cu;
    // 0x24b34c: 0x0  nop
    ctx->pc = 0x24b34cu;
    // NOP
    ctx->pc = 0x24b350u;
}
