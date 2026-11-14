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

// Function: sub_001992D0
// Address: 0x1992d0 - 0x199890
void sub_001992D0_0x1992d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001992D0_0x1992d0");
#endif

    switch (ctx->pc) {
        case 0x19935cu: goto label_19935c;
        case 0x19937cu: goto label_19937c;
        case 0x19938cu: goto label_19938c;
        case 0x1993a0u: goto label_1993a0;
        case 0x1993d0u: goto label_1993d0;
        case 0x1993e4u: goto label_1993e4;
        case 0x1993f0u: goto label_1993f0;
        case 0x1993fcu: goto label_1993fc;
        case 0x19942cu: goto label_19942c;
        case 0x199440u: goto label_199440;
        case 0x19944cu: goto label_19944c;
        case 0x199458u: goto label_199458;
        case 0x199488u: goto label_199488;
        case 0x19949cu: goto label_19949c;
        case 0x1994a8u: goto label_1994a8;
        case 0x1994b4u: goto label_1994b4;
        case 0x1994e4u: goto label_1994e4;
        case 0x1994f8u: goto label_1994f8;
        case 0x199504u: goto label_199504;
        case 0x199510u: goto label_199510;
        case 0x199540u: goto label_199540;
        case 0x199554u: goto label_199554;
        case 0x199560u: goto label_199560;
        case 0x19956cu: goto label_19956c;
        case 0x199598u: goto label_199598;
        case 0x1995acu: goto label_1995ac;
        case 0x1995b8u: goto label_1995b8;
        case 0x1995c4u: goto label_1995c4;
        case 0x1995f0u: goto label_1995f0;
        case 0x199604u: goto label_199604;
        case 0x199610u: goto label_199610;
        case 0x199640u: goto label_199640;
        case 0x199654u: goto label_199654;
        case 0x199660u: goto label_199660;
        case 0x19966cu: goto label_19966c;
        case 0x19969cu: goto label_19969c;
        case 0x1996b0u: goto label_1996b0;
        case 0x1996bcu: goto label_1996bc;
        case 0x1996e0u: goto label_1996e0;
        case 0x1996f8u: goto label_1996f8;
        case 0x19970cu: goto label_19970c;
        case 0x19978cu: goto label_19978c;
        case 0x1997a4u: goto label_1997a4;
        case 0x1997b8u: goto label_1997b8;
        default: break;
    }

    ctx->pc = 0x1992d0u;

    // 0x1992d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1992d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1992d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1992d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1992d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1992dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1992dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1992e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1992e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1992e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1992e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1992e8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1992e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1992ec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1992f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1992f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1992f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1992f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1992f8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1992f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1992fc: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x1992fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199300: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x199300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199304: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x199304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x199308: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x199308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19930c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199310: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x199310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x199314: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x199314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x199318: 0xdf8292b0  ld          $v0, -0x6D50($gp)
    ctx->pc = 0x199318u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939312)));
    // 0x19931c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19931cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x199320: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199324: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x199324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199328: 0xac4300ec  sw          $v1, 0xEC($v0)
    ctx->pc = 0x199328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 3));
    // 0x19932c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x199330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199334: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x199334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199338: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x199338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x19933c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x199340: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x199340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199344: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x199344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
    // 0x199348: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x199348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x19934c: 0x24520054  addiu       $s2, $v0, 0x54
    ctx->pc = 0x19934cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x199350: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x199350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199354: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x199354u;
    {
        const bool branch_taken_0x199354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199354) {
            ctx->pc = 0x1996C8u;
            goto label_1996c8;
        }
    }
    ctx->pc = 0x19935Cu;
