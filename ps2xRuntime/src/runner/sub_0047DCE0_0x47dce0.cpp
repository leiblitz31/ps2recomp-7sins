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

// Function: sub_0047DCE0
// Address: 0x47dce0 - 0x47e730
void sub_0047DCE0_0x47dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047DCE0_0x47dce0");
#endif

    switch (ctx->pc) {
        case 0x47dd68u: goto label_47dd68;
        case 0x47de18u: goto label_47de18;
        case 0x47de60u: goto label_47de60;
        case 0x47ded0u: goto label_47ded0;
        case 0x47df40u: goto label_47df40;
        case 0x47df74u: goto label_47df74;
        case 0x47e130u: goto label_47e130;
        case 0x47e144u: goto label_47e144;
        case 0x47e1c8u: goto label_47e1c8;
        case 0x47e1d8u: goto label_47e1d8;
        case 0x47e1ecu: goto label_47e1ec;
        case 0x47e260u: goto label_47e260;
        case 0x47e274u: goto label_47e274;
        case 0x47e288u: goto label_47e288;
        case 0x47e2a4u: goto label_47e2a4;
        case 0x47e2b8u: goto label_47e2b8;
        case 0x47e31cu: goto label_47e31c;
        case 0x47e394u: goto label_47e394;
        case 0x47e3a0u: goto label_47e3a0;
        case 0x47e3bcu: goto label_47e3bc;
        case 0x47e3d8u: goto label_47e3d8;
        case 0x47e3ecu: goto label_47e3ec;
        case 0x47e40cu: goto label_47e40c;
        case 0x47e420u: goto label_47e420;
        case 0x47e494u: goto label_47e494;
        case 0x47e4f0u: goto label_47e4f0;
        case 0x47e508u: goto label_47e508;
        case 0x47e544u: goto label_47e544;
        case 0x47e5a0u: goto label_47e5a0;
        case 0x47e5c4u: goto label_47e5c4;
        case 0x47e5dcu: goto label_47e5dc;
        case 0x47e600u: goto label_47e600;
        case 0x47e618u: goto label_47e618;
        case 0x47e630u: goto label_47e630;
        case 0x47e638u: goto label_47e638;
        case 0x47e658u: goto label_47e658;
        case 0x47e680u: goto label_47e680;
        case 0x47e6a0u: goto label_47e6a0;
        case 0x47e6b4u: goto label_47e6b4;
        case 0x47e6c0u: goto label_47e6c0;
        case 0x47e6d0u: goto label_47e6d0;
        case 0x47e6ecu: goto label_47e6ec;
        default: break;
    }

    ctx->pc = 0x47dce0u;

    // 0x47dce0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x47dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x47dce4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x47dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x47dce8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x47dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x47dcec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x47dcf0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x47dcf4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x47dcf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x47dcfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47dcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x47dd00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47dd04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47dd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47dd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47dd0c: 0xafa40290  sw          $a0, 0x290($sp)
    ctx->pc = 0x47dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 4));
    // 0x47dd10: 0xe7ac02a0  swc1        $f12, 0x2A0($sp)
    ctx->pc = 0x47dd10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x47dd14: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x47dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
    // 0x47dd18: 0xafa602c0  sw          $a2, 0x2C0($sp)
    ctx->pc = 0x47dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 6));
    // 0x47dd1c: 0xafa702d0  sw          $a3, 0x2D0($sp)
    ctx->pc = 0x47dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 7));
    // 0x47dd20: 0xafa802e0  sw          $t0, 0x2E0($sp)
    ctx->pc = 0x47dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 8));
    // 0x47dd24: 0xafa902f0  sw          $t1, 0x2F0($sp)
    ctx->pc = 0x47dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 9));
    // 0x47dd28: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x47dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
    // 0x47dd2c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x47dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x47dd30: 0xafa0025c  sw          $zero, 0x25C($sp)
    ctx->pc = 0x47dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
    // 0x47dd34: 0xafa00284  sw          $zero, 0x284($sp)
    ctx->pc = 0x47dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 0));
    // 0x47dd38: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x47dd3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47DD3Cu;
    {
        const bool branch_taken_0x47dd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dd3c) {
            ctx->pc = 0x47DD54u;
            goto label_47dd54;
        }
    }
    ctx->pc = 0x47DD44u;
    // 0x47dd44: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x47dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47dd48: 0x2c810003  sltiu       $at, $a0, 0x3
    ctx->pc = 0x47dd48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x47dd4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x47DD4Cu;
    {
        const bool branch_taken_0x47dd4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dd4c) {
            ctx->pc = 0x47DD60u;
            goto label_47dd60;
        }
    }
    ctx->pc = 0x47DD54u;
label_47dd54:
    // 0x47dd54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47dd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47dd58: 0x10000265  b           . + 4 + (0x265 << 2)
    ctx->pc = 0x47DD58u;
    {
        const bool branch_taken_0x47dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dd58) {
            ctx->pc = 0x47E6F0u;
            goto label_47e6f0;
        }
    }
    ctx->pc = 0x47DD60u;
label_47dd60:
    // 0x47dd60: 0xc0e3992  jal         func_38E648
    ctx->pc = 0x47DD60u;
    SET_GPR_U32(ctx, 31, 0x47DD68u);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x47DD60u, 0x47DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DD68u;
