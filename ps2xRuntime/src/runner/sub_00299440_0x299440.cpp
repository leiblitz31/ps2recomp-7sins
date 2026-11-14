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

// Function: sub_00299440
// Address: 0x299440 - 0x2997c0
void sub_00299440_0x299440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299440_0x299440");
#endif

    switch (ctx->pc) {
        case 0x29948cu: goto label_29948c;
        case 0x2994b8u: goto label_2994b8;
        case 0x2994c8u: goto label_2994c8;
        case 0x2994e4u: goto label_2994e4;
        case 0x2994f4u: goto label_2994f4;
        case 0x29950cu: goto label_29950c;
        case 0x299548u: goto label_299548;
        case 0x29955cu: goto label_29955c;
        case 0x299588u: goto label_299588;
        case 0x2995a0u: goto label_2995a0;
        case 0x2995b8u: goto label_2995b8;
        case 0x2995d0u: goto label_2995d0;
        case 0x2995e8u: goto label_2995e8;
        case 0x299608u: goto label_299608;
        case 0x299798u: goto label_299798;
        default: break;
    }

    ctx->pc = 0x299440u;

    // 0x299440: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x299440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x299444: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x299444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x299448: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x299448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29944c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x299450: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x299450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x299454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x299454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x299458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x299458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29945c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299460: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x299460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x299464: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x299464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x299468: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x299468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29946c: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x29946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299470: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x299470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x299474: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x299474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x299478: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x299478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29947c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x29947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x299480: 0x240503f9  addiu       $a1, $zero, 0x3F9
    ctx->pc = 0x299480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1017));
    // 0x299484: 0xc042090  jal         func_108240
    ctx->pc = 0x299484u;
    SET_GPR_U32(ctx, 31, 0x29948Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x299484u, 0x29948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29948Cu;
label_29948c:
    // 0x29948c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x29948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299490: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x299490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x299494: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x299494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299498: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x299498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x29949c: 0x1402001f  bne         $zero, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29949Cu;
    {
        const bool branch_taken_0x29949c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x29949c) {
            ctx->pc = 0x29951Cu;
            goto label_29951c;
        }
    }
    ctx->pc = 0x2994A4u;
    // 0x2994a4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2994a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2994a8: 0x240503f4  addiu       $a1, $zero, 0x3F4
    ctx->pc = 0x2994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x2994ac: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2994acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2994b0: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2994B0u;
    SET_GPR_U32(ctx, 31, 0x2994B8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2994B0u, 0x2994B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994B8u;
label_2994b8:
    // 0x2994b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2994b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2994bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994c0: 0xc0e35f4  jal         func_38D7D0
    ctx->pc = 0x2994C0u;
    SET_GPR_U32(ctx, 31, 0x2994C8u);
    ctx->pc = 0x38D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D7D0u, 0x2994C0u, 0x2994C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994C8u;
label_2994c8:
    // 0x2994c8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2994c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2994cc: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x2994ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x2994d0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2994d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2994d4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2994d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2994d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2994d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2994dc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2994DCu;
    SET_GPR_U32(ctx, 31, 0x2994E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2994DCu, 0x2994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994E4u;
label_2994e4:
    // 0x2994e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2994e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2994e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994ec: 0xc091018  jal         func_244060
    ctx->pc = 0x2994ECu;
    SET_GPR_U32(ctx, 31, 0x2994F4u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2994ECu, 0x2994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994F4u;
label_2994f4:
    // 0x2994f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2994f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2994f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2994fc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2994fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x299500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x299500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299504: 0xc1083aa  jal         func_420EA8
    ctx->pc = 0x299504u;
    SET_GPR_U32(ctx, 31, 0x29950Cu);
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x299504u, 0x29950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29950Cu;
label_29950c:
    // 0x29950c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x29950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299510: 0x24520034  addiu       $s2, $v0, 0x34
    ctx->pc = 0x299510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x299514: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x299514u;
    {
        const bool branch_taken_0x299514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299514) {
            ctx->pc = 0x299588u;
            goto label_299588;
        }
    }
    ctx->pc = 0x29951Cu;
label_29951c:
    // 0x29951c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x29951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299520: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x299520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299524: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x299524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299528: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x299528u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29952c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x29952Cu;
    {
        const bool branch_taken_0x29952c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29952c) {
            ctx->pc = 0x299588u;
            goto label_299588;
        }
    }
    ctx->pc = 0x299534u;
    // 0x299534: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x299534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299538: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x299538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x29953c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x299540: 0xc085538  jal         func_2154E0
    ctx->pc = 0x299540u;
    SET_GPR_U32(ctx, 31, 0x299548u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x299540u, 0x299548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299548u;
label_299548:
    // 0x299548: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x299548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29954c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299550: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x299550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x299554: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x299554u;
    SET_GPR_U32(ctx, 31, 0x29955Cu);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x299554u, 0x29955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29955Cu;
label_29955c:
    // 0x29955c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x29955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299560: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x299560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299564: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x299564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299568: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x299568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29956c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x29956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299574: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x299574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x299578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29957c: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x29957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x299580: 0xc090f14  jal         func_243C50
    ctx->pc = 0x299580u;
    SET_GPR_U32(ctx, 31, 0x299588u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x299580u, 0x299588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299588u;
label_299588:
    // 0x299588: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x299588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x29958c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29958cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x299590: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x299590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x299594: 0x240503f5  addiu       $a1, $zero, 0x3F5
    ctx->pc = 0x299594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1013));
    // 0x299598: 0xc042090  jal         func_108240
    ctx->pc = 0x299598u;
    SET_GPR_U32(ctx, 31, 0x2995A0u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x299598u, 0x2995A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995A0u;
label_2995a0:
    // 0x2995a0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2995a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2995a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2995a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2995a8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2995ac: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x2995acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2995b0: 0xc0e3646  jal         func_38D918
    ctx->pc = 0x2995B0u;
    SET_GPR_U32(ctx, 31, 0x2995B8u);
    ctx->pc = 0x38D918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D918u, 0x2995B0u, 0x2995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995B8u;
label_2995b8:
    // 0x2995b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2995b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2995bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2995bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2995c0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2995c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2995c4: 0x240503f7  addiu       $a1, $zero, 0x3F7
    ctx->pc = 0x2995c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x2995c8: 0xc042090  jal         func_108240
    ctx->pc = 0x2995C8u;
    SET_GPR_U32(ctx, 31, 0x2995D0u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2995C8u, 0x2995D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995D0u;
label_2995d0:
    // 0x2995d0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2995d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2995d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2995d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2995d8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2995d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2995dc: 0x240503f8  addiu       $a1, $zero, 0x3F8
    ctx->pc = 0x2995dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    // 0x2995e0: 0xc042090  jal         func_108240
    ctx->pc = 0x2995E0u;
    SET_GPR_U32(ctx, 31, 0x2995E8u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2995E0u, 0x2995E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995E8u;
label_2995e8:
    // 0x2995e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2995e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2995ec: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2995ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2995f0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2995f4: 0x240503f6  addiu       $a1, $zero, 0x3F6
    ctx->pc = 0x2995f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
    // 0x2995f8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2995f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2995fc: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x2995fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x299600: 0xc042080  jal         func_108200
    ctx->pc = 0x299600u;
    SET_GPR_U32(ctx, 31, 0x299608u);
    ctx->pc = 0x108200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108200u, 0x299600u, 0x299608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299608u;
label_299608:
    // 0x299608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x299608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29960c: 0x101602  srl         $v0, $s0, 24
    ctx->pc = 0x29960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x299610: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x299610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x299614: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299614u;
    {
        const bool branch_taken_0x299614 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x299614) {
            ctx->pc = 0x299630u;
            goto label_299630;
        }
    }
    ctx->pc = 0x29961Cu;
    // 0x29961c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29961cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299620: 0x0  nop
    ctx->pc = 0x299620u;
    // NOP
    // 0x299624: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x299624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299628u;
    {
        const bool branch_taken_0x299628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299628) {
            ctx->pc = 0x29964Cu;
            goto label_29964c;
        }
    }
    ctx->pc = 0x299630u;
label_299630:
    // 0x299630: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x299630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x299634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299638: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x299638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29963c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29963cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299640: 0x0  nop
    ctx->pc = 0x299640u;
    // NOP
    // 0x299644: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x299644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299648: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x299648u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29964c:
    // 0x29964c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x29964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x299650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299654: 0x0  nop
    ctx->pc = 0x299654u;
    // NOP
    // 0x299658: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299658u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29965c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x29965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x299660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299664: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x299664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299668: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x299668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x29966c: 0x101402  srl         $v0, $s0, 16
    ctx->pc = 0x29966cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x299670: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x299670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x299674: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299674u;
    {
        const bool branch_taken_0x299674 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x299674) {
            ctx->pc = 0x299690u;
            goto label_299690;
        }
    }
    ctx->pc = 0x29967Cu;
    // 0x29967c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29967cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299680: 0x0  nop
    ctx->pc = 0x299680u;
    // NOP
    // 0x299684: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x299684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299688u;
    {
        const bool branch_taken_0x299688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299688) {
            ctx->pc = 0x2996ACu;
            goto label_2996ac;
        }
    }
    ctx->pc = 0x299690u;
