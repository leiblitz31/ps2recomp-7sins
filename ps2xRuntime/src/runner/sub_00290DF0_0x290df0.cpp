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

// Function: sub_00290DF0
// Address: 0x290df0 - 0x290f90
void sub_00290DF0_0x290df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290DF0_0x290df0");
#endif

    switch (ctx->pc) {
        case 0x290e40u: goto label_290e40;
        case 0x290ed4u: goto label_290ed4;
        case 0x290f14u: goto label_290f14;
        case 0x290f54u: goto label_290f54;
        case 0x290f68u: goto label_290f68;
        case 0x290f70u: goto label_290f70;
        default: break;
    }

    ctx->pc = 0x290df0u;

    // 0x290df0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x290df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x290df4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x290df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x290df8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x290df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x290dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290e04: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x290e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x290e08: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x290e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290e0c: 0x90630068  lbu         $v1, 0x68($v1)
    ctx->pc = 0x290e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x290e10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x290e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x290e14: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x290E14u;
    {
        const bool branch_taken_0x290e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e14) {
            ctx->pc = 0x290F70u;
            goto label_290f70;
        }
    }
    ctx->pc = 0x290E1Cu;
    // 0x290e1c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x290e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290e20: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x290e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x290e24: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x290E24u;
    {
        const bool branch_taken_0x290e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e24) {
            ctx->pc = 0x290E4Cu;
            goto label_290e4c;
        }
    }
    ctx->pc = 0x290E2Cu;
    // 0x290e2c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x290e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290e30: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x290e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x290e34: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x290e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x290e38: 0xc085538  jal         func_2154E0
    ctx->pc = 0x290E38u;
    SET_GPR_U32(ctx, 31, 0x290E40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x290E38u, 0x290E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E40u;
label_290e40:
    // 0x290e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290E44u;
    {
        const bool branch_taken_0x290e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e44) {
            ctx->pc = 0x290E50u;
            goto label_290e50;
        }
    }
    ctx->pc = 0x290E4Cu;
label_290e4c:
    // 0x290e4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x290e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290e50:
    // 0x290e50: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x290e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x290e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x290e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290e5c: 0x0  nop
    ctx->pc = 0x290e5cu;
    // NOP
    // 0x290e60: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x290e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x290e64: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x290e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x290e68: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x290e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x290e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x290e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290e70: 0x0  nop
    ctx->pc = 0x290e70u;
    // NOP
    // 0x290e74: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x290e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x290e78: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x290e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x290e7c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x290e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x290e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x290e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290e84: 0x0  nop
    ctx->pc = 0x290e84u;
    // NOP
    // 0x290e88: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x290e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x290e8c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x290e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x290e90: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x290e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x290e94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x290e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290e98: 0x0  nop
    ctx->pc = 0x290e98u;
    // NOP
    // 0x290e9c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x290e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x290ea0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x290ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x290ea4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x290ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x290ea8: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x290ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x290eac: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x290eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x290eb0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x290eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x290eb4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x290eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x290eb8: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x290eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x290ebc: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x290ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x290ec0: 0x10120005  beq         $zero, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x290EC0u;
    {
        const bool branch_taken_0x290ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x290ec0) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290EC8u;
    // 0x290ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ecc: 0xc091018  jal         func_244060
    ctx->pc = 0x290ECCu;
    SET_GPR_U32(ctx, 31, 0x290ED4u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x290ECCu, 0x290ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290ED4u;
label_290ed4:
    // 0x290ed4: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x290ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_290ed8:
    // 0x290ed8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x290ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290edc: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x290edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x290ee0: 0x10030023  beq         $zero, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x290EE0u;
    {
        const bool branch_taken_0x290ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x290ee0) {
            ctx->pc = 0x290F70u;
            goto label_290f70;
        }
    }
    ctx->pc = 0x290EE8u;
    // 0x290ee8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x290ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290eec: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x290eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x290ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290ef4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290EF4u;
    {
        const bool branch_taken_0x290ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x290ef4) {
            ctx->pc = 0x290F04u;
            goto label_290f04;
        }
    }
    ctx->pc = 0x290EFCu;
    // 0x290efc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x290EFCu;
    {
        const bool branch_taken_0x290efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290efc) {
            ctx->pc = 0x290F70u;
            goto label_290f70;
        }
    }
    ctx->pc = 0x290F04u;
label_290f04:
    // 0x290f04: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x290f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x290f08: 0x24c6d4e0  addiu       $a2, $a2, -0x2B20
    ctx->pc = 0x290f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956256));
    // 0x290f0c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x290f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x290f10: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x290f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_290f14:
    // 0x290f14: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x290f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x290f18: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x290f18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x290f1c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x290f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x290f20: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x290f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x290f24: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x290f24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x290f28: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x290f28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x290f2c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x290f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x290f30: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x290F30u;
    {
        const bool branch_taken_0x290f30 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x290f30) {
            ctx->pc = 0x290F14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290f14;
        }
    }
    ctx->pc = 0x290F38u;
    // 0x290f38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x290f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290f3c: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x290f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x290f40: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x290f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x290f44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x290f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f48: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x290f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x290f4c: 0xc1111fe  jal         func_4447F8
    ctx->pc = 0x290F4Cu;
    SET_GPR_U32(ctx, 31, 0x290F54u);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x290F4Cu, 0x290F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F54u;
label_290f54:
    // 0x290f54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290f58: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x290f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x290f5c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x290f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x290f60: 0xc111044  jal         func_444110
    ctx->pc = 0x290F60u;
    SET_GPR_U32(ctx, 31, 0x290F68u);
    ctx->pc = 0x444110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444110u, 0x290F60u, 0x290F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F68u;
label_290f68:
    // 0x290f68: 0xc111228  jal         func_4448A0
    ctx->pc = 0x290F68u;
    SET_GPR_U32(ctx, 31, 0x290F70u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x290F68u, 0x290F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F70u;
label_290f70:
    // 0x290f70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x290f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290f74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290f78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290f7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290f80: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x290f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x290f84: 0x3e00008  jr          $ra
    ctx->pc = 0x290F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290F8Cu;
    // 0x290f8c: 0x0  nop
    ctx->pc = 0x290f8cu;
    // NOP
    ctx->pc = 0x290f90u;
}
