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

// Function: sub_003B5B90
// Address: 0x3b5b90 - 0x3b61f8
void sub_003B5B90_0x3b5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5B90_0x3b5b90");
#endif

    switch (ctx->pc) {
        case 0x3b5bdcu: goto label_3b5bdc;
        case 0x3b5be4u: goto label_3b5be4;
        case 0x3b5c20u: goto label_3b5c20;
        case 0x3b5cccu: goto label_3b5ccc;
        case 0x3b5cecu: goto label_3b5cec;
        case 0x3b5d88u: goto label_3b5d88;
        case 0x3b5de0u: goto label_3b5de0;
        case 0x3b5f18u: goto label_3b5f18;
        case 0x3b60a4u: goto label_3b60a4;
        case 0x3b60dcu: goto label_3b60dc;
        case 0x3b610cu: goto label_3b610c;
        case 0x3b6118u: goto label_3b6118;
        case 0x3b6140u: goto label_3b6140;
        case 0x3b6168u: goto label_3b6168;
        case 0x3b6190u: goto label_3b6190;
        case 0x3b61bcu: goto label_3b61bc;
        case 0x3b61d0u: goto label_3b61d0;
        default: break;
    }

    ctx->pc = 0x3b5b90u;

    // 0x3b5b90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3b5b94: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3b5b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3b5b98: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3b5b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3b5b9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b5b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ba0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3b5ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3b5ba4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b5ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ba8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3b5ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3b5bac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b5bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5bb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b5bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b5bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b5bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b5bb8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3b5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b5bbc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3b5bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3b5bc0: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x3B5BC0u;
    {
        const bool branch_taken_0x3b5bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BC0u;
        // 0x3b5bc4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5bc0) {
            ctx->pc = 0x3B61D0u;
            goto label_3b61d0;
        }
    }
    ctx->pc = 0x3B5BC8u;
    // 0x3b5bc8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3b5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3b5bcc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B5BCCu;
    {
        const bool branch_taken_0x3b5bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BCCu;
        // 0x3b5bd0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5bcc) {
            ctx->pc = 0x3B5C18u;
            goto label_3b5c18;
        }
    }
    ctx->pc = 0x3B5BD4u;
    // 0x3b5bd4: 0xc0eb816  jal         func_3AE058
    ctx->pc = 0x3B5BD4u;
    SET_GPR_U32(ctx, 31, 0x3B5BDCu);
    ctx->pc = 0x3B5BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5BD4u;
    // 0x3b5bd8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE058u, 0x3B5BD4u, 0x3B5BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5BDCu;
label_3b5bdc:
    // 0x3b5bdc: 0xc0eb9f8  jal         func_3AE7E0
    ctx->pc = 0x3B5BDCu;
    SET_GPR_U32(ctx, 31, 0x3B5BE4u);
    ctx->pc = 0x3AE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7E0u, 0x3B5BDCu, 0x3B5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5BE4u;
label_3b5be4:
    // 0x3b5be4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3b5be4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5be8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3b5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b5bec: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3b5becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b5bf0: 0x7e440050  sq          $a0, 0x50($s2)
    ctx->pc = 0x3b5bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 4));
    // 0x3b5bf4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3b5bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3b5bf8: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x3b5bf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3b5bfc: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x3b5bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
    // 0x3b5c00: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x3b5c00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3b5c04: 0x7e440070  sq          $a0, 0x70($s2)
    ctx->pc = 0x3b5c04u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 4));
    // 0x3b5c08: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x3b5c08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3b5c0c: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x3b5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x3b5c10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5C10u;
    {
        const bool branch_taken_0x3b5c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C10u;
        // 0x3b5c14: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5c10) {
            ctx->pc = 0x3B5C20u;
            goto label_3b5c20;
        }
    }
    ctx->pc = 0x3B5C18u;
label_3b5c18:
    // 0x3b5c18: 0xc0eb9c4  jal         func_3AE710
    ctx->pc = 0x3B5C18u;
    SET_GPR_U32(ctx, 31, 0x3B5C20u);
    ctx->pc = 0x3B5C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C18u;
    // 0x3b5c1c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE710u, 0x3B5C18u, 0x3B5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C20u;
