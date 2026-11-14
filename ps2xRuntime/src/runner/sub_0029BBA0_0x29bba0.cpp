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

// Function: sub_0029BBA0
// Address: 0x29bba0 - 0x29bf70
void sub_0029BBA0_0x29bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BBA0_0x29bba0");
#endif

    switch (ctx->pc) {
        case 0x29bc00u: goto label_29bc00;
        case 0x29bc0cu: goto label_29bc0c;
        case 0x29bc18u: goto label_29bc18;
        case 0x29bc28u: goto label_29bc28;
        case 0x29bcb4u: goto label_29bcb4;
        case 0x29bcf0u: goto label_29bcf0;
        case 0x29bd20u: goto label_29bd20;
        case 0x29bd3cu: goto label_29bd3c;
        case 0x29bd58u: goto label_29bd58;
        case 0x29bd7cu: goto label_29bd7c;
        case 0x29bd8cu: goto label_29bd8c;
        case 0x29bd9cu: goto label_29bd9c;
        case 0x29bdd0u: goto label_29bdd0;
        case 0x29bde0u: goto label_29bde0;
        case 0x29bdecu: goto label_29bdec;
        case 0x29be08u: goto label_29be08;
        case 0x29bf00u: goto label_29bf00;
        case 0x29bf20u: goto label_29bf20;
        case 0x29bf40u: goto label_29bf40;
        default: break;
    }

    ctx->pc = 0x29bba0u;

    // 0x29bba0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x29bba4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29bba8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29bbac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29bbb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29bbb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29bbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29bbbc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x29bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x29bbc0: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x29bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x29bbc4: 0xa3a600d0  sb          $a2, 0xD0($sp)
    ctx->pc = 0x29bbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 6));
    // 0x29bbc8: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x29bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
    // 0x29bbcc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29bbd0: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BBD0u;
    {
        const bool branch_taken_0x29bbd0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x29bbd0) {
            ctx->pc = 0x29BBE4u;
            goto label_29bbe4;
        }
    }
    ctx->pc = 0x29BBD8u;
    // 0x29bbd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29bbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbdc: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x29BBDCu;
    {
        const bool branch_taken_0x29bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bbdc) {
            ctx->pc = 0x29BF44u;
            goto label_29bf44;
        }
    }
    ctx->pc = 0x29BBE4u;
