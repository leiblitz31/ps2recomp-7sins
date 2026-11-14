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

// Function: sub_00246AC0
// Address: 0x246ac0 - 0x247000
void sub_00246AC0_0x246ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246AC0_0x246ac0");
#endif

    switch (ctx->pc) {
        case 0x246b0cu: goto label_246b0c;
        case 0x246b28u: goto label_246b28;
        case 0x246b58u: goto label_246b58;
        case 0x246b64u: goto label_246b64;
        case 0x246b74u: goto label_246b74;
        case 0x246b88u: goto label_246b88;
        case 0x246b9cu: goto label_246b9c;
        case 0x246bbcu: goto label_246bbc;
        case 0x246bd8u: goto label_246bd8;
        case 0x246bf4u: goto label_246bf4;
        case 0x246c18u: goto label_246c18;
        case 0x246c40u: goto label_246c40;
        case 0x246c88u: goto label_246c88;
        case 0x246cb4u: goto label_246cb4;
        case 0x246cccu: goto label_246ccc;
        case 0x246d04u: goto label_246d04;
        case 0x246d20u: goto label_246d20;
        case 0x246d38u: goto label_246d38;
        case 0x246d54u: goto label_246d54;
        case 0x246d74u: goto label_246d74;
        case 0x246dc4u: goto label_246dc4;
        case 0x246df8u: goto label_246df8;
        case 0x246e4cu: goto label_246e4c;
        case 0x246e64u: goto label_246e64;
        case 0x246e78u: goto label_246e78;
        case 0x246e8cu: goto label_246e8c;
        case 0x246ebcu: goto label_246ebc;
        case 0x246eecu: goto label_246eec;
        case 0x246f00u: goto label_246f00;
        case 0x246f1cu: goto label_246f1c;
        case 0x246f30u: goto label_246f30;
        case 0x246f50u: goto label_246f50;
        case 0x246f80u: goto label_246f80;
        case 0x246fb0u: goto label_246fb0;
        default: break;
    }

    ctx->pc = 0x246ac0u;

    // 0x246ac0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x246ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x246ac4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x246ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x246ac8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x246ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x246acc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x246accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x246ad0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x246ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x246ad4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x246ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x246ad8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x246ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x246adc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x246adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x246ae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x246ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x246ae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x246ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x246ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x246ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x246aec: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x246aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x246af0: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x246af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x246af4: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x246af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x246af8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x246af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246afc: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x246afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246b00: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x246b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x246b04: 0xc085538  jal         func_2154E0
    ctx->pc = 0x246B04u;
    SET_GPR_U32(ctx, 31, 0x246B0Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x246B04u, 0x246B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B0Cu;
label_246b0c:
    // 0x246b0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x246b0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b10: 0x1014004d  beq         $zero, $s4, . + 4 + (0x4D << 2)
    ctx->pc = 0x246B10u;
    {
        const bool branch_taken_0x246b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x246b10) {
            ctx->pc = 0x246C48u;
            goto label_246c48;
        }
    }
    ctx->pc = 0x246B18u;
    // 0x246b18: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x246b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x246b1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b20: 0xc090f80  jal         func_243E00
    ctx->pc = 0x246B20u;
    SET_GPR_U32(ctx, 31, 0x246B28u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x246B20u, 0x246B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B28u;
label_246b28:
    // 0x246b28: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x246b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x246b2c: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x246b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x246b30: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x246b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x246b34: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x246b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246b38: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x246b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246b3c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x246b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x246b40: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x246b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x246b44: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x246b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x246b48: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x246b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x246b4c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x246b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x246b50: 0xc042290  jal         func_108A40
    ctx->pc = 0x246B50u;
    SET_GPR_U32(ctx, 31, 0x246B58u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x246B50u, 0x246B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B58u;
label_246b58:
    // 0x246b58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x246b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b5c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x246B5Cu;
    {
        const bool branch_taken_0x246b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b5c) {
            ctx->pc = 0x246C30u;
            goto label_246c30;
        }
    }
    ctx->pc = 0x246B64u;
label_246b64:
    // 0x246b64: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x246b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246b68: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x246b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x246b6c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x246B6Cu;
    SET_GPR_U32(ctx, 31, 0x246B74u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x246B6Cu, 0x246B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B74u;
label_246b74:
    // 0x246b74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x246b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b78: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x246b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x246b7c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x246b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x246b80: 0xc085538  jal         func_2154E0
    ctx->pc = 0x246B80u;
    SET_GPR_U32(ctx, 31, 0x246B88u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x246B80u, 0x246B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B88u;
label_246b88:
    // 0x246b88: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x246b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x246b8c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x246b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x246b90: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x246b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x246b94: 0xc090f80  jal         func_243E00
    ctx->pc = 0x246B94u;
    SET_GPR_U32(ctx, 31, 0x246B9Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x246B94u, 0x246B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B9Cu;
label_246b9c:
    // 0x246b9c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x246b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246ba0: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x246ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246ba4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x246ba4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246ba8: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x246ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x246bac: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x246bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x246bb0: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x246bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x246bb4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x246BB4u;
    SET_GPR_U32(ctx, 31, 0x246BBCu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x246BB4u, 0x246BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BBCu;
label_246bbc:
    // 0x246bbc: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x246bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246bc0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x246bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246bc4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x246bc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246bc8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x246bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x246bcc: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x246bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246bd0: 0xc085530  jal         func_2154C0
    ctx->pc = 0x246BD0u;
    SET_GPR_U32(ctx, 31, 0x246BD8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x246BD0u, 0x246BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BD8u;
label_246bd8:
    // 0x246bd8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x246bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x246bdc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x246BDCu;
    {
        const bool branch_taken_0x246bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x246bdc) {
            ctx->pc = 0x246C08u;
            goto label_246c08;
        }
    }
    ctx->pc = 0x246BE4u;
    // 0x246be4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246be8: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x246be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x246bec: 0xc0935ac  jal         func_24D6B0
    ctx->pc = 0x246BECu;
    SET_GPR_U32(ctx, 31, 0x246BF4u);
    ctx->pc = 0x24D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D6B0u, 0x246BECu, 0x246BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BF4u;
label_246bf4:
    // 0x246bf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246BF4u;
    {
        const bool branch_taken_0x246bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246bf4) {
            ctx->pc = 0x246C08u;
            goto label_246c08;
        }
    }
    ctx->pc = 0x246BFCu;
    // 0x246bfc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x246bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x246C00u;
    {
        const bool branch_taken_0x246c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c00) {
            ctx->pc = 0x246C48u;
            goto label_246c48;
        }
    }
    ctx->pc = 0x246C08u;
label_246c08:
    // 0x246c08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c0c: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x246c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x246c10: 0xc0935fc  jal         func_24D7F0
    ctx->pc = 0x246C10u;
    SET_GPR_U32(ctx, 31, 0x246C18u);
    ctx->pc = 0x24D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D7F0u, 0x246C10u, 0x246C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C18u;
label_246c18:
    // 0x246c18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246C18u;
    {
        const bool branch_taken_0x246c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c18) {
            ctx->pc = 0x246C2Cu;
            goto label_246c2c;
        }
    }
    ctx->pc = 0x246C20u;
    // 0x246c20: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x246c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246C24u;
    {
        const bool branch_taken_0x246c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c24) {
            ctx->pc = 0x246C48u;
            goto label_246c48;
        }
    }
    ctx->pc = 0x246C2Cu;
label_246c2c:
    // 0x246c2c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x246c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_246c30:
    // 0x246c30: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x246c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x246c34: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x246c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x246c38: 0xc042288  jal         func_108A20
    ctx->pc = 0x246C38u;
    SET_GPR_U32(ctx, 31, 0x246C40u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x246C38u, 0x246C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C40u;
label_246c40:
    // 0x246c40: 0x1642ffc8  bne         $s2, $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x246C40u;
    {
        const bool branch_taken_0x246c40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x246c40) {
            ctx->pc = 0x246B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246b64;
        }
    }
    ctx->pc = 0x246C48u;
label_246c48:
    // 0x246c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246c4c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x246c4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246c54: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x246c54u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246c58: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x246c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x246c5c: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x246c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x246c60: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x246C60u;
    {
        const bool branch_taken_0x246c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c60) {
            ctx->pc = 0x246DC8u;
            goto label_246dc8;
        }
    }
    ctx->pc = 0x246C68u;
    // 0x246c68: 0x14100004  bne         $zero, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246C68u;
    {
        const bool branch_taken_0x246c68 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x246c68) {
            ctx->pc = 0x246C7Cu;
            goto label_246c7c;
        }
    }
    ctx->pc = 0x246C70u;
    // 0x246c70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x246c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c74: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x246C74u;
    {
        const bool branch_taken_0x246c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c74) {
            ctx->pc = 0x246DC8u;
            goto label_246dc8;
        }
    }
    ctx->pc = 0x246C7Cu;
