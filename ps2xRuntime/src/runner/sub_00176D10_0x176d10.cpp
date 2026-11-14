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

// Function: sub_00176D10
// Address: 0x176d10 - 0x177090
void sub_00176D10_0x176d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176D10_0x176d10");
#endif

    switch (ctx->pc) {
        case 0x176d3cu: goto label_176d3c;
        case 0x176d48u: goto label_176d48;
        case 0x176d5cu: goto label_176d5c;
        case 0x176d98u: goto label_176d98;
        case 0x176da4u: goto label_176da4;
        case 0x176db8u: goto label_176db8;
        case 0x176eacu: goto label_176eac;
        case 0x176ed4u: goto label_176ed4;
        case 0x176ee8u: goto label_176ee8;
        case 0x176ef8u: goto label_176ef8;
        case 0x176f14u: goto label_176f14;
        case 0x176f20u: goto label_176f20;
        case 0x176f30u: goto label_176f30;
        case 0x176f50u: goto label_176f50;
        case 0x176f60u: goto label_176f60;
        case 0x176f70u: goto label_176f70;
        case 0x176f88u: goto label_176f88;
        case 0x176fa8u: goto label_176fa8;
        case 0x176fb4u: goto label_176fb4;
        case 0x176fd0u: goto label_176fd0;
        case 0x176fecu: goto label_176fec;
        case 0x177000u: goto label_177000;
        case 0x177014u: goto label_177014;
        case 0x177024u: goto label_177024;
        case 0x177038u: goto label_177038;
        case 0x177054u: goto label_177054;
        case 0x177064u: goto label_177064;
        case 0x177074u: goto label_177074;
        default: break;
    }

    ctx->pc = 0x176d10u;

    // 0x176d10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x176d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x176d14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x176d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176d18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176d24: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x176d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x176d28: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x176d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x176d2c: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x176d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x176d30: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x176d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x176d34: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x176D34u;
    SET_GPR_U32(ctx, 31, 0x176D3Cu);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x176D34u, 0x176D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D3Cu;
label_176d3c:
    // 0x176d3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d40: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x176D40u;
    SET_GPR_U32(ctx, 31, 0x176D48u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x176D40u, 0x176D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D48u;
label_176d48:
    // 0x176d48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d4c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x176d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x176d50: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x176d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x176d54: 0xc0b065c  jal         func_2C1970
    ctx->pc = 0x176D54u;
    SET_GPR_U32(ctx, 31, 0x176D5Cu);
    ctx->pc = 0x2C1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1970u, 0x176D54u, 0x176D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D5Cu;
label_176d5c:
    // 0x176d5c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x176d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x176d60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x176d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176d64: 0x0  nop
    ctx->pc = 0x176d64u;
    // NOP
    // 0x176d68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176d6c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x176D6Cu;
    {
        const bool branch_taken_0x176d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176d6c) {
            ctx->pc = 0x176D8Cu;
            goto label_176d8c;
        }
    }
    ctx->pc = 0x176D74u;
    // 0x176d74: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x176d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x176d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176d7c: 0x0  nop
    ctx->pc = 0x176d7cu;
    // NOP
    // 0x176d80: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x176d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x176d84: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x176D84u;
    {
        const bool branch_taken_0x176d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176d84) {
            ctx->pc = 0x176DBCu;
            goto label_176dbc;
        }
    }
    ctx->pc = 0x176D8Cu;
label_176d8c:
    // 0x176d8c: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x176d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x176d90: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x176D90u;
    SET_GPR_U32(ctx, 31, 0x176D98u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x176D90u, 0x176D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D98u;
label_176d98:
    // 0x176d98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d9c: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x176D9Cu;
    SET_GPR_U32(ctx, 31, 0x176DA4u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x176D9Cu, 0x176DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DA4u;
label_176da4:
    // 0x176da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176da8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x176da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x176dac: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x176db0: 0xc0b065c  jal         func_2C1970
    ctx->pc = 0x176DB0u;
    SET_GPR_U32(ctx, 31, 0x176DB8u);
    ctx->pc = 0x2C1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1970u, 0x176DB0u, 0x176DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DB8u;
label_176db8:
    // 0x176db8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x176db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_176dbc:
    // 0x176dbc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x176dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176dc0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x176dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x176dc4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x176dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x176dc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x176dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176dcc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x176dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176dd0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x176dd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x176dd4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x176dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x176dd8: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x176dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176ddc: 0xc78082a4  lwc1        $f0, -0x7D5C($gp)
    ctx->pc = 0x176ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176de0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176de4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x176DE4u;
    {
        const bool branch_taken_0x176de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176de4) {
            ctx->pc = 0x176DF8u;
            goto label_176df8;
        }
    }
    ctx->pc = 0x176DECu;
    // 0x176dec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x176decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176df0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x176DF0u;
    {
        const bool branch_taken_0x176df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176df0) {
            ctx->pc = 0x176E84u;
            goto label_176e84;
        }
    }
    ctx->pc = 0x176DF8u;