label_29bbe4:
    // 0x29bbe4: 0xa3a000ac  sb          $zero, 0xAC($sp)
    ctx->pc = 0x29bbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 0));
    // 0x29bbe8: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x29bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x29bbec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x29bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29bbf0: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x29BBF0u;
    {
        const bool branch_taken_0x29bbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bbf0) {
            ctx->pc = 0x29BE10u;
            goto label_29be10;
        }
    }
    ctx->pc = 0x29BBF8u;
    // 0x29bbf8: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x29BBF8u;
    SET_GPR_U32(ctx, 31, 0x29BC00u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x29BBF8u, 0x29BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC00u;
label_29bc00:
    // 0x29bc00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc04: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x29BC04u;
    SET_GPR_U32(ctx, 31, 0x29BC0Cu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x29BC04u, 0x29BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC0Cu;
label_29bc0c:
    // 0x29bc0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29bc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc10: 0xc05548c  jal         func_155230
    ctx->pc = 0x29BC10u;
    SET_GPR_U32(ctx, 31, 0x29BC18u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x29BC10u, 0x29BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC18u;
label_29bc18:
    // 0x29bc18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc1c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29bc20: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x29BC20u;
    SET_GPR_U32(ctx, 31, 0x29BC28u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x29BC20u, 0x29BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC28u;
label_29bc28:
    // 0x29bc28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29bc28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29bc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bc34: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29BC34u;
    {
        const bool branch_taken_0x29bc34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29bc34) {
            ctx->pc = 0x29BC54u;
            goto label_29bc54;
        }
    }
    ctx->pc = 0x29BC3Cu;
    // 0x29bc3c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x29bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29bc40: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BC40u;
    {
        const bool branch_taken_0x29bc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29bc40) {
            ctx->pc = 0x29BC54u;
            goto label_29bc54;
        }
    }
    ctx->pc = 0x29BC48u;
    // 0x29bc48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29bc4c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BC4Cu;
    {
        const bool branch_taken_0x29bc4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x29bc4c) {
            ctx->pc = 0x29BC5Cu;
            goto label_29bc5c;
        }
    }
    ctx->pc = 0x29BC54u;
label_29bc54:
    // 0x29bc54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bc58: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29bc58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29bc5c:
    // 0x29bc5c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29bc60: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29BC60u;
    {
        const bool branch_taken_0x29bc60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x29bc60) {
            ctx->pc = 0x29BC98u;
            goto label_29bc98;
        }
    }
    ctx->pc = 0x29BC68u;
    // 0x29bc68: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x29bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
    // 0x29bc6c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x29bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29bc70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bc74: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29BC74u;
    {
        const bool branch_taken_0x29bc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29bc74) {
            ctx->pc = 0x29BC98u;
            goto label_29bc98;
        }
    }
    ctx->pc = 0x29BC7Cu;
    // 0x29bc7c: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x29bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
    // 0x29bc80: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x29bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29bc84: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29bc88: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BC88u;
    {
        const bool branch_taken_0x29bc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29bc88) {
            ctx->pc = 0x29BC98u;
            goto label_29bc98;
        }
    }
    ctx->pc = 0x29BC90u;
    // 0x29bc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bc94: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29bc94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29bc98:
    // 0x29bc98: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BC98u;
    {
        const bool branch_taken_0x29bc98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc98) {
            ctx->pc = 0x29BCACu;
            goto label_29bcac;
        }
    }
    ctx->pc = 0x29BCA0u;
    // 0x29bca0: 0xa3a000ac  sb          $zero, 0xAC($sp)
    ctx->pc = 0x29bca0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 0));
    // 0x29bca4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x29BCA4u;
    {
        const bool branch_taken_0x29bca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bca4) {
            ctx->pc = 0x29BE34u;
            goto label_29be34;
        }
    }
    ctx->pc = 0x29BCACu;
label_29bcac:
    // 0x29bcac: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x29BCACu;
    SET_GPR_U32(ctx, 31, 0x29BCB4u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x29BCACu, 0x29BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCB4u;
label_29bcb4:
    // 0x29bcb4: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x29bcb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29bcb8: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x29bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x29bcbc: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x29bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x29bcc0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x29bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bcc4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29bcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bcc8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x29bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bccc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29bcccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29bcd0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29bcd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x29bcd4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29bcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x29bcd8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29bcdc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29bce0: 0x24a5b930  addiu       $a1, $a1, -0x46D0
    ctx->pc = 0x29bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949168));
    // 0x29bce4: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x29bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x29bce8: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x29BCE8u;
    SET_GPR_U32(ctx, 31, 0x29BCF0u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x29BCE8u, 0x29BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCF0u;
label_29bcf0:
    // 0x29bcf0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x29bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x29bcf4: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BCF4u;
    {
        const bool branch_taken_0x29bcf4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x29bcf4) {
            ctx->pc = 0x29BD08u;
            goto label_29bd08;
        }
    }
    ctx->pc = 0x29BCFCu;
    // 0x29bcfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29bcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd00: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x29BD00u;
    {
        const bool branch_taken_0x29bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bd00) {
            ctx->pc = 0x29BF44u;
            goto label_29bf44;
        }
    }
    ctx->pc = 0x29BD08u;