label_47dd68:
    // 0x47dd68: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x47dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
    // 0x47dd6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47DD6Cu;
    {
        const bool branch_taken_0x47dd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47dd6c) {
            ctx->pc = 0x47DD80u;
            goto label_47dd80;
        }
    }
    ctx->pc = 0x47DD74u;
    // 0x47dd74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47dd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47dd78: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x47DD78u;
    {
        const bool branch_taken_0x47dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dd78) {
            ctx->pc = 0x47E6F0u;
            goto label_47e6f0;
        }
    }
    ctx->pc = 0x47DD80u;
label_47dd80:
    // 0x47dd80: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x47dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x47dd84: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x47DD84u;
    {
        const bool branch_taken_0x47dd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47dd84) {
            ctx->pc = 0x47DDFCu;
            goto label_47ddfc;
        }
    }
    ctx->pc = 0x47DD8Cu;
    // 0x47dd8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47dd90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47dd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47dd94: 0x0  nop
    ctx->pc = 0x47dd94u;
    // NOP
    // 0x47dd98: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x47dd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x47dd9c: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x47dd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x47dda0: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x47dda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x47dda4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47dda4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47dda8: 0x0  nop
    ctx->pc = 0x47dda8u;
    // NOP
    // 0x47ddac: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x47ddacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x47ddb0: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x47ddb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x47ddb4: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x47ddb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x47ddb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47ddb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ddbc: 0x0  nop
    ctx->pc = 0x47ddbcu;
    // NOP
    // 0x47ddc0: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x47ddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x47ddc4: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x47ddc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x47ddc8: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x47ddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x47ddcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47ddccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ddd0: 0x0  nop
    ctx->pc = 0x47ddd0u;
    // NOP
    // 0x47ddd4: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x47ddd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x47ddd8: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x47ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x47dddc: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x47dddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x47dde0: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x47dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x47dde4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x47dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x47dde8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x47dde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x47ddec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x47ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47ddf0: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x47ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x47ddf4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x47ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x47ddf8: 0xafa40290  sw          $a0, 0x290($sp)
    ctx->pc = 0x47ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 4));
label_47ddfc:
    // 0x47ddfc: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x47ddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x47de00: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x47DE00u;
    {
        const bool branch_taken_0x47de00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47de00) {
            ctx->pc = 0x47DE68u;
            goto label_47de68;
        }
    }
    ctx->pc = 0x47DE08u;
    // 0x47de08: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x47de08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x47de0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47de0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47de10: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x47DE10u;
    SET_GPR_U32(ctx, 31, 0x47DE18u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x47DE10u, 0x47DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DE18u;
label_47de18:
    // 0x47de18: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x47de18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x47de1c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x47de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x47de20: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x47DE20u;
    {
        const bool branch_taken_0x47de20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47de20) {
            ctx->pc = 0x47DE68u;
            goto label_47de68;
        }
    }
    ctx->pc = 0x47DE28u;
    // 0x47de28: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x47de28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x47de2c: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x47de2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x47de30: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x47de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x47de34: 0xa22024  and         $a0, $a1, $v0
    ctx->pc = 0x47de34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x47de38: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x47de38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x47de3c: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x47de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x47de40: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x47de40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x47de44: 0x27a40264  addiu       $a0, $sp, 0x264
    ctx->pc = 0x47de44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
    // 0x47de48: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x47de48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x47de4c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x47de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x47de50: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x47de50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x47de54: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x47de54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x47de58: 0xc0e39e0  jal         func_38E780
    ctx->pc = 0x47DE58u;
    SET_GPR_U32(ctx, 31, 0x47DE60u);
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x47DE58u, 0x47DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DE60u;
label_47de60:
    // 0x47de60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47de64: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x47de64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
label_47de68:
    // 0x47de68: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x47de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47de6c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x47de70: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x47de70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x47de74: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x47de74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
    // 0x47de78: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x47de7c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x47de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x47de80: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47de84: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x47de84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x47de88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47de88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47de8c: 0xafa2027c  sw          $v0, 0x27C($sp)
    ctx->pc = 0x47de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 2));
    // 0x47de90: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x47de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x47de94: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x47de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x47de98: 0xafa20278  sw          $v0, 0x278($sp)
    ctx->pc = 0x47de98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 2));
    // 0x47de9c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47dea0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x47dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47dea4: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x47dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x47dea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47deac: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x47deacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x47deb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47deb4: 0xa7a2028a  sh          $v0, 0x28A($sp)
    ctx->pc = 0x47deb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 650), (uint16_t)GPR_U32(ctx, 2));
    // 0x47deb8: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x47deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x47debc: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x47debcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x47dec0: 0x97a2028a  lhu         $v0, 0x28A($sp)
    ctx->pc = 0x47dec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 650)));
    // 0x47dec4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x47dec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47dec8: 0xc0e2dbc  jal         func_38B6F0
    ctx->pc = 0x47DEC8u;
    SET_GPR_U32(ctx, 31, 0x47DED0u);
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x47DEC8u, 0x47DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DED0u;
label_47ded0:
    // 0x47ded0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47ded0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ded4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47DED4u;
    {
        const bool branch_taken_0x47ded4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ded4) {
            ctx->pc = 0x47DEE8u;
            goto label_47dee8;
        }
    }
    ctx->pc = 0x47DEDCu;
    // 0x47dedc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47dedcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47dee0: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x47DEE0u;
    {
        const bool branch_taken_0x47dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dee0) {
            ctx->pc = 0x47E6F0u;
            goto label_47e6f0;
        }
    }
    ctx->pc = 0x47DEE8u;