label_176df8:
    // 0x176df8: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x176df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176dfc: 0xc7808268  lwc1        $f0, -0x7D98($gp)
    ctx->pc = 0x176dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176e00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176e04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x176E04u;
    {
        const bool branch_taken_0x176e04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176e04) {
            ctx->pc = 0x176E18u;
            goto label_176e18;
        }
    }
    ctx->pc = 0x176E0Cu;
    // 0x176e0c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x176e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176e10: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x176E10u;
    {
        const bool branch_taken_0x176e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e10) {
            ctx->pc = 0x176E84u;
            goto label_176e84;
        }
    }
    ctx->pc = 0x176E18u;
label_176e18:
    // 0x176e18: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x176e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176e1c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x176e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x176e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176e24: 0x0  nop
    ctx->pc = 0x176e24u;
    // NOP
    // 0x176e28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176e2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x176E2Cu;
    {
        const bool branch_taken_0x176e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176e2c) {
            ctx->pc = 0x176E40u;
            goto label_176e40;
        }
    }
    ctx->pc = 0x176E34u;
    // 0x176e34: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x176e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176e38: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x176E38u;
    {
        const bool branch_taken_0x176e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e38) {
            ctx->pc = 0x176E84u;
            goto label_176e84;
        }
    }
    ctx->pc = 0x176E40u;
label_176e40:
    // 0x176e40: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x176e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176e44: 0xc78082a8  lwc1        $f0, -0x7D58($gp)
    ctx->pc = 0x176e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176e48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176e48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176e4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x176E4Cu;
    {
        const bool branch_taken_0x176e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176e4c) {
            ctx->pc = 0x176E60u;
            goto label_176e60;
        }
    }
    ctx->pc = 0x176E54u;
    // 0x176e54: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x176e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176e58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x176E58u;
    {
        const bool branch_taken_0x176e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e58) {
            ctx->pc = 0x176E84u;
            goto label_176e84;
        }
    }
    ctx->pc = 0x176E60u;
label_176e60:
    // 0x176e60: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x176e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176e64: 0xc78082ac  lwc1        $f0, -0x7D54($gp)
    ctx->pc = 0x176e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176e6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x176E6Cu;
    {
        const bool branch_taken_0x176e6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176e6c) {
            ctx->pc = 0x176E80u;
            goto label_176e80;
        }
    }
    ctx->pc = 0x176E74u;
    // 0x176e74: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x176e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x176e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176E78u;
    {
        const bool branch_taken_0x176e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e78) {
            ctx->pc = 0x176E84u;
            goto label_176e84;
        }
    }
    ctx->pc = 0x176E80u;