label_246c7c:
    // 0x246c7c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x246c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246c80: 0xc085530  jal         func_2154C0
    ctx->pc = 0x246C80u;
    SET_GPR_U32(ctx, 31, 0x246C88u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x246C80u, 0x246C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C88u;
label_246c88:
    // 0x246c88: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x246c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x246c8c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x246C8Cu;
    {
        const bool branch_taken_0x246c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246c8c) {
            ctx->pc = 0x246CA8u;
            goto label_246ca8;
        }
    }
    ctx->pc = 0x246C94u;
    // 0x246c94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246c98: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x246C98u;
    {
        const bool branch_taken_0x246c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246c98) {
            ctx->pc = 0x246CA8u;
            goto label_246ca8;
        }
    }
    ctx->pc = 0x246CA0u;
    // 0x246ca0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x246CA0u;
    {
        const bool branch_taken_0x246ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ca0) {
            ctx->pc = 0x246DC8u;
            goto label_246dc8;
        }
    }
    ctx->pc = 0x246CA8u;
label_246ca8:
    // 0x246ca8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x246ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cac: 0xc091038  jal         func_2440E0
    ctx->pc = 0x246CACu;
    SET_GPR_U32(ctx, 31, 0x246CB4u);
    ctx->pc = 0x2440E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440E0u, 0x246CACu, 0x246CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CB4u;