label_29bd08:
    // 0x29bd08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29bd0c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x29bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x29bd10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29bd14: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x29bd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x29bd18: 0xc041d58  jal         func_107560
    ctx->pc = 0x29BD18u;
    SET_GPR_U32(ctx, 31, 0x29BD20u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x29BD18u, 0x29BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD20u;
label_29bd20:
    // 0x29bd20: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x29bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x29bd24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29bd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd28: 0x0  nop
    ctx->pc = 0x29bd28u;
    // NOP
    // 0x29bd2c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x29bd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x29bd30: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29bd34: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x29BD34u;
    SET_GPR_U32(ctx, 31, 0x29BD3Cu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x29BD34u, 0x29BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD3Cu;
label_29bd3c:
    // 0x29bd3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd40: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29bd44: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x29bd44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x29bd48: 0x24c6b8b0  addiu       $a2, $a2, -0x4750
    ctx->pc = 0x29bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949040));
    // 0x29bd4c: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x29bd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x29bd50: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x29BD50u;
    SET_GPR_U32(ctx, 31, 0x29BD58u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x29BD50u, 0x29BD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD58u;
label_29bd58:
    // 0x29bd58: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x29bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x29bd5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bd60: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x29BD60u;
    {
        const bool branch_taken_0x29bd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bd60) {
            ctx->pc = 0x29BE34u;
            goto label_29be34;
        }
    }
    ctx->pc = 0x29BD68u;
    // 0x29bd68: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x29bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x29bd6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bd70: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29bd74: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29BD74u;
    SET_GPR_U32(ctx, 31, 0x29BD7Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29BD74u, 0x29BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD7Cu;
label_29bd7c:
    // 0x29bd7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29bd7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd84: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x29BD84u;
    SET_GPR_U32(ctx, 31, 0x29BD8Cu);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x29BD84u, 0x29BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD8Cu;
label_29bd8c:
    // 0x29bd8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29bd94: 0xc121e84  jal         func_487A10
    ctx->pc = 0x29BD94u;
    SET_GPR_U32(ctx, 31, 0x29BD9Cu);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x29BD94u, 0x29BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD9Cu;
label_29bd9c:
    // 0x29bd9c: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x29bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x29bda0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x29bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bda4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x29bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bda8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x29bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bdac: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x29bdacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29bdb0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x29bdb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x29bdb4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x29bdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x29bdb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bdbc: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x29bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x29bdc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29bdc4: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x29bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x29bdc8: 0xc041d58  jal         func_107560
    ctx->pc = 0x29BDC8u;
    SET_GPR_U32(ctx, 31, 0x29BDD0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x29BDC8u, 0x29BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDD0u;
label_29bdd0:
    // 0x29bdd0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x29bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x29bdd4: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x29bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x29bdd8: 0xc041d58  jal         func_107560
    ctx->pc = 0x29BDD8u;
    SET_GPR_U32(ctx, 31, 0x29BDE0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x29BDD8u, 0x29BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDE0u;
label_29bde0:
    // 0x29bde0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29bde4: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x29BDE4u;
    SET_GPR_U32(ctx, 31, 0x29BDECu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x29BDE4u, 0x29BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDECu;
label_29bdec:
    // 0x29bdec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdf0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29bdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29bdf4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x29bdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x29bdf8: 0x24c6b8b0  addiu       $a2, $a2, -0x4750
    ctx->pc = 0x29bdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949040));
    // 0x29bdfc: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x29bdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x29be00: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x29BE00u;
    SET_GPR_U32(ctx, 31, 0x29BE08u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x29BE00u, 0x29BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE08u;
label_29be08:
    // 0x29be08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29BE08u;
    {
        const bool branch_taken_0x29be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29be08) {
            ctx->pc = 0x29BE34u;
            goto label_29be34;
        }
    }
    ctx->pc = 0x29BE10u;
label_29be10:
    // 0x29be10: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x29be10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29be14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29be14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29be18: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BE18u;
    {
        const bool branch_taken_0x29be18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29be18) {
            ctx->pc = 0x29BE2Cu;
            goto label_29be2c;
        }
    }
    ctx->pc = 0x29BE20u;
    // 0x29be20: 0xa3a000ac  sb          $zero, 0xAC($sp)
    ctx->pc = 0x29be20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 0));
    // 0x29be24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29BE24u;
    {
        const bool branch_taken_0x29be24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29be24) {
            ctx->pc = 0x29BE34u;
            goto label_29be34;
        }
    }
    ctx->pc = 0x29BE2Cu;
label_29be2c:
    // 0x29be2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29be30: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x29be30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