label_47dee8:
    // 0x47dee8: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x47dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x47deec: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x47DEECu;
    {
        const bool branch_taken_0x47deec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47deec) {
            ctx->pc = 0x47DF2Cu;
            goto label_47df2c;
        }
    }
    ctx->pc = 0x47DEF4u;
    // 0x47def4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x47def4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x47def8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47def8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47defc: 0x0  nop
    ctx->pc = 0x47defcu;
    // NOP
    // 0x47df00: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x47df00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x47df04: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x47df04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x47df08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47df08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47df0c: 0x0  nop
    ctx->pc = 0x47df0cu;
    // NOP
    // 0x47df10: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x47df10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x47df14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x47df14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x47df18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47df18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47df1c: 0x0  nop
    ctx->pc = 0x47df1cu;
    // NOP
    // 0x47df20: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x47df20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x47df24: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x47df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x47df28: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x47df28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_47df2c:
    // 0x47df2c: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x47df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x47df30: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x47df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x47df34: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x47df34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x47df38: 0xc11edd4  jal         func_47B750
    ctx->pc = 0x47DF38u;
    SET_GPR_U32(ctx, 31, 0x47DF40u);
    ctx->pc = 0x47B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B750u, 0x47DF38u, 0x47DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DF40u;
label_47df40:
    // 0x47df40: 0x27a20268  addiu       $v0, $sp, 0x268
    ctx->pc = 0x47df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x47df44: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x47df44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x47df48: 0x8fa2022c  lw          $v0, 0x22C($sp)
    ctx->pc = 0x47df48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x47df4c: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x47df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x47df50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47DF50u;
    {
        const bool branch_taken_0x47df50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47df50) {
            ctx->pc = 0x47DF60u;
            goto label_47df60;
        }
    }
    ctx->pc = 0x47DF58u;
    // 0x47df58: 0x2782c080  addiu       $v0, $gp, -0x3F80
    ctx->pc = 0x47df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951040));
    // 0x47df5c: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x47df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
label_47df60:
    // 0x47df60: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x47df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x47df64: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x47df64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x47df68: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x47df68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x47df6c: 0xc052608  jal         func_149820
    ctx->pc = 0x47DF6Cu;
    SET_GPR_U32(ctx, 31, 0x47DF74u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47DF6Cu, 0x47DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DF74u;
label_47df74:
    // 0x47df74: 0x27a20268  addiu       $v0, $sp, 0x268
    ctx->pc = 0x47df74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x47df78: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x47df78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x47df7c: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x47df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x47df80: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x47df80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x47df84: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x47df84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
    // 0x47df88: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x47df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x47df8c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x47df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x47df90: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x47df90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x47df94: 0x8e1e002c  lw          $fp, 0x2C($s0)
    ctx->pc = 0x47df94u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x47df98: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x47df98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
    // 0x47df9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47df9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47dfa0: 0x0  nop
    ctx->pc = 0x47dfa0u;
    // NOP
    // 0x47dfa4: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x47dfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x47dfa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47dfa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47dfac: 0x0  nop
    ctx->pc = 0x47dfacu;
    // NOP
    // 0x47dfb0: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x47dfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x47dfb4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x47dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x47dfb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x47dfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x47dfbc: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47dfc0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47DFC0u;
    {
        const bool branch_taken_0x47dfc0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x47dfc0) {
            ctx->pc = 0x47DFDCu;
            goto label_47dfdc;
        }
    }
    ctx->pc = 0x47DFC8u;
    // 0x47dfc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47dfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47dfcc: 0x0  nop
    ctx->pc = 0x47dfccu;
    // NOP
    // 0x47dfd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47dfd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x47dfd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x47DFD4u;
    {
        const bool branch_taken_0x47dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dfd4) {
            ctx->pc = 0x47DFF8u;
            goto label_47dff8;
        }
    }
    ctx->pc = 0x47DFDCu;
label_47dfdc:
    // 0x47dfdc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x47dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x47dfe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x47dfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47dfe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47dfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47dfe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47dfe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47dfec: 0x0  nop
    ctx->pc = 0x47dfecu;
    // NOP
    // 0x47dff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47dff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x47dff4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x47dff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_47dff8:
    // 0x47dff8: 0x0  nop
    ctx->pc = 0x47dff8u;
    // NOP
    // 0x47dffc: 0x0  nop
    ctx->pc = 0x47dffcu;
    // NOP
    // 0x47e000: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x47e000u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x47e004: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x47e004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x47e008: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x47e00c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47e010: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47E010u;
    {
        const bool branch_taken_0x47e010 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x47e010) {
            ctx->pc = 0x47E02Cu;
            goto label_47e02c;
        }
    }
    ctx->pc = 0x47E018u;
    // 0x47e018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47e018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e01c: 0x0  nop
    ctx->pc = 0x47e01cu;
    // NOP
    // 0x47e020: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47e020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x47e024: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x47E024u;
    {
        const bool branch_taken_0x47e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e024) {
            ctx->pc = 0x47E048u;
            goto label_47e048;
        }
    }
    ctx->pc = 0x47E02Cu;