label_246cb4:
    // 0x246cb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x246cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246cb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246CB8u;
    {
        const bool branch_taken_0x246cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246cb8) {
            ctx->pc = 0x246CDCu;
            goto label_246cdc;
        }
    }
    ctx->pc = 0x246CC0u;
    // 0x246cc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x246cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cc4: 0xc091040  jal         func_244100
    ctx->pc = 0x246CC4u;
    SET_GPR_U32(ctx, 31, 0x246CCCu);
    ctx->pc = 0x244100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244100u, 0x246CC4u, 0x246CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CCCu;
label_246ccc:
    // 0x246ccc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246cd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246CD4u;
    {
        const bool branch_taken_0x246cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246cd4) {
            ctx->pc = 0x246CE8u;
            goto label_246ce8;
        }
    }
    ctx->pc = 0x246CDCu;
label_246cdc:
    // 0x246cdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x246cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ce0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x246CE0u;
    {
        const bool branch_taken_0x246ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ce0) {
            ctx->pc = 0x246DC8u;
            goto label_246dc8;
        }
    }
    ctx->pc = 0x246CE8u;
label_246ce8:
    // 0x246ce8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x246ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x246cec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246cf0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x246CF0u;
    {
        const bool branch_taken_0x246cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246cf0) {
            ctx->pc = 0x246D8Cu;
            goto label_246d8c;
        }
    }
    ctx->pc = 0x246CF8u;
    // 0x246cf8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x246cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246cfc: 0xc085530  jal         func_2154C0
    ctx->pc = 0x246CFCu;
    SET_GPR_U32(ctx, 31, 0x246D04u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x246CFCu, 0x246D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D04u;
label_246d04:
    // 0x246d04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x246d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x246d08: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x246D08u;
    {
        const bool branch_taken_0x246d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x246d08) {
            ctx->pc = 0x246D2Cu;
            goto label_246d2c;
        }
    }
    ctx->pc = 0x246D10u;
    // 0x246d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d14: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x246d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246d18: 0xc092870  jal         func_24A1C0
    ctx->pc = 0x246D18u;
    SET_GPR_U32(ctx, 31, 0x246D20u);
    ctx->pc = 0x24A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A1C0u, 0x246D18u, 0x246D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D20u;
