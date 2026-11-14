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

// Function: sub_001853A0
// Address: 0x1853a0 - 0x185ec0
void sub_001853A0_0x1853a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001853A0_0x1853a0");
#endif

    switch (ctx->pc) {
        case 0x1853b8u: goto label_1853b8;
        case 0x18540cu: goto label_18540c;
        case 0x18541cu: goto label_18541c;
        case 0x1854b4u: goto label_1854b4;
        case 0x1854c0u: goto label_1854c0;
        case 0x1854e8u: goto label_1854e8;
        case 0x185518u: goto label_185518;
        case 0x185534u: goto label_185534;
        case 0x185678u: goto label_185678;
        case 0x18568cu: goto label_18568c;
        case 0x1856a8u: goto label_1856a8;
        case 0x1856c0u: goto label_1856c0;
        case 0x1856d4u: goto label_1856d4;
        case 0x185704u: goto label_185704;
        case 0x18571cu: goto label_18571c;
        case 0x185758u: goto label_185758;
        case 0x185784u: goto label_185784;
        case 0x1857a8u: goto label_1857a8;
        case 0x1857b8u: goto label_1857b8;
        case 0x1857c8u: goto label_1857c8;
        case 0x1857ecu: goto label_1857ec;
        case 0x185820u: goto label_185820;
        case 0x185830u: goto label_185830;
        case 0x185850u: goto label_185850;
        case 0x185860u: goto label_185860;
        case 0x185888u: goto label_185888;
        case 0x1858d4u: goto label_1858d4;
        case 0x185904u: goto label_185904;
        case 0x185918u: goto label_185918;
        case 0x185964u: goto label_185964;
        case 0x185984u: goto label_185984;
        case 0x1859acu: goto label_1859ac;
        case 0x185a20u: goto label_185a20;
        case 0x185a44u: goto label_185a44;
        case 0x185a74u: goto label_185a74;
        case 0x185ab4u: goto label_185ab4;
        case 0x185adcu: goto label_185adc;
        case 0x185b18u: goto label_185b18;
        case 0x185b40u: goto label_185b40;
        case 0x185ca8u: goto label_185ca8;
        case 0x185cd0u: goto label_185cd0;
        case 0x185d04u: goto label_185d04;
        case 0x185d34u: goto label_185d34;
        case 0x185d48u: goto label_185d48;
        case 0x185d58u: goto label_185d58;
        case 0x185d6cu: goto label_185d6c;
        case 0x185d88u: goto label_185d88;
        case 0x185dacu: goto label_185dac;
        case 0x185e00u: goto label_185e00;
        case 0x185e14u: goto label_185e14;
        case 0x185e34u: goto label_185e34;
        case 0x185e48u: goto label_185e48;
        case 0x185e68u: goto label_185e68;
        case 0x185e84u: goto label_185e84;
        default: break;
    }

    ctx->pc = 0x1853a0u;

    // 0x1853a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1853a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1853a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1853a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1853a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1853a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1853ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1853acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1853b0: 0xc0406b8  jal         func_101AE0
    ctx->pc = 0x1853B0u;
    SET_GPR_U32(ctx, 31, 0x1853B8u);
    ctx->pc = 0x101AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AE0u, 0x1853B0u, 0x1853B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853B8u;
label_1853b8:
    // 0x1853b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1853b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1853bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1853bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1853c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1853C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1853C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1853C8u;
    // 0x1853c8: 0x0  nop
    ctx->pc = 0x1853c8u;
    // NOP
    // 0x1853cc: 0x0  nop
    ctx->pc = 0x1853ccu;
    // NOP
    // 0x1853d0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1853d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1853d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1853d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1853d8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1853d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1853dc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1853dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1853e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1853e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1853e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1853e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1853e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1853e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1853ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1853ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1853f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1853f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1853f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1853f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1853f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1853f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1853fc: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x1853fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    // 0x185400: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185404: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x185404u;
    SET_GPR_U32(ctx, 31, 0x18540Cu);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x185404u, 0x18540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18540Cu;
label_18540c:
    // 0x18540c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x18540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185410: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x185410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x185414: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x185414u;
    SET_GPR_U32(ctx, 31, 0x18541Cu);
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x185414u, 0x18541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18541Cu;
label_18541c:
    // 0x18541c: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x18541Cu;
    {
        const bool branch_taken_0x18541c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18541c) {
            ctx->pc = 0x185694u;
            goto label_185694;
        }
    }
    ctx->pc = 0x185424u;
    // 0x185424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185428: 0x0  nop
    ctx->pc = 0x185428u;
    // NOP
    // 0x18542c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x18542cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x185430: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x185430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x185434: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x185434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185438: 0xc7809138  lwc1        $f0, -0x6EC8($gp)
    ctx->pc = 0x185438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18543c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18543cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x185440: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x185440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x185444: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x185444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x185448: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x185448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18544c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18544Cu;
    {
        const bool branch_taken_0x18544c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18544c) {
            ctx->pc = 0x185468u;
            goto label_185468;
        }
    }
    ctx->pc = 0x185454u;
    // 0x185454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185458: 0x0  nop
    ctx->pc = 0x185458u;
    // NOP
    // 0x18545c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18545cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185460: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x185460u;
    {
        const bool branch_taken_0x185460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185460) {
            ctx->pc = 0x185484u;
            goto label_185484;
        }
    }
    ctx->pc = 0x185468u;