label_47e02c:
    // 0x47e02c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x47e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x47e030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x47e030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47e034: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47e034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47e038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47e038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e03c: 0x0  nop
    ctx->pc = 0x47e03cu;
    // NOP
    // 0x47e040: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47e040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x47e044: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x47e044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_47e048:
    // 0x47e048: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x47e048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x47e04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47e04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e050: 0x0  nop
    ctx->pc = 0x47e050u;
    // NOP
    // 0x47e054: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x47e054u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x47e058: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x47e058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x47e05c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x47e060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47e060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e064: 0x0  nop
    ctx->pc = 0x47e064u;
    // NOP
    // 0x47e068: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x47e068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x47e06c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e06cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e070: 0x0  nop
    ctx->pc = 0x47e070u;
    // NOP
    // 0x47e074: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x47e074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x47e078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e07c: 0x0  nop
    ctx->pc = 0x47e07cu;
    // NOP
    // 0x47e080: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x47e080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x47e084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e088: 0x0  nop
    ctx->pc = 0x47e088u;
    // NOP
    // 0x47e08c: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x47e08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x47e090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e094: 0x0  nop
    ctx->pc = 0x47e094u;
    // NOP
    // 0x47e098: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x47e098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x47e09c: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x47e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47e0a0: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x47e0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x47e0a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47e0a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47e0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e0ac: 0x0  nop
    ctx->pc = 0x47e0acu;
    // NOP
    // 0x47e0b0: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x47e0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x47e0b4: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x47e0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x47e0b8: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x47e0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x47e0bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e0bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e0c0: 0x0  nop
    ctx->pc = 0x47e0c0u;
    // NOP
    // 0x47e0c4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x47e0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x47e0c8: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x47e0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x47e0cc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x47e0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x47e0d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e0d4: 0x0  nop
    ctx->pc = 0x47e0d4u;
    // NOP
    // 0x47e0d8: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x47e0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x47e0dc: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x47e0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x47e0e0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x47e0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x47e0e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e0e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e0e8: 0x0  nop
    ctx->pc = 0x47e0e8u;
    // NOP
    // 0x47e0ec: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x47e0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x47e0f0: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x47e0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x47e0f4: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x47e0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x47e0f8: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x47e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x47e0fc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x47e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x47e100: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x47e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x47e104: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x47e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47e108: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x47e108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x47e10c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x47e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x47e110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x47e110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x47e114: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x47e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47e118: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x47e118u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x47e11c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x47e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x47e120: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x47e120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x47e124: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x47e124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47e128: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x47E128u;
    SET_GPR_U32(ctx, 31, 0x47E130u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x47E128u, 0x47E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E130u;
label_47e130:
    // 0x47e130: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x47e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x47e134: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x47e134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x47e138: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x47e138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x47e13c: 0xc104d84  jal         func_413610
    ctx->pc = 0x47E13Cu;
    SET_GPR_U32(ctx, 31, 0x47E144u);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x47E13Cu, 0x47E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E144u;
label_47e144:
    // 0x47e144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e148: 0x0  nop
    ctx->pc = 0x47e148u;
    // NOP
    // 0x47e14c: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x47e14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x47e150: 0x8fb20260  lw          $s2, 0x260($sp)
    ctx->pc = 0x47e150u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x47e154: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47e154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47e158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47e158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e15c: 0x0  nop
    ctx->pc = 0x47e15cu;
    // NOP
    // 0x47e160: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x47e160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x47e164: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x47e164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x47e168: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x47e168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x47e16c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e170: 0x0  nop
    ctx->pc = 0x47e170u;
    // NOP
    // 0x47e174: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x47e174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x47e178: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x47e178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x47e17c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x47e17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x47e180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e184: 0x0  nop
    ctx->pc = 0x47e184u;
    // NOP
    // 0x47e188: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x47e188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x47e18c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x47e18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x47e190: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x47e190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x47e194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e198: 0x0  nop
    ctx->pc = 0x47e198u;
    // NOP
    // 0x47e19c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x47e19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x47e1a0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x47e1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x47e1a4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x47e1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x47e1a8: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x47e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x47e1ac: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x47e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x47e1b0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x47e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x47e1b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x47e1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47e1b8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x47e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x47e1bc: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x47e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
    // 0x47e1c0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x47E1C0u;
    {
        const bool branch_taken_0x47e1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e1c0) {
            ctx->pc = 0x47E328u;
            goto label_47e328;
        }
    }
    ctx->pc = 0x47E1C8u;
