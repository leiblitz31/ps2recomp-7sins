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

// Function: sub_001A7970
// Address: 0x1a7970 - 0x1a7b30
void sub_001A7970_0x1a7970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7970_0x1a7970");
#endif

    switch (ctx->pc) {
        case 0x1a79b4u: goto label_1a79b4;
        case 0x1a79c0u: goto label_1a79c0;
        case 0x1a79e0u: goto label_1a79e0;
        case 0x1a7a0cu: goto label_1a7a0c;
        case 0x1a7a28u: goto label_1a7a28;
        case 0x1a7aa4u: goto label_1a7aa4;
        case 0x1a7ab0u: goto label_1a7ab0;
        case 0x1a7ac4u: goto label_1a7ac4;
        case 0x1a7adcu: goto label_1a7adc;
        case 0x1a7af0u: goto label_1a7af0;
        case 0x1a7b04u: goto label_1a7b04;
        default: break;
    }

    ctx->pc = 0x1a7970u;

    // 0x1a7970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a7974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a7974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a7978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a7978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a797c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a7980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7988: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1a7988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1a798c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7990: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a7990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a7994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7998: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A7998u;
    {
        const bool branch_taken_0x1a7998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7998) {
            ctx->pc = 0x1A7A28u;
            goto label_1a7a28;
        }
    }
    ctx->pc = 0x1A79A0u;
    // 0x1a79a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a79a4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1a79a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a79a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1a79a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a79ac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A79ACu;
    SET_GPR_U32(ctx, 31, 0x1A79B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A79ACu, 0x1A79B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79B4u;
label_1a79b4:
    // 0x1a79b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a79b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79b8: 0xc096fc4  jal         func_25BF10
    ctx->pc = 0x1A79B8u;
    SET_GPR_U32(ctx, 31, 0x1A79C0u);
    ctx->pc = 0x25BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF10u, 0x1A79B8u, 0x1A79C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79C0u;
label_1a79c0:
    // 0x1a79c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a79c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79c4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A79C4u;
    {
        const bool branch_taken_0x1a79c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a79c4) {
            ctx->pc = 0x1A7A28u;
            goto label_1a7a28;
        }
    }
    ctx->pc = 0x1A79CCu;
    // 0x1a79cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a79d0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1a79d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a79d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a79d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a79d8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A79D8u;
    SET_GPR_U32(ctx, 31, 0x1A79E0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A79D8u, 0x1A79E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79E0u;
label_1a79e0:
    // 0x1a79e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a79e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79e4: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x1a79e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a79e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a79ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a79ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a79f0: 0x0  nop
    ctx->pc = 0x1a79f0u;
    // NOP
    // 0x1a79f4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1a79f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a79f8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1A79F8u;
    {
        const bool branch_taken_0x1a79f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a79f8) {
            ctx->pc = 0x1A7A28u;
            goto label_1a7a28;
        }
    }
    ctx->pc = 0x1A7A00u;
    // 0x1a7a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a04: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x1A7A04u;
    SET_GPR_U32(ctx, 31, 0x1A7A0Cu);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x1A7A04u, 0x1A7A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A0Cu;
label_1a7a0c:
    // 0x1a7a0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a10: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a7a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1a7a14: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0
    ctx->pc = 0x1a7a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    // 0x1a7a18: 0xc62c0080  lwc1        $f12, 0x80($s1)
    ctx->pc = 0x1a7a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a7a1c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1a7a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a20: 0xc121c64  jal         func_487190
    ctx->pc = 0x1A7A20u;
    SET_GPR_U32(ctx, 31, 0x1A7A28u);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x1A7A20u, 0x1A7A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A28u;
label_1a7a28:
    // 0x1a7a28: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1a7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a7a2c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1a7a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7a30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a34: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1a7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7a38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a7a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a7a3c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1a7a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1a7a40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a44: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1a7a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7a48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a7a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7a4c: 0x0  nop
    ctx->pc = 0x1a7a4cu;
    // NOP
    // 0x1a7a50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a7a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7a54: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7A54u;
    {
        const bool branch_taken_0x1a7a54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7a54) {
            ctx->pc = 0x1A7A74u;
            goto label_1a7a74;
        }
    }
    ctx->pc = 0x1A7A5Cu;
    // 0x1a7a5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a7a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7a60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a64: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1a7a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1a7a68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7a6c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a70: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1a7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1a7a74:
    // 0x1a7a74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a78: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1a7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a7a7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7a80: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7A80u;
    {
        const bool branch_taken_0x1a7a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7a80) {
            ctx->pc = 0x1A7AA4u;
            goto label_1a7aa4;
        }
    }
    ctx->pc = 0x1A7A88u;
    // 0x1a7a88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a90: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a94: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x1a7a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a7a98: 0x2446002c  addiu       $a2, $v0, 0x2C
    ctx->pc = 0x1a7a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1a7a9c: 0xc069f40  jal         func_1A7D00
    ctx->pc = 0x1A7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1A7AA4u);
    ctx->pc = 0x1A7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7D00u, 0x1A7A9Cu, 0x1A7AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AA4u;
label_1a7aa4:
    // 0x1a7aa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a7aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7aa8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A7AA8u;
    {
        const bool branch_taken_0x1a7aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7aa8) {
            ctx->pc = 0x1A7AF4u;
            goto label_1a7af4;
        }
    }
    ctx->pc = 0x1A7AB0u;
label_1a7ab0:
    // 0x1a7ab0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7ab4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a7ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7ab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7abc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A7ABCu;
    SET_GPR_U32(ctx, 31, 0x1A7AC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A7ABCu, 0x1A7AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AC4u;
label_1a7ac4:
    // 0x1a7ac4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a7ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ac8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7acc: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x1a7accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1a7ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ad4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1A7AD4u;
    SET_GPR_U32(ctx, 31, 0x1A7ADCu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1A7AD4u, 0x1A7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7ADCu;
label_1a7adc:
    // 0x1a7adc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a7adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7ae0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1a7ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a7ae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a7ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ae8: 0xc069f40  jal         func_1A7D00
    ctx->pc = 0x1A7AE8u;
    SET_GPR_U32(ctx, 31, 0x1A7AF0u);
    ctx->pc = 0x1A7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7D00u, 0x1A7AE8u, 0x1A7AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AF0u;
label_1a7af0:
    // 0x1a7af0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a7af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a7af4:
    // 0x1a7af4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7af8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a7af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7afc: 0xc05611c  jal         func_158470
    ctx->pc = 0x1A7AFCu;
    SET_GPR_U32(ctx, 31, 0x1A7B04u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1A7AFCu, 0x1A7B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B04u;
label_1a7b04:
    // 0x1a7b04: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x1a7b04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a7b08: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A7B08u;
    {
        const bool branch_taken_0x1a7b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7b08) {
            ctx->pc = 0x1A7AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7ab0;
        }
    }
    ctx->pc = 0x1A7B10u;
    // 0x1a7b10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a7b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7b14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a7b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7b18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a7b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7b1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7b24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a7b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a7b28: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7B30u;
}