label_185468:
    // 0x185468: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x185468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x18546c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x185470: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x185470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x185474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185478: 0x0  nop
    ctx->pc = 0x185478u;
    // NOP
    // 0x18547c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18547cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185480: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x185480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_185484:
    // 0x185484: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x185484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x185488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18548c: 0x0  nop
    ctx->pc = 0x18548cu;
    // NOP
    // 0x185490: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x185490u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x185494: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x185494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185498: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x185498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18549c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x18549cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1854a0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1854a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1854a4: 0x24450078  addiu       $a1, $v0, 0x78
    ctx->pc = 0x1854a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1854a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1854a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854ac: 0xc061284  jal         func_184A10
    ctx->pc = 0x1854ACu;
    SET_GPR_U32(ctx, 31, 0x1854B4u);
    ctx->pc = 0x184A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A10u, 0x1854ACu, 0x1854B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854B4u;
label_1854b4:
    // 0x1854b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1854b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854b8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1854B8u;
    {
        const bool branch_taken_0x1854b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854b8) {
            ctx->pc = 0x18567Cu;
            goto label_18567c;
        }
    }
    ctx->pc = 0x1854C0u;
label_1854c0:
    // 0x1854c0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1854c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854c4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1854c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1854c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1854c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1854cc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1854ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1854d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1854d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854d4: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x1854d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1854d8: 0xc7ad0144  lwc1        $f13, 0x144($sp)
    ctx->pc = 0x1854d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1854dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1854dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1854e0: 0xc08c208  jal         func_230820
    ctx->pc = 0x1854E0u;
    SET_GPR_U32(ctx, 31, 0x1854E8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1854E0u, 0x1854E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854E8u;
label_1854e8:
    // 0x1854e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1854ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1854ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1854f0: 0x0  nop
    ctx->pc = 0x1854f0u;
    // NOP
    // 0x1854f4: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1854f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x1854f8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1854f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1854fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1854fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185500: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x185500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x185504: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x185504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185508: 0x27a70138  addiu       $a3, $sp, 0x138
    ctx->pc = 0x185508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x18550c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18550cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185510: 0xc08c688  jal         func_231A20
    ctx->pc = 0x185510u;
    SET_GPR_U32(ctx, 31, 0x185518u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x185510u, 0x185518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185518u;
label_185518:
    // 0x185518: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18551c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18551cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185520: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x185520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x185524: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x185524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185528: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x185528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x18552c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x18552Cu;
    SET_GPR_U32(ctx, 31, 0x185534u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x18552Cu, 0x185534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185534u;
label_185534:
    // 0x185534: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185538: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x18553c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18553cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185540: 0x0  nop
    ctx->pc = 0x185540u;
    // NOP
    // 0x185544: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x185544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185548: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x185548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18554c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18554cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185550: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x185550u;
    {
        const bool branch_taken_0x185550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185550) {
            ctx->pc = 0x185598u;
            goto label_185598;
        }
    }
    ctx->pc = 0x185558u;
    // 0x185558: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18555c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x18555cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x185560: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x185560u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185564: 0x0  nop
    ctx->pc = 0x185564u;
    // NOP
    // 0x185568: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x185568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18556c: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x18556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185570: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185570u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185574: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x185574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185578: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x185578u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18557c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18557cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x185580: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x185580u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185584: 0x0  nop
    ctx->pc = 0x185584u;
    // NOP
    // 0x185588: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x185588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18558c: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x18558cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x185590: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x185590u;
    {
        const bool branch_taken_0x185590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185590) {
            ctx->pc = 0x185604u;
            goto label_185604;
        }
    }
    ctx->pc = 0x185598u;
label_185598:
    // 0x185598: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18559c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x18559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1855a0: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1855a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1855a4: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x1855a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1855a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1855a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1855ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1855acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1855b0: 0x0  nop
    ctx->pc = 0x1855b0u;
    // NOP
    // 0x1855b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1855b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1855b8: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x1855b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1855bc: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1855bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1855c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1855c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1855c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1855c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1855c8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1855C8u;
    {
        const bool branch_taken_0x1855c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1855c8) {
            ctx->pc = 0x185604u;
            goto label_185604;
        }
    }
    ctx->pc = 0x1855D0u;
    // 0x1855d0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1855d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1855d4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1855d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1855d8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1855d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1855dc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1855dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1855e0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1855e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1855e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1855e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1855e8: 0x0  nop
    ctx->pc = 0x1855e8u;
    // NOP
    // 0x1855ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1855ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1855f0: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1855f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1855f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1855f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1855f8: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1855f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1855fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1855fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x185600: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x185600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_185604:
    // 0x185604: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x185604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18560c: 0x0  nop
    ctx->pc = 0x18560cu;
    // NOP
    // 0x185610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185614: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x185614u;
    {
        const bool branch_taken_0x185614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185614) {
            ctx->pc = 0x185630u;
            goto label_185630;
        }
    }
    ctx->pc = 0x18561Cu;
    // 0x18561c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18561cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185620: 0x0  nop
    ctx->pc = 0x185620u;
    // NOP
    // 0x185624: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x185624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x185628: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x185628u;
    {
        const bool branch_taken_0x185628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185628) {
            ctx->pc = 0x18565Cu;
            goto label_18565c;
        }
    }
    ctx->pc = 0x185630u;