label_29be34:
    // 0x29be34: 0x93a200ac  lbu         $v0, 0xAC($sp)
    ctx->pc = 0x29be34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x29be38: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29BE38u;
    {
        const bool branch_taken_0x29be38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29be38) {
            ctx->pc = 0x29BE98u;
            goto label_29be98;
        }
    }
    ctx->pc = 0x29BE40u;
    // 0x29be40: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x29be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x29be44: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x29be44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x29be48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29be48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29be4c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x29be4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29be50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29be54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29be54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29be58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29be58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29be5c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29be60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29be64: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x29be64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29be68: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29be6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29be70: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29be74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29be78: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x29be78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x29be7c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x29BE7Cu;
    {
        const bool branch_taken_0x29be7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29be7c) {
            ctx->pc = 0x29BEE8u;
            goto label_29bee8;
        }
    }
    ctx->pc = 0x29BE84u;
    // 0x29be84: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29be84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29be88: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29be8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29be90: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29BE90u;
    {
        const bool branch_taken_0x29be90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29be90) {
            ctx->pc = 0x29BEE8u;
            goto label_29bee8;
        }
    }
    ctx->pc = 0x29BE98u;
label_29be98:
    // 0x29be98: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x29be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x29be9c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x29be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x29bea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29bea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29bea4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x29bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bea8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29bea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29beac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29beacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29beb0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29beb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29beb4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29beb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bebc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29bec0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29bec4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29bec8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29becc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bed0: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x29bed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x29bed4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BED4u;
    {
        const bool branch_taken_0x29bed4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bed4) {
            ctx->pc = 0x29BEE8u;
            goto label_29bee8;
        }
    }
    ctx->pc = 0x29BEDCu;
    // 0x29bedc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x29bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29bee0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29bee4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29bee8:
    // 0x29bee8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29beec: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29beecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29bef0: 0x24a5b9d0  addiu       $a1, $a1, -0x4630
    ctx->pc = 0x29bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949328));
    // 0x29bef4: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x29bef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29bef8: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x29BEF8u;
    SET_GPR_U32(ctx, 31, 0x29BF00u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x29BEF8u, 0x29BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF00u;
label_29bf00:
    // 0x29bf00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x29bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29bf04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bf08: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29bf0c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BF0Cu;
    {
        const bool branch_taken_0x29bf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29bf0c) {
            ctx->pc = 0x29BF28u;
            goto label_29bf28;
        }
    }
    ctx->pc = 0x29BF14u;
    // 0x29bf14: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29bf18: 0xc11dff8  jal         func_477FE0
    ctx->pc = 0x29BF18u;
    SET_GPR_U32(ctx, 31, 0x29BF20u);
    ctx->pc = 0x477FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477FE0u, 0x29BF18u, 0x29BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF20u;
label_29bf20:
    // 0x29bf20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29BF20u;
    {
        const bool branch_taken_0x29bf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bf20) {
            ctx->pc = 0x29BF40u;
            goto label_29bf40;
        }
    }
    ctx->pc = 0x29BF28u;
label_29bf28:
    // 0x29bf28: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x29bf28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29bf2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BF2Cu;
    {
        const bool branch_taken_0x29bf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bf2c) {
            ctx->pc = 0x29BF40u;
            goto label_29bf40;
        }
    }
    ctx->pc = 0x29BF34u;
    // 0x29bf34: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29bf38: 0xc11e00c  jal         func_478030
    ctx->pc = 0x29BF38u;
    SET_GPR_U32(ctx, 31, 0x29BF40u);
    ctx->pc = 0x478030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478030u, 0x29BF38u, 0x29BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF40u;
label_29bf40:
    // 0x29bf40: 0x93a200ac  lbu         $v0, 0xAC($sp)
    ctx->pc = 0x29bf40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
label_29bf44:
    // 0x29bf44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29bf48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29bf48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bf4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29bf4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bf50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29bf50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bf54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29bf54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bf58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29bf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bf5c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x29bf5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29bf60: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BF68u;
    // 0x29bf68: 0x0  nop
    ctx->pc = 0x29bf68u;
    // NOP
    // 0x29bf6c: 0x0  nop
    ctx->pc = 0x29bf6cu;
    // NOP
    ctx->pc = 0x29bf70u;
}