label_246d20:
    // 0x246d20: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x246d20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246d24: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x246D24u;
    {
        const bool branch_taken_0x246d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d24) {
            ctx->pc = 0x246D7Cu;
            goto label_246d7c;
        }
    }
    ctx->pc = 0x246D2Cu;
label_246d2c:
    // 0x246d2c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x246d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246d30: 0xc085530  jal         func_2154C0
    ctx->pc = 0x246D30u;
    SET_GPR_U32(ctx, 31, 0x246D38u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x246D30u, 0x246D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D38u;
label_246d38:
    // 0x246d38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246d3c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x246D3Cu;
    {
        const bool branch_taken_0x246d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x246d3c) {
            ctx->pc = 0x246D60u;
            goto label_246d60;
        }
    }
    ctx->pc = 0x246D44u;
    // 0x246d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d48: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x246d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246d4c: 0xc092870  jal         func_24A1C0
    ctx->pc = 0x246D4Cu;
    SET_GPR_U32(ctx, 31, 0x246D54u);
    ctx->pc = 0x24A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A1C0u, 0x246D4Cu, 0x246D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D54u;
label_246d54:
    // 0x246d54: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x246d54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246d58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x246D58u;
    {
        const bool branch_taken_0x246d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d58) {
            ctx->pc = 0x246D78u;
            goto label_246d78;
        }
    }
    ctx->pc = 0x246D60u;
label_246d60:
    // 0x246d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d64: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x246d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246d68: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x246d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x246d6c: 0xc092bb8  jal         func_24AEE0
    ctx->pc = 0x246D6Cu;
    SET_GPR_U32(ctx, 31, 0x246D74u);
    ctx->pc = 0x24AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AEE0u, 0x246D6Cu, 0x246D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D74u;
label_246d74:
    // 0x246d74: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x246d74u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_246d78:
    // 0x246d78: 0x32d100ff  andi        $s1, $s6, 0xFF
    ctx->pc = 0x246d78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_246d7c:
    // 0x246d7c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x246d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x246d80: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x246d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x246d84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x246d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246d88: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x246d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_246d8c:
    // 0x246d8c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x246d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x246d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246d94: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x246D94u;
    {
        const bool branch_taken_0x246d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246d94) {
            ctx->pc = 0x246DC8u;
            goto label_246dc8;
        }
    }
    ctx->pc = 0x246D9Cu;
    // 0x246d9c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x246d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x246da0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x246da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x246da4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246DA4u;
    {
        const bool branch_taken_0x246da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246da4) {
            ctx->pc = 0x246DC8u;
            goto label_246dc8;
        }
    }
    ctx->pc = 0x246DACu;
    // 0x246dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246db0: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x246db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246db4: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x246db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x246db8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246dbc: 0xc0924d4  jal         func_249350
    ctx->pc = 0x246DBCu;
    SET_GPR_U32(ctx, 31, 0x246DC4u);
    ctx->pc = 0x249350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249350u, 0x246DBCu, 0x246DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DC4u;