label_185630:
    // 0x185630: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x185630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x185638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18563c: 0x0  nop
    ctx->pc = 0x18563cu;
    // NOP
    // 0x185640: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185644: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x185644u;
    {
        const bool branch_taken_0x185644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185644) {
            ctx->pc = 0x18565Cu;
            goto label_18565c;
        }
    }
    ctx->pc = 0x18564Cu;
    // 0x18564c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18564cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x185650: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x185650u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185654: 0x0  nop
    ctx->pc = 0x185654u;
    // NOP
    // 0x185658: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x185658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_18565c:
    // 0x18565c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x18565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185660: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x185660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185664: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x185664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x185668: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x185668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18566c: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x18566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185670: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x185670u;
    SET_GPR_U32(ctx, 31, 0x185678u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x185670u, 0x185678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185678u;
label_185678:
    // 0x185678: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x185678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18567c:
    // 0x18567c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x18567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185680: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x185680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x185684: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x185684u;
    SET_GPR_U32(ctx, 31, 0x18568Cu);
    ctx->pc = 0x1849F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1849F0u, 0x185684u, 0x18568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18568Cu;
label_18568c:
    // 0x18568c: 0x1662ff8c  bne         $s3, $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x18568Cu;
    {
        const bool branch_taken_0x18568c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x18568c) {
            ctx->pc = 0x1854C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1854c0;
        }
    }
    ctx->pc = 0x185694u;
label_185694:
    // 0x185694: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x185694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185698: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x185698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18569c: 0x24a40078  addiu       $a0, $a1, 0x78
    ctx->pc = 0x18569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x1856a0: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x1856A0u;
    SET_GPR_U32(ctx, 31, 0x1856A8u);
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x1856A0u, 0x1856A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856A8u;
label_1856a8:
    // 0x1856a8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1856A8u;
    {
        const bool branch_taken_0x1856a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1856a8) {
            ctx->pc = 0x1856D8u;
            goto label_1856d8;
        }
    }
    ctx->pc = 0x1856B0u;
    // 0x1856b0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1856b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1856b4: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x1856b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x1856b8: 0xc0618ec  jal         func_1863B0
    ctx->pc = 0x1856B8u;
    SET_GPR_U32(ctx, 31, 0x1856C0u);
    ctx->pc = 0x1863B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863B0u, 0x1856B8u, 0x1856C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856C0u;
label_1856c0:
    // 0x1856c0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1856c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1856c4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1856c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1856c8: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x1856c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1856cc: 0xc0618dc  jal         func_186370
    ctx->pc = 0x1856CCu;
    SET_GPR_U32(ctx, 31, 0x1856D4u);
    ctx->pc = 0x186370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186370u, 0x1856CCu, 0x1856D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856D4u;
label_1856d4:
    // 0x1856d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1856d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1856d8:
    // 0x1856d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1856d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1856dc: 0x0  nop
    ctx->pc = 0x1856dcu;
    // NOP
    // 0x1856e0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1856e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1856e4: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1856E4u;
    {
        const bool branch_taken_0x1856e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856e4) {
            ctx->pc = 0x185758u;
            goto label_185758;
        }
    }
    ctx->pc = 0x1856ECu;
    // 0x1856ec: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1856ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1856f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1856f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1856f4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1856f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1856f8: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x1856f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x1856fc: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1856FCu;
    SET_GPR_U32(ctx, 31, 0x185704u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1856FCu, 0x185704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185704u;
label_185704:
    // 0x185704: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185708: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x185708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18570c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18570cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x185710: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x185710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x185714: 0xc08c688  jal         func_231A20
    ctx->pc = 0x185714u;
    SET_GPR_U32(ctx, 31, 0x18571Cu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x185714u, 0x18571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18571Cu;
label_18571c:
    // 0x18571c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x18571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185720: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x185720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x185724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185728: 0x0  nop
    ctx->pc = 0x185728u;
    // NOP
    // 0x18572c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18572cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x185730: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x185730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x185734: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x185734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185738: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x185738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x18573c: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x18573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185740: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x185740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185744: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185744u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185748: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18574c: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x18574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185750: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185754: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x185754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_185758:
    // 0x185758: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x185758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18575c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x18575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185764: 0x4500017c  bc1f        . + 4 + (0x17C << 2)
    ctx->pc = 0x185764u;
    {
        const bool branch_taken_0x185764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185764) {
            ctx->pc = 0x185D58u;
            goto label_185d58;
        }
    }
    ctx->pc = 0x18576Cu;
    // 0x18576c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x18576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185770: 0x8c5e0074  lw          $fp, 0x74($v0)
    ctx->pc = 0x185770u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x185774: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185778: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x185778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x18577c: 0xc05ddd0  jal         func_177740
    ctx->pc = 0x18577Cu;
    SET_GPR_U32(ctx, 31, 0x185784u);
    ctx->pc = 0x177740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177740u, 0x18577Cu, 0x185784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185784u;
label_185784:
    // 0x185784: 0x3c2082b  sltu        $at, $fp, $v0
    ctx->pc = 0x185784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x185788: 0x10200173  beqz        $at, . + 4 + (0x173 << 2)
    ctx->pc = 0x185788u;
    {
        const bool branch_taken_0x185788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x185788) {
            ctx->pc = 0x185D58u;
            goto label_185d58;
        }
    }
    ctx->pc = 0x185790u;
    // 0x185790: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185794: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185798: 0x24640068  addiu       $a0, $v1, 0x68
    ctx->pc = 0x185798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x18579c: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1857a0: 0xc05dde0  jal         func_177780
    ctx->pc = 0x1857A0u;
    SET_GPR_U32(ctx, 31, 0x1857A8u);
    ctx->pc = 0x177780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177780u, 0x1857A0u, 0x1857A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857A8u;
