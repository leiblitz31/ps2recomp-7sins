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

// Function: sub_00137440
// Address: 0x137440 - 0x1377f0
void sub_00137440_0x137440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137440_0x137440");
#endif

    switch (ctx->pc) {
        case 0x1374a0u: goto label_1374a0;
        case 0x1374bcu: goto label_1374bc;
        case 0x1374f0u: goto label_1374f0;
        case 0x137508u: goto label_137508;
        case 0x137524u: goto label_137524;
        case 0x137598u: goto label_137598;
        case 0x1375a8u: goto label_1375a8;
        case 0x1375b8u: goto label_1375b8;
        case 0x1375c8u: goto label_1375c8;
        case 0x1375d8u: goto label_1375d8;
        case 0x1375e4u: goto label_1375e4;
        case 0x1375f0u: goto label_1375f0;
        case 0x13760cu: goto label_13760c;
        case 0x137618u: goto label_137618;
        case 0x137628u: goto label_137628;
        case 0x13763cu: goto label_13763c;
        case 0x137650u: goto label_137650;
        case 0x13765cu: goto label_13765c;
        case 0x137668u: goto label_137668;
        case 0x137688u: goto label_137688;
        case 0x137694u: goto label_137694;
        case 0x1376a4u: goto label_1376a4;
        case 0x1376b4u: goto label_1376b4;
        case 0x1376c0u: goto label_1376c0;
        case 0x1376fcu: goto label_1376fc;
        case 0x13770cu: goto label_13770c;
        case 0x137724u: goto label_137724;
        case 0x137730u: goto label_137730;
        case 0x137744u: goto label_137744;
        case 0x137750u: goto label_137750;
        case 0x137760u: goto label_137760;
        case 0x137774u: goto label_137774;
        case 0x137790u: goto label_137790;
        case 0x1377a0u: goto label_1377a0;
        case 0x1377b0u: goto label_1377b0;
        case 0x1377c0u: goto label_1377c0;
        default: break;
    }

    ctx->pc = 0x137440u;

    // 0x137440: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x137440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x137444: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x137444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x137448: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x137448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13744c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x137450: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x137450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x137454: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x137454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x137458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13745c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137464: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x137464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x137468: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x137468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x13746c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x13746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x137470: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x137470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x137474: 0x146000d2  bnez        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x137474u;
    {
        const bool branch_taken_0x137474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137474) {
            ctx->pc = 0x1377C0u;
            goto label_1377c0;
        }
    }
    ctx->pc = 0x13747Cu;
    // 0x13747c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x13747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x137480: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137484: 0x1002003d  beq         $zero, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x137484u;
    {
        const bool branch_taken_0x137484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x137484) {
            ctx->pc = 0x13757Cu;
            goto label_13757c;
        }
    }
    ctx->pc = 0x13748Cu;
    // 0x13748c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x13748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x137490: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x137490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137494: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x137494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x137498: 0xc085538  jal         func_2154E0
    ctx->pc = 0x137498u;
    SET_GPR_U32(ctx, 31, 0x1374A0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x137498u, 0x1374A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1374A0u;
label_1374a0:
    // 0x1374a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1374a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374a4: 0x12800035  beqz        $s4, . + 4 + (0x35 << 2)
    ctx->pc = 0x1374A4u;
    {
        const bool branch_taken_0x1374a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1374a4) {
            ctx->pc = 0x13757Cu;
            goto label_13757c;
        }
    }
    ctx->pc = 0x1374ACu;
    // 0x1374ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1374acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1374b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374b4: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1374B4u;
    SET_GPR_U32(ctx, 31, 0x1374BCu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1374B4u, 0x1374BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1374BCu;
label_1374bc:
    // 0x1374bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1374bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374c0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1374c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1374c4: 0x248426c0  addiu       $a0, $a0, 0x26C0
    ctx->pc = 0x1374c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9920));
    // 0x1374c8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1374c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1374cc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1374ccu;
    { uint32_t bits = FAST_READ32(0x4E26C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1374d0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1374d0u;
    { uint32_t bits = FAST_READ32(0x4E26C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1374d4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1374d4u;
    { uint32_t bits = FAST_READ32(0x4E26C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374d8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1374d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1374dc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1374dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1374e0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1374e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1374e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1374e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1374E8u;
    {
        const bool branch_taken_0x1374e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1374e8) {
            ctx->pc = 0x137560u;
            goto label_137560;
        }
    }
    ctx->pc = 0x1374F0u;
label_1374f0:
    // 0x1374f0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1374f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1374f4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1374f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1374f8: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x1374f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1374fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1374fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137500: 0xc040a90  jal         func_102A40
    ctx->pc = 0x137500u;
    SET_GPR_U32(ctx, 31, 0x137508u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x137500u, 0x137508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137508u;
label_137508:
    // 0x137508: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x137508u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13750c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13750cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x137510: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x137510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x137514: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x137514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x137518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13751c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x13751Cu;
    SET_GPR_U32(ctx, 31, 0x137524u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x13751Cu, 0x137524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137524u;
label_137524:
    // 0x137524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x137524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137528: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x137528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13752c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x13752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137530: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x137530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137534: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x137534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x137538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x137538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13753c: 0x0  nop
    ctx->pc = 0x13753cu;
    // NOP
    // 0x137540: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137544: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x137544u;
    {
        const bool branch_taken_0x137544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137544) {
            ctx->pc = 0x13755Cu;
            goto label_13755c;
        }
    }
    ctx->pc = 0x13754Cu;
    // 0x13754c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137550: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x137550u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x137554: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x137554u;
    {
        const bool branch_taken_0x137554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137554) {
            ctx->pc = 0x13756Cu;
            goto label_13756c;
        }
    }
    ctx->pc = 0x13755Cu;
label_13755c:
    // 0x13755c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13755cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137560:
    // 0x137560: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x137560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x137564: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x137564u;
    {
        const bool branch_taken_0x137564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137564) {
            ctx->pc = 0x1374F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1374f0;
        }
    }
    ctx->pc = 0x13756Cu;
label_13756c:
    // 0x13756c: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x13756cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x137570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137574: 0x10830092  beq         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x137574u;
    {
        const bool branch_taken_0x137574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137574) {
            ctx->pc = 0x1377C0u;
            goto label_1377c0;
        }
    }
    ctx->pc = 0x13757Cu;
label_13757c:
    // 0x13757c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x13757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x137580: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x137580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x137584: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x137584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x137588: 0x24a526d0  addiu       $a1, $a1, 0x26D0
    ctx->pc = 0x137588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9936));
    // 0x13758c: 0x27868c50  addiu       $a2, $gp, -0x73B0
    ctx->pc = 0x13758cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937680));
    // 0x137590: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x137590u;
    SET_GPR_U32(ctx, 31, 0x137598u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x137590u, 0x137598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137598u;
label_137598:
    // 0x137598: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x137598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13759c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1375a0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1375A0u;
    SET_GPR_U32(ctx, 31, 0x1375A8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1375A0u, 0x1375A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375A8u;
label_1375a8:
    // 0x1375a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1375a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1375ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1375acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375b0: 0xc040304  jal         func_100C10
    ctx->pc = 0x1375B0u;
    SET_GPR_U32(ctx, 31, 0x1375B8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1375B0u, 0x1375B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375B8u;
label_1375b8:
    // 0x1375b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1375b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1375bc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1375bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1375c0: 0xc1190f4  jal         func_4643D0
    ctx->pc = 0x1375C0u;
    SET_GPR_U32(ctx, 31, 0x1375C8u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x1375C0u, 0x1375C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375C8u;
label_1375c8:
    // 0x1375c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1375c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1375cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1375ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1375d0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1375D0u;
    SET_GPR_U32(ctx, 31, 0x1375D8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1375D0u, 0x1375D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375D8u;
label_1375d8:
    // 0x1375d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1375d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1375dc: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1375DCu;
    SET_GPR_U32(ctx, 31, 0x1375E4u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1375DCu, 0x1375E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375E4u;
label_1375e4:
    // 0x1375e4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1375e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1375e8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1375E8u;
    SET_GPR_U32(ctx, 31, 0x1375F0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1375E8u, 0x1375F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375F0u;
label_1375f0:
    // 0x1375f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1375f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1375f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1375f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1375f8: 0x24a526f0  addiu       $a1, $a1, 0x26F0
    ctx->pc = 0x1375f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9968));
    // 0x1375fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1375fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137600: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x137600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x137604: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x137604u;
    SET_GPR_U32(ctx, 31, 0x13760Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x137604u, 0x13760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13760Cu;
label_13760c:
    // 0x13760c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x13760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x137610: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x137610u;
    SET_GPR_U32(ctx, 31, 0x137618u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x137610u, 0x137618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137618u;
label_137618:
    // 0x137618: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x137618u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13761c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13761cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137620: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x137620u;
    SET_GPR_U32(ctx, 31, 0x137628u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x137620u, 0x137628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137628u;
label_137628:
    // 0x137628: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x137628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13762c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137634: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x137634u;
    SET_GPR_U32(ctx, 31, 0x13763Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x137634u, 0x13763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13763Cu;
label_13763c:
    // 0x13763c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13763cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137640: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x137640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x137644: 0x27858c58  addiu       $a1, $gp, -0x73A8
    ctx->pc = 0x137644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937688));
    // 0x137648: 0xc08e5d8  jal         func_239760
    ctx->pc = 0x137648u;
    SET_GPR_U32(ctx, 31, 0x137650u);
    ctx->pc = 0x239760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239760u, 0x137648u, 0x137650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137650u;
label_137650:
    // 0x137650: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x137650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x137654: 0xc041b48  jal         func_106D20
    ctx->pc = 0x137654u;
    SET_GPR_U32(ctx, 31, 0x13765Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x137654u, 0x13765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13765Cu;
label_13765c:
    // 0x13765c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x137660: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x137660u;
    SET_GPR_U32(ctx, 31, 0x137668u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x137660u, 0x137668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137668u;
label_137668:
    // 0x137668: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x137668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13766c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x13766cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x137670: 0x24a52700  addiu       $a1, $a1, 0x2700
    ctx->pc = 0x137670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9984));
    // 0x137674: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x137674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137678: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x137678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13767c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x13767cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137680: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x137680u;
    SET_GPR_U32(ctx, 31, 0x137688u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x137680u, 0x137688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137688u;
label_137688:
    // 0x137688: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x137688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13768c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13768Cu;
    SET_GPR_U32(ctx, 31, 0x137694u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13768Cu, 0x137694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137694u;
label_137694:
    // 0x137694: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x137694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x137698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13769c: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x13769Cu;
    SET_GPR_U32(ctx, 31, 0x1376A4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x13769Cu, 0x1376A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376A4u;
label_1376a4:
    // 0x1376a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1376a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1376a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1376a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1376ac: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x1376ACu;
    SET_GPR_U32(ctx, 31, 0x1376B4u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1376ACu, 0x1376B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376B4u;
label_1376b4:
    // 0x1376b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1376b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1376b8: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x1376B8u;
    SET_GPR_U32(ctx, 31, 0x1376C0u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x1376B8u, 0x1376C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376C0u;
label_1376c0:
    // 0x1376c0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1376C0u;
    {
        const bool branch_taken_0x1376c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1376c0) {
            ctx->pc = 0x137780u;
            goto label_137780;
        }
    }
    ctx->pc = 0x1376C8u;
    // 0x1376c8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1376c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1376cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1376ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1376d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1376d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1376d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1376d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1376d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1376d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1376dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1376dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1376e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1376e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1376e4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1376e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1376e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1376e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1376ec: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1376ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1376f0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1376f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1376f4: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x1376F4u;
    SET_GPR_U32(ctx, 31, 0x1376FCu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1376F4u, 0x1376FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376FCu;
label_1376fc:
    // 0x1376fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1376fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137700: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x137700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137704: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x137704u;
    SET_GPR_U32(ctx, 31, 0x13770Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x137704u, 0x13770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13770Cu;
label_13770c:
    // 0x13770c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13770cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x137710: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x137710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137718: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x137718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13771c: 0xc041b24  jal         func_106C90
    ctx->pc = 0x13771Cu;
    SET_GPR_U32(ctx, 31, 0x137724u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x13771Cu, 0x137724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137724u;
label_137724:
    // 0x137724: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x137724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x137728: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x137728u;
    SET_GPR_U32(ctx, 31, 0x137730u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x137728u, 0x137730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137730u;
label_137730:
    // 0x137730: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x137730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137734: 0x27858c60  addiu       $a1, $gp, -0x73A0
    ctx->pc = 0x137734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937696));
    // 0x137738: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x137738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13773c: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x13773Cu;
    SET_GPR_U32(ctx, 31, 0x137744u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x13773Cu, 0x137744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137744u;
label_137744:
    // 0x137744: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x137744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x137748: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x137748u;
    SET_GPR_U32(ctx, 31, 0x137750u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x137748u, 0x137750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137750u;
label_137750:
    // 0x137750: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x137750u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137754: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x137754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137758: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x137758u;
    SET_GPR_U32(ctx, 31, 0x137760u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x137758u, 0x137760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137760u;
label_137760:
    // 0x137760: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x137760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137768: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x137768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13776c: 0xc041b24  jal         func_106C90
    ctx->pc = 0x13776Cu;
    SET_GPR_U32(ctx, 31, 0x137774u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x13776Cu, 0x137774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137774u;
label_137774:
    // 0x137774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137778: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x137778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13777c: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x13777cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
label_137780:
    // 0x137780: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x137780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x137784: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x137784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x137788: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x137788u;
    SET_GPR_U32(ctx, 31, 0x137790u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x137788u, 0x137790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137790u;
label_137790:
    // 0x137790: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x137790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x137794: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x137794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x137798: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x137798u;
    SET_GPR_U32(ctx, 31, 0x1377A0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x137798u, 0x1377A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377A0u;
label_1377a0:
    // 0x1377a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1377a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1377a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1377a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1377a8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1377A8u;
    SET_GPR_U32(ctx, 31, 0x1377B0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1377A8u, 0x1377B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377B0u;
label_1377b0:
    // 0x1377b0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1377b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1377b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1377b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1377b8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1377B8u;
    SET_GPR_U32(ctx, 31, 0x1377C0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1377B8u, 0x1377C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377C0u;
label_1377c0:
    // 0x1377c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1377c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1377c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1377c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1377c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1377c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1377cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1377ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1377d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1377d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1377d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1377d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1377d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1377d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1377dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1377dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1377e0: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1377e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1377e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1377E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1377E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1377ECu;
    // 0x1377ec: 0x0  nop
    ctx->pc = 0x1377ecu;
    // NOP
    ctx->pc = 0x1377f0u;
}