label_176e80:
    // 0x176e80: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x176e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_176e84:
    // 0x176e84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x176e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176e88: 0xac500084  sw          $s0, 0x84($v0)
    ctx->pc = 0x176e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 16));
    // 0x176e8c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x176e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176e90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x176e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176e94: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x176e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x176e98: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x176e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176e9c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x176e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x176ea0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x176ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x176ea4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x176EA4u;
    SET_GPR_U32(ctx, 31, 0x176EACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x176EA4u, 0x176EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EACu;
label_176eac:
    // 0x176eac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x176eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176eb0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x176eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176eb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176eb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x176eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176ebc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x176ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x176ec0: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x176ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x176ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176ecc: 0xc08c544  jal         func_231510
    ctx->pc = 0x176ECCu;
    SET_GPR_U32(ctx, 31, 0x176ED4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x176ECCu, 0x176ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176ED4u;
label_176ed4:
    // 0x176ed4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x176ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x176ed8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x176ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x176edc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x176edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x176ee0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x176EE0u;
    SET_GPR_U32(ctx, 31, 0x176EE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x176EE0u, 0x176EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EE8u;
label_176ee8:
    // 0x176ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x176ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ef0: 0xc0984a4  jal         func_261290
    ctx->pc = 0x176EF0u;
    SET_GPR_U32(ctx, 31, 0x176EF8u);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x176EF0u, 0x176EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EF8u;
label_176ef8:
    // 0x176ef8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x176ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176efc: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x176efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x176f00: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x176f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x176f04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x176f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x176f08: 0x24a54c10  addiu       $a1, $a1, 0x4C10
    ctx->pc = 0x176f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
    // 0x176f0c: 0xc040304  jal         func_100C10
    ctx->pc = 0x176F0Cu;
    SET_GPR_U32(ctx, 31, 0x176F14u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x176F0Cu, 0x176F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F14u;
label_176f14:
    // 0x176f14: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x176f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x176f18: 0xc042514  jal         func_109450
    ctx->pc = 0x176F18u;
    SET_GPR_U32(ctx, 31, 0x176F20u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x176F18u, 0x176F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F20u;
label_176f20:
    // 0x176f20: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x176f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x176f24: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x176f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x176f28: 0xc05db18  jal         func_176C60
    ctx->pc = 0x176F28u;
    SET_GPR_U32(ctx, 31, 0x176F30u);
    ctx->pc = 0x176C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C60u, 0x176F28u, 0x176F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F30u;
label_176f30:
    // 0x176f30: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x176f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
    // 0x176f34: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x176f34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x176f38: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x176f38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176f3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176f40: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x176f40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x176f44: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x176f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x176f48: 0xc041874  jal         func_1061D0
    ctx->pc = 0x176F48u;
    SET_GPR_U32(ctx, 31, 0x176F50u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x176F48u, 0x176F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F50u;
label_176f50:
    // 0x176f50: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x176f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x176f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f58: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x176F58u;
    SET_GPR_U32(ctx, 31, 0x176F60u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x176F58u, 0x176F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F60u;
label_176f60:
    // 0x176f60: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x176f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x176f64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f68: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x176F68u;
    SET_GPR_U32(ctx, 31, 0x176F70u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x176F68u, 0x176F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F70u;
label_176f70:
    // 0x176f70: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x176f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x176f74: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x176f74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176f78: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x176f7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f80: 0xc059640  jal         func_165900
    ctx->pc = 0x176F80u;
    SET_GPR_U32(ctx, 31, 0x176F88u);
    ctx->pc = 0x165900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165900u, 0x176F80u, 0x176F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F88u;
label_176f88:
    // 0x176f88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x176f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176f8c: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x176F8Cu;
    {
        const bool branch_taken_0x176f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x176f8c) {
            ctx->pc = 0x177024u;
            goto label_177024;
        }
    }
    ctx->pc = 0x176F94u;
    // 0x176f94: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x176f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x176f98: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x176f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x176f9c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x176f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x176fa0: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x176FA0u;
    SET_GPR_U32(ctx, 31, 0x176FA8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x176FA0u, 0x176FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FA8u;
label_176fa8:
    // 0x176fa8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x176fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x176fac: 0xc096950  jal         func_25A540
    ctx->pc = 0x176FACu;
    SET_GPR_U32(ctx, 31, 0x176FB4u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x176FACu, 0x176FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FB4u;
label_176fb4:
    // 0x176fb4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176FB4u;
    {
        const bool branch_taken_0x176fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176fb4) {
            ctx->pc = 0x176FD8u;
            goto label_176fd8;
        }
    }
    ctx->pc = 0x176FBCu;
    // 0x176fbc: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x176fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x176fc0: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x176fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x176fc4: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x176fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x176fc8: 0xc05e764  jal         func_179D90
    ctx->pc = 0x176FC8u;
    SET_GPR_U32(ctx, 31, 0x176FD0u);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x176FC8u, 0x176FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FD0u;
label_176fd0:
    // 0x176fd0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x176FD0u;
    {
        const bool branch_taken_0x176fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176fd0) {
            ctx->pc = 0x177014u;
            goto label_177014;
        }
    }
    ctx->pc = 0x176FD8u;
label_176fd8:
    // 0x176fd8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x176fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x176fdc: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x176fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x176fe0: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x176fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x176fe4: 0xc05e764  jal         func_179D90
    ctx->pc = 0x176FE4u;
    SET_GPR_U32(ctx, 31, 0x176FECu);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x176FE4u, 0x176FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FECu;
label_176fec:
    // 0x176fec: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x176fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x176ff0: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x176ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x176ff4: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x176ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x176ff8: 0xc05e764  jal         func_179D90
    ctx->pc = 0x176FF8u;
    SET_GPR_U32(ctx, 31, 0x177000u);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x176FF8u, 0x177000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177000u;
label_177000:
    // 0x177000: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x177000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x177004: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x177004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x177008: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x177008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x17700c: 0xc05e764  jal         func_179D90
    ctx->pc = 0x17700Cu;
    SET_GPR_U32(ctx, 31, 0x177014u);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x17700Cu, 0x177014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177014u;
label_177014:
    // 0x177014: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x177014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x177018: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x177018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17701c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17701Cu;
    SET_GPR_U32(ctx, 31, 0x177024u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17701Cu, 0x177024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177024u;
label_177024:
    // 0x177024: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x177024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177028: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x177028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x17702c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x177030: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x177030u;
    SET_GPR_U32(ctx, 31, 0x177038u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x177030u, 0x177038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177038u;
label_177038:
    // 0x177038: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x177038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17703c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177040: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x177040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x177044: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x177044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x177048: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17704c: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x17704Cu;
    SET_GPR_U32(ctx, 31, 0x177054u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x17704Cu, 0x177054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177054u;
label_177054:
    // 0x177054: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x177054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x177058: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x177058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17705c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17705Cu;
    SET_GPR_U32(ctx, 31, 0x177064u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17705Cu, 0x177064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177064u;
label_177064:
    // 0x177064: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x177064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x177068: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x177068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17706c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x17706Cu;
    SET_GPR_U32(ctx, 31, 0x177074u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x17706Cu, 0x177074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177074u;
label_177074:
    // 0x177074: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17707c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17707cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177084: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x177084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x177088: 0x3e00008  jr          $ra
    ctx->pc = 0x177088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177090u;
}