label_1857a8:
    // 0x1857a8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1857a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1857ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1857acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857b0: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x1857B0u;
    SET_GPR_U32(ctx, 31, 0x1857B8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1857B0u, 0x1857B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857B8u;
label_1857b8:
    // 0x1857b8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1857b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1857bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1857bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857c0: 0xc0614dc  jal         func_185370
    ctx->pc = 0x1857C0u;
    SET_GPR_U32(ctx, 31, 0x1857C8u);
    ctx->pc = 0x185370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185370u, 0x1857C0u, 0x1857C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857C8u;
label_1857c8:
    // 0x1857c8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1857c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1857cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1857ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1857d0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1857d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1857d4: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1857D4u;
    {
        const bool branch_taken_0x1857d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1857d4) {
            ctx->pc = 0x185868u;
            goto label_185868;
        }
    }
    ctx->pc = 0x1857DCu;
    // 0x1857dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1857dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1857e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1857e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1857e4: 0xc0614dc  jal         func_185370
    ctx->pc = 0x1857E4u;
    SET_GPR_U32(ctx, 31, 0x1857ECu);
    ctx->pc = 0x185370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185370u, 0x1857E4u, 0x1857ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857ECu;
label_1857ec:
    // 0x1857ec: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1857ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1857f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1857f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1857f4: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x1857f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1857f8: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1857F8u;
    {
        const bool branch_taken_0x1857f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1857f8) {
            ctx->pc = 0x185868u;
            goto label_185868;
        }
    }
    ctx->pc = 0x185800u;
    // 0x185800: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185804: 0x804200d4  lb          $v0, 0xD4($v0)
    ctx->pc = 0x185804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x185808: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x185808u;
    {
        const bool branch_taken_0x185808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185808) {
            ctx->pc = 0x185868u;
            goto label_185868;
        }
    }
    ctx->pc = 0x185810u;
    // 0x185810: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x185810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x185814: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x185814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x185818: 0xc1194c4  jal         func_465310
    ctx->pc = 0x185818u;
    SET_GPR_U32(ctx, 31, 0x185820u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x185818u, 0x185820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185820u;
label_185820:
    // 0x185820: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185824: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x185824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x185828: 0xc061a78  jal         func_1869E0
    ctx->pc = 0x185828u;
    SET_GPR_U32(ctx, 31, 0x185830u);
    ctx->pc = 0x1869E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1869E0u, 0x185828u, 0x185830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185830u;
label_185830:
    // 0x185830: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185834: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x185834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x185838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18583c: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x18583cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
    // 0x185840: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x185840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x185844: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x185844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185848: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x185848u;
    SET_GPR_U32(ctx, 31, 0x185850u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x185848u, 0x185850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185850u;
label_185850:
    // 0x185850: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x185850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x185854: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x185854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185858: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x185858u;
    SET_GPR_U32(ctx, 31, 0x185860u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x185858u, 0x185860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185860u;
label_185860:
    // 0x185860: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x185860u;
    {
        const bool branch_taken_0x185860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185860) {
            ctx->pc = 0x185758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185758;
        }
    }
    ctx->pc = 0x185868u;
label_185868:
    // 0x185868: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18586c: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x18586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x185870: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x185870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x185874: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x185874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x185878: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x185878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18587c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18587Cu;
    {
        const bool branch_taken_0x18587c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18587c) {
            ctx->pc = 0x1858A4u;
            goto label_1858a4;
        }
    }
    ctx->pc = 0x185884u;
    // 0x185884: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x185884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_185888:
    // 0x185888: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x185888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18588c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x185890: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x185890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x185894: 0x0  nop
    ctx->pc = 0x185894u;
    // NOP
    // 0x185898: 0x0  nop
    ctx->pc = 0x185898u;
    // NOP
    // 0x18589c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18589Cu;
    {
        const bool branch_taken_0x18589c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18589c) {
            ctx->pc = 0x185888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185888;
        }
    }
    ctx->pc = 0x1858A4u;
