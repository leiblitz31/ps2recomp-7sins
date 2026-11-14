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

// Function: sub_001E4970
// Address: 0x1e4970 - 0x1e4d70
void sub_001E4970_0x1e4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4970_0x1e4970");
#endif

    switch (ctx->pc) {
        case 0x1e498cu: goto label_1e498c;
        case 0x1e49a4u: goto label_1e49a4;
        case 0x1e49b4u: goto label_1e49b4;
        case 0x1e49ccu: goto label_1e49cc;
        case 0x1e4b84u: goto label_1e4b84;
        case 0x1e4bacu: goto label_1e4bac;
        case 0x1e4bbcu: goto label_1e4bbc;
        case 0x1e4bdcu: goto label_1e4bdc;
        case 0x1e4becu: goto label_1e4bec;
        case 0x1e4c04u: goto label_1e4c04;
        case 0x1e4c14u: goto label_1e4c14;
        case 0x1e4c2cu: goto label_1e4c2c;
        case 0x1e4c3cu: goto label_1e4c3c;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c8cu: goto label_1e4c8c;
        case 0x1e4c9cu: goto label_1e4c9c;
        case 0x1e4cc4u: goto label_1e4cc4;
        case 0x1e4cd4u: goto label_1e4cd4;
        case 0x1e4cf4u: goto label_1e4cf4;
        case 0x1e4d04u: goto label_1e4d04;
        case 0x1e4d54u: goto label_1e4d54;
        default: break;
    }

    ctx->pc = 0x1e4970u;

    // 0x1e4970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e4974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4978: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1e4978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1e497c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4980: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4984: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4984u;
    SET_GPR_U32(ctx, 31, 0x1E498Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4984u, 0x1E498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E498Cu;
label_1e498c:
    // 0x1e498c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4990: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e4990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e4994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4998: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1e4998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1e499c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E499Cu;
    SET_GPR_U32(ctx, 31, 0x1E49A4u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E499Cu, 0x1E49A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49A4u;
label_1e49a4:
    // 0x1e49a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e49a8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e49ac: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E49ACu;
    SET_GPR_U32(ctx, 31, 0x1E49B4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E49ACu, 0x1E49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49B4u;
label_1e49b4:
    // 0x1e49b4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e49b8: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e49b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e49bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e49bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e49c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e49c4: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1E49C4u;
    SET_GPR_U32(ctx, 31, 0x1E49CCu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1E49C4u, 0x1E49CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49CCu;
label_1e49cc:
    // 0x1e49cc: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x1e49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1e49d0: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1e49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e49d4: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1e49d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e49d8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1e49d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1e49dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e49e0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e49e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e49e4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1e49e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e49e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e49ec: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x1e49ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e49f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e49f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e49f4: 0x0  nop
    ctx->pc = 0x1e49f4u;
    // NOP
    // 0x1e49f8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e49f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e49fc: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1e49fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4a00: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1e4a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4a04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4a04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4a08: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1E4A08u;
    {
        const bool branch_taken_0x1e4a08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4a08) {
            ctx->pc = 0x1E4A38u;
            goto label_1e4a38;
        }
    }
    ctx->pc = 0x1E4A10u;
    // 0x1e4a10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4a14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4a18: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1e4a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4a1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4a20: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x1e4a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4a28: 0x0  nop
    ctx->pc = 0x1e4a28u;
    // NOP
    // 0x1e4a2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4a2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4a30: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1e4a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4a34: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1e4a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1e4a38:
    // 0x1e4a38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4a3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4a40: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1e4a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4a44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4a48: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x1e4a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4a50: 0x0  nop
    ctx->pc = 0x1e4a50u;
    // NOP
    // 0x1e4a54: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4a54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4a58: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1e4a58u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4a5c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1e4a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4a60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4a64: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1E4A64u;
    {
        const bool branch_taken_0x1e4a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4a64) {
            ctx->pc = 0x1E4A94u;
            goto label_1e4a94;
        }
    }
    ctx->pc = 0x1E4A6Cu;
    // 0x1e4a6c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4a70: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4a74: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1e4a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4a78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4a7c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x1e4a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4a84: 0x0  nop
    ctx->pc = 0x1e4a84u;
    // NOP
    // 0x1e4a88: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4a88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4a8c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1e4a8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4a90: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1e4a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1e4a94:
    // 0x1e4a94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4a98: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4a9c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1e4a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4aa0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4aa4: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1e4aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4aa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4aac: 0x0  nop
    ctx->pc = 0x1e4aacu;
    // NOP
    // 0x1e4ab0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4ab0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4ab4: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1e4ab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4ab8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1e4ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4abc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4abcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4ac0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1E4AC0u;
    {
        const bool branch_taken_0x1e4ac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4ac0) {
            ctx->pc = 0x1E4AF0u;
            goto label_1e4af0;
        }
    }
    ctx->pc = 0x1E4AC8u;
    // 0x1e4ac8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4acc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4ad0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1e4ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4ad4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4ad8: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1e4ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4ae0: 0x0  nop
    ctx->pc = 0x1e4ae0u;
    // NOP
    // 0x1e4ae4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4ae4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4ae8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1e4ae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4aec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1e4aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1e4af0:
    // 0x1e4af0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4af4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4af8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1e4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4afc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4b00: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x1e4b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4b04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4b08: 0x0  nop
    ctx->pc = 0x1e4b08u;
    // NOP
    // 0x1e4b0c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4b0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4b10: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1e4b10u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4b14: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1e4b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4b18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4b1c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1E4B1Cu;
    {
        const bool branch_taken_0x1e4b1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4b1c) {
            ctx->pc = 0x1E4B4Cu;
            goto label_1e4b4c;
        }
    }
    ctx->pc = 0x1E4B24u;
    // 0x1e4b24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4b28: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4b2c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1e4b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4b30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4b34: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x1e4b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4b3c: 0x0  nop
    ctx->pc = 0x1e4b3cu;
    // NOP
    // 0x1e4b40: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4b40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4b44: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1e4b44u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4b48: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1e4b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1e4b4c:
    // 0x1e4b4c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e4b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4b50: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1e4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4b54: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e4b54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4b58: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4B58u;
    {
        const bool branch_taken_0x1e4b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4b58) {
            ctx->pc = 0x1E4B74u;
            goto label_1e4b74;
        }
    }
    ctx->pc = 0x1E4B60u;
    // 0x1e4b60: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1e4b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4b64: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1e4b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4b68: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e4b68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4b6c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1E4B6Cu;
    {
        const bool branch_taken_0x1e4b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4b6c) {
            ctx->pc = 0x1E4BDCu;
            goto label_1e4bdc;
        }
    }
    ctx->pc = 0x1E4B74u;