label_47e1c8:
    // 0x47e1c8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x47e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x47e1cc: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x47e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x47e1d0: 0xc041d58  jal         func_107560
    ctx->pc = 0x47E1D0u;
    SET_GPR_U32(ctx, 31, 0x47E1D8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47E1D0u, 0x47E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E1D8u;
label_47e1d8:
    // 0x47e1d8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x47e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x47e1dc: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x47e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x47e1e0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x47e1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x47e1e4: 0xc104d84  jal         func_413610
    ctx->pc = 0x47E1E4u;
    SET_GPR_U32(ctx, 31, 0x47E1ECu);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x47E1E4u, 0x47E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E1ECu;
label_47e1ec:
    // 0x47e1ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47e1f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47e1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e1f4: 0x0  nop
    ctx->pc = 0x47e1f4u;
    // NOP
    // 0x47e1f8: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x47e1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x47e1fc: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x47e1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x47e200: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x47e200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x47e204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e208: 0x0  nop
    ctx->pc = 0x47e208u;
    // NOP
    // 0x47e20c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x47e20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x47e210: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x47e210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x47e214: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x47e214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x47e218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e21c: 0x0  nop
    ctx->pc = 0x47e21cu;
    // NOP
    // 0x47e220: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x47e220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x47e224: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x47e224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x47e228: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x47e228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x47e22c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e230: 0x0  nop
    ctx->pc = 0x47e230u;
    // NOP
    // 0x47e234: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x47e234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x47e238: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x47e238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x47e23c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x47e23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x47e240: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x47e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x47e244: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x47e244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x47e248: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x47e248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x47e24c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x47e24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47e250: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x47e250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x47e254: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x47e254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
    // 0x47e258: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x47E258u;
    {
        const bool branch_taken_0x47e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e258) {
            ctx->pc = 0x47E2C4u;
            goto label_47e2c4;
        }
    }
    ctx->pc = 0x47E260u;
label_47e260:
    // 0x47e260: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x47e260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x47e264: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x47e264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x47e268: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x47e268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x47e26c: 0xc104d84  jal         func_413610
    ctx->pc = 0x47E26Cu;
    SET_GPR_U32(ctx, 31, 0x47E274u);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x47E26Cu, 0x47E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E274u;
label_47e274:
    // 0x47e274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47e274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e278: 0x2492000c  addiu       $s2, $a0, 0xC
    ctx->pc = 0x47e278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x47e27c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x47e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x47e280: 0xc041d58  jal         func_107560
    ctx->pc = 0x47E280u;
    SET_GPR_U32(ctx, 31, 0x47E288u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47E280u, 0x47E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E288u;
label_47e288:
    // 0x47e288: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x47e288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x47e28c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x47e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x47e290: 0x24a51b58  addiu       $a1, $a1, 0x1B58
    ctx->pc = 0x47e290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7000));
    // 0x47e294: 0xc7ac024c  lwc1        $f12, 0x24C($sp)
    ctx->pc = 0x47e294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x47e298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47e298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e29c: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x47E29Cu;
    SET_GPR_U32(ctx, 31, 0x47E2A4u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x47E29Cu, 0x47E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E2A4u;
label_47e2a4:
    // 0x47e2a4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x47e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x47e2a8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x47e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x47e2ac: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x47e2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x47e2b0: 0xc104d84  jal         func_413610
    ctx->pc = 0x47E2B0u;
    SET_GPR_U32(ctx, 31, 0x47E2B8u);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x47E2B0u, 0x47E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E2B8u;
label_47e2b8:
    // 0x47e2b8: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x47e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x47e2bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47e2c0: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x47e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_47e2c4:
    // 0x47e2c4: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x47e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x47e2c8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47e2cc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x47e2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47e2d0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x47E2D0u;
    {
        const bool branch_taken_0x47e2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e2d0) {
            ctx->pc = 0x47E260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e260;
        }
    }
    ctx->pc = 0x47E2D8u;
    // 0x47e2d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x47e2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47e2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e2e0: 0x0  nop
    ctx->pc = 0x47e2e0u;
    // NOP
    // 0x47e2e4: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x47e2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x47e2e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e2e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e2ec: 0x0  nop
    ctx->pc = 0x47e2ecu;
    // NOP
    // 0x47e2f0: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x47e2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x47e2f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e2f8: 0x0  nop
    ctx->pc = 0x47e2f8u;
    // NOP
    // 0x47e2fc: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x47e2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x47e300: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x47e300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47e304: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x47e304u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x47e308: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x47e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x47e30c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x47e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x47e310: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x47e310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47e314: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x47E314u;
    SET_GPR_U32(ctx, 31, 0x47E31Cu);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x47E314u, 0x47E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E31Cu;
label_47e31c:
    // 0x47e31c: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x47e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x47e320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47e320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47e324: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x47e324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_47e328:
    // 0x47e328: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x47e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x47e32c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x47e330: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x47e330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47e334: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x47E334u;
    {
        const bool branch_taken_0x47e334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e334) {
            ctx->pc = 0x47E1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e1c8;
        }
    }
    ctx->pc = 0x47E33Cu;
    // 0x47e33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e340: 0x0  nop
    ctx->pc = 0x47e340u;
    // NOP
    // 0x47e344: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x47e344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x47e348: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x47e348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x47e34c: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x47e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47e350: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x47e350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x47e354: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x47e354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x47e358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47e358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47e35c: 0x0  nop
    ctx->pc = 0x47e35cu;
    // NOP
    // 0x47e360: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x47e360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x47e364: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x47e364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x47e368: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x47e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47e36c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x47e36cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x47e370: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x47e370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x47e374: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47e374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x47e378: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x47e378u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x47e37c: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x47E37Cu;
    {
        const bool branch_taken_0x47e37c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e37c) {
            ctx->pc = 0x47E450u;
            goto label_47e450;
        }
    }
    ctx->pc = 0x47E384u;
    // 0x47e384: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x47e384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e388: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x47e388u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e38c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x47E38Cu;
    {
        const bool branch_taken_0x47e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e38c) {
            ctx->pc = 0x47E43Cu;
            goto label_47e43c;
        }
    }
    ctx->pc = 0x47E394u;