label_1858a4:
    // 0x1858a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1858a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1858a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858ac: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1858acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1858b0: 0x804200d4  lb          $v0, 0xD4($v0)
    ctx->pc = 0x1858b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1858b4: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1858B4u;
    {
        const bool branch_taken_0x1858b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1858b4) {
            ctx->pc = 0x185A34u;
            goto label_185a34;
        }
    }
    ctx->pc = 0x1858BCu;
    // 0x1858bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1858bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1858c0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1858c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1858c4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1858c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1858c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1858c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1858cc: 0xc061968  jal         func_1865A0
    ctx->pc = 0x1858CCu;
    SET_GPR_U32(ctx, 31, 0x1858D4u);
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x1858CCu, 0x1858D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858D4u;
label_1858d4:
    // 0x1858d4: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1858d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1858d8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1858d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1858dc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1858DCu;
    {
        const bool branch_taken_0x1858dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1858dc) {
            ctx->pc = 0x18598Cu;
            goto label_18598c;
        }
    }
    ctx->pc = 0x1858E4u;
    // 0x1858e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1858e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1858e8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1858e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1858ec: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1858ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1858f0: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1858f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1858f4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1858f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1858f8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1858f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1858fc: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1858FCu;
    SET_GPR_U32(ctx, 31, 0x185904u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1858FCu, 0x185904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185904u;
label_185904:
    // 0x185904: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185908: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x185908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18590c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18590cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x185910: 0xc08c7c8  jal         func_231F20
    ctx->pc = 0x185910u;
    SET_GPR_U32(ctx, 31, 0x185918u);
    ctx->pc = 0x231F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F20u, 0x185910u, 0x185918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185918u;
label_185918:
    // 0x185918: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18591c: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x18591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185920: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x185920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185924: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x185924u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x185928: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x185928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x18592c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x18592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185930: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x185930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185934: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x185934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185938: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x185938u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18593c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x18593cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x185940: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185944: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x185944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x185948: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x185948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18594c: 0xc7ac00e8  lwc1        $f12, 0xE8($sp)
    ctx->pc = 0x18594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185950: 0xc7ad00ec  lwc1        $f13, 0xEC($sp)
    ctx->pc = 0x185950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185958: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x185958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18595c: 0xc08c544  jal         func_231510
    ctx->pc = 0x18595Cu;
    SET_GPR_U32(ctx, 31, 0x185964u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x18595Cu, 0x185964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185964u;
label_185964:
    // 0x185964: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185968: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x185968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18596c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x18596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185970: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x185974: 0x244600d4  addiu       $a2, $v0, 0xD4
    ctx->pc = 0x185974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x185978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18597c: 0xc08c800  jal         func_232000
    ctx->pc = 0x18597Cu;
    SET_GPR_U32(ctx, 31, 0x185984u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x18597Cu, 0x185984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185984u;
label_185984:
    // 0x185984: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x185984u;
    {
        const bool branch_taken_0x185984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185984) {
            ctx->pc = 0x185A24u;
            goto label_185a24;
        }
    }
    ctx->pc = 0x18598Cu;
label_18598c:
    // 0x18598c: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x18598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x185990: 0xc780913c  lwc1        $f0, -0x6EC4($gp)
    ctx->pc = 0x185990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185994: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x185994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x185998: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x185998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18599c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x18599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1859a0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1859A0u;
    {
        const bool branch_taken_0x1859a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1859a0) {
            ctx->pc = 0x1859C8u;
            goto label_1859c8;
        }
    }
    ctx->pc = 0x1859A8u;
    // 0x1859a8: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1859a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1859ac:
    // 0x1859ac: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1859acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1859b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1859b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1859b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1859b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1859b8: 0x0  nop
    ctx->pc = 0x1859b8u;
    // NOP
    // 0x1859bc: 0x0  nop
    ctx->pc = 0x1859bcu;
    // NOP
    // 0x1859c0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1859C0u;
    {
        const bool branch_taken_0x1859c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1859c0) {
            ctx->pc = 0x1859ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1859ac;
        }
    }
    ctx->pc = 0x1859C8u;
label_1859c8:
    // 0x1859c8: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x1859c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1859cc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1859ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1859d0: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x1859d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1859d4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1859d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x1859d8: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x1859d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1859dc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1859dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1859e0: 0x27b6014c  addiu       $s6, $sp, 0x14C
    ctx->pc = 0x1859e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1859e4: 0xafb600bc  sw          $s6, 0xBC($sp)
    ctx->pc = 0x1859e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 22));
    // 0x1859e8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1859e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1859ec: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1859ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1859f0: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1859f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1859f4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1859f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1859f8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1859f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1859fc: 0x246500d4  addiu       $a1, $v1, 0xD4
    ctx->pc = 0x1859fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 212));
    // 0x185a00: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x185a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185a04: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x185a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x185a08: 0x244800f4  addiu       $t0, $v0, 0xF4
    ctx->pc = 0x185a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x185a0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185a0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185a10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185a14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a18: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x185A18u;
    SET_GPR_U32(ctx, 31, 0x185A20u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x185A18u, 0x185A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A20u;
label_185a20:
    // 0x185a20: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x185a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_185a24:
    // 0x185a24: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185a28: 0xa04000d4  sb          $zero, 0xD4($v0)
    ctx->pc = 0x185a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 212), (uint8_t)GPR_U32(ctx, 0));
    // 0x185a2c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x185A2Cu;
    {
        const bool branch_taken_0x185a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a2c) {
            ctx->pc = 0x185B1Cu;
            goto label_185b1c;
        }
    }
    ctx->pc = 0x185A34u;
label_185a34:
    // 0x185a34: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a3c: 0xc061968  jal         func_1865A0
    ctx->pc = 0x185A3Cu;
    SET_GPR_U32(ctx, 31, 0x185A44u);
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x185A3Cu, 0x185A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A44u;
label_185a44:
    // 0x185a44: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x185a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x185a48: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x185a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x185a4c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x185A4Cu;
    {
        const bool branch_taken_0x185a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a4c) {
            ctx->pc = 0x185ABCu;
            goto label_185abc;
        }
    }
    ctx->pc = 0x185A54u;
    // 0x185a54: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185a58: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185a5c: 0x8c650074  lw          $a1, 0x74($v1)
    ctx->pc = 0x185a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x185a60: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x185a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x185a64: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x185a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
    // 0x185a68: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x185a6c: 0xc05dde0  jal         func_177780
    ctx->pc = 0x185A6Cu;
    SET_GPR_U32(ctx, 31, 0x185A74u);
    ctx->pc = 0x177780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177780u, 0x185A6Cu, 0x185A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A74u;