label_299690:
    // 0x299690: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x299690u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x299694: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299698: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x299698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29969c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29969cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2996a0: 0x0  nop
    ctx->pc = 0x2996a0u;
    // NOP
    // 0x2996a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2996a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2996a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2996a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2996ac:
    // 0x2996ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2996acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2996b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2996b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2996b4: 0x0  nop
    ctx->pc = 0x2996b4u;
    // NOP
    // 0x2996b8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2996b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2996bc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2996bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2996c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2996c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2996c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2996c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2996c8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2996c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2996cc: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x2996ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x2996d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2996d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2996d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2996D4u;
    {
        const bool branch_taken_0x2996d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2996d4) {
            ctx->pc = 0x2996F0u;
            goto label_2996f0;
        }
    }
    ctx->pc = 0x2996DCu;
    // 0x2996dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2996dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2996e0: 0x0  nop
    ctx->pc = 0x2996e0u;
    // NOP
    // 0x2996e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2996e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2996e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2996E8u;
    {
        const bool branch_taken_0x2996e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2996e8) {
            ctx->pc = 0x29970Cu;
            goto label_29970c;
        }
    }
    ctx->pc = 0x2996F0u;
label_2996f0:
    // 0x2996f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2996f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2996f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2996f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2996f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2996f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2996fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2996fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299700: 0x0  nop
    ctx->pc = 0x299700u;
    // NOP
    // 0x299704: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x299704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299708: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x299708u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29970c:
    // 0x29970c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x29970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x299710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299714: 0x0  nop
    ctx->pc = 0x299714u;
    // NOP
    // 0x299718: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299718u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29971c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x29971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x299720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299724: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x299724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299728: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x299728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x29972c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x29972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x299730: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299730u;
    {
        const bool branch_taken_0x299730 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x299730) {
            ctx->pc = 0x29974Cu;
            goto label_29974c;
        }
    }
    ctx->pc = 0x299738u;
    // 0x299738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29973c: 0x0  nop
    ctx->pc = 0x29973cu;
    // NOP
    // 0x299740: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x299740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299744: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299744u;
    {
        const bool branch_taken_0x299744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299744) {
            ctx->pc = 0x299768u;
            goto label_299768;
        }
    }
    ctx->pc = 0x29974Cu;
label_29974c:
    // 0x29974c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x29974cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x299750: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299754: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x299754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x299758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x299758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29975c: 0x0  nop
    ctx->pc = 0x29975cu;
    // NOP
    // 0x299760: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x299760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299764: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x299764u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_299768:
    // 0x299768: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x299768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x29976c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29976cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299770: 0x0  nop
    ctx->pc = 0x299770u;
    // NOP
    // 0x299774: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x299774u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299778: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x299778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29977c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x29977cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x299780: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x299780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299784: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x299784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299788: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x299788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x29978c: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x29978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x299790: 0xc0e3656  jal         func_38D958
    ctx->pc = 0x299790u;
    SET_GPR_U32(ctx, 31, 0x299798u);
    ctx->pc = 0x38D958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D958u, 0x299790u, 0x299798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299798u;
label_299798:
    // 0x299798: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x299798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29979c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29979cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2997a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2997a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2997a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2997a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2997a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2997a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2997ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2997acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2997b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2997b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2997b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2997b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2997b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2997B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2997B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2997C0u;
}
