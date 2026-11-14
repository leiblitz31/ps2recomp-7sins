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

// Function: sub_001E6980
// Address: 0x1e6980 - 0x1e6b70
void sub_001E6980_0x1e6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6980_0x1e6980");
#endif

    switch (ctx->pc) {
        case 0x1e69c0u: goto label_1e69c0;
        case 0x1e69e0u: goto label_1e69e0;
        case 0x1e6aecu: goto label_1e6aec;
        case 0x1e6b0cu: goto label_1e6b0c;
        default: break;
    }

    ctx->pc = 0x1e6980u;

    // 0x1e6980: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e6984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e6988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e698c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e698cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e6990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6998: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1e6998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1e699c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1e699cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1e69a0: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x1e69a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x1e69a4: 0xe7ac0090  swc1        $f12, 0x90($sp)
    ctx->pc = 0x1e69a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e69a8: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x1e69a8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e69ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e69acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e69b4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e69b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e69b8: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E69B8u;
    SET_GPR_U32(ctx, 31, 0x1E69C0u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E69B8u, 0x1E69C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69C0u;
label_1e69c0:
    // 0x1e69c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e69c4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1e69c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e69c8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e69cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e69ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e69d0: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1e69d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e69d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e69d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69d8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1E69D8u;
    {
        const bool branch_taken_0x1e69d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e69d8) {
            ctx->pc = 0x1E6AC8u;
            goto label_1e6ac8;
        }
    }
    ctx->pc = 0x1E69E0u;
label_1e69e0:
    // 0x1e69e0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e69e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e69e4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e69e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e69ec: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e69ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e69f0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1e69f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e69f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e69f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e69f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e69f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e69fc: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e69fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6a00: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6a04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6a08: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1e6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6a0c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e6a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e6a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6a14: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1e6a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e6a18: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1e6a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6a1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6a20: 0x0  nop
    ctx->pc = 0x1e6a20u;
    // NOP
    // 0x1e6a24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e6a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6a28: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6A28u;
    {
        const bool branch_taken_0x1e6a28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6a28) {
            ctx->pc = 0x1E6A48u;
            goto label_1e6a48;
        }
    }
    ctx->pc = 0x1E6A30u;
    // 0x1e6a30: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6a34: 0xc46100fc  lwc1        $f1, 0xFC($v1)
    ctx->pc = 0x1e6a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6a38: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e6a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6a40: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6A40u;
    {
        const bool branch_taken_0x1e6a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6a40) {
            ctx->pc = 0x1E6A58u;
            goto label_1e6a58;
        }
    }
    ctx->pc = 0x1E6A48u;
label_1e6a48:
    // 0x1e6a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6a4c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1e6a4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e6a50: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1E6A50u;
    {
        const bool branch_taken_0x1e6a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a50) {
            ctx->pc = 0x1E6AD4u;
            goto label_1e6ad4;
        }
    }
    ctx->pc = 0x1E6A58u;
label_1e6a58:
    // 0x1e6a58: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1e6a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6a5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6a60: 0x0  nop
    ctx->pc = 0x1e6a60u;
    // NOP
    // 0x1e6a64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e6a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6a68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6A68u;
    {
        const bool branch_taken_0x1e6a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6a68) {
            ctx->pc = 0x1E6A88u;
            goto label_1e6a88;
        }
    }
    ctx->pc = 0x1E6A70u;
    // 0x1e6a70: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6a74: 0xc46100fc  lwc1        $f1, 0xFC($v1)
    ctx->pc = 0x1e6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6a78: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1e6a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e6a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6a80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6A80u;
    {
        const bool branch_taken_0x1e6a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6a80) {
            ctx->pc = 0x1E6A98u;
            goto label_1e6a98;
        }
    }
    ctx->pc = 0x1E6A88u;
label_1e6a88:
    // 0x1e6a88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6a8c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1e6a8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e6a90: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6A90u;
    {
        const bool branch_taken_0x1e6a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a90) {
            ctx->pc = 0x1E6AD4u;
            goto label_1e6ad4;
        }
    }
    ctx->pc = 0x1E6A98u;
label_1e6a98:
    // 0x1e6a98: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e6a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a9c: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6aa0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6aa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6aa8: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1e6aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e6aac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1e6aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6ab0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6ab4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6ab8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6abc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1e6abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1e6ac0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e6ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e6ac4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e6ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e6ac8:
    // 0x1e6ac8: 0x2e630004  sltiu       $v1, $s3, 0x4
    ctx->pc = 0x1e6ac8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e6acc: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1E6ACCu;
    {
        const bool branch_taken_0x1e6acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6acc) {
            ctx->pc = 0x1E69E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e69e0;
        }
    }
    ctx->pc = 0x1E6AD4u;
label_1e6ad4:
    // 0x1e6ad4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E6AD4u;
    {
        const bool branch_taken_0x1e6ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6ad4) {
            ctx->pc = 0x1E6B48u;
            goto label_1e6b48;
        }
    }
    ctx->pc = 0x1E6ADCu;
    // 0x1e6adc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6ae0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e6ae4: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E6AE4u;
    SET_GPR_U32(ctx, 31, 0x1E6AECu);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E6AE4u, 0x1E6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AECu;
label_1e6aec:
    // 0x1e6aec: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e6af0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1e6af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e6af4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e6af8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6afc: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1e6afcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6b00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e6b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E6B04u;
    {
        const bool branch_taken_0x1e6b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b04) {
            ctx->pc = 0x1E6B3Cu;
            goto label_1e6b3c;
        }
    }
    ctx->pc = 0x1E6B0Cu;
label_1e6b0c:
    // 0x1e6b0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6b10: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6b14: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6b1c: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1e6b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e6b20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6b24: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6b28: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6b2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6b30: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1e6b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1e6b34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e6b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e6b38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e6b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e6b3c:
    // 0x1e6b3c: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x1e6b3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e6b40: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E6B40u;
    {
        const bool branch_taken_0x1e6b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b40) {
            ctx->pc = 0x1E6B0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6b0c;
        }
    }
    ctx->pc = 0x1E6B48u;
label_1e6b48:
    // 0x1e6b48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e6b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6b4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6b50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1e6b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e6b60: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6B68u;
    // 0x1e6b68: 0x0  nop
    ctx->pc = 0x1e6b68u;
    // NOP
    // 0x1e6b6c: 0x0  nop
    ctx->pc = 0x1e6b6cu;
    // NOP
    ctx->pc = 0x1e6b70u;
}