label_185a74:
    // 0x185a74: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185a78: 0x8c6300bc  lw          $v1, 0xBC($v1)
    ctx->pc = 0x185a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x185a7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185a80: 0x0  nop
    ctx->pc = 0x185a80u;
    // NOP
    // 0x185a84: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x185a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x185a88: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185a8c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x185a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x185a90: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185a94: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x185a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x185a98: 0x2466009c  addiu       $a2, $v1, 0x9C
    ctx->pc = 0x185a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x185a9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x185a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185aa0: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x185aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x185aa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185aa8: 0x8faa00fc  lw          $t2, 0xFC($sp)
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x185aac: 0xc08c128  jal         func_2304A0
    ctx->pc = 0x185AACu;
    SET_GPR_U32(ctx, 31, 0x185AB4u);
    ctx->pc = 0x2304A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304A0u, 0x185AACu, 0x185AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185AB4u;
label_185ab4:
    // 0x185ab4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x185AB4u;
    {
        const bool branch_taken_0x185ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ab4) {
            ctx->pc = 0x185B1Cu;
            goto label_185b1c;
        }
    }
    ctx->pc = 0x185ABCu;
label_185abc:
    // 0x185abc: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185ac0: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185ac4: 0x8c650074  lw          $a1, 0x74($v1)
    ctx->pc = 0x185ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x185ac8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x185ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x185acc: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x185accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
    // 0x185ad0: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x185ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x185ad4: 0xc05dde0  jal         func_177780
    ctx->pc = 0x185AD4u;
    SET_GPR_U32(ctx, 31, 0x185ADCu);
    ctx->pc = 0x177780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177780u, 0x185AD4u, 0x185ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185ADCu;
label_185adc:
    // 0x185adc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185ae0: 0x8c6300bc  lw          $v1, 0xBC($v1)
    ctx->pc = 0x185ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x185ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ae8: 0x0  nop
    ctx->pc = 0x185ae8u;
    // NOP
    // 0x185aec: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x185aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x185af0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185af4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185af8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x185af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x185afc: 0x2465009c  addiu       $a1, $v1, 0x9C
    ctx->pc = 0x185afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x185b00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x185b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b04: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x185b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x185b08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b0c: 0x8fa900fc  lw          $t1, 0xFC($sp)
    ctx->pc = 0x185b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x185b10: 0xc08be94  jal         func_22FA50
    ctx->pc = 0x185B10u;
    SET_GPR_U32(ctx, 31, 0x185B18u);
    ctx->pc = 0x22FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FA50u, 0x185B10u, 0x185B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B18u;
label_185b18:
    // 0x185b18: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x185b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_185b1c:
    // 0x185b1c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x185b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x185b20: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x185B20u;
    {
        const bool branch_taken_0x185b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b20) {
            ctx->pc = 0x185D48u;
            goto label_185d48;
        }
    }
    ctx->pc = 0x185B28u;
    // 0x185b28: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185b2c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x185b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x185b30: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x185b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x185b34: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x185b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x185b38: 0xc08c688  jal         func_231A20
    ctx->pc = 0x185B38u;
    SET_GPR_U32(ctx, 31, 0x185B40u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x185B38u, 0x185B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B40u;
label_185b40:
    // 0x185b40: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x185b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x185b44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x185b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x185b48: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x185B48u;
    {
        const bool branch_taken_0x185b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b48) {
            ctx->pc = 0x185B88u;
            goto label_185b88;
        }
    }
    ctx->pc = 0x185B50u;
    // 0x185b50: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185b54: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x185b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x185b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185b5c: 0x0  nop
    ctx->pc = 0x185b5cu;
    // NOP
    // 0x185b60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x185b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185b64: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185b68: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x185b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x185b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185b70: 0x0  nop
    ctx->pc = 0x185b70u;
    // NOP
    // 0x185b74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x185b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x185b78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185b7c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x185b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x185b80: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x185B80u;
    {
        const bool branch_taken_0x185b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b80) {
            ctx->pc = 0x185BFCu;
            goto label_185bfc;
        }
    }
    ctx->pc = 0x185B88u;
label_185b88:
    // 0x185b88: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x185b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x185b8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x185b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x185b90: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x185B90u;
    {
        const bool branch_taken_0x185b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b90) {
            ctx->pc = 0x185BE4u;
            goto label_185be4;
        }
    }
    ctx->pc = 0x185B98u;
    // 0x185b98: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185b9c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x185b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x185ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ba4: 0x0  nop
    ctx->pc = 0x185ba4u;
    // NOP
    // 0x185ba8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x185ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x185bac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x185bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x185bb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x185bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x185bb4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185bb8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x185bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x185bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185bc0: 0x0  nop
    ctx->pc = 0x185bc0u;
    // NOP
    // 0x185bc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x185bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185bc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185bc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185bcc: 0x0  nop
    ctx->pc = 0x185bccu;
    // NOP
    // 0x185bd0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x185bd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x185bd4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x185bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x185bd8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x185bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x185bdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x185BDCu;
    {
        const bool branch_taken_0x185bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bdc) {
            ctx->pc = 0x185BFCu;
            goto label_185bfc;
        }
    }
    ctx->pc = 0x185BE4u;