label_3b5c20:
    // 0x3b5c20: 0xc609000c  lwc1        $f9, 0xC($s0)
    ctx->pc = 0x3b5c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3b5c24: 0xc6420090  lwc1        $f2, 0x90($s2)
    ctx->pc = 0x3b5c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b5c28: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x3b5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b5c2c: 0xc6430094  lwc1        $f3, 0x94($s2)
    ctx->pc = 0x3b5c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b5c30: 0xc6080004  lwc1        $f8, 0x4($s0)
    ctx->pc = 0x3b5c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3b5c34: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3b5c34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3b5c38: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x3b5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b5c3c: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x3b5c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3b5c40: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x3b5c40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x3b5c44: 0xc641009c  lwc1        $f1, 0x9C($s2)
    ctx->pc = 0x3b5c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b5c48: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b5c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b5c4c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3b5c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b5c50: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x3b5c50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x3b5c54: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3b5c54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b5c58: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3b5c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3b5c5c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3b5c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3b5c60: 0xc7808054  lwc1        $f0, -0x7FAC($gp)
    ctx->pc = 0x3b5c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b5c64: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3b5c64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3b5c68: 0xc64500a0  lwc1        $f5, 0xA0($s2)
    ctx->pc = 0x3b5c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3b5c6c: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x3b5c6cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x3b5c70: 0xc64300a4  lwc1        $f3, 0xA4($s2)
    ctx->pc = 0x3b5c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b5c74: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x3b5c74u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x3b5c78: 0xc64200a8  lwc1        $f2, 0xA8($s2)
    ctx->pc = 0x3b5c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b5c7c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x3b5c7cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x3b5c80: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x3b5c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b5c84: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x3b5c84u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x3b5c88: 0xc62a000c  lwc1        $f10, 0xC($s1)
    ctx->pc = 0x3b5c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3b5c8c: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x3b5c8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x3b5c90: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x3b5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3b5c94: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x3b5c94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x3b5c98: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x3b5c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b5c9c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x3b5c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x3b5ca0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3b5ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b5ca4: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x3b5ca4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x3b5ca8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3b5ca8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x3b5cac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3b5cacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3b5cb0: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x3b5cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x3b5cb4: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x3b5cb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b5cb8: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3b5cb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3b5cbc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3b5cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3b5cc0: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x3b5cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3b5cc4: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B5CC4u;
    SET_GPR_U32(ctx, 31, 0x3B5CCCu);
    ctx->pc = 0x3B5CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5CC4u;
    // 0x3b5cc8: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B5CC4u, 0x3B5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5CCCu;
label_3b5ccc:
    // 0x3b5ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b5cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5cd0: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x3b5cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x3b5cd4: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x3b5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x3b5cd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3b5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3b5cdc: 0x106000db  beqz        $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x3B5CDCu;
    {
        const bool branch_taken_0x3b5cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CDCu;
        // 0x3b5ce0: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5cdc) {
            ctx->pc = 0x3B604Cu;
            goto label_3b604c;
        }
    }
    ctx->pc = 0x3B5CE4u;
    // 0x3b5ce4: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B5CE4u;
    SET_GPR_U32(ctx, 31, 0x3B5CECu);
    ctx->pc = 0x3B5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5CE4u;
    // 0x3b5ce8: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B5CE4u, 0x3B5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5CECu;
