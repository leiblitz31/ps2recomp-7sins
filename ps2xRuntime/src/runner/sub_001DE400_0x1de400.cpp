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

// Function: sub_001DE400
// Address: 0x1de400 - 0x1de800
void sub_001DE400_0x1de400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE400_0x1de400");
#endif

    switch (ctx->pc) {
        case 0x1de41cu: goto label_1de41c;
        case 0x1de434u: goto label_1de434;
        case 0x1de444u: goto label_1de444;
        case 0x1de45cu: goto label_1de45c;
        case 0x1de614u: goto label_1de614;
        case 0x1de63cu: goto label_1de63c;
        case 0x1de64cu: goto label_1de64c;
        case 0x1de66cu: goto label_1de66c;
        case 0x1de67cu: goto label_1de67c;
        case 0x1de694u: goto label_1de694;
        case 0x1de6a4u: goto label_1de6a4;
        case 0x1de6bcu: goto label_1de6bc;
        case 0x1de6ccu: goto label_1de6cc;
        case 0x1de6f4u: goto label_1de6f4;
        case 0x1de704u: goto label_1de704;
        case 0x1de724u: goto label_1de724;
        case 0x1de734u: goto label_1de734;
        case 0x1de75cu: goto label_1de75c;
        case 0x1de76cu: goto label_1de76c;
        case 0x1de78cu: goto label_1de78c;
        case 0x1de79cu: goto label_1de79c;
        case 0x1de7c0u: goto label_1de7c0;
        case 0x1de7d0u: goto label_1de7d0;
        case 0x1de7ecu: goto label_1de7ec;
        default: break;
    }

    ctx->pc = 0x1de400u;

    // 0x1de400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1de400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1de404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de408: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1de408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1de40c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de410: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de414: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE414u;
    SET_GPR_U32(ctx, 31, 0x1DE41Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE414u, 0x1DE41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE41Cu;
label_1de41c:
    // 0x1de41c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de420: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de428: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1de428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1de42c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DE42Cu;
    SET_GPR_U32(ctx, 31, 0x1DE434u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DE42Cu, 0x1DE434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE434u;
label_1de434:
    // 0x1de434: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de438: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de43c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE43Cu;
    SET_GPR_U32(ctx, 31, 0x1DE444u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE43Cu, 0x1DE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE444u;
label_1de444:
    // 0x1de444: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de448: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de450: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1de450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1de454: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DE454u;
    SET_GPR_U32(ctx, 31, 0x1DE45Cu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DE454u, 0x1DE45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE45Cu;
label_1de45c:
    // 0x1de45c: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x1de45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1de460: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x1de460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1de464: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1de464u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de468: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1de468u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1de46c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de470: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de474: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1de474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de478: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de47c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1de47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de484: 0x0  nop
    ctx->pc = 0x1de484u;
    // NOP
    // 0x1de488: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de488u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de48c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1de48cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de490: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1de490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de494: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1de494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de498: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1DE498u;
    {
        const bool branch_taken_0x1de498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de498) {
            ctx->pc = 0x1DE4C8u;
            goto label_1de4c8;
        }
    }
    ctx->pc = 0x1DE4A0u;
    // 0x1de4a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de4a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de4a8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1de4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de4ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de4b0: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1de4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de4b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de4b8: 0x0  nop
    ctx->pc = 0x1de4b8u;
    // NOP
    // 0x1de4bc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de4bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de4c0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1de4c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de4c4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1de4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1de4c8:
    // 0x1de4c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de4cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de4d0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1de4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de4d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de4d8: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1de4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de4dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de4e0: 0x0  nop
    ctx->pc = 0x1de4e0u;
    // NOP
    // 0x1de4e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de4e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de4e8: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1de4e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de4ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1de4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de4f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de4f4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DE4F4u;
    {
        const bool branch_taken_0x1de4f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de4f4) {
            ctx->pc = 0x1DE524u;
            goto label_1de524;
        }
    }
    ctx->pc = 0x1DE4FCu;
    // 0x1de4fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de500: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de504: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1de504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de508: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de50c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1de50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de514: 0x0  nop
    ctx->pc = 0x1de514u;
    // NOP
    // 0x1de518: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de518u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de51c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1de51cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de520: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1de520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1de524:
    // 0x1de524: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de528: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de52c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1de52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de530: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de534: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1de534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de538: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de53c: 0x0  nop
    ctx->pc = 0x1de53cu;
    // NOP
    // 0x1de540: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de540u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de544: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1de544u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de548: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1de548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de54c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1de54cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de550: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1DE550u;
    {
        const bool branch_taken_0x1de550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de550) {
            ctx->pc = 0x1DE580u;
            goto label_1de580;
        }
    }
    ctx->pc = 0x1DE558u;
    // 0x1de558: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de55c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de560: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1de560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de564: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de568: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1de568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de56c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de56cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de570: 0x0  nop
    ctx->pc = 0x1de570u;
    // NOP
    // 0x1de574: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de574u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de578: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1de578u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de57c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1de57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1de580:
    // 0x1de580: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de584: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de588: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1de588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de58c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de590: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1de590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de598: 0x0  nop
    ctx->pc = 0x1de598u;
    // NOP
    // 0x1de59c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de59cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de5a0: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1de5a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de5a4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1de5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de5a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de5ac: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DE5ACu;
    {
        const bool branch_taken_0x1de5ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de5ac) {
            ctx->pc = 0x1DE5DCu;
            goto label_1de5dc;
        }
    }
    ctx->pc = 0x1DE5B4u;
    // 0x1de5b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de5b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de5bc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1de5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de5c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de5c4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1de5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de5c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de5cc: 0x0  nop
    ctx->pc = 0x1de5ccu;
    // NOP
    // 0x1de5d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de5d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de5d4: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1de5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de5d8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1de5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1de5dc:
    // 0x1de5dc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1de5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de5e0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1de5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de5e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1de5e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de5e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE5E8u;
    {
        const bool branch_taken_0x1de5e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de5e8) {
            ctx->pc = 0x1DE604u;
            goto label_1de604;
        }
    }
    ctx->pc = 0x1DE5F0u;
    // 0x1de5f0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1de5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de5f4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1de5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de5f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1de5f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de5fc: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1DE5FCu;
    {
        const bool branch_taken_0x1de5fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de5fc) {
            ctx->pc = 0x1DE66Cu;
            goto label_1de66c;
        }
    }
    ctx->pc = 0x1DE604u;
