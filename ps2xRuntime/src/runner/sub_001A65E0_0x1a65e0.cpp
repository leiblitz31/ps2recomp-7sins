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

// Function: sub_001A65E0
// Address: 0x1a65e0 - 0x1a6d50
void sub_001A65E0_0x1a65e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A65E0_0x1a65e0");
#endif

    switch (ctx->pc) {
        case 0x1a6644u: goto label_1a6644;
        case 0x1a665cu: goto label_1a665c;
        case 0x1a6670u: goto label_1a6670;
        case 0x1a668cu: goto label_1a668c;
        case 0x1a6694u: goto label_1a6694;
        case 0x1a6718u: goto label_1a6718;
        case 0x1a6880u: goto label_1a6880;
        case 0x1a68a4u: goto label_1a68a4;
        case 0x1a68b8u: goto label_1a68b8;
        case 0x1a68c4u: goto label_1a68c4;
        case 0x1a68e8u: goto label_1a68e8;
        case 0x1a693cu: goto label_1a693c;
        case 0x1a6970u: goto label_1a6970;
        case 0x1a6994u: goto label_1a6994;
        case 0x1a69a0u: goto label_1a69a0;
        case 0x1a6a10u: goto label_1a6a10;
        case 0x1a6a1cu: goto label_1a6a1c;
        case 0x1a6a40u: goto label_1a6a40;
        case 0x1a6a54u: goto label_1a6a54;
        case 0x1a6ad8u: goto label_1a6ad8;
        case 0x1a6af0u: goto label_1a6af0;
        case 0x1a6b00u: goto label_1a6b00;
        case 0x1a6b10u: goto label_1a6b10;
        case 0x1a6b20u: goto label_1a6b20;
        case 0x1a6b48u: goto label_1a6b48;
        case 0x1a6b54u: goto label_1a6b54;
        case 0x1a6b64u: goto label_1a6b64;
        case 0x1a6b74u: goto label_1a6b74;
        case 0x1a6b84u: goto label_1a6b84;
        case 0x1a6bacu: goto label_1a6bac;
        case 0x1a6bb8u: goto label_1a6bb8;
        case 0x1a6bc8u: goto label_1a6bc8;
        case 0x1a6bd8u: goto label_1a6bd8;
        case 0x1a6be8u: goto label_1a6be8;
        case 0x1a6c10u: goto label_1a6c10;
        case 0x1a6c60u: goto label_1a6c60;
        case 0x1a6ca0u: goto label_1a6ca0;
        case 0x1a6ce0u: goto label_1a6ce0;
        case 0x1a6d10u: goto label_1a6d10;
        case 0x1a6d40u: goto label_1a6d40;
        default: break;
    }

    ctx->pc = 0x1a65e0u;

    // 0x1a65e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a65e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a65e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a65e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a65e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a65e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a65ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a65ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a65f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a65f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a65f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a65f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a65f8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1a65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1a65fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a65fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6600: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6604: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a6604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6608: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a660c: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x1a660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a6610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6614: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6614u;
    {
        const bool branch_taken_0x1a6614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6614) {
            ctx->pc = 0x1A6620u;
            goto label_1a6620;
        }
    }
    ctx->pc = 0x1A661Cu;
    // 0x1a661c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a661cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6620:
    // 0x1a6620: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a6620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a6624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6628: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1a6628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a662c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6630: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6634: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1a6634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1a6638: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a6638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a663c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A663Cu;
    SET_GPR_U32(ctx, 31, 0x1A6644u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A663Cu, 0x1A6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6644u;
label_1a6644:
    // 0x1a6644: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6648: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a664c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a6650: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a6650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a6654: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A6654u;
    SET_GPR_U32(ctx, 31, 0x1A665Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A6654u, 0x1A665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A665Cu;
label_1a665c:
    // 0x1a665c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a665cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a6660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6664: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x1a6664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1a6668: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1A6668u;
    SET_GPR_U32(ctx, 31, 0x1A6670u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1A6668u, 0x1A6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6670u;
label_1a6670:
    // 0x1a6670: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a6670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a6674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6678: 0x0  nop
    ctx->pc = 0x1a6678u;
    // NOP
    // 0x1a667c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a667cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1a6680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a6680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6684: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1A6684u;
    {
        const bool branch_taken_0x1a6684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6684) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A668Cu;
label_1a668c:
    // 0x1a668c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1A668Cu;
    SET_GPR_U32(ctx, 31, 0x1A6694u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1A668Cu, 0x1A6694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6694u;
label_1a6694:
    // 0x1a6694: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6694u;
    {
        const bool branch_taken_0x1a6694 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a6694) {
            ctx->pc = 0x1A66B0u;
            goto label_1a66b0;
        }
    }
    ctx->pc = 0x1A669Cu;
    // 0x1a669c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a669cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a66a0: 0x0  nop
    ctx->pc = 0x1a66a0u;
    // NOP
    // 0x1a66a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a66a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a66a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A66A8u;
    {
        const bool branch_taken_0x1a66a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a66a8) {
            ctx->pc = 0x1A66CCu;
            goto label_1a66cc;
        }
    }
    ctx->pc = 0x1A66B0u;
label_1a66b0:
    // 0x1a66b0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a66b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a66b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a66b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a66b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a66b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a66bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a66bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a66c0: 0x0  nop
    ctx->pc = 0x1a66c0u;
    // NOP
    // 0x1a66c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a66c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a66c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a66c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a66cc:
    // 0x1a66cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1a66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1a66d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a66d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a66d4: 0x0  nop
    ctx->pc = 0x1a66d4u;
    // NOP
    // 0x1a66d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a66d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a66dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a66e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a66e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a66e4: 0x0  nop
    ctx->pc = 0x1a66e4u;
    // NOP
    // 0x1a66e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a66e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a66ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a66f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a66f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a66f4: 0x0  nop
    ctx->pc = 0x1a66f4u;
    // NOP
    // 0x1a66f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a66f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a66fc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1a66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1a6700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6704: 0x0  nop
    ctx->pc = 0x1a6704u;
    // NOP
    // 0x1a6708: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a6708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a670c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a670cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a6710: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1A6710u;
    SET_GPR_U32(ctx, 31, 0x1A6718u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1A6710u, 0x1A6718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6718u;
label_1a6718:
    // 0x1a6718: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6718u;
    {
        const bool branch_taken_0x1a6718 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a6718) {
            ctx->pc = 0x1A6734u;
            goto label_1a6734;
        }
    }
    ctx->pc = 0x1A6720u;
    // 0x1a6720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6724: 0x0  nop
    ctx->pc = 0x1a6724u;
    // NOP
    // 0x1a6728: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a6728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a672c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A672Cu;
    {
        const bool branch_taken_0x1a672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a672c) {
            ctx->pc = 0x1A6750u;
            goto label_1a6750;
        }
    }
    ctx->pc = 0x1A6734u;
label_1a6734:
    // 0x1a6734: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a6734u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a6738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a6738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a673c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a673cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a6740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a6740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6744: 0x0  nop
    ctx->pc = 0x1a6744u;
    // NOP
    // 0x1a6748: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a6748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a674c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a674cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a6750:
    // 0x1a6750: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1a6750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1a6754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6758: 0x0  nop
    ctx->pc = 0x1a6758u;
    // NOP
    // 0x1a675c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a675cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a6760: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a6764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6768: 0x0  nop
    ctx->pc = 0x1a6768u;
    // NOP
    // 0x1a676c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a676cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a6770: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6778: 0x0  nop
    ctx->pc = 0x1a6778u;
    // NOP
    // 0x1a677c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a677cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a6780: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a6780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a6784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6788: 0x0  nop
    ctx->pc = 0x1a6788u;
    // NOP
    // 0x1a678c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a678cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a6790: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1a6790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a6794: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1a6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a679c: 0x0  nop
    ctx->pc = 0x1a679cu;
    // NOP
    // 0x1a67a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a67a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a67a4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1A67A4u;
    {
        const bool branch_taken_0x1a67a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a67a4) {
            ctx->pc = 0x1A67C8u;
            goto label_1a67c8;
        }
    }
    ctx->pc = 0x1A67ACu;
    // 0x1a67ac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a67acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a67b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a67b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a67b4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1a67b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a67b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a67b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a67bc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1a67bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1a67c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A67C0u;
    {
        const bool branch_taken_0x1a67c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a67c0) {
            ctx->pc = 0x1A67E0u;
            goto label_1a67e0;
        }
    }
    ctx->pc = 0x1A67C8u;