label_3b5cec:
    // 0x3b5cec: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3b5cecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5cf0: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x3b5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x3b5cf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3b5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3b5cf8: 0x1625021  addu        $t2, $t3, $v0
    ctx->pc = 0x3b5cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x3b5cfc: 0x116a00d2  beq         $t3, $t2, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3B5CFCu;
    {
        const bool branch_taken_0x3b5cfc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        ctx->pc = 0x3B5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CFCu;
        // 0x3b5d00: 0x254cfff8  addiu       $t4, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5cfc) {
            ctx->pc = 0x3B6048u;
            goto label_3b6048;
        }
    }
    ctx->pc = 0x3B5D04u;
    // 0x3b5d04: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3b5d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d08: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x3b5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x3b5d0c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x3b5d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3b5d10: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B5D10u;
    {
        const bool branch_taken_0x3b5d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D10u;
        // 0x3b5d14: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5d10) {
            ctx->pc = 0x3B5D80u;
            goto label_3b5d80;
        }
    }
    ctx->pc = 0x3B5D18u;
    // 0x3b5d18: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3b5d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3b5d1c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B5D1Cu;
    {
        const bool branch_taken_0x3b5d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5d1c) {
            ctx->pc = 0x3B5D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5D1Cu;
            // 0x3b5d20: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5D6Cu;
            goto label_3b5d6c;
        }
    }
    ctx->pc = 0x3B5D24u;
    // 0x3b5d24: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x3b5d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3b5d28: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3B5D28u;
    {
        const bool branch_taken_0x3b5d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5d28) {
            ctx->pc = 0x3B5D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5D28u;
            // 0x3b5d2c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5D58u;
            goto label_3b5d58;
        }
    }
    ctx->pc = 0x3B5D30u;
    // 0x3b5d30: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x3b5d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3b5d34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B5D34u;
    {
        const bool branch_taken_0x3b5d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D34u;
        // 0x3b5d38: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5d34) {
            ctx->pc = 0x3B5D80u;
            goto label_3b5d80;
        }
    }
    ctx->pc = 0x3B5D3Cu;
    // 0x3b5d3c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3b5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b5d40: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3b5d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3b5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3b5d48: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x3b5d48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x3b5d4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3b5d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b5d54: 0x0  nop
    ctx->pc = 0x3b5d54u;
    // NOP
label_3b5d58:
    // 0x3b5d58: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b5d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3b5d5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3b5d60: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3b5d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3b5d64: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3b5d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3b5d68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b5d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b5d6c:
    // 0x3b5d6c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b5d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3b5d70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3b5d74: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3b5d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3b5d78: 0x10ea0013  beq         $a3, $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B5D78u;
    {
        const bool branch_taken_0x3b5d78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x3B5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D78u;
        // 0x3b5d7c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5d78) {
            ctx->pc = 0x3B5DC8u;
            goto label_3b5dc8;
        }
    }
    ctx->pc = 0x3B5D80u;
label_3b5d80:
    // 0x3b5d80: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3b5d80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d84: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3b5d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b5d88:
    // 0x3b5d88: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3b5d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3b5d8c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3b5d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3b5d90: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x3b5d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3b5d94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3b5d98: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x3b5d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x3b5d9c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3b5d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x3b5da0: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x3b5da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x3b5da4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3b5da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b5da8: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x3b5da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x3b5dac: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x3b5dacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x3b5db0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3b5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3b5db4: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x3b5db4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x3b5db8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3b5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3b5dbc: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x3b5dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x3b5dc0: 0x14eafff1  bne         $a3, $t2, . + 4 + (-0xF << 2)
    ctx->pc = 0x3B5DC0u;
    {
        const bool branch_taken_0x3b5dc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x3B5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5DC0u;
        // 0x3b5dc4: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5dc0) {
            ctx->pc = 0x3B5D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5d88;
        }
    }
    ctx->pc = 0x3B5DC8u;
