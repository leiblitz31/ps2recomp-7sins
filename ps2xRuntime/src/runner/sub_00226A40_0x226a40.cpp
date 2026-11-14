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

// Function: sub_00226A40
// Address: 0x226a40 - 0x226b10
void sub_00226A40_0x226a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226A40_0x226a40");
#endif

    switch (ctx->pc) {
        case 0x226a58u: goto label_226a58;
        case 0x226a70u: goto label_226a70;
        case 0x226a84u: goto label_226a84;
        case 0x226abcu: goto label_226abc;
        case 0x226afcu: goto label_226afc;
        default: break;
    }

    ctx->pc = 0x226a40u;

    // 0x226a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x226a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226a4c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x226a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x226a50: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x226A50u;
    SET_GPR_U32(ctx, 31, 0x226A58u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x226A50u, 0x226A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A58u;
label_226a58:
    // 0x226a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x226a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x226a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a64: 0xc44c0044  lwc1        $f12, 0x44($v0)
    ctx->pc = 0x226a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226a68: 0xc10604c  jal         func_418130
    ctx->pc = 0x226A68u;
    SET_GPR_U32(ctx, 31, 0x226A70u);
    ctx->pc = 0x418130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418130u, 0x226A68u, 0x226A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A70u;
label_226a70:
    // 0x226a70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x226a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a78: 0xc44c0048  lwc1        $f12, 0x48($v0)
    ctx->pc = 0x226a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226a7c: 0xc106080  jal         func_418200
    ctx->pc = 0x226A7Cu;
    SET_GPR_U32(ctx, 31, 0x226A84u);
    ctx->pc = 0x418200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418200u, 0x226A7Cu, 0x226A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A84u;
label_226a84:
    // 0x226a84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x226a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226a88: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x226a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226a8c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x226a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226a90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x226a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226a94: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x226a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x226a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226a9c: 0x0  nop
    ctx->pc = 0x226a9cu;
    // NOP
    // 0x226aa0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x226aa0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x226aa4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x226aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x226aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226aac: 0x0  nop
    ctx->pc = 0x226aacu;
    // NOP
    // 0x226ab0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x226ab0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x226ab4: 0xc0c39a0  jal         func_30E680
    ctx->pc = 0x226AB4u;
    SET_GPR_U32(ctx, 31, 0x226ABCu);
    ctx->pc = 0x30E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E680u, 0x226AB4u, 0x226ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226ABCu;
label_226abc:
    // 0x226abc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x226abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x226ac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226ac4: 0x0  nop
    ctx->pc = 0x226ac4u;
    // NOP
    // 0x226ac8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x226ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226acc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x226accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x226ad0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x226ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226ad4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x226ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x226ad8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x226ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226adc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x226adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226ae0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x226ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226ae4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x226ae4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x226ae8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x226ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x226aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226af0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x226af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x226af4: 0xc105fee  jal         func_417FB8
    ctx->pc = 0x226AF4u;
    SET_GPR_U32(ctx, 31, 0x226AFCu);
    ctx->pc = 0x417FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417FB8u, 0x226AF4u, 0x226AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226AFCu;
label_226afc:
    // 0x226afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226b04: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x226b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x226b08: 0x3e00008  jr          $ra
    ctx->pc = 0x226B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226B10u;
}
