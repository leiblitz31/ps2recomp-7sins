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

// Function: sub_002DA1C0
// Address: 0x2da1c0 - 0x2da4a0
void sub_002DA1C0_0x2da1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA1C0_0x2da1c0");
#endif

    switch (ctx->pc) {
        case 0x2da218u: goto label_2da218;
        case 0x2da228u: goto label_2da228;
        case 0x2da234u: goto label_2da234;
        case 0x2da244u: goto label_2da244;
        case 0x2da25cu: goto label_2da25c;
        case 0x2da270u: goto label_2da270;
        case 0x2da2b8u: goto label_2da2b8;
        case 0x2da2ccu: goto label_2da2cc;
        case 0x2da340u: goto label_2da340;
        case 0x2da384u: goto label_2da384;
        case 0x2da398u: goto label_2da398;
        case 0x2da3a8u: goto label_2da3a8;
        case 0x2da3bcu: goto label_2da3bc;
        case 0x2da3ecu: goto label_2da3ec;
        case 0x2da46cu: goto label_2da46c;
        case 0x2da48cu: goto label_2da48c;
        default: break;
    }

    ctx->pc = 0x2da1c0u;

    // 0x2da1c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2da1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2da1c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2da1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2da1c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da1d4: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x2da1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x2da1d8: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x2da1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x2da1dc: 0xe7ac00f0  swc1        $f12, 0xF0($sp)
    ctx->pc = 0x2da1dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2da1e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2da1e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da1e4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2da1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da1e8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2da1e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da1ec: 0x45010088  bc1t        . + 4 + (0x88 << 2)
    ctx->pc = 0x2DA1ECu;
    {
        const bool branch_taken_0x2da1ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da1ec) {
            ctx->pc = 0x2DA410u;
            goto label_2da410;
        }
    }
    ctx->pc = 0x2DA1F4u;
    // 0x2da1f4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2da1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2da1f8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2da1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2da1fc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2da1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2da200: 0x10620083  beq         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2DA200u;
    {
        const bool branch_taken_0x2da200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da200) {
            ctx->pc = 0x2DA410u;
            goto label_2da410;
        }
    }
    ctx->pc = 0x2DA208u;
    // 0x2da208: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2da208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2da20c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2da20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2da210: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA210u;
    SET_GPR_U32(ctx, 31, 0x2DA218u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA210u, 0x2DA218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA218u;
label_2da218:
    // 0x2da218: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2da218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da21c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2da21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da220: 0xc0516f8  jal         func_145BE0
    ctx->pc = 0x2DA220u;
    SET_GPR_U32(ctx, 31, 0x2DA228u);
    ctx->pc = 0x145BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BE0u, 0x2DA220u, 0x2DA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA228u;
label_2da228:
    // 0x2da228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da22c: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2DA22Cu;
    SET_GPR_U32(ctx, 31, 0x2DA234u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2DA22Cu, 0x2DA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA234u;
label_2da234:
    // 0x2da234: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x2da234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x2da238: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2da238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2da23c: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2DA23Cu;
    SET_GPR_U32(ctx, 31, 0x2DA244u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2DA23Cu, 0x2DA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA244u;
label_2da244:
    // 0x2da244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2da244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da248: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2da248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2da24c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2da24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2da250: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2da250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2da254: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA254u;
    SET_GPR_U32(ctx, 31, 0x2DA25Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA254u, 0x2DA25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA25Cu;
label_2da25c:
    // 0x2da25c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da260: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2da260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da268: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2DA268u;
    SET_GPR_U32(ctx, 31, 0x2DA270u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2DA268u, 0x2DA270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA270u;
label_2da270:
    // 0x2da270: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2da270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da274: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2da274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2da278: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2da278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da27c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2da27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da280: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2da280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da284: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2da284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2da288: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2da288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2da28c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2da28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2da290: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2da290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da294: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x2da294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x2da298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da29c: 0x0  nop
    ctx->pc = 0x2da29cu;
    // NOP
    // 0x2da2a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2da2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da2a4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2da2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2da2a8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2da2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2da2ac: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2da2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2da2b0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA2B0u;
    SET_GPR_U32(ctx, 31, 0x2DA2B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA2B0u, 0x2DA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA2B8u;
label_2da2b8:
    // 0x2da2b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2da2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2da2c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2c4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2DA2C4u;
    SET_GPR_U32(ctx, 31, 0x2DA2CCu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2DA2C4u, 0x2DA2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA2CCu;
label_2da2cc:
    // 0x2da2cc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2da2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2da2d0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2da2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2da2d4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2da2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da2d8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2da2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da2dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2da2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da2e0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2da2e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2da2e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2da2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2da2e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2da2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2da2ec: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2da2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da2f0: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x2da2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x2da2f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da2f8: 0x0  nop
    ctx->pc = 0x2da2f8u;
    // NOP
    // 0x2da2fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2da2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da300: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2da300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2da304: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2da304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da308: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2da308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da30c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da30cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da310: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2da310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2da314: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2da314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da318: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2da318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da31c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da31cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da320: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2da320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2da324: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2da324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da328: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2da328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da32c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da32cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da330: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2da330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2da334: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2da334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2da338: 0xc104d24  jal         func_413490
    ctx->pc = 0x2DA338u;
    SET_GPR_U32(ctx, 31, 0x2DA340u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2DA338u, 0x2DA340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA340u;
label_2da340:
    // 0x2da340: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2da340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2da344: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2da344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da348: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2da348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da34c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2da34cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da350: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x2DA350u;
    {
        const bool branch_taken_0x2da350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da350) {
            ctx->pc = 0x2DA404u;
            goto label_2da404;
        }
    }
    ctx->pc = 0x2DA358u;
    // 0x2da358: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2da358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da35c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2da35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da364: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x2DA364u;
    {
        const bool branch_taken_0x2da364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da364) {
            ctx->pc = 0x2DA404u;
            goto label_2da404;
        }
    }
    ctx->pc = 0x2DA36Cu;
    // 0x2da36c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da370: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2da370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2da374: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2da374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2da378: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2da378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2da37c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2DA37Cu;
    SET_GPR_U32(ctx, 31, 0x2DA384u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2DA37Cu, 0x2DA384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA384u;
label_2da384:
    // 0x2da384: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2da384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2da388: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x2da388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x2da38c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2da38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da390: 0xc041d58  jal         func_107560
    ctx->pc = 0x2DA390u;
    SET_GPR_U32(ctx, 31, 0x2DA398u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2DA390u, 0x2DA398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA398u;
label_2da398:
    // 0x2da398: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2da398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2da39c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2da39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2da3a0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2DA3A0u;
    SET_GPR_U32(ctx, 31, 0x2DA3A8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2DA3A0u, 0x2DA3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA3A8u;
label_2da3a8:
    // 0x2da3a8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2da3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2da3ac: 0x2484c330  addiu       $a0, $a0, -0x3CD0
    ctx->pc = 0x2da3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951728));
    // 0x2da3b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2da3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da3b4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2DA3B4u;
    SET_GPR_U32(ctx, 31, 0x2DA3BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2DA3B4u, 0x2DA3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA3BCu;
label_2da3bc:
    // 0x2da3bc: 0x2782b6b0  addiu       $v0, $gp, -0x4950
    ctx->pc = 0x2da3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948528));
    // 0x2da3c0: 0xaf82bcac  sw          $v0, -0x4354($gp)
    ctx->pc = 0x2da3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950060), GPR_U32(ctx, 2));
    // 0x2da3c4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2da3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2da3c8: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2da3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da3cc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2da3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2da3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da3d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2da3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2da3d8: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2da3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2da3dc: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x2da3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    // 0x2da3e0: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2da3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da3e4: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x2DA3E4u;
    SET_GPR_U32(ctx, 31, 0x2DA3ECu);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x2DA3E4u, 0x2DA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA3ECu;
label_2da3ec:
    // 0x2da3ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2da3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2da3f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA3F0u;
    {
        const bool branch_taken_0x2da3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da3f0) {
            ctx->pc = 0x2DA410u;
            goto label_2da410;
        }
    }
    ctx->pc = 0x2DA3F8u;
    // 0x2da3f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da3fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA3FCu;
    {
        const bool branch_taken_0x2da3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da3fc) {
            ctx->pc = 0x2DA414u;
            goto label_2da414;
        }
    }
    ctx->pc = 0x2DA404u;
label_2da404:
    // 0x2da404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA408u;
    {
        const bool branch_taken_0x2da408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da408) {
            ctx->pc = 0x2DA414u;
            goto label_2da414;
        }
    }
    ctx->pc = 0x2DA410u;
label_2da410:
    // 0x2da410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da414:
    // 0x2da414: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2da414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da41c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da424: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2da424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2da428: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA430u;
    // 0x2da430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2da430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2da434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2da438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2da43c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2da43cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2da440: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2da440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da444: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DA444u;
    {
        const bool branch_taken_0x2da444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da444) {
            ctx->pc = 0x2DA48Cu;
            goto label_2da48c;
        }
    }
    ctx->pc = 0x2DA44Cu;
    // 0x2da44c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2da44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2da450: 0x24636890  addiu       $v1, $v1, 0x6890
    ctx->pc = 0x2da450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26768));
    // 0x2da454: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2da454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da458: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2da458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2da45c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2da45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da464: 0xc09d150  jal         func_274540
    ctx->pc = 0x2DA464u;
    SET_GPR_U32(ctx, 31, 0x2DA46Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2DA464u, 0x2DA46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA46Cu;
label_2da46c:
    // 0x2da46c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2da46cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da470: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2da470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2da474: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2da474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2da478: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA478u;
    {
        const bool branch_taken_0x2da478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2da478) {
            ctx->pc = 0x2DA48Cu;
            goto label_2da48c;
        }
    }
    ctx->pc = 0x2DA480u;
    // 0x2da480: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2da480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da484: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DA484u;
    SET_GPR_U32(ctx, 31, 0x2DA48Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DA484u, 0x2DA48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA48Cu;
label_2da48c:
    // 0x2da48c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2da48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da494: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2da494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2da498: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA4A0u;
}