label_3b5dc8:
    // 0x3b5dc8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3b5dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5dcc: 0xec102b  sltu        $v0, $a3, $t4
    ctx->pc = 0x3b5dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3b5dd0: 0x5040009e  beql        $v0, $zero, . + 4 + (0x9E << 2)
    ctx->pc = 0x3B5DD0u;
    {
        const bool branch_taken_0x3b5dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5dd0) {
            ctx->pc = 0x3B5DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5DD0u;
            // 0x3b5dd4: 0xae4000bc  sw          $zero, 0xBC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B604Cu;
            goto label_3b604c;
        }
    }
    ctx->pc = 0x3B5DD8u;
    // 0x3b5dd8: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x3b5dd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ddc: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x3b5ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3b5de0:
    // 0x3b5de0: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x3b5de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3b5de4: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x3B5DE4u;
    {
        const bool branch_taken_0x3b5de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5DE4u;
        // 0x3b5de8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5de4) {
            ctx->pc = 0x3B6038u;
            goto label_3b6038;
        }
    }
    ctx->pc = 0x3B5DECu;
    // 0x3b5dec: 0x1481823  subu        $v1, $t2, $t0
    ctx->pc = 0x3b5decu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3b5df0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3b5df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5df4: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x3b5df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3b5df8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3B5DF8u;
    {
        const bool branch_taken_0x3b5df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5DF8u;
        // 0x3b5dfc: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5df8) {
            ctx->pc = 0x3B5EC4u;
            goto label_3b5ec4;
        }
    }
    ctx->pc = 0x3B5E00u;
    // 0x3b5e00: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3B5E00u;
    {
        const bool branch_taken_0x3b5e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5E00u;
        // 0x3b5e04: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5e00) {
            ctx->pc = 0x3B5F14u;
            goto label_3b5f14;
        }
    }
    ctx->pc = 0x3B5E08u;
    // 0x3b5e08: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x3B5E08u;
    {
        const bool branch_taken_0x3b5e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5e08) {
            ctx->pc = 0x3B5E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5E08u;
            // 0x3b5e0c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5EC8u;
            goto label_3b5ec8;
        }
    }
    ctx->pc = 0x3B5E10u;
    // 0x3b5e10: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x3b5e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3b5e14: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B5E14u;
    {
        const bool branch_taken_0x3b5e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5e14) {
            ctx->pc = 0x3B5E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5E14u;
            // 0x3b5e18: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5E7Cu;
            goto label_3b5e7c;
        }
    }
    ctx->pc = 0x3B5E1Cu;
    // 0x3b5e1c: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x3b5e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3b5e20: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3B5E20u;
    {
        const bool branch_taken_0x3b5e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5E20u;
        // 0x3b5e24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5e20) {
            ctx->pc = 0x3B5F18u;
            goto label_3b5f18;
        }
    }
    ctx->pc = 0x3B5E28u;
    // 0x3b5e28: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3b5e2c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3b5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3b5e30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5e34: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3B5E34u;
    {
        const bool branch_taken_0x3b5e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5E34u;
        // 0x3b5e38: 0x24e20010  addiu       $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5e34) {
            ctx->pc = 0x3B5E70u;
            goto label_3b5e70;
        }
    }
    ctx->pc = 0x3B5E3Cu;
    // 0x3b5e3c: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x3b5e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b5e40: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x3b5e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b5e44: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x3b5e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5e48: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x3b5e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5e4c: 0x68eb000f  ldl         $t3, 0xF($a3)
    ctx->pc = 0x3b5e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3b5e50: 0x6ceb0008  ldr         $t3, 0x8($a3)
    ctx->pc = 0x3b5e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3b5e54: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x3b5e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5e58: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x3b5e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5e5c: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x3b5e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3b5e60: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x3b5e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3b5e64: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x3b5e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5e68: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x3b5e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5e6c: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x3b5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_3b5e70:
    // 0x3b5e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b5e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b5e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e78: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b5e7c:
    // 0x3b5e7c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b5e80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5e84: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3B5E84u;
    {
        const bool branch_taken_0x3b5e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5e84) {
            ctx->pc = 0x3B5E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5E84u;
            // 0x3b5e88: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5EC0u;
            goto label_3b5ec0;
        }
    }
    ctx->pc = 0x3B5E8Cu;
    // 0x3b5e8c: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x3b5e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b5e90: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x3b5e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b5e94: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x3b5e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5e98: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x3b5e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5e9c: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x3b5e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5ea0: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x3b5ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5ea4: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b5ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ea8: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b5ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5eac: 0x6bab0027  ldl         $t3, 0x27($sp)
    ctx->pc = 0x3b5eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3b5eb0: 0x6fab0020  ldr         $t3, 0x20($sp)
    ctx->pc = 0x3b5eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3b5eb4: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x3b5eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5eb8: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x3b5eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ebc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3b5ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3b5ec0:
    // 0x3b5ec0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3b5ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3b5ec4:
    // 0x3b5ec4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b5ec8:
    // 0x3b5ec8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b5ecc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5ed0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B5ED0u;
    {
        const bool branch_taken_0x3b5ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5ED0u;
        // 0x3b5ed4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ed0) {
            ctx->pc = 0x3B5F08u;
            goto label_3b5f08;
        }
    }
    ctx->pc = 0x3B5ED8u;
    // 0x3b5ed8: 0x68e50007  ldl         $a1, 0x7($a3)
    ctx->pc = 0x3b5ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3b5edc: 0x6ce50000  ldr         $a1, 0x0($a3)
    ctx->pc = 0x3b5edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3b5ee0: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x3b5ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ee4: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x3b5ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ee8: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x3b5ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b5eec: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x3b5eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b5ef0: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x3b5ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ef4: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x3b5ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ef8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x3b5ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b5efc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x3b5efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b5f00: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x3b5f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f04: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x3b5f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b5f08:
    // 0x3b5f08: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x3b5f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3b5f0c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3B5F0Cu;
    {
        const bool branch_taken_0x3b5f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F0Cu;
        // 0x3b5f10: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5f0c) {
            ctx->pc = 0x3B6038u;
            goto label_3b6038;
        }
    }
    ctx->pc = 0x3B5F14u;