label_1e4b74:
    // 0x1e4b74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4b78: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4b7c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4B7Cu;
    SET_GPR_U32(ctx, 31, 0x1E4B84u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4B7Cu, 0x1E4B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B84u;
label_1e4b84:
    // 0x1e4b84: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e4b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4b88: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e4b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e4b8c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e4b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4b90: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1e4b90u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1e4b94: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4b98: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1e4b98u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1e4b9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4ba4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4BA4u;
    SET_GPR_U32(ctx, 31, 0x1E4BACu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4BA4u, 0x1E4BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BACu;
label_1e4bac:
    // 0x1e4bac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4bb0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4bb4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4BB4u;
    SET_GPR_U32(ctx, 31, 0x1E4BBCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4BB4u, 0x1E4BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BBCu;
label_1e4bbc:
    // 0x1e4bbc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4bc0: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e4bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e4bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4bc8: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x1e4bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e4bcc: 0xc7ad003c  lwc1        $f13, 0x3C($sp)
    ctx->pc = 0x1e4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e4bd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4bd4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4BD4u;
    SET_GPR_U32(ctx, 31, 0x1E4BDCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4BD4u, 0x1E4BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BDCu;
label_1e4bdc:
    // 0x1e4bdc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4be0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4be4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4BE4u;
    SET_GPR_U32(ctx, 31, 0x1E4BECu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4BE4u, 0x1E4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BECu;
label_1e4bec:
    // 0x1e4bec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e4becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4bf0: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e4bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e4bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4bf8: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1e4bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1e4bfc: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E4BFCu;
    SET_GPR_U32(ctx, 31, 0x1E4C04u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E4BFCu, 0x1E4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C04u;
label_1e4c04:
    // 0x1e4c04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4c08: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4c0c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C14u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4C0Cu, 0x1E4C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C14u;
label_1e4c14:
    // 0x1e4c14: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e4c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4c18: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1e4c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e4c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c20: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1e4c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e4c24: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E4C24u;
    SET_GPR_U32(ctx, 31, 0x1E4C2Cu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E4C24u, 0x1E4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C2Cu;
label_1e4c2c:
    // 0x1e4c2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4c30: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4c34: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4C34u;
    SET_GPR_U32(ctx, 31, 0x1E4C3Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4C34u, 0x1E4C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C3Cu;
label_1e4c3c:
    // 0x1e4c3c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e4c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4c40: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x1e4c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1e4c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c48: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1e4c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e4c4c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E4C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C54u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E4C4Cu, 0x1E4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C54u;
label_1e4c54:
    // 0x1e4c54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4c58: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4c5c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C64u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4C5Cu, 0x1E4C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C64u;
label_1e4c64:
    // 0x1e4c64: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4c68: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1e4c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e4c6c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e4c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4c70: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1e4c70u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1e4c74: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1e4c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4c78: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1e4c78u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1e4c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4c84: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4C84u;
    SET_GPR_U32(ctx, 31, 0x1E4C8Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4C84u, 0x1E4C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C8Cu;
label_1e4c8c:
    // 0x1e4c8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4c90: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4c94: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4C94u;
    SET_GPR_U32(ctx, 31, 0x1E4C9Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4C94u, 0x1E4C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C9Cu;
label_1e4c9c:
    // 0x1e4c9c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4ca0: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x1e4ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1e4ca4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1e4ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4ca8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1e4ca8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1e4cac: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1e4cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4cb0: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1e4cb0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1e4cb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4cbc: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4CBCu;
    SET_GPR_U32(ctx, 31, 0x1E4CC4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4CBCu, 0x1E4CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CC4u;
label_1e4cc4:
    // 0x1e4cc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4cc8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4ccc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4CCCu;
    SET_GPR_U32(ctx, 31, 0x1E4CD4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4CCCu, 0x1E4CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CD4u;
label_1e4cd4:
    // 0x1e4cd4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4cd8: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1e4cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e4cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ce0: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x1e4ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e4ce4: 0xc7ad003c  lwc1        $f13, 0x3C($sp)
    ctx->pc = 0x1e4ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e4ce8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4cec: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4CECu;
    SET_GPR_U32(ctx, 31, 0x1E4CF4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4CECu, 0x1E4CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CF4u;
label_1e4cf4:
    // 0x1e4cf4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4cf8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4cfc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4CFCu;
    SET_GPR_U32(ctx, 31, 0x1E4D04u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4CFCu, 0x1E4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D04u;
label_1e4d04:
    // 0x1e4d04: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4d08: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x1e4d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1e4d0c: 0xc7838350  lwc1        $f3, -0x7CB0($gp)
    ctx->pc = 0x1e4d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4d10: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1e4d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4d14: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1e4d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4d1c: 0x0  nop
    ctx->pc = 0x1e4d1cu;
    // NOP
    // 0x1e4d20: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4d20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4d24: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x1e4d24u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4d28: 0xc78382dc  lwc1        $f3, -0x7D24($gp)
    ctx->pc = 0x1e4d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4d2c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1e4d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4d30: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1e4d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4d38: 0x0  nop
    ctx->pc = 0x1e4d38u;
    // NOP
    // 0x1e4d3c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4d3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4d40: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x1e4d40u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4d44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4d4c: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D54u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4D4Cu, 0x1E4D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D54u;
label_1e4d54:
    // 0x1e4d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4d58: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e4d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4D64u;
    // 0x1e4d64: 0x0  nop
    ctx->pc = 0x1e4d64u;
    // NOP
    // 0x1e4d68: 0x0  nop
    ctx->pc = 0x1e4d68u;
    // NOP
    // 0x1e4d6c: 0x0  nop
    ctx->pc = 0x1e4d6cu;
    // NOP
    ctx->pc = 0x1e4d70u;
}