label_19935c:
    // 0x19935c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x199360: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x199360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x199364: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x199364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x199368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19936c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x19936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x199370: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x199370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199374: 0xc040304  jal         func_100C10
    ctx->pc = 0x199374u;
    SET_GPR_U32(ctx, 31, 0x19937Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x199374u, 0x19937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19937Cu;
label_19937c:
    // 0x19937c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19937cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199380: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x199384: 0xc05c618  jal         func_171860
    ctx->pc = 0x199384u;
    SET_GPR_U32(ctx, 31, 0x19938Cu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x199384u, 0x19938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19938Cu;
label_19938c:
    // 0x19938c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19938cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199390: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x199390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x199394: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x199394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199398: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x199398u;
    SET_GPR_U32(ctx, 31, 0x1993A0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x199398u, 0x1993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993A0u;
label_1993a0:
    // 0x1993a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1993a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1993a4: 0x122200c7  beq         $s1, $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x1993A4u;
    {
        const bool branch_taken_0x1993a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1993a4) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x1993ACu;
    // 0x1993ac: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x1993acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1993b0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1993b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1993b4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1993b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1993b8: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x1993bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1993c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1993c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1993c4: 0x27859278  addiu       $a1, $gp, -0x6D88
    ctx->pc = 0x1993c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939256));
    // 0x1993c8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1993C8u;
    SET_GPR_U32(ctx, 31, 0x1993D0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1993C8u, 0x1993D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993D0u;
label_1993d0:
    // 0x1993d0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1993D0u;
    {
        const bool branch_taken_0x1993d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1993d0) {
            ctx->pc = 0x19940Cu;
            goto label_19940c;
        }
    }
    ctx->pc = 0x1993D8u;
    // 0x1993d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1993d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993dc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1993DCu;
    SET_GPR_U32(ctx, 31, 0x1993E4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1993DCu, 0x1993E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993E4u;
label_1993e4:
    // 0x1993e4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1993e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1993e8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1993E8u;
    SET_GPR_U32(ctx, 31, 0x1993F0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1993E8u, 0x1993F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993F0u;
label_1993f0:
    // 0x1993f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1993f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993f4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1993F4u;
    SET_GPR_U32(ctx, 31, 0x1993FCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1993F4u, 0x1993FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993FCu;
label_1993fc:
    // 0x1993fc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1993fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199400: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x199400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x199404: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x199404u;
    {
        const bool branch_taken_0x199404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199404) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x19940Cu;
label_19940c:
    // 0x19940c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19940cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x199410: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x199410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x199414: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x199414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x199418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19941c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199420: 0x2785927c  addiu       $a1, $gp, -0x6D84
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939260));
    // 0x199424: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x199424u;
    SET_GPR_U32(ctx, 31, 0x19942Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x199424u, 0x19942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19942Cu;
label_19942c:
    // 0x19942c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19942Cu;
    {
        const bool branch_taken_0x19942c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19942c) {
            ctx->pc = 0x199468u;
            goto label_199468;
        }
    }
    ctx->pc = 0x199434u;
    // 0x199434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199438: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x199438u;
    SET_GPR_U32(ctx, 31, 0x199440u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x199438u, 0x199440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199440u;
label_199440:
    // 0x199440: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x199440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x199444: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x199444u;
    SET_GPR_U32(ctx, 31, 0x19944Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x199444u, 0x19944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19944Cu;
label_19944c:
    // 0x19944c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199450: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x199450u;
    SET_GPR_U32(ctx, 31, 0x199458u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x199450u, 0x199458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199458u;
label_199458:
    // 0x199458: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x199458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19945c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x19945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x199460: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x199460u;
    {
        const bool branch_taken_0x199460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199460) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x199468u;
label_199468:
    // 0x199468: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x199468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19946c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x19946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x199470: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x199474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199478: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x199478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19947c: 0x27859280  addiu       $a1, $gp, -0x6D80
    ctx->pc = 0x19947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939264));
    // 0x199480: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x199480u;
    SET_GPR_U32(ctx, 31, 0x199488u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x199480u, 0x199488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199488u;
label_199488:
    // 0x199488: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x199488u;
    {
        const bool branch_taken_0x199488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199488) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x199490u;
    // 0x199490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199494: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x199494u;
    SET_GPR_U32(ctx, 31, 0x19949Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x199494u, 0x19949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19949Cu;
label_19949c:
    // 0x19949c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x19949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1994a0: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1994A0u;
    SET_GPR_U32(ctx, 31, 0x1994A8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1994A0u, 0x1994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994A8u;
label_1994a8:
    // 0x1994a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1994a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994ac: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1994ACu;
    SET_GPR_U32(ctx, 31, 0x1994B4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1994ACu, 0x1994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994B4u;
label_1994b4:
    // 0x1994b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1994b8: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1994b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x1994bc: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1994BCu;
    {
        const bool branch_taken_0x1994bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1994bc) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x1994C4u;
label_1994c4:
    // 0x1994c4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1994c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1994c8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1994c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1994cc: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x1994ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x1994d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1994d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1994d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1994d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1994d8: 0x27859284  addiu       $a1, $gp, -0x6D7C
    ctx->pc = 0x1994d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939268));
    // 0x1994dc: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1994DCu;
    SET_GPR_U32(ctx, 31, 0x1994E4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1994DCu, 0x1994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994E4u;
label_1994e4:
    // 0x1994e4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1994E4u;
    {
        const bool branch_taken_0x1994e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1994e4) {
            ctx->pc = 0x199520u;
            goto label_199520;
        }
    }
    ctx->pc = 0x1994ECu;
    // 0x1994ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1994ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994f0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1994F0u;
    SET_GPR_U32(ctx, 31, 0x1994F8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1994F0u, 0x1994F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994F8u;
label_1994f8:
    // 0x1994f8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1994f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1994fc: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1994FCu;
    SET_GPR_U32(ctx, 31, 0x199504u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1994FCu, 0x199504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199504u;
label_199504:
    // 0x199504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199508: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x199508u;
    SET_GPR_U32(ctx, 31, 0x199510u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x199508u, 0x199510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199510u;
label_199510:
    // 0x199510: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x199510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199514: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x199514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x199518: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x199518u;
    {
        const bool branch_taken_0x199518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199518) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x199520u;
label_199520:
    // 0x199520: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x199520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x199524: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x199524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x199528: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x199528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x19952c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199530: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x199530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199534: 0x27859288  addiu       $a1, $gp, -0x6D78
    ctx->pc = 0x199534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939272));
    // 0x199538: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x199538u;
    SET_GPR_U32(ctx, 31, 0x199540u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x199538u, 0x199540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199540u;
label_199540:
    // 0x199540: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x199540u;
    {
        const bool branch_taken_0x199540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199540) {
            ctx->pc = 0x199578u;
            goto label_199578;
        }
    }
    ctx->pc = 0x199548u;
    // 0x199548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19954c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x19954Cu;
    SET_GPR_U32(ctx, 31, 0x199554u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19954Cu, 0x199554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199554u;
label_199554:
    // 0x199554: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x199554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x199558: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x199558u;
    SET_GPR_U32(ctx, 31, 0x199560u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x199558u, 0x199560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199560u;
label_199560:
    // 0x199560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199564: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x199564u;
    SET_GPR_U32(ctx, 31, 0x19956Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x199564u, 0x19956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19956Cu;
label_19956c:
    // 0x19956c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x19956cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x199570: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x199570u;
    {
        const bool branch_taken_0x199570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199570) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x199578u;
label_199578:
    // 0x199578: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x199578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19957c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x19957cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x199580: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x199580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x199584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199588: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x199588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19958c: 0x2785928c  addiu       $a1, $gp, -0x6D74
    ctx->pc = 0x19958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939276));
    // 0x199590: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x199590u;
    SET_GPR_U32(ctx, 31, 0x199598u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x199590u, 0x199598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199598u;
label_199598:
    // 0x199598: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x199598u;
    {
        const bool branch_taken_0x199598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199598) {
            ctx->pc = 0x1995D0u;
            goto label_1995d0;
        }
    }
    ctx->pc = 0x1995A0u;
    // 0x1995a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1995a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995a4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1995A4u;
    SET_GPR_U32(ctx, 31, 0x1995ACu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1995A4u, 0x1995ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995ACu;
label_1995ac:
    // 0x1995ac: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1995acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1995b0: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1995B0u;
    SET_GPR_U32(ctx, 31, 0x1995B8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1995B0u, 0x1995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995B8u;
label_1995b8:
    // 0x1995b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1995b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995bc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1995BCu;
    SET_GPR_U32(ctx, 31, 0x1995C4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1995BCu, 0x1995C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995C4u;
label_1995c4:
    // 0x1995c4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1995c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1995c8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1995C8u;
    {
        const bool branch_taken_0x1995c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995c8) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x1995D0u;
label_1995d0:
    // 0x1995d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1995d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1995d4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1995d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1995d8: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x1995d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x1995dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1995dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1995e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1995e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1995e4: 0x27859290  addiu       $a1, $gp, -0x6D70
    ctx->pc = 0x1995e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939280));
    // 0x1995e8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1995E8u;
    SET_GPR_U32(ctx, 31, 0x1995F0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1995E8u, 0x1995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995F0u;
label_1995f0:
    // 0x1995f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1995F0u;
    {
        const bool branch_taken_0x1995f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1995f0) {
            ctx->pc = 0x199620u;
            goto label_199620;
        }
    }
    ctx->pc = 0x1995F8u;
    // 0x1995f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1995f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995fc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1995FCu;
    SET_GPR_U32(ctx, 31, 0x199604u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1995FCu, 0x199604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199604u;
label_199604:
    // 0x199604: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x199604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x199608: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x199608u;
    SET_GPR_U32(ctx, 31, 0x199610u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x199608u, 0x199610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199610u;
label_199610:
    // 0x199610: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x199610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199614: 0xac6200ec  sw          $v0, 0xEC($v1)
    ctx->pc = 0x199614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 2));
    // 0x199618: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x199618u;
    {
        const bool branch_taken_0x199618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199618) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x199620u;
label_199620:
    // 0x199620: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x199620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x199624: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x199624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x199628: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x199628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x19962c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199630: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x199630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199634: 0x27859294  addiu       $a1, $gp, -0x6D6C
    ctx->pc = 0x199634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939284));
    // 0x199638: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x199638u;
    SET_GPR_U32(ctx, 31, 0x199640u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x199638u, 0x199640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199640u;
label_199640:
    // 0x199640: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x199640u;
    {
        const bool branch_taken_0x199640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199640) {
            ctx->pc = 0x19967Cu;
            goto label_19967c;
        }
    }
    ctx->pc = 0x199648u;
    // 0x199648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19964c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x19964Cu;
    SET_GPR_U32(ctx, 31, 0x199654u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x19964Cu, 0x199654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199654u;
label_199654:
    // 0x199654: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x199654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x199658: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x199658u;
    SET_GPR_U32(ctx, 31, 0x199660u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x199658u, 0x199660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199660u;
label_199660:
    // 0x199660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199664: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x199664u;
    SET_GPR_U32(ctx, 31, 0x19966Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x199664u, 0x19966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19966Cu;
label_19966c:
    // 0x19966c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199670: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x199670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x199674: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x199674u;
    {
        const bool branch_taken_0x199674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199674) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x19967Cu;
label_19967c:
    // 0x19967c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19967cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x199680: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x199680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x199684: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x199684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x199688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19968c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19968cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199690: 0x27859298  addiu       $a1, $gp, -0x6D68
    ctx->pc = 0x199690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x199694: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x199694u;
    SET_GPR_U32(ctx, 31, 0x19969Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x199694u, 0x19969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19969Cu;
label_19969c:
    // 0x19969c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19969Cu;
    {
        const bool branch_taken_0x19969c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19969c) {
            ctx->pc = 0x1996C4u;
            goto label_1996c4;
        }
    }
    ctx->pc = 0x1996A4u;
    // 0x1996a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1996a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996a8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1996A8u;
    SET_GPR_U32(ctx, 31, 0x1996B0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1996A8u, 0x1996B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996B0u;
label_1996b0:
    // 0x1996b0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1996b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1996b4: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1996B4u;
    SET_GPR_U32(ctx, 31, 0x1996BCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1996B4u, 0x1996BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996BCu;
label_1996bc:
    // 0x1996bc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1996bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1996c0: 0xac6200f4  sw          $v0, 0xF4($v1)
    ctx->pc = 0x1996c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
label_1996c4:
    // 0x1996c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1996c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1996c8:
    // 0x1996c8: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x1996c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1996cc: 0x1440ff23  bnez        $v0, . + 4 + (-0xDD << 2)
    ctx->pc = 0x1996CCu;
    {
        const bool branch_taken_0x1996cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1996cc) {
            ctx->pc = 0x19935Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19935c;
        }
    }
    ctx->pc = 0x1996D4u;
    // 0x1996d4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1996d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1996d8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1996D8u;
    SET_GPR_U32(ctx, 31, 0x1996E0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1996D8u, 0x1996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996E0u;
label_1996e0:
    // 0x1996e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1996e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996e4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1996e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1996e8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1996e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1996ec: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1996ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1996f0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1996F0u;
    SET_GPR_U32(ctx, 31, 0x1996F8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1996F0u, 0x1996F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996F8u;
label_1996f8:
    // 0x1996f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1996f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1996fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1996fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199700: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x199700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x199704: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x199704u;
    SET_GPR_U32(ctx, 31, 0x19970Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x199704u, 0x19970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19970Cu;
label_19970c:
    // 0x19970c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x19970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x199710: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x199710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x199714: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199714u;
    {
        const bool branch_taken_0x199714 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x199714) {
            ctx->pc = 0x199730u;
            goto label_199730;
        }
    }
    ctx->pc = 0x19971Cu;
    // 0x19971c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19971cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199720: 0x0  nop
    ctx->pc = 0x199720u;
    // NOP
    // 0x199724: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x199724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199728: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199728u;
    {
        const bool branch_taken_0x199728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199728) {
            ctx->pc = 0x19974Cu;
            goto label_19974c;
        }
    }
    ctx->pc = 0x199730u;
label_199730:
    // 0x199730: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x199730u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x199734: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199738: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x199738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19973c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19973cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199740: 0x0  nop
    ctx->pc = 0x199740u;
    // NOP
    // 0x199744: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x199744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199748: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x199748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19974c:
    // 0x19974c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x19974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x199750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199754: 0x0  nop
    ctx->pc = 0x199754u;
    // NOP
    // 0x199758: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x199758u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19975c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x19975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x199760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199764: 0x0  nop
    ctx->pc = 0x199764u;
    // NOP
    // 0x199768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x199768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19976c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199770: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x199774: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x199774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199778: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x199778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19977c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x19977cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x199780: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x199780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199784: 0xc06479c  jal         func_191E70
    ctx->pc = 0x199784u;
    SET_GPR_U32(ctx, 31, 0x19978Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x199784u, 0x19978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19978Cu;
label_19978c:
    // 0x19978c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19978cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199790: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x199790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199794: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x199798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19979c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19979Cu;
    SET_GPR_U32(ctx, 31, 0x1997A4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19979Cu, 0x1997A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997A4u;
label_1997a4:
    // 0x1997a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1997a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1997a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1997a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997ac: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1997acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1997b0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1997B0u;
    SET_GPR_U32(ctx, 31, 0x1997B8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1997B0u, 0x1997B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997B8u;
label_1997b8:
    // 0x1997b8: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1997b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1997bc: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x1997bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1997c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1997c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1997c4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1997c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1997c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1997c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1997cc: 0x0  nop
    ctx->pc = 0x1997ccu;
    // NOP
    // 0x1997d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1997d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1997d4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1997d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1997d8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1997d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1997dc: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x1997dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x1997e0: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1997e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1997e4: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x1997e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1997e8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1997e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1997ec: 0xc46100d8  lwc1        $f1, 0xD8($v1)
    ctx->pc = 0x1997ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1997f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1997f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1997f4: 0x0  nop
    ctx->pc = 0x1997f4u;
    // NOP
    // 0x1997f8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1997f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1997fc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1997fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x199800: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x199800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199804: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x199804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x199808: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x19980c: 0xdf8392b8  ld          $v1, -0x6D48($gp)
    ctx->pc = 0x19980cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x199810: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x199810u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x199814: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x199814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x199818: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x199818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19981c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x19981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199820: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x199820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x199824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199828: 0x0  nop
    ctx->pc = 0x199828u;
    // NOP
    // 0x19982c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19982cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x199830: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x199830u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x199834: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x199834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199838: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x199838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x19983c: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x19983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x199840: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x199840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199844: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x199844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199848: 0xc46100d8  lwc1        $f1, 0xD8($v1)
    ctx->pc = 0x199848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19984c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19984cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199850: 0x0  nop
    ctx->pc = 0x199850u;
    // NOP
    // 0x199854: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x199854u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x199858: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x199858u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x19985c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x19985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199860: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x199860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x199864: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x199864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199868: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x199868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19986c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19986cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199878: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x199878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19987c: 0x3e00008  jr          $ra
    ctx->pc = 0x19987Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19987Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199884u;
    // 0x199884: 0x0  nop
    ctx->pc = 0x199884u;
    // NOP
    // 0x199888: 0x0  nop
    ctx->pc = 0x199888u;
    // NOP
    // 0x19988c: 0x0  nop
    ctx->pc = 0x19988cu;
    // NOP
    ctx->pc = 0x199890u;
}