label_3b5f14:
    // 0x3b5f14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b5f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b5f18:
    // 0x3b5f18: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3b5f1c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3b5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3b5f20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5f24: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3B5F24u;
    {
        const bool branch_taken_0x3b5f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5f24) {
            ctx->pc = 0x3B5F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5F24u;
            // 0x3b5f28: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5F64u;
            goto label_3b5f64;
        }
    }
    ctx->pc = 0x3B5F2Cu;
    // 0x3b5f2c: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x3b5f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5f30: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x3b5f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5f34: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x3b5f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f38: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x3b5f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f3c: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x3b5f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5f40: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x3b5f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5f44: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b5f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f48: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b5f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f4c: 0x6bac0027  ldl         $t4, 0x27($sp)
    ctx->pc = 0x3b5f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5f50: 0x6fac0020  ldr         $t4, 0x20($sp)
    ctx->pc = 0x3b5f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5f54: 0xb08c0007  sdl         $t4, 0x7($a0)
    ctx->pc = 0x3b5f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f58: 0xb48c0000  sdr         $t4, 0x0($a0)
    ctx->pc = 0x3b5f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f5c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3b5f60: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3b5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3b5f64:
    // 0x3b5f64: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5f68: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3B5F68u;
    {
        const bool branch_taken_0x3b5f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5f68) {
            ctx->pc = 0x3B5F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5F68u;
            // 0x3b5f6c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5FA4u;
            goto label_3b5fa4;
        }
    }
    ctx->pc = 0x3B5F70u;
    // 0x3b5f70: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x3b5f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5f74: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x3b5f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5f78: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x3b5f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f7c: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x3b5f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f80: 0x688c000f  ldl         $t4, 0xF($a0)
    ctx->pc = 0x3b5f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5f84: 0x6c8c0008  ldr         $t4, 0x8($a0)
    ctx->pc = 0x3b5f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5f88: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b5f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f8c: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b5f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f90: 0x6bac0027  ldl         $t4, 0x27($sp)
    ctx->pc = 0x3b5f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5f94: 0x6fac0020  ldr         $t4, 0x20($sp)
    ctx->pc = 0x3b5f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5f98: 0xb08c000f  sdl         $t4, 0xF($a0)
    ctx->pc = 0x3b5f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5f9c: 0xb48c0008  sdr         $t4, 0x8($a0)
    ctx->pc = 0x3b5f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fa0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b5fa4:
    // 0x3b5fa4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3b5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3b5fa8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5fac: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3B5FACu;
    {
        const bool branch_taken_0x3b5fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5fac) {
            ctx->pc = 0x3B5FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5FACu;
            // 0x3b5fb0: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5FE8u;
            goto label_3b5fe8;
        }
    }
    ctx->pc = 0x3B5FB4u;
    // 0x3b5fb4: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x3b5fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5fb8: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x3b5fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5fbc: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x3b5fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fc0: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x3b5fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fc4: 0x688c0017  ldl         $t4, 0x17($a0)
    ctx->pc = 0x3b5fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5fc8: 0x6c8c0010  ldr         $t4, 0x10($a0)
    ctx->pc = 0x3b5fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5fcc: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b5fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fd0: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b5fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fd4: 0x6bac0027  ldl         $t4, 0x27($sp)
    ctx->pc = 0x3b5fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5fd8: 0x6fac0020  ldr         $t4, 0x20($sp)
    ctx->pc = 0x3b5fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5fdc: 0xb08c0017  sdl         $t4, 0x17($a0)
    ctx->pc = 0x3b5fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fe0: 0xb48c0010  sdr         $t4, 0x10($a0)
    ctx->pc = 0x3b5fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5fe4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b5fe8:
    // 0x3b5fe8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3b5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3b5fec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5ff0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B5FF0u;
    {
        const bool branch_taken_0x3b5ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5FF0u;
        // 0x3b5ff4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ff0) {
            ctx->pc = 0x3B6028u;
            goto label_3b6028;
        }
    }
    ctx->pc = 0x3B5FF8u;
    // 0x3b5ff8: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x3b5ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5ffc: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x3b5ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b6000: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x3b6000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b6004: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x3b6004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b6008: 0x688c001f  ldl         $t4, 0x1F($a0)
    ctx->pc = 0x3b6008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b600c: 0x6c8c0018  ldr         $t4, 0x18($a0)
    ctx->pc = 0x3b600cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b6010: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b6010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b6014: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b6014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b6018: 0x6bac0027  ldl         $t4, 0x27($sp)
    ctx->pc = 0x3b6018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b601c: 0x6fac0020  ldr         $t4, 0x20($sp)
    ctx->pc = 0x3b601cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b6020: 0xb08c001f  sdl         $t4, 0x1F($a0)
    ctx->pc = 0x3b6020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b6024: 0xb48c0018  sdr         $t4, 0x18($a0)
    ctx->pc = 0x3b6024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b6028:
    // 0x3b6028: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b6028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b602c: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x3b602cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3b6030: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x3B6030u;
    {
        const bool branch_taken_0x3b6030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6030u;
        // 0x3b6034: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6030) {
            ctx->pc = 0x3B5F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5f18;
        }
    }
    ctx->pc = 0x3B6038u;