label_185be4:
    // 0x185be4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185be8: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x185bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185bf0: 0x0  nop
    ctx->pc = 0x185bf0u;
    // NOP
    // 0x185bf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x185bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x185bf8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x185bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_185bfc:
    // 0x185bfc: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x185bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x185c00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185c04: 0x14440018  bne         $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x185C04u;
    {
        const bool branch_taken_0x185c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x185c04) {
            ctx->pc = 0x185C68u;
            goto label_185c68;
        }
    }
    ctx->pc = 0x185C0Cu;
    // 0x185c0c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x185c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x185c10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x185c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x185c14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185C14u;
    {
        const bool branch_taken_0x185c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185c14) {
            ctx->pc = 0x185C34u;
            goto label_185c34;
        }
    }
    ctx->pc = 0x185C1Cu;
    // 0x185c1c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x185c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185c20: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x185c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185c24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185c28: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x185c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x185c2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x185C2Cu;
    {
        const bool branch_taken_0x185c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185c2c) {
            ctx->pc = 0x185C68u;
            goto label_185c68;
        }
    }
    ctx->pc = 0x185C34u;
label_185c34:
    // 0x185c34: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x185c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x185c38: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x185c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x185c3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x185C3Cu;
    {
        const bool branch_taken_0x185c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185c3c) {
            ctx->pc = 0x185C68u;
            goto label_185c68;
        }
    }
    ctx->pc = 0x185C44u;
    // 0x185c44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x185c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x185c48: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x185c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x185c4c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x185c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185c50: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x185c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185c58: 0x0  nop
    ctx->pc = 0x185c58u;
    // NOP
    // 0x185c5c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x185c5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x185c60: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x185c60u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x185c64: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x185c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_185c68:
    // 0x185c68: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185c6c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x185c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x185c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185c74: 0x0  nop
    ctx->pc = 0x185c74u;
    // NOP
    // 0x185c78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x185c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185c7c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x185c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185c80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185c80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185c84: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x185c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185c88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x185c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x185c8c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x185c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x185c90: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185c94: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x185c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x185c98: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x185c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x185c9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ca0: 0xc08c7c8  jal         func_231F20
    ctx->pc = 0x185CA0u;
    SET_GPR_U32(ctx, 31, 0x185CA8u);
    ctx->pc = 0x231F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F20u, 0x185CA0u, 0x185CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CA8u;