label_1a67c8:
    // 0x1a67c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a67cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a67ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a67d0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1a67d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a67d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a67d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a67d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a67d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a67dc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1a67dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1a67e0:
    // 0x1a67e0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1a67e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a67e4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1a67e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a67e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a67e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a67ec: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a67ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a67f0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1a67f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a67f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a67f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a67f8: 0x0  nop
    ctx->pc = 0x1a67f8u;
    // NOP
    // 0x1a67fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a67fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6800: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6800u;
    {
        const bool branch_taken_0x1a6800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6800) {
            ctx->pc = 0x1A6824u;
            goto label_1a6824;
        }
    }
    ctx->pc = 0x1A6808u;
    // 0x1a6808: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a6808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a680c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a680cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6810: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1a6810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6814: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6818: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1a6818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1a681c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A681Cu;
    {
        const bool branch_taken_0x1a681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a681c) {
            ctx->pc = 0x1A683Cu;
            goto label_1a683c;
        }
    }
    ctx->pc = 0x1A6824u;
label_1a6824:
    // 0x1a6824: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a6824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a6828: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a682c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1a682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6830: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a6830u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a6834: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6838: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1a6838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1a683c:
    // 0x1a683c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1a683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6840: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1a6840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6844: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a6848: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1a6848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a684c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6850: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1a6850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6854: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a6854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6858: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a6858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a685c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a685cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a6860: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6864: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1a6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6868: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1a6868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a686c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a686cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a6870: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1a6870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a6874: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a6874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6878: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A6878u;
    SET_GPR_U32(ctx, 31, 0x1A6880u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A6878u, 0x1A6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6880u;
label_1a6880:
    // 0x1a6880: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6884: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a6884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6888: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a688c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a6890: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1a6890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x1a6894: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a6894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a6898: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a6898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x1a689c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A689Cu;
    SET_GPR_U32(ctx, 31, 0x1A68A4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A689Cu, 0x1A68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68A4u;
label_1a68a4:
    // 0x1a68a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a68a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a68a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68ac: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1a68acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1a68b0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1A68B0u;
    SET_GPR_U32(ctx, 31, 0x1A68B8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1A68B0u, 0x1A68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68B8u;
label_1a68b8:
    // 0x1a68b8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a68bc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A68BCu;
    SET_GPR_U32(ctx, 31, 0x1A68C4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A68BCu, 0x1A68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68C4u;
label_1a68c4:
    // 0x1a68c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a68c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68c8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a68cc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a68d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a68d4: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1a68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x1a68d8: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a68d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a68dc: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a68dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x1a68e0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A68E0u;
    SET_GPR_U32(ctx, 31, 0x1A68E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A68E0u, 0x1A68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68E8u;
label_1a68e8:
    // 0x1a68e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a68ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a68f0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a68f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a68f4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1a68f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a68f8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1a68f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a68fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a68fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6900: 0x0  nop
    ctx->pc = 0x1a6900u;
    // NOP
    // 0x1a6904: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a6904u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a6908: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x1a6908u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a690c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a690cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6910: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a6910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a6914: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x1a6914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6918: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1a6918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a691c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a691cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6920: 0x0  nop
    ctx->pc = 0x1a6920u;
    // NOP
    // 0x1a6924: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a6924u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a6928: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x1a6928u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a692c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a6930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6934: 0xc08c208  jal         func_230820
    ctx->pc = 0x1A6934u;
    SET_GPR_U32(ctx, 31, 0x1A693Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1A6934u, 0x1A693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A693Cu;
label_1a693c:
    // 0x1a693c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6944: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1a6944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6948: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a694c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a6950: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a6950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6954: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6958: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1a6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a695c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a695cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6960: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1a6960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a6964: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a6964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6968: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A6968u;
    SET_GPR_U32(ctx, 31, 0x1A6970u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A6968u, 0x1A6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6970u;
label_1a6970:
    // 0x1a6970: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6974: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a6974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6978: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a6978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a697c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a6980: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1a6980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x1a6984: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a6984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a6988: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a6988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x1a698c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A698Cu;
    SET_GPR_U32(ctx, 31, 0x1A6994u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A698Cu, 0x1A6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6994u;
label_1a6994:
    // 0x1a6994: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1a6994u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6998: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1A6998u;
    SET_GPR_U32(ctx, 31, 0x1A69A0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1A6998u, 0x1A69A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69A0u;
label_1a69a0:
    // 0x1a69a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A69A0u;
    {
        const bool branch_taken_0x1a69a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a69a0) {
            ctx->pc = 0x1A69BCu;
            goto label_1a69bc;
        }
    }
    ctx->pc = 0x1A69A8u;
    // 0x1a69a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a69a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a69ac: 0x0  nop
    ctx->pc = 0x1a69acu;
    // NOP
    // 0x1a69b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a69b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a69b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A69B4u;
    {
        const bool branch_taken_0x1a69b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a69b4) {
            ctx->pc = 0x1A69D8u;
            goto label_1a69d8;
        }
    }
    ctx->pc = 0x1A69BCu;
label_1a69bc:
    // 0x1a69bc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a69c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a69c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a69c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a69c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a69c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a69c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a69cc: 0x0  nop
    ctx->pc = 0x1a69ccu;
    // NOP
    // 0x1a69d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a69d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a69d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a69d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a69d8:
    // 0x1a69d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1a69dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a69dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a69e0: 0x0  nop
    ctx->pc = 0x1a69e0u;
    // NOP
    // 0x1a69e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a69e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a69e8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1a69ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a69ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a69f0: 0x0  nop
    ctx->pc = 0x1a69f0u;
    // NOP
    // 0x1a69f4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1a69f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a69f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a69f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a69fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a00: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1a6a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a6a04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a6a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6a08: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1A6A08u;
    SET_GPR_U32(ctx, 31, 0x1A6A10u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1A6A08u, 0x1A6A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A10u;
label_1a6a10:
    // 0x1a6a10: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a6a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6a14: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A6A14u;
    SET_GPR_U32(ctx, 31, 0x1A6A1Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A6A14u, 0x1A6A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A1Cu;
label_1a6a1c:
    // 0x1a6a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a20: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a6a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6a24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a6a28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a6a2c: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1a6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x1a6a30: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a6a34: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a6a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x1a6a38: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A6A38u;
    SET_GPR_U32(ctx, 31, 0x1A6A40u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A6A38u, 0x1A6A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A40u;
label_1a6a40:
    // 0x1a6a40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a6a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a48: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1a6a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a6a4c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1A6A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A6A54u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1A6A4Cu, 0x1A6A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A54u;
label_1a6a54:
    // 0x1a6a54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a6a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a6a58:
    // 0x1a6a58: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x1a6a58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a6a5c: 0x1460ff0b  bnez        $v1, . + 4 + (-0xF5 << 2)
    ctx->pc = 0x1A6A5Cu;
    {
        const bool branch_taken_0x1a6a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6a5c) {
            ctx->pc = 0x1A668Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a668c;
        }
    }
    ctx->pc = 0x1A6A64u;
    // 0x1a6a64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a6a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6a68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a6a68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6a6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a6a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6a78: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1a6a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a6a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6A84u;
    // 0x1a6a84: 0x0  nop
    ctx->pc = 0x1a6a84u;
    // NOP
    // 0x1a6a88: 0x0  nop
    ctx->pc = 0x1a6a88u;
    // NOP
    // 0x1a6a8c: 0x0  nop
    ctx->pc = 0x1a6a8cu;
    // NOP
    // 0x1a6a90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a6aa0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a6aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1a6aa4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6aa8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6aac: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1A6AACu;
    {
        const bool branch_taken_0x1a6aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6aac) {
            ctx->pc = 0x1A6C10u;
            goto label_1a6c10;
        }
    }
    ctx->pc = 0x1A6AB4u;
    // 0x1a6ab4: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1a6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a6ab8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6abc: 0x10030054  beq         $zero, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1A6ABCu;
    {
        const bool branch_taken_0x1a6abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a6abc) {
            ctx->pc = 0x1A6C10u;
            goto label_1a6c10;
        }
    }
    ctx->pc = 0x1A6AC4u;
    // 0x1a6ac4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a6ac8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6acc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1a6accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a6ad0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A6AD0u;
    SET_GPR_U32(ctx, 31, 0x1A6AD8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A6AD0u, 0x1A6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AD8u;
label_1a6ad8:
    // 0x1a6ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6adc: 0x1010004c  beq         $zero, $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1A6ADCu;
    {
        const bool branch_taken_0x1a6adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a6adc) {
            ctx->pc = 0x1A6C10u;
            goto label_1a6c10;
        }
    }
    ctx->pc = 0x1A6AE4u;
    // 0x1a6ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ae8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A6AE8u;
    SET_GPR_U32(ctx, 31, 0x1A6AF0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A6AE8u, 0x1A6AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AF0u;
label_1a6af0:
    // 0x1a6af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6af8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A6AF8u;
    SET_GPR_U32(ctx, 31, 0x1A6B00u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A6AF8u, 0x1A6B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B00u;
label_1a6b00:
    // 0x1a6b00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b08: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A6B08u;
    SET_GPR_U32(ctx, 31, 0x1A6B10u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A6B08u, 0x1A6B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B10u;
label_1a6b10:
    // 0x1a6b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b18: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A6B18u;
    SET_GPR_U32(ctx, 31, 0x1A6B20u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A6B18u, 0x1A6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B20u;
label_1a6b20:
    // 0x1a6b20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6b24: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a6b28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6b2c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6b30: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a6b30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a6b34: 0x0  nop
    ctx->pc = 0x1a6b34u;
    // NOP
    // 0x1a6b38: 0x0  nop
    ctx->pc = 0x1a6b38u;
    // NOP
    // 0x1a6b3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a6b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a6b40: 0xc094de0  jal         func_253780
    ctx->pc = 0x1A6B40u;
    SET_GPR_U32(ctx, 31, 0x1A6B48u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1A6B40u, 0x1A6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B48u;
label_1a6b48:
    // 0x1a6b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b4c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A6B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B54u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A6B4Cu, 0x1A6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B54u;
label_1a6b54:
    // 0x1a6b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6b5c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A6B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B64u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A6B5Cu, 0x1A6B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B64u;
label_1a6b64:
    // 0x1a6b64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b6c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B74u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A6B6Cu, 0x1A6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B74u;
label_1a6b74:
    // 0x1a6b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6b7c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A6B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B84u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A6B7Cu, 0x1A6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B84u;
label_1a6b84:
    // 0x1a6b84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6b88: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a6b8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6b90: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a6b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6b94: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a6b94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a6b98: 0x0  nop
    ctx->pc = 0x1a6b98u;
    // NOP
    // 0x1a6b9c: 0x0  nop
    ctx->pc = 0x1a6b9cu;
    // NOP
    // 0x1a6ba0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a6ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a6ba4: 0xc094de0  jal         func_253780
    ctx->pc = 0x1A6BA4u;
    SET_GPR_U32(ctx, 31, 0x1A6BACu);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1A6BA4u, 0x1A6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BACu;
label_1a6bac:
    // 0x1a6bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bb0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A6BB0u;
    SET_GPR_U32(ctx, 31, 0x1A6BB8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A6BB0u, 0x1A6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BB8u;
label_1a6bb8:
    // 0x1a6bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bbc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a6bc0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A6BC0u;
    SET_GPR_U32(ctx, 31, 0x1A6BC8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A6BC0u, 0x1A6BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BC8u;
label_1a6bc8:
    // 0x1a6bc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bd0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A6BD0u;
    SET_GPR_U32(ctx, 31, 0x1A6BD8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A6BD0u, 0x1A6BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BD8u;
label_1a6bd8:
    // 0x1a6bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a6bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a6be0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A6BE0u;
    SET_GPR_U32(ctx, 31, 0x1A6BE8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A6BE0u, 0x1A6BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BE8u;
label_1a6be8:
    // 0x1a6be8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6bec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a6becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a6bf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6bf4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a6bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6bf8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a6bf8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a6bfc: 0x0  nop
    ctx->pc = 0x1a6bfcu;
    // NOP
    // 0x1a6c00: 0x0  nop
    ctx->pc = 0x1a6c00u;
    // NOP
    // 0x1a6c04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a6c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a6c08: 0xc094de0  jal         func_253780
    ctx->pc = 0x1A6C08u;
    SET_GPR_U32(ctx, 31, 0x1A6C10u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1A6C08u, 0x1A6C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C10u;
label_1a6c10:
    // 0x1a6c10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6c14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6c1c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a6c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a6c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6C28u;
    // 0x1a6c28: 0x0  nop
    ctx->pc = 0x1a6c28u;
    // NOP
    // 0x1a6c2c: 0x0  nop
    ctx->pc = 0x1a6c2cu;
    // NOP
    // 0x1a6c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a6c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a6c3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a6c40: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1a6c40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a6c44: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1a6c44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a6c48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a6c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6c4c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6c50: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1a6c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a6c54: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1a6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a6c58: 0xc064e90  jal         func_193A40
    ctx->pc = 0x1A6C58u;
    SET_GPR_U32(ctx, 31, 0x1A6C60u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x1A6C58u, 0x1A6C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C60u;
label_1a6c60:
    // 0x1a6c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6c64: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a6c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a6c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6C70u;
    // 0x1a6c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a6c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a6c7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a6c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a6c80: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1a6c80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a6c84: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1a6c84u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a6c88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6c8c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a6c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6c90: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1a6c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a6c94: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1a6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a6c98: 0xc064f2c  jal         func_193CB0
    ctx->pc = 0x1A6C98u;
    SET_GPR_U32(ctx, 31, 0x1A6CA0u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x1A6C98u, 0x1A6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CA0u;
label_1a6ca0:
    // 0x1a6ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6ca4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a6ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a6ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6CB0u;
    // 0x1a6cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6cb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a6cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a6cbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a6cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a6cc0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1a6cc0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a6cc4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1a6cc4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a6cc8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6ccc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a6cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6cd0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1a6cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a6cd4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1a6cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a6cd8: 0xc064ff8  jal         func_193FE0
    ctx->pc = 0x1A6CD8u;
    SET_GPR_U32(ctx, 31, 0x1A6CE0u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x1A6CD8u, 0x1A6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CE0u;
label_1a6ce0:
    // 0x1a6ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6ce4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a6ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a6ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6CF0u;
    // 0x1a6cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a6cfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a6cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a6d00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a6d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6d08: 0xc0650f0  jal         func_1943C0
    ctx->pc = 0x1A6D08u;
    SET_GPR_U32(ctx, 31, 0x1A6D10u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x1A6D08u, 0x1A6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D10u;
label_1a6d10:
    // 0x1a6d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6d14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a6d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a6d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6D20u;
    // 0x1a6d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a6d2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a6d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a6d30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a6d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6d38: 0xc0650f4  jal         func_1943D0
    ctx->pc = 0x1A6D38u;
    SET_GPR_U32(ctx, 31, 0x1A6D40u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x1A6D38u, 0x1A6D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D40u;
label_1a6d40:
    // 0x1a6d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6d44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a6d44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a6d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6D50u;
}
