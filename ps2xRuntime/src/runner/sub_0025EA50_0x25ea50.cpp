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

// Function: sub_0025EA50
// Address: 0x25ea50 - 0x25ed20
void sub_0025EA50_0x25ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EA50_0x25ea50");
#endif

    switch (ctx->pc) {
        case 0x25ea98u: goto label_25ea98;
        case 0x25eaa8u: goto label_25eaa8;
        case 0x25eab4u: goto label_25eab4;
        case 0x25eac4u: goto label_25eac4;
        case 0x25eadcu: goto label_25eadc;
        case 0x25eaecu: goto label_25eaec;
        case 0x25eb00u: goto label_25eb00;
        case 0x25eb6cu: goto label_25eb6c;
        case 0x25ec08u: goto label_25ec08;
        case 0x25ec3cu: goto label_25ec3c;
        case 0x25ec4cu: goto label_25ec4c;
        case 0x25ec58u: goto label_25ec58;
        case 0x25ed08u: goto label_25ed08;
        default: break;
    }

    ctx->pc = 0x25ea50u;

    // 0x25ea50: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x25ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x25ea54: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x25ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25ea58: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25ea5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25ea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25ea60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25ea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25ea64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25ea64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25ea68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25ea6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25ea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25ea70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ea74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ea78: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x25ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x25ea7c: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x25ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x25ea80: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x25ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x25ea84: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x25ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25ea88: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x25ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25ea8c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25ea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25ea90: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25EA90u;
    SET_GPR_U32(ctx, 31, 0x25EA98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25EA90u, 0x25EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA98u;
label_25ea98:
    // 0x25ea98: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25ea98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eaa0: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x25EAA0u;
    SET_GPR_U32(ctx, 31, 0x25EAA8u);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x25EAA0u, 0x25EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAA8u;
label_25eaa8:
    // 0x25eaa8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25eaa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eaac: 0xc090864  jal         func_242190
    ctx->pc = 0x25EAACu;
    SET_GPR_U32(ctx, 31, 0x25EAB4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x25EAACu, 0x25EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAB4u;
label_25eab4:
    // 0x25eab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25eab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eab8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25eab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eabc: 0xc090844  jal         func_242110
    ctx->pc = 0x25EABCu;
    SET_GPR_U32(ctx, 31, 0x25EAC4u);
    ctx->pc = 0x242110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242110u, 0x25EABCu, 0x25EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAC4u;
label_25eac4:
    // 0x25eac4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25eac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eac8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x25eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25eacc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x25eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25ead0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x25ead0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25ead4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25EAD4u;
    SET_GPR_U32(ctx, 31, 0x25EADCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25EAD4u, 0x25EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EADCu;
label_25eadc:
    // 0x25eadc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25eadcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25eae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eae4: 0xc091010  jal         func_244040
    ctx->pc = 0x25EAE4u;
    SET_GPR_U32(ctx, 31, 0x25EAECu);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x25EAE4u, 0x25EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAECu;
label_25eaec:
    // 0x25eaec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25eaecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eaf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25eaf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25eaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eaf8: 0xc090f80  jal         func_243E00
    ctx->pc = 0x25EAF8u;
    SET_GPR_U32(ctx, 31, 0x25EB00u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x25EAF8u, 0x25EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB00u;
label_25eb00:
    // 0x25eb00: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x25eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25eb04: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x25eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25eb08: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25eb0c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25eb10: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eb14: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25eb14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25eb18: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25eb18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25eb1c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25eb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25eb20: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25eb24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x25eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x25eb28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25eb2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25eb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eb30: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x25eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25eb34: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25eb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25eb38: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x25eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25eb3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x25eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x25eb40: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25eb44: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eb48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x25eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25eb4c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25eb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25eb50: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x25eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25eb54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25eb58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25eb5c: 0x8c570048  lw          $s7, 0x48($v0)
    ctx->pc = 0x25eb5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x25eb60: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x25eb60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb64: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x25EB64u;
    SET_GPR_U32(ctx, 31, 0x25EB6Cu);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x25EB64u, 0x25EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB6Cu;
label_25eb6c:
    // 0x25eb6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25eb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25eb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25eb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25eb78: 0x0  nop
    ctx->pc = 0x25eb78u;
    // NOP
    // 0x25eb7c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x25eb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x25eb80: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x25eb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x25eb84: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25eb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x25eb88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25eb88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25eb8c: 0x0  nop
    ctx->pc = 0x25eb8cu;
    // NOP
    // 0x25eb90: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x25eb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x25eb94: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x25eb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x25eb98: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x25eb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x25eb9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25eb9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25eba0: 0x0  nop
    ctx->pc = 0x25eba0u;
    // NOP
    // 0x25eba4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x25eba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x25eba8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x25eba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x25ebac: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x25ebacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x25ebb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25ebb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ebb4: 0x0  nop
    ctx->pc = 0x25ebb4u;
    // NOP
    // 0x25ebb8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25ebb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x25ebbc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25ebbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25ebc0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25ebc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25ebc4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x25ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25ebc8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x25ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x25ebcc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x25ebccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x25ebd0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25ebd4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x25ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x25ebd8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x25ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x25ebdc: 0x2484c410  addiu       $a0, $a0, -0x3BF0
    ctx->pc = 0x25ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951952));
    // 0x25ebe0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x25ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25ebe4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x25ebe4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EC410u));
    // 0x25ebe8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x25ebe8u;
    { uint32_t bits = FAST_READ32(0x4EC418u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ebec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x25ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x25ebf0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25ebf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x25ebf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebf8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x25ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25ebfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x25ebfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ec00: 0xc103d16  jal         func_40F458
    ctx->pc = 0x25EC00u;
    SET_GPR_U32(ctx, 31, 0x25EC08u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x25EC00u, 0x25EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC08u;
label_25ec08:
    // 0x25ec08: 0x131023  negu        $v0, $s3
    ctx->pc = 0x25ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x25ec0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ec0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ec10: 0x0  nop
    ctx->pc = 0x25ec10u;
    // NOP
    // 0x25ec14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25ec14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ec18: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x25ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x25ec1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ec1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ec20: 0x0  nop
    ctx->pc = 0x25ec20u;
    // NOP
    // 0x25ec24: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x25ec24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25ec28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec2c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x25ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25ec30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x25ec30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ec34: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x25EC34u;
    SET_GPR_U32(ctx, 31, 0x25EC3Cu);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x25EC34u, 0x25EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC3Cu;
label_25ec3c:
    // 0x25ec3c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x25ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25ec40: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x25ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25ec44: 0xc041d58  jal         func_107560
    ctx->pc = 0x25EC44u;
    SET_GPR_U32(ctx, 31, 0x25EC4Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x25EC44u, 0x25EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC4Cu;
label_25ec4c:
    // 0x25ec4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec50: 0xc103da2  jal         func_40F688
    ctx->pc = 0x25EC50u;
    SET_GPR_U32(ctx, 31, 0x25EC58u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x25EC50u, 0x25EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC58u;
label_25ec58:
    // 0x25ec58: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x25ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25ec5c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25ec5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec60: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x25ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25ec64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25ec68: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x25ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25ec6c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25ec6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25ec70: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x25ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec74: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x25ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25ec78: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25ec78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25ec7c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x25ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25ec80: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x25ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec84: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x25ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25ec88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25ec8c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25ec8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x25ec90: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x25ec90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25ec94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25ec94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ec98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25ec98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ec9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25ec9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25eca0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25eca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25eca4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25eca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25eca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25eca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ecac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ecacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ecb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ecb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ecb4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x25ecb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x25ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x25ECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ECB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ECC0u;
    // 0x25ecc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25ecc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ecc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25eccc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25ecd0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x25ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x25ecd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ecd8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x25ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25ecdc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ECDCu;
    {
        const bool branch_taken_0x25ecdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ecdc) {
            ctx->pc = 0x25ECECu;
            goto label_25ecec;
        }
    }
    ctx->pc = 0x25ECE4u;
    // 0x25ece4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25ECE4u;
    {
        const bool branch_taken_0x25ece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ece4) {
            ctx->pc = 0x25ED08u;
            goto label_25ed08;
        }
    }
    ctx->pc = 0x25ECECu;
label_25ecec:
    // 0x25ecec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ecf0: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25ECF0u;
    {
        const bool branch_taken_0x25ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ecf0) {
            ctx->pc = 0x25ED08u;
            goto label_25ed08;
        }
    }
    ctx->pc = 0x25ECF8u;
    // 0x25ecf8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ecfc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25ecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ed00: 0xc097b48  jal         func_25ED20
    ctx->pc = 0x25ED00u;
    SET_GPR_U32(ctx, 31, 0x25ED08u);
    ctx->pc = 0x25ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ED20u, 0x25ED00u, 0x25ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED08u;
label_25ed08:
    // 0x25ed08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ed0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ed0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ed10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25ed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25ed14: 0x3e00008  jr          $ra
    ctx->pc = 0x25ED14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ED14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ED1Cu;
    // 0x25ed1c: 0x0  nop
    ctx->pc = 0x25ed1cu;
    // NOP
    ctx->pc = 0x25ed20u;
}