label_3b6038:
    // 0x3b6038: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3b6038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b603c: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x3b603cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b6040: 0x5440ff67  bnel        $v0, $zero, . + 4 + (-0x99 << 2)
    ctx->pc = 0x3B6040u;
    {
        const bool branch_taken_0x3b6040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6040) {
            ctx->pc = 0x3B6044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6040u;
            // 0x3b6044: 0x24e60008  addiu       $a2, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5de0;
        }
    }
    ctx->pc = 0x3B6048u;
label_3b6048:
    // 0x3b6048: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3b6048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3b604c:
    // 0x3b604c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3b604cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6050: 0x1234005d  beq         $s1, $s4, . + 4 + (0x5D << 2)
    ctx->pc = 0x3B6050u;
    {
        const bool branch_taken_0x3b6050 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x3B6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6050u;
        // 0x3b6054: 0x2911023  subu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6050) {
            ctx->pc = 0x3B61C8u;
            goto label_3b61c8;
        }
    }
    ctx->pc = 0x3B6058u;
    // 0x3b6058: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x3b6058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3b605c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3B605Cu;
    {
        const bool branch_taken_0x3b605c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B605Cu;
        // 0x3b6060: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b605c) {
            ctx->pc = 0x3B6118u;
            goto label_3b6118;
        }
    }
    ctx->pc = 0x3B6064u;
    // 0x3b6064: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3B6064u;
    {
        const bool branch_taken_0x3b6064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6064u;
        // 0x3b6068: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6064) {
            ctx->pc = 0x3B60E0u;
            goto label_3b60e0;
        }
    }
    ctx->pc = 0x3B606Cu;
    // 0x3b606c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B606Cu;
    {
        const bool branch_taken_0x3b606c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B606Cu;
        // 0x3b6070: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b606c) {
            ctx->pc = 0x3B60B0u;
            goto label_3b60b0;
        }
    }
    ctx->pc = 0x3B6074u;
    // 0x3b6074: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3B6074u;
    {
        const bool branch_taken_0x3b6074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6074) {
            ctx->pc = 0x3B6118u;
            goto label_3b6118;
        }
    }
    ctx->pc = 0x3B607Cu;
    // 0x3b607c: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B607Cu;
    {
        const bool branch_taken_0x3b607c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b607c) {
            ctx->pc = 0x3B6080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B607Cu;
            // 0x3b6080: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6098u;
            goto label_3b6098;
        }
    }
    ctx->pc = 0x3B6084u;
    // 0x3b6084: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b6088: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b6088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b608c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b608cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b6090: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b6090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b6094: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b6094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b6098:
    // 0x3b6098: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b6098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b609c: 0xc0ed3e0  jal         func_3B4F80
    ctx->pc = 0x3B609Cu;
    SET_GPR_U32(ctx, 31, 0x3B60A4u);
    ctx->pc = 0x3B60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B609Cu;
    // 0x3b60a0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F80u, 0x3B609Cu, 0x3B60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B60A4u;
