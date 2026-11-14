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

// Function: sub_001FC940
// Address: 0x1fc940 - 0x1fcc30
void sub_001FC940_0x1fc940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC940_0x1fc940");
#endif

    switch (ctx->pc) {
        case 0x1fc9d8u: goto label_1fc9d8;
        case 0x1fc9f0u: goto label_1fc9f0;
        case 0x1fca0cu: goto label_1fca0c;
        case 0x1fca5cu: goto label_1fca5c;
        case 0x1fcab4u: goto label_1fcab4;
        case 0x1fcae0u: goto label_1fcae0;
        case 0x1fcb14u: goto label_1fcb14;
        case 0x1fcb60u: goto label_1fcb60;
        case 0x1fcbd8u: goto label_1fcbd8;
        case 0x1fcbf4u: goto label_1fcbf4;
        case 0x1fcc04u: goto label_1fcc04;
        default: break;
    }

    ctx->pc = 0x1fc940u;

    // 0x1fc940: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fc940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1fc944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fc944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fc948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fc94c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc958: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1fc958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1fc95c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1fc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1fc960: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1fc960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1fc964: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x1fc964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x1fc968: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x1fc968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x1fc96c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc970: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fc970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fc974: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fc978: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fc97c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc980: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fc980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fc984: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fc988: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc988u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc98c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fc990: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc994: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1fc994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc998: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1fc998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1fc99c: 0xa3a0006f  sb          $zero, 0x6F($sp)
    ctx->pc = 0x1fc99cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fc9a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fc9a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc9a4: 0x0  nop
    ctx->pc = 0x1fc9a4u;
    // NOP
    // 0x1fc9a8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1fc9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1fc9ac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fc9b0: 0xc440bf80  lwc1        $f0, -0x4080($v0)
    ctx->pc = 0x1fc9b0u;
    { uint32_t bits = FAST_READ32(0x60BF80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc9b4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1fc9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1fc9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fc9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc9bc: 0x0  nop
    ctx->pc = 0x1fc9bcu;
    // NOP
    // 0x1fc9c0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1fc9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fc9c4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc9c8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fc9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fc9cc: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fc9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fc9d0: 0xc07eeec  jal         func_1FBBB0
    ctx->pc = 0x1FC9D0u;
    SET_GPR_U32(ctx, 31, 0x1FC9D8u);
    ctx->pc = 0x1FBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBBB0u, 0x1FC9D0u, 0x1FC9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9D8u;
label_1fc9d8:
    // 0x1fc9d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fc9d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9dc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc9e0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fc9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fc9e4: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fc9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fc9e8: 0xc07eed8  jal         func_1FBB60
    ctx->pc = 0x1FC9E8u;
    SET_GPR_U32(ctx, 31, 0x1FC9F0u);
    ctx->pc = 0x1FBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB60u, 0x1FC9E8u, 0x1FC9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9F0u;
label_1fc9f0:
    // 0x1fc9f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9f4: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x1fc9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1fc9f8: 0xdf8299a0  ld          $v0, -0x6660($gp)
    ctx->pc = 0x1fc9f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x1fc9fc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1fc9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1fca00: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fca04: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FCA04u;
    SET_GPR_U32(ctx, 31, 0x1FCA0Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FCA04u, 0x1FCA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA0Cu;
label_1fca0c:
    // 0x1fca0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fca0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fca14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fca14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fca18: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fca18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fca1c: 0xc440bf7c  lwc1        $f0, -0x4084($v0)
    ctx->pc = 0x1fca1cu;
    { uint32_t bits = FAST_READ32(0x60BF7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fca20: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fca20u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fca24: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1fca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fca28: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1fca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fca2c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1fca2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1fca30: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fca30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fca34: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fca34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fca38: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fca38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fca3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fca3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fca40: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x1fca40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1fca44: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fca48: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x1fca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fca4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fca50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca54: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FCA54u;
    SET_GPR_U32(ctx, 31, 0x1FCA5Cu);
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FCA54u, 0x1FCA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA5Cu;
label_1fca5c:
    // 0x1fca5c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1fca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fca60: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1fca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fca64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fca64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fca68: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1fca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1fca6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fca70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fca70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fca74: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fca74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fca78: 0xc440bf7c  lwc1        $f0, -0x4084($v0)
    ctx->pc = 0x1fca78u;
    { uint32_t bits = FAST_READ32(0x60BF7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fca7c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fca7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fca80: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1fca80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fca84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fca88: 0xa3a2006f  sb          $v0, 0x6F($sp)
    ctx->pc = 0x1fca88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fca8c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fca8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fca90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca94: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1fca94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fca98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1fca98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fca9c: 0x27a7006f  addiu       $a3, $sp, 0x6F
    ctx->pc = 0x1fca9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
    // 0x1fcaa0: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fcaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fcaa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fcaa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcaa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fcaa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcaac: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FCAACu;
    SET_GPR_U32(ctx, 31, 0x1FCAB4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FCAACu, 0x1FCAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCAB4u;
label_1fcab4:
    // 0x1fcab4: 0xa3a0006f  sb          $zero, 0x6F($sp)
    ctx->pc = 0x1fcab4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcab8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fcab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fcabc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fcabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcac0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1fcac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fcac4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1fcac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fcac8: 0x27a7006f  addiu       $a3, $sp, 0x6F
    ctx->pc = 0x1fcac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
    // 0x1fcacc: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fcaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fcad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fcad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcad4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fcad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcad8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FCAD8u;
    SET_GPR_U32(ctx, 31, 0x1FCAE0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FCAD8u, 0x1FCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCAE0u;
label_1fcae0:
    // 0x1fcae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fcae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcae4: 0x0  nop
    ctx->pc = 0x1fcae4u;
    // NOP
    // 0x1fcae8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1fcae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1fcaec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fcaecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fcaf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fcaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcaf4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1fcaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fcaf8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fcaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fcafc: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1fcafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1fcb00: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fcb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fcb04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fcb04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fcb08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb0c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FCB0Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB14u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FCB0Cu, 0x1FCB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB14u;
label_1fcb14:
    // 0x1fcb14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fcb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fcb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcb1c: 0x0  nop
    ctx->pc = 0x1fcb1cu;
    // NOP
    // 0x1fcb20: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1fcb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1fcb24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fcb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fcb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fcb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcb2c: 0x0  nop
    ctx->pc = 0x1fcb2cu;
    // NOP
    // 0x1fcb30: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1fcb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1fcb34: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fcb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fcb38: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fcb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcb3c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fcb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fcb40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fcb40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcb44: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x1fcb44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1fcb48: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fcb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fcb4c: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x1fcb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fcb50: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x1fcb50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fcb54: 0x8faa00b0  lw          $t2, 0xB0($sp)
    ctx->pc = 0x1fcb54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fcb58: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FCB58u;
    SET_GPR_U32(ctx, 31, 0x1FCB60u);
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FCB58u, 0x1FCB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB60u;
label_1fcb60:
    // 0x1fcb60: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1fcb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcb64: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1fcb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fcb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fcb6c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1fcb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1fcb70: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1fcb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fcb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcb78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcb78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fcb7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fcb7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcb80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcb80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcb84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fcb84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcb88: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1fcb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fcb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCB94u;
    // 0x1fcb94: 0x0  nop
    ctx->pc = 0x1fcb94u;
    // NOP
    // 0x1fcb98: 0x0  nop
    ctx->pc = 0x1fcb98u;
    // NOP
    // 0x1fcb9c: 0x0  nop
    ctx->pc = 0x1fcb9cu;
    // NOP
    // 0x1fcba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fcba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fcba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fcba8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fcba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fcbac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fcbacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1fcbb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1fcbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1fcbb4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fcbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcbb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fcbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcbbc: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FCBBCu;
    {
        const bool branch_taken_0x1fcbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcbbc) {
            ctx->pc = 0x1FCC0Cu;
            goto label_1fcc0c;
        }
    }
    ctx->pc = 0x1FCBC4u;
    // 0x1fcbc4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1fcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1fcbc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fcbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcbcc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1fcbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1fcbd0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1FCBD0u;
    SET_GPR_U32(ctx, 31, 0x1FCBD8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1FCBD0u, 0x1FCBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBD8u;
label_1fcbd8:
    // 0x1fcbd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fcbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbdc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FCBDCu;
    {
        const bool branch_taken_0x1fcbdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcbdc) {
            ctx->pc = 0x1FCC0Cu;
            goto label_1fcc0c;
        }
    }
    ctx->pc = 0x1FCBE4u;
    // 0x1fcbe4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1fcbe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fcbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fcbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbec: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1FCBECu;
    SET_GPR_U32(ctx, 31, 0x1FCBF4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1FCBECu, 0x1FCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBF4u;
label_1fcbf4:
    // 0x1fcbf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbfc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1FCBFCu;
    SET_GPR_U32(ctx, 31, 0x1FCC04u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1FCBFCu, 0x1FCC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC04u;
label_1fcc04:
    // 0x1fcc04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fcc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcc08: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x1fcc08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1fcc0c:
    // 0x1fcc0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fcc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcc10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fcc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcc14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fcc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fcc18: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fcc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCC24u;
    // 0x1fcc24: 0x0  nop
    ctx->pc = 0x1fcc24u;
    // NOP
    // 0x1fcc28: 0x0  nop
    ctx->pc = 0x1fcc28u;
    // NOP
    // 0x1fcc2c: 0x0  nop
    ctx->pc = 0x1fcc2cu;
    // NOP
    ctx->pc = 0x1fcc30u;
}