label_47e394:
    // 0x47e394: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x47e394u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e398: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x47E398u;
    {
        const bool branch_taken_0x47e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e398) {
            ctx->pc = 0x47E428u;
            goto label_47e428;
        }
    }
    ctx->pc = 0x47E3A0u;
label_47e3a0:
    // 0x47e3a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x47e3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e3a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x47e3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e3a8: 0x8fa602c0  lw          $a2, 0x2C0($sp)
    ctx->pc = 0x47e3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47e3ac: 0x27a70218  addiu       $a3, $sp, 0x218
    ctx->pc = 0x47e3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    // 0x47e3b0: 0x27a80210  addiu       $t0, $sp, 0x210
    ctx->pc = 0x47e3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x47e3b4: 0xc11f640  jal         func_47D900
    ctx->pc = 0x47E3B4u;
    SET_GPR_U32(ctx, 31, 0x47E3BCu);
    ctx->pc = 0x47D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D900u, 0x47E3B4u, 0x47E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E3BCu;
label_47e3bc:
    // 0x47e3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e3c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e3c4: 0x97a60218  lhu         $a2, 0x218($sp)
    ctx->pc = 0x47e3c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x47e3c8: 0x97a7021a  lhu         $a3, 0x21A($sp)
    ctx->pc = 0x47e3c8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 538)));
    // 0x47e3cc: 0x97a8021c  lhu         $t0, 0x21C($sp)
    ctx->pc = 0x47e3ccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x47e3d0: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x47E3D0u;
    SET_GPR_U32(ctx, 31, 0x47E3D8u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x47E3D0u, 0x47E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E3D8u;
label_47e3d8:
    // 0x47e3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e3dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e3e0: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x47e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x47e3e4: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x47E3E4u;
    SET_GPR_U32(ctx, 31, 0x47E3ECu);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x47E3E4u, 0x47E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E3ECu;
label_47e3ec:
    // 0x47e3ec: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x47e3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x47e3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e3f8: 0x97a60210  lhu         $a2, 0x210($sp)
    ctx->pc = 0x47e3f8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x47e3fc: 0x97a70212  lhu         $a3, 0x212($sp)
    ctx->pc = 0x47e3fcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 530)));
    // 0x47e400: 0x97a80214  lhu         $t0, 0x214($sp)
    ctx->pc = 0x47e400u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x47e404: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x47E404u;
    SET_GPR_U32(ctx, 31, 0x47E40Cu);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x47E404u, 0x47E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E40Cu;
label_47e40c:
    // 0x47e40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e414: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x47e414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x47e418: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x47E418u;
    SET_GPR_U32(ctx, 31, 0x47E420u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x47E418u, 0x47E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E420u;
label_47e420:
    // 0x47e420: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x47e420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x47e424: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x47e424u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_47e428:
    // 0x47e428: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47e428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47e42c: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x47e42cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47e430: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x47E430u;
    {
        const bool branch_taken_0x47e430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e430) {
            ctx->pc = 0x47E3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e3a0;
        }
    }
    ctx->pc = 0x47E438u;
    // 0x47e438: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x47e438u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_47e43c:
    // 0x47e43c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x47e440: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x47e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x47e444: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x47e444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47e448: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x47E448u;
    {
        const bool branch_taken_0x47e448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e448) {
            ctx->pc = 0x47E394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e394;
        }
    }
    ctx->pc = 0x47E450u;
label_47e450:
    // 0x47e450: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x47e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x47e454: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x47e454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x47e458: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x47e45c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x47e45cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x47e460: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x47E460u;
    {
        const bool branch_taken_0x47e460 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e460) {
            ctx->pc = 0x47E480u;
            goto label_47e480;
        }
    }
    ctx->pc = 0x47E468u;
    // 0x47e468: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x47e468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x47e46c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x47e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x47e470: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x47e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x47e474: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x47e474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x47e478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x47E478u;
    {
        const bool branch_taken_0x47e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e478) {
            ctx->pc = 0x47E484u;
            goto label_47e484;
        }
    }
    ctx->pc = 0x47E480u;
label_47e480:
    // 0x47e480: 0xafbe0224  sw          $fp, 0x224($sp)
    ctx->pc = 0x47e480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 30));
label_47e484:
    // 0x47e484: 0x8fb10224  lw          $s1, 0x224($sp)
    ctx->pc = 0x47e484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x47e488: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x47e488u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e48c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x47E48Cu;
    {
        const bool branch_taken_0x47e48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e48c) {
            ctx->pc = 0x47E50Cu;
            goto label_47e50c;
        }
    }
    ctx->pc = 0x47E494u;