label_3b60a4:
    // 0x3b60a4: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3b60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3b60a8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3b60a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b60ac: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3b60acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b60b0:
    // 0x3b60b0: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B60B0u;
    {
        const bool branch_taken_0x3b60b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b60b0) {
            ctx->pc = 0x3B60B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B60B0u;
            // 0x3b60b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B60CCu;
            goto label_3b60cc;
        }
    }
    ctx->pc = 0x3B60B8u;
    // 0x3b60b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b60bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b60c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b60c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b60c4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b60c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b60c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b60cc:
    // 0x3b60cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b60ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b60d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3b60d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b60d4: 0xc0ed3e0  jal         func_3B4F80
    ctx->pc = 0x3B60D4u;
    SET_GPR_U32(ctx, 31, 0x3B60DCu);
    ctx->pc = 0x3B60D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B60D4u;
    // 0x3b60d8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F80u, 0x3B60D4u, 0x3B60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B60DCu;
label_3b60dc:
    // 0x3b60dc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x3b60dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3b60e0:
    // 0x3b60e0: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B60E0u;
    {
        const bool branch_taken_0x3b60e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b60e0) {
            ctx->pc = 0x3B60E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B60E0u;
            // 0x3b60e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B60FCu;
            goto label_3b60fc;
        }
    }
    ctx->pc = 0x3B60E8u;
    // 0x3b60e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b60ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b60f0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b60f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b60f4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b60f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b60f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b60fc:
    // 0x3b60fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b60fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6100: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3b6100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b6104: 0xc0ed3e0  jal         func_3B4F80
    ctx->pc = 0x3B6104u;
    SET_GPR_U32(ctx, 31, 0x3B610Cu);
    ctx->pc = 0x3B6108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6104u;
    // 0x3b6108: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F80u, 0x3B6104u, 0x3B610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B610Cu;
label_3b610c:
    // 0x3b610c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x3b610cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3b6110: 0x1234002d  beq         $s1, $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x3B6110u;
    {
        const bool branch_taken_0x3b6110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x3b6110) {
            ctx->pc = 0x3B61C8u;
            goto label_3b61c8;
        }
    }
    ctx->pc = 0x3B6118u;