label_1de604:
    // 0x1de604: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de608: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de60c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE60Cu;
    SET_GPR_U32(ctx, 31, 0x1DE614u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE60Cu, 0x1DE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE614u;
label_1de614:
    // 0x1de614: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de618: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de61c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1de61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de620: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1de620u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1de624: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1de624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de628: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1de628u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1de62c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de630: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de634: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DE634u;
    SET_GPR_U32(ctx, 31, 0x1DE63Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DE634u, 0x1DE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE63Cu;
label_1de63c:
    // 0x1de63c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de640: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de644: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE644u;
    SET_GPR_U32(ctx, 31, 0x1DE64Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE644u, 0x1DE64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE64Cu;
label_1de64c:
    // 0x1de64c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de650: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de658: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1de658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1de65c: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x1de65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1de660: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de664: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DE664u;
    SET_GPR_U32(ctx, 31, 0x1DE66Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DE664u, 0x1DE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE66Cu;
label_1de66c:
    // 0x1de66c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de670: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de674: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE674u;
    SET_GPR_U32(ctx, 31, 0x1DE67Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE674u, 0x1DE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE67Cu;
label_1de67c:
    // 0x1de67c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de680: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1de680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1de684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de688: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1de688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1de68c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DE68Cu;
    SET_GPR_U32(ctx, 31, 0x1DE694u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DE68Cu, 0x1DE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE694u;
label_1de694:
    // 0x1de694: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de698: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de69c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE69Cu;
    SET_GPR_U32(ctx, 31, 0x1DE6A4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE69Cu, 0x1DE6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6A4u;
label_1de6a4:
    // 0x1de6a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de6a8: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de6ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6b0: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1de6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1de6b4: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DE6B4u;
    SET_GPR_U32(ctx, 31, 0x1DE6BCu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DE6B4u, 0x1DE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6BCu;
label_1de6bc:
    // 0x1de6bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de6c0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de6c4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE6C4u;
    SET_GPR_U32(ctx, 31, 0x1DE6CCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE6C4u, 0x1DE6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6CCu;
label_1de6cc:
    // 0x1de6cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de6d0: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1de6d4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1de6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de6d8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1de6d8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1de6dc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1de6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de6e0: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1de6e0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1de6e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de6ec: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DE6ECu;
    SET_GPR_U32(ctx, 31, 0x1DE6F4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DE6ECu, 0x1DE6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6F4u;
label_1de6f4:
    // 0x1de6f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de6f8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de6fc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE6FCu;
    SET_GPR_U32(ctx, 31, 0x1DE704u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE6FCu, 0x1DE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE704u;
label_1de704:
    // 0x1de704: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de708: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1de708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1de70c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de710: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1de710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1de714: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x1de714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1de718: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de71c: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DE71Cu;
    SET_GPR_U32(ctx, 31, 0x1DE724u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DE71Cu, 0x1DE724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE724u;
label_1de724:
    // 0x1de724: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de728: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de72c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE72Cu;
    SET_GPR_U32(ctx, 31, 0x1DE734u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE72Cu, 0x1DE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE734u;
label_1de734:
    // 0x1de734: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de738: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x1de738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1de73c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1de73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de740: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1de740u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1de744: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1de744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de748: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1de748u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1de74c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de750: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de754: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DE754u;
    SET_GPR_U32(ctx, 31, 0x1DE75Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DE754u, 0x1DE75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE75Cu;
label_1de75c:
    // 0x1de75c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de760: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de764: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE764u;
    SET_GPR_U32(ctx, 31, 0x1DE76Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE764u, 0x1DE76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE76Cu;
label_1de76c:
    // 0x1de76c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de770: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x1de770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1de774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de778: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1de778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1de77c: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x1de77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1de780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de784: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DE784u;
    SET_GPR_U32(ctx, 31, 0x1DE78Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DE784u, 0x1DE78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE78Cu;
label_1de78c:
    // 0x1de78c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de790: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de794: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE794u;
    SET_GPR_U32(ctx, 31, 0x1DE79Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE794u, 0x1DE79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE79Cu;
label_1de79c:
    // 0x1de79c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de7a0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de7a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de7a8: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x1de7a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x1de7ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1de7acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1de7b0: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1de7b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1de7b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7b8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DE7B8u;
    SET_GPR_U32(ctx, 31, 0x1DE7C0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DE7B8u, 0x1DE7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7C0u;
label_1de7c0:
    // 0x1de7c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1de7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de7c4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de7c8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE7C8u;
    SET_GPR_U32(ctx, 31, 0x1DE7D0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE7C8u, 0x1DE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7D0u;
label_1de7d0:
    // 0x1de7d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de7d4: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1de7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1de7d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1de7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de7dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7e0: 0x90660029  lbu         $a2, 0x29($v1)
    ctx->pc = 0x1de7e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x1de7e4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DE7E4u;
    SET_GPR_U32(ctx, 31, 0x1DE7ECu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DE7E4u, 0x1DE7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7ECu;
label_1de7ec:
    // 0x1de7ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de7f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1de7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1de7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE7FCu;
    // 0x1de7fc: 0x0  nop
    ctx->pc = 0x1de7fcu;
    // NOP
    ctx->pc = 0x1de800u;
}