label_47e494:
    // 0x47e494: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x47e494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x47e498: 0xa7a2028e  sh          $v0, 0x28E($sp)
    ctx->pc = 0x47e498u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 654), (uint16_t)GPR_U32(ctx, 2));
    // 0x47e49c: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x47e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x47e4a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47e4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47e4a4: 0xa7a2028c  sh          $v0, 0x28C($sp)
    ctx->pc = 0x47e4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 652), (uint16_t)GPR_U32(ctx, 2));
    // 0x47e4a8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x47e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x47e4ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47e4b0: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x47e4b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47e4b4: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x47e4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x47e4b8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47e4bc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47E4BCu;
    {
        const bool branch_taken_0x47e4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x47e4bc) {
            ctx->pc = 0x47E4D4u;
            goto label_47e4d4;
        }
    }
    ctx->pc = 0x47E4C4u;
    // 0x47e4c4: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47e4c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47e4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47e4cc: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x47e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x47e4d0: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x47e4d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47e4d4:
    // 0x47e4d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e4d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e4dc: 0x97a6028e  lhu         $a2, 0x28E($sp)
    ctx->pc = 0x47e4dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 654)));
    // 0x47e4e0: 0x97a7028c  lhu         $a3, 0x28C($sp)
    ctx->pc = 0x47e4e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x47e4e4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x47e4e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e4e8: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x47E4E8u;
    SET_GPR_U32(ctx, 31, 0x47E4F0u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x47E4E8u, 0x47E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E4F0u;
label_47e4f0:
    // 0x47e4f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e4f4: 0x24b10008  addiu       $s1, $a1, 0x8
    ctx->pc = 0x47e4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x47e4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e4fc: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x47e4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x47e500: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x47E500u;
    SET_GPR_U32(ctx, 31, 0x47E508u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x47E500u, 0x47E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E508u;
label_47e508:
    // 0x47e508: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x47e508u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_47e50c:
    // 0x47e50c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47e510: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x47e510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47e514: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x47E514u;
    {
        const bool branch_taken_0x47e514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e514) {
            ctx->pc = 0x47E494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e494;
        }
    }
    ctx->pc = 0x47E51Cu;
    // 0x47e51c: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x47e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x47e520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47e524: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x47e524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x47e528: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x47e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x47e52c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47e530: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x47e530u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47e534: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x47e534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x47e538: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47e538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e53c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x47E53Cu;
    {
        const bool branch_taken_0x47e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e53c) {
            ctx->pc = 0x47E5E0u;
            goto label_47e5e0;
        }
    }
    ctx->pc = 0x47E544u;
label_47e544:
    // 0x47e544: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x47e544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x47e548: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x47e548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x47e54c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47e550: 0xa7a2028e  sh          $v0, 0x28E($sp)
    ctx->pc = 0x47e550u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 654), (uint16_t)GPR_U32(ctx, 2));
    // 0x47e554: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x47e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x47e558: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x47e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x47e55c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47e560: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47e560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47e564: 0xa7a2028c  sh          $v0, 0x28C($sp)
    ctx->pc = 0x47e564u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 652), (uint16_t)GPR_U32(ctx, 2));
    // 0x47e568: 0x8fa20238  lw          $v0, 0x238($sp)
    ctx->pc = 0x47e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x47e56c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47e56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47e570: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x47e570u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x47e574: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47e578: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x47e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x47e57c: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x47E57Cu;
    {
        const bool branch_taken_0x47e57c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x47e57c) {
            ctx->pc = 0x47E5A8u;
            goto label_47e5a8;
        }
    }
    ctx->pc = 0x47E584u;
    // 0x47e584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e58c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47e58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47e590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x47e594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e598: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x47E598u;
    SET_GPR_U32(ctx, 31, 0x47E5A0u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x47E598u, 0x47E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E5A0u;
label_47e5a0:
    // 0x47e5a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x47E5A0u;
    {
        const bool branch_taken_0x47e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e5a0) {
            ctx->pc = 0x47E5C4u;
            goto label_47e5c4;
        }
    }
    ctx->pc = 0x47E5A8u;
label_47e5a8:
    // 0x47e5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e5ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e5b0: 0x97a6028e  lhu         $a2, 0x28E($sp)
    ctx->pc = 0x47e5b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 654)));
    // 0x47e5b4: 0x97a7028c  lhu         $a3, 0x28C($sp)
    ctx->pc = 0x47e5b4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x47e5b8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x47e5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e5bc: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x47E5BCu;
    SET_GPR_U32(ctx, 31, 0x47E5C4u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x47E5BCu, 0x47E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E5C4u;
label_47e5c4:
    // 0x47e5c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e5c8: 0x24b10008  addiu       $s1, $a1, 0x8
    ctx->pc = 0x47e5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x47e5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e5d0: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x47e5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x47e5d4: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x47E5D4u;
    SET_GPR_U32(ctx, 31, 0x47E5DCu);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x47E5D4u, 0x47E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E5DCu;
label_47e5dc:
    // 0x47e5dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x47e5dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_47e5e0:
    // 0x47e5e0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x47e5e4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x47e5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47e5e8: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x47E5E8u;
    {
        const bool branch_taken_0x47e5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e5e8) {
            ctx->pc = 0x47E544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e544;
        }
    }
    ctx->pc = 0x47E5F0u;
    // 0x47e5f0: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x47e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x47e5f4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x47e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x47e5f8: 0xc0e2ab0  jal         func_38AAC0
    ctx->pc = 0x47E5F8u;
    SET_GPR_U32(ctx, 31, 0x47E600u);
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x47E5F8u, 0x47E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E600u;
label_47e600:
    // 0x47e600: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x47e600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x47e604: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x47e604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x47e608: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x47e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x47e60c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47e60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e610: 0xc046270  jal         func_1189C0
    ctx->pc = 0x47E610u;
    SET_GPR_U32(ctx, 31, 0x47E618u);
    ctx->pc = 0x1189C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C0u, 0x47E610u, 0x47E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E618u;