label_3b6118:
    // 0x3b6118: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B6118u;
    {
        const bool branch_taken_0x3b6118 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6118) {
            ctx->pc = 0x3B611Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6118u;
            // 0x3b611c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6134u;
            goto label_3b6134;
        }
    }
    ctx->pc = 0x3B6120u;
    // 0x3b6120: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b6120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b6124: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b6124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b6128: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b6128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b612c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b612cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b6130: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b6130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b6134:
    // 0x3b6134: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b6134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6138: 0xc0ed3e0  jal         func_3B4F80
    ctx->pc = 0x3B6138u;
    SET_GPR_U32(ctx, 31, 0x3B6140u);
    ctx->pc = 0x3B613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6138u;
    // 0x3b613c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F80u, 0x3B6138u, 0x3B6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6140u;
label_3b6140:
    // 0x3b6140: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B6140u;
    {
        const bool branch_taken_0x3b6140 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6140) {
            ctx->pc = 0x3B6144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6140u;
            // 0x3b6144: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B615Cu;
            goto label_3b615c;
        }
    }
    ctx->pc = 0x3B6148u;
    // 0x3b6148: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b6148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b614c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b6150: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b6150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b6154: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b6154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b6158: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3b6158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b615c:
    // 0x3b615c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b615cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6160: 0xc0ed3e0  jal         func_3B4F80
    ctx->pc = 0x3B6160u;
    SET_GPR_U32(ctx, 31, 0x3B6168u);
    ctx->pc = 0x3B6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6160u;
    // 0x3b6164: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F80u, 0x3B6160u, 0x3B6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6168u;
label_3b6168:
    // 0x3b6168: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B6168u;
    {
        const bool branch_taken_0x3b6168 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6168) {
            ctx->pc = 0x3B616Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6168u;
            // 0x3b616c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6184u;
            goto label_3b6184;
        }
    }
    ctx->pc = 0x3B6170u;
    // 0x3b6170: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3b6170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3b6174: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b6174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b6178: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b6178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b617c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b617cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b6180: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3b6180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b6184:
    // 0x3b6184: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b6184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6188: 0xc0ed3e0  jal         func_3B4F80
    ctx->pc = 0x3B6188u;
    SET_GPR_U32(ctx, 31, 0x3B6190u);
    ctx->pc = 0x3B618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6188u;
    // 0x3b618c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F80u, 0x3B6188u, 0x3B6190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6190u;
label_3b6190:
    // 0x3b6190: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B6190u;
    {
        const bool branch_taken_0x3b6190 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6190) {
            ctx->pc = 0x3B6194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6190u;
            // 0x3b6194: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B61ACu;
            goto label_3b61ac;
        }
    }
    ctx->pc = 0x3B6198u;
    // 0x3b6198: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3b6198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b619c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b61a0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b61a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b61a4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b61a8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3b61a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3b61ac:
    // 0x3b61ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b61acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b61b0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3b61b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b61b4: 0xc0ed3e0  jal         func_3B4F80
    ctx->pc = 0x3B61B4u;
    SET_GPR_U32(ctx, 31, 0x3B61BCu);
    ctx->pc = 0x3B61B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B61B4u;
    // 0x3b61b8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F80u, 0x3B61B4u, 0x3B61BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B61BCu;
label_3b61bc:
    // 0x3b61bc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x3b61bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b61c0: 0x1634ffd5  bne         $s1, $s4, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3B61C0u;
    {
        const bool branch_taken_0x3b61c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x3b61c0) {
            ctx->pc = 0x3B6118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6118;
        }
    }
    ctx->pc = 0x3B61C8u;
label_3b61c8:
    // 0x3b61c8: 0xc0eb8ec  jal         func_3AE3B0
    ctx->pc = 0x3B61C8u;
    SET_GPR_U32(ctx, 31, 0x3B61D0u);
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3B61C8u, 0x3B61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B61D0u;
label_3b61d0:
    // 0x3b61d0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b61d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b61d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3b61d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b61d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3b61d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b61dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3b61dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b61e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3b61e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b61e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b61e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b61e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b61e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b61ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3B61ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B61ECu;
        // 0x3b61f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B61ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B61F4u;
    // 0x3b61f4: 0x0  nop
    ctx->pc = 0x3b61f4u;
    // NOP
    ctx->pc = 0x3b61f8u;
}