label_185ca8:
    // 0x185ca8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x185ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185cac: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x185cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x185cb0: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x185cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x185cb4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x185cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x185cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cbc: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x185cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185cc0: 0xc7ad00d4  lwc1        $f13, 0xD4($sp)
    ctx->pc = 0x185cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cc8: 0xc08c208  jal         func_230820
    ctx->pc = 0x185CC8u;
    SET_GPR_U32(ctx, 31, 0x185CD0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x185CC8u, 0x185CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CD0u;
label_185cd0:
    // 0x185cd0: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x185CD0u;
    {
        const bool branch_taken_0x185cd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x185cd0) {
            ctx->pc = 0x185D04u;
            goto label_185d04;
        }
    }
    ctx->pc = 0x185CD8u;
    // 0x185cd8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185cdc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x185cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x185ce0: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x185ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x185ce4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x185ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x185ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cec: 0xc7ac00e8  lwc1        $f12, 0xE8($sp)
    ctx->pc = 0x185cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185cf0: 0xc7ad00ec  lwc1        $f13, 0xEC($sp)
    ctx->pc = 0x185cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185cf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x185cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185cf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x185cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185cfc: 0xc08c544  jal         func_231510
    ctx->pc = 0x185CFCu;
    SET_GPR_U32(ctx, 31, 0x185D04u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x185CFCu, 0x185D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D04u;
label_185d04:
    // 0x185d04: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185d08: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x185d0c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185d10: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x185d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185d14: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185d18: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x185d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x185d1c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x185d20: 0xc46c00c0  lwc1        $f12, 0xC0($v1)
    ctx->pc = 0x185d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185d24: 0xc4cd00c4  lwc1        $f13, 0xC4($a2)
    ctx->pc = 0x185d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185d28: 0xc44e00c8  lwc1        $f14, 0xC8($v0)
    ctx->pc = 0x185d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x185d2c: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x185D2Cu;
    SET_GPR_U32(ctx, 31, 0x185D34u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x185D2Cu, 0x185D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D34u;
label_185d34:
    // 0x185d34: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185d38: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x185d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x185d3c: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x185d40: 0xc0617d4  jal         func_185F50
    ctx->pc = 0x185D40u;
    SET_GPR_U32(ctx, 31, 0x185D48u);
    ctx->pc = 0x185F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185F50u, 0x185D40u, 0x185D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D48u;
label_185d48:
    // 0x185d48: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x185d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x185d4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x185d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185d50: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x185D50u;
    SET_GPR_U32(ctx, 31, 0x185D58u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x185D50u, 0x185D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D58u;
label_185d58:
    // 0x185d58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x185d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d5c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185d60: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x185d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x185d64: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x185D64u;
    SET_GPR_U32(ctx, 31, 0x185D6Cu);
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x185D64u, 0x185D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D6Cu;
label_185d6c:
    // 0x185d6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185D6Cu;
    {
        const bool branch_taken_0x185d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185d6c) {
            ctx->pc = 0x185D8Cu;
            goto label_185d8c;
        }
    }
    ctx->pc = 0x185D74u;
    // 0x185d74: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x185d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185d78: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x185d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x185d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d80: 0xc0618dc  jal         func_186370
    ctx->pc = 0x185D80u;
    SET_GPR_U32(ctx, 31, 0x185D88u);
    ctx->pc = 0x186370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186370u, 0x185D80u, 0x185D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D88u;
label_185d88:
    // 0x185d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x185d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185d8c:
    // 0x185d8c: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x185D8Cu;
    {
        const bool branch_taken_0x185d8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x185d8c) {
            ctx->pc = 0x185E34u;
            goto label_185e34;
        }
    }
    ctx->pc = 0x185D94u;
    // 0x185d94: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185d98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x185d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x185d9c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x185d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x185da0: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x185da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x185da4: 0xc08c704  jal         func_231C10
    ctx->pc = 0x185DA4u;
    SET_GPR_U32(ctx, 31, 0x185DACu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x185DA4u, 0x185DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DACu;
label_185dac:
    // 0x185dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185db0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185db4: 0x8c530058  lw          $s3, 0x58($v0)
    ctx->pc = 0x185db4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x185db8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x185db8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185dbc: 0x0  nop
    ctx->pc = 0x185dbcu;
    // NOP
    // 0x185dc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x185dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185dc4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185dc8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x185dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x185dcc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x185dccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185dd0: 0x0  nop
    ctx->pc = 0x185dd0u;
    // NOP
    // 0x185dd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x185dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x185dd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x185dd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185ddc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x185ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185de0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x185de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185de4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x185DE4u;
    {
        const bool branch_taken_0x185de4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185de4) {
            ctx->pc = 0x185E34u;
            goto label_185e34;
        }
    }
    ctx->pc = 0x185DECu;
    // 0x185dec: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185df0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185df4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x185df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x185df8: 0xc061a30  jal         func_1868C0
    ctx->pc = 0x185DF8u;
    SET_GPR_U32(ctx, 31, 0x185E00u);
    ctx->pc = 0x1868C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C0u, 0x185DF8u, 0x185E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E00u;
label_185e00:
    // 0x185e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e04: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185e08: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x185e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x185e0c: 0xc061284  jal         func_184A10
    ctx->pc = 0x185E0Cu;
    SET_GPR_U32(ctx, 31, 0x185E14u);
    ctx->pc = 0x184A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A10u, 0x185E0Cu, 0x185E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E14u;
label_185e14:
    // 0x185e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e18: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x185e18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e1c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185e20: 0x24450078  addiu       $a1, $v0, 0x78
    ctx->pc = 0x185e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x185e24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x185e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e28: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x185e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e2c: 0xc0617b0  jal         func_185EC0
    ctx->pc = 0x185E2Cu;
    SET_GPR_U32(ctx, 31, 0x185E34u);
    ctx->pc = 0x185EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185EC0u, 0x185E2Cu, 0x185E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E34u;
label_185e34:
    // 0x185e34: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185e38: 0x24820078  addiu       $v0, $a0, 0x78
    ctx->pc = 0x185e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x185e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e40: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x185E40u;
    SET_GPR_U32(ctx, 31, 0x185E48u);
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x185E40u, 0x185E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E48u;
label_185e48:
    // 0x185e48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x185E48u;
    {
        const bool branch_taken_0x185e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e48) {
            ctx->pc = 0x185E84u;
            goto label_185e84;
        }
    }
    ctx->pc = 0x185E50u;
    // 0x185e50: 0x8f85ba74  lw          $a1, -0x458C($gp)
    ctx->pc = 0x185e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x185e54: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x185E54u;
    {
        const bool branch_taken_0x185e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e54) {
            ctx->pc = 0x185E74u;
            goto label_185e74;
        }
    }
    ctx->pc = 0x185E5Cu;
    // 0x185e5c: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x185e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x185e60: 0xc04e308  jal         func_138C20
    ctx->pc = 0x185E60u;
    SET_GPR_U32(ctx, 31, 0x185E68u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x185E60u, 0x185E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E68u;
label_185e68:
    // 0x185e68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x185e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e6c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x185E6Cu;
    {
        const bool branch_taken_0x185e6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x185e6c) {
            ctx->pc = 0x185E84u;
            goto label_185e84;
        }
    }
    ctx->pc = 0x185E74u;
label_185e74:
    // 0x185e74: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x185e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x185e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e7c: 0xc061c50  jal         func_187140
    ctx->pc = 0x185E7Cu;
    SET_GPR_U32(ctx, 31, 0x185E84u);
    ctx->pc = 0x187140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187140u, 0x185E7Cu, 0x185E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E84u;
label_185e84:
    // 0x185e84: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x185e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x185e88: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x185e88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185e8c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x185e8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185e90: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x185e90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185e94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x185e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185e98: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x185e98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185e9c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x185e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185ea0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x185ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185ea4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x185ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185ea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185eac: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x185eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x185EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185EB8u;
    // 0x185eb8: 0x0  nop
    ctx->pc = 0x185eb8u;
    // NOP
    // 0x185ebc: 0x0  nop
    ctx->pc = 0x185ebcu;
    // NOP
    ctx->pc = 0x185ec0u;
}