label_47e618:
    // 0x47e618: 0x27a2026c  addiu       $v0, $sp, 0x26C
    ctx->pc = 0x47e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
    // 0x47e61c: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x47e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x47e620: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x47e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x47e624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e628: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x47E628u;
    SET_GPR_U32(ctx, 31, 0x47E630u);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x47E628u, 0x47E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E630u;
label_47e630:
    // 0x47e630: 0xc0e2094  jal         func_388250
    ctx->pc = 0x47E630u;
    SET_GPR_U32(ctx, 31, 0x47E638u);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x47E630u, 0x47E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E638u;
label_47e638:
    // 0x47e638: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x47e638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x47e63c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47E63Cu;
    {
        const bool branch_taken_0x47e63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e63c) {
            ctx->pc = 0x47E650u;
            goto label_47e650;
        }
    }
    ctx->pc = 0x47E644u;
    // 0x47e644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47e644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e648: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x47E648u;
    {
        const bool branch_taken_0x47e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e648) {
            ctx->pc = 0x47E6F0u;
            goto label_47e6f0;
        }
    }
    ctx->pc = 0x47E650u;
label_47e650:
    // 0x47e650: 0xc1067b0  jal         func_419EC0
    ctx->pc = 0x47E650u;
    SET_GPR_U32(ctx, 31, 0x47E658u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x47E650u, 0x47E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E658u;
label_47e658:
    // 0x47e658: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x47e658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x47e65c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47E65Cu;
    {
        const bool branch_taken_0x47e65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e65c) {
            ctx->pc = 0x47E670u;
            goto label_47e670;
        }
    }
    ctx->pc = 0x47E664u;
    // 0x47e664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47e664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e668: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x47E668u;
    {
        const bool branch_taken_0x47e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e668) {
            ctx->pc = 0x47E6F0u;
            goto label_47e6f0;
        }
    }
    ctx->pc = 0x47E670u;
label_47e670:
    // 0x47e670: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x47e670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x47e674: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x47e674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x47e678: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x47E678u;
    SET_GPR_U32(ctx, 31, 0x47E680u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x47E678u, 0x47E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E680u;
label_47e680:
    // 0x47e680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47e680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e684: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x47e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x47e688: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x47e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x47e68c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x47e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x47e690: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x47e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x47e694: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x47e694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x47e698: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x47E698u;
    SET_GPR_U32(ctx, 31, 0x47E6A0u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x47E698u, 0x47E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E6A0u;
label_47e6a0:
    // 0x47e6a0: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x47e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x47e6a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47e6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e6a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47e6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e6ac: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x47E6ACu;
    SET_GPR_U32(ctx, 31, 0x47E6B4u);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x47E6ACu, 0x47E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E6B4u;
label_47e6b4:
    // 0x47e6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e6b8: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x47E6B8u;
    SET_GPR_U32(ctx, 31, 0x47E6C0u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x47E6B8u, 0x47E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E6C0u;
label_47e6c0:
    // 0x47e6c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x47e6c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e6c4: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x47e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x47e6c8: 0xc0e39c0  jal         func_38E700
    ctx->pc = 0x47E6C8u;
    SET_GPR_U32(ctx, 31, 0x47E6D0u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x47E6C8u, 0x47E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E6D0u;
label_47e6d0:
    // 0x47e6d0: 0x8fa40284  lw          $a0, 0x284($sp)
    ctx->pc = 0x47e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x47e6d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47E6D4u;
    {
        const bool branch_taken_0x47e6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e6d4) {
            ctx->pc = 0x47E6ECu;
            goto label_47e6ec;
        }
    }
    ctx->pc = 0x47E6DCu;
    // 0x47e6dc: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x47e6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x47e6e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x47e6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e6e4: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x47E6E4u;
    SET_GPR_U32(ctx, 31, 0x47E6ECu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x47E6E4u, 0x47E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E6ECu;
label_47e6ec:
    // 0x47e6ec: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x47e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_47e6f0:
    // 0x47e6f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x47e6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47e6f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x47e6f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47e6f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47e6f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47e6fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47e6fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47e700: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47e700u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47e704: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47e704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47e708: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47e708u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47e70c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47e70cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47e710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47e710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47e714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47e714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47e718: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x47e718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x47e71c: 0x3e00008  jr          $ra
    ctx->pc = 0x47E71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47E724u;
    // 0x47e724: 0x0  nop
    ctx->pc = 0x47e724u;
    // NOP
    // 0x47e728: 0x0  nop
    ctx->pc = 0x47e728u;
    // NOP
    // 0x47e72c: 0x0  nop
    ctx->pc = 0x47e72cu;
    // NOP
    ctx->pc = 0x47e730u;
}