label_246dc4:
    // 0x246dc4: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x246dc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_246dc8:
    // 0x246dc8: 0x10100079  beq         $zero, $s0, . + 4 + (0x79 << 2)
    ctx->pc = 0x246DC8u;
    {
        const bool branch_taken_0x246dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x246dc8) {
            ctx->pc = 0x246FB0u;
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246DD0u;
    // 0x246dd0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x246dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x246dd4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x246dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x246dd8: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x246DD8u;
    {
        const bool branch_taken_0x246dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246dd8) {
            ctx->pc = 0x246FB0u;
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246DE0u;
    // 0x246de0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246de4: 0x0  nop
    ctx->pc = 0x246de4u;
    // NOP
    // 0x246de8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x246de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x246dec: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x246decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246df0: 0xc085530  jal         func_2154C0
    ctx->pc = 0x246DF0u;
    SET_GPR_U32(ctx, 31, 0x246DF8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x246DF0u, 0x246DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DF8u;
label_246df8:
    // 0x246df8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x246df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x246dfc: 0x10430062  beq         $v0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x246DFCu;
    {
        const bool branch_taken_0x246dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246dfc) {
            ctx->pc = 0x246F88u;
            goto label_246f88;
        }
    }
    ctx->pc = 0x246E04u;
    // 0x246e04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246e08: 0x10430053  beq         $v0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x246E08u;
    {
        const bool branch_taken_0x246e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246e08) {
            ctx->pc = 0x246F58u;
            goto label_246f58;
        }
    }
    ctx->pc = 0x246E10u;
    // 0x246e10: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x246e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x246e14: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x246E14u;
    {
        const bool branch_taken_0x246e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246e14) {
            ctx->pc = 0x246E68u;
            goto label_246e68;
        }
    }
    ctx->pc = 0x246E1Cu;
    // 0x246e1c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x246e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x246e20: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x246E20u;
    {
        const bool branch_taken_0x246e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246e20) {
            ctx->pc = 0x246E68u;
            goto label_246e68;
        }
    }
    ctx->pc = 0x246E28u;
    // 0x246e28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x246e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246e2c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x246E2Cu;
    {
        const bool branch_taken_0x246e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246e2c) {
            ctx->pc = 0x246E3Cu;
            goto label_246e3c;
        }
    }
    ctx->pc = 0x246E34u;
    // 0x246e34: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x246E34u;
    {
        const bool branch_taken_0x246e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e34) {
            ctx->pc = 0x246FB0u;
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246E3Cu;
label_246e3c:
    // 0x246e3c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x246e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246e40: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x246e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x246e44: 0xc085538  jal         func_2154E0
    ctx->pc = 0x246E44u;
    SET_GPR_U32(ctx, 31, 0x246E4Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x246E44u, 0x246E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E4Cu;
label_246e4c:
    // 0x246e4c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x246e4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e50: 0x10170005  beq         $zero, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x246E50u;
    {
        const bool branch_taken_0x246e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x246e50) {
            ctx->pc = 0x246E68u;
            goto label_246e68;
        }
    }
    ctx->pc = 0x246E58u;
    // 0x246e58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x246e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e5c: 0xc0469c4  jal         func_11A710
    ctx->pc = 0x246E5Cu;
    SET_GPR_U32(ctx, 31, 0x246E64u);
    ctx->pc = 0x11A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A710u, 0x246E5Cu, 0x246E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E64u;
label_246e64:
    // 0x246e64: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x246e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_246e68:
    // 0x246e68: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x246e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246e6c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x246e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x246e70: 0xc085538  jal         func_2154E0
    ctx->pc = 0x246E70u;
    SET_GPR_U32(ctx, 31, 0x246E78u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x246E70u, 0x246E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E78u;
label_246e78:
    // 0x246e78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x246e78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e7c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x246e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x246e80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x246e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e84: 0xc090f80  jal         func_243E00
    ctx->pc = 0x246E84u;
    SET_GPR_U32(ctx, 31, 0x246E8Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x246E84u, 0x246E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E8Cu;
label_246e8c:
    // 0x246e8c: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x246e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x246e90: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x246e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x246e94: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x246e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x246e98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x246e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246e9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x246e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246ea0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x246ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x246ea4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x246ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x246ea8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x246ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x246eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246eb0: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x246eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x246eb4: 0xc09381c  jal         func_24E070
    ctx->pc = 0x246EB4u;
    SET_GPR_U32(ctx, 31, 0x246EBCu);
    ctx->pc = 0x24E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E070u, 0x246EB4u, 0x246EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EBCu;
label_246ebc:
    // 0x246ebc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246ec4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x246EC4u;
    {
        const bool branch_taken_0x246ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246ec4) {
            ctx->pc = 0x246EF4u;
            goto label_246ef4;
        }
    }
    ctx->pc = 0x246ECCu;
    // 0x246ecc: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x246eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246ed0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x246ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246ed4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x246ed8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x246ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x246edc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x246edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ee0: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x246ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x246ee4: 0xc090f14  jal         func_243C50
    ctx->pc = 0x246EE4u;
    SET_GPR_U32(ctx, 31, 0x246EECu);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x246EE4u, 0x246EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EECu;
label_246eec:
    // 0x246eec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x246EECu;
    {
        const bool branch_taken_0x246eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246eec) {
            ctx->pc = 0x246FB0u;
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246EF4u;
label_246ef4:
    // 0x246ef4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x246ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246ef8: 0xc085530  jal         func_2154C0
    ctx->pc = 0x246EF8u;
    SET_GPR_U32(ctx, 31, 0x246F00u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x246EF8u, 0x246F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F00u;
label_246f00:
    // 0x246f00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x246f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246f04: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x246F04u;
    {
        const bool branch_taken_0x246f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x246f04) {
            ctx->pc = 0x246FB0u;
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246F0Cu;
    // 0x246f0c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x246f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x246f10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x246f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x246f14: 0xc085538  jal         func_2154E0
    ctx->pc = 0x246F14u;
    SET_GPR_U32(ctx, 31, 0x246F1Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x246F14u, 0x246F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F1Cu;
label_246f1c:
    // 0x246f1c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x246f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x246f20: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x246f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x246f24: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x246f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x246f28: 0xc090f80  jal         func_243E00
    ctx->pc = 0x246F28u;
    SET_GPR_U32(ctx, 31, 0x246F30u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x246F28u, 0x246F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F30u;
label_246f30:
    // 0x246f30: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x246f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246f34: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x246f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246f38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x246f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x246f3c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x246f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x246f40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x246f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f44: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x246f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x246f48: 0xc090f14  jal         func_243C50
    ctx->pc = 0x246F48u;
    SET_GPR_U32(ctx, 31, 0x246F50u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x246F48u, 0x246F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F50u;
label_246f50:
    // 0x246f50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x246F50u;
    {
        const bool branch_taken_0x246f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f50) {
            ctx->pc = 0x246FB0u;
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246F58u;
label_246f58:
    // 0x246f58: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x246f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x246f5c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x246f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x246f60: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x246F60u;
    {
        const bool branch_taken_0x246f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246f60) {
            ctx->pc = 0x246FB0u;
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246F68u;
    // 0x246f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f6c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x246f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246f70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x246f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246f74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246f78: 0xc0924d4  jal         func_249350
    ctx->pc = 0x246F78u;
    SET_GPR_U32(ctx, 31, 0x246F80u);
    ctx->pc = 0x249350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249350u, 0x246F78u, 0x246F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F80u;
label_246f80:
    // 0x246f80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x246F80u;
    {
        const bool branch_taken_0x246f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f80) {
            ctx->pc = 0x246FB0u;
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246F88u;
label_246f88:
    // 0x246f88: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x246f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x246f8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x246f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x246f90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x246F90u;
    {
        const bool branch_taken_0x246f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246f90) {
            ctx->pc = 0x246FB0u;
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246F98u;
    // 0x246f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f9c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x246f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x246fa0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x246fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246fa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246fa8: 0xc0924d4  jal         func_249350
    ctx->pc = 0x246FA8u;
    SET_GPR_U32(ctx, 31, 0x246FB0u);
    ctx->pc = 0x249350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249350u, 0x246FA8u, 0x246FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FB0u;
label_246fb0:
    // 0x246fb0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x246fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x246fb4: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x246fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x246fb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x246fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246fbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x246fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x246fc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x246fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x246fc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x246fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x246fc8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x246fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x246fcc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x246fccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x246fd0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x246fd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x246fd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x246fd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x246fd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x246fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x246fdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x246fdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246fe0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x246fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246fe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x246fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x246fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x246fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246ff0: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x246ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x246ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x246FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246FFCu;
    // 0x246ffc: 0x0  nop
    ctx->pc = 0x246ffcu;
    // NOP
    ctx->pc = 0x247000u;
}
