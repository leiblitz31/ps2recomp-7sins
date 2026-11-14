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

// Function: sub_0015EFE0
// Address: 0x15efe0 - 0x15f380
void sub_0015EFE0_0x15efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EFE0_0x15efe0");
#endif

    switch (ctx->pc) {
        case 0x15f048u: goto label_15f048;
        case 0x15f0a8u: goto label_15f0a8;
        case 0x15f0d4u: goto label_15f0d4;
        case 0x15f0e8u: goto label_15f0e8;
        case 0x15f128u: goto label_15f128;
        case 0x15f158u: goto label_15f158;
        case 0x15f168u: goto label_15f168;
        case 0x15f1a0u: goto label_15f1a0;
        case 0x15f1d8u: goto label_15f1d8;
        case 0x15f200u: goto label_15f200;
        case 0x15f220u: goto label_15f220;
        case 0x15f250u: goto label_15f250;
        case 0x15f268u: goto label_15f268;
        case 0x15f274u: goto label_15f274;
        case 0x15f284u: goto label_15f284;
        case 0x15f2d8u: goto label_15f2d8;
        case 0x15f300u: goto label_15f300;
        case 0x15f338u: goto label_15f338;
        default: break;
    }

    ctx->pc = 0x15efe0u;

    // 0x15efe0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x15efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x15efe4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15efe8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15efec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15eff0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15eff4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15eff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15eff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15eff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15effc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15f000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f00c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x15f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x15f010: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x15f010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x15f014: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x15f014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x15f018: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x15f018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
    // 0x15f01c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x15f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15f020: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x15f020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x15f024: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15f024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15f028: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x15f028u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15f02c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x15f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15f030: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x15f034: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x15f034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x15f038: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x15f038u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f03c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15f03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f040: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x15F040u;
    {
        const bool branch_taken_0x15f040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f040) {
            ctx->pc = 0x15F0D8u;
            goto label_15f0d8;
        }
    }
    ctx->pc = 0x15F048u;
label_15f048:
    // 0x15f048: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x15f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15f04c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F04Cu;
    {
        const bool branch_taken_0x15f04c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f04c) {
            ctx->pc = 0x15F064u;
            goto label_15f064;
        }
    }
    ctx->pc = 0x15F054u;
    // 0x15f054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f058: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x15f058u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15f05c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F05Cu;
    {
        const bool branch_taken_0x15f05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f05c) {
            ctx->pc = 0x15F068u;
            goto label_15f068;
        }
    }
    ctx->pc = 0x15F064u;
label_15f064:
    // 0x15f064: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15f064u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f068:
    // 0x15f068: 0xa3b500af  sb          $s5, 0xAF($sp)
    ctx->pc = 0x15f068u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 21));
    // 0x15f06c: 0x93a200af  lbu         $v0, 0xAF($sp)
    ctx->pc = 0x15f06cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x15f070: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15F070u;
    {
        const bool branch_taken_0x15f070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f070) {
            ctx->pc = 0x15F094u;
            goto label_15f094;
        }
    }
    ctx->pc = 0x15F078u;
    // 0x15f078: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x15f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15f07c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F07Cu;
    {
        const bool branch_taken_0x15f07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f07c) {
            ctx->pc = 0x15F090u;
            goto label_15f090;
        }
    }
    ctx->pc = 0x15F084u;
    // 0x15f084: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x15f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15f088: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15F088u;
    {
        const bool branch_taken_0x15f088 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15f088) {
            ctx->pc = 0x15F094u;
            goto label_15f094;
        }
    }
    ctx->pc = 0x15F090u;
label_15f090:
    // 0x15f090: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x15f090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
label_15f094:
    // 0x15f094: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f098: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15f098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15f09c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F0A0u;
    SET_GPR_U32(ctx, 31, 0x15F0A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F0A0u, 0x15F0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F0A8u;
label_15f0a8:
    // 0x15f0a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f0ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f0b0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15f0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f0b4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15f0b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f0bc: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x15f0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x15f0c0: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x15f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f0c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f0c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f0c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0cc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F0CCu;
    SET_GPR_U32(ctx, 31, 0x15F0D4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F0CCu, 0x15F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F0D4u;
label_15f0d4:
    // 0x15f0d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15f0d8:
    // 0x15f0d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f0dc: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15f0e0: 0xc05611c  jal         func_158470
    ctx->pc = 0x15F0E0u;
    SET_GPR_U32(ctx, 31, 0x15F0E8u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x15F0E0u, 0x15F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F0E8u;
label_15f0e8:
    // 0x15f0e8: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x15f0e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15f0ec: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x15F0ECu;
    {
        const bool branch_taken_0x15f0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f0ec) {
            ctx->pc = 0x15F048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f048;
        }
    }
    ctx->pc = 0x15F0F4u;
    // 0x15f0f4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15f0f8: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x15F0F8u;
    {
        const bool branch_taken_0x15f0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f0f8) {
            ctx->pc = 0x15F2F0u;
            goto label_15f2f0;
        }
    }
    ctx->pc = 0x15F100u;
    // 0x15f100: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f104: 0xa3a300af  sb          $v1, 0xAF($sp)
    ctx->pc = 0x15f104u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f108: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15f10c: 0x461002a  bgez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x15F10Cu;
    {
        const bool branch_taken_0x15f10c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15f10c) {
            ctx->pc = 0x15F1B8u;
            goto label_15f1b8;
        }
    }
    ctx->pc = 0x15F114u;
    // 0x15f114: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f118: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15f118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15f11c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15f120: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F120u;
    SET_GPR_U32(ctx, 31, 0x15F128u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F120u, 0x15F128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F128u;
label_15f128:
    // 0x15f128: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x15f128u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f12c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f130: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15f130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f134: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15f134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15f138: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15f138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f13c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f140: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x15f140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x15f144: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x15f144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f148: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f14c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f14cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f150: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F150u;
    SET_GPR_U32(ctx, 31, 0x15F158u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F150u, 0x15F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F158u;
label_15f158:
    // 0x15f158: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x15f158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f15c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15f15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f160: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15F160u;
    {
        const bool branch_taken_0x15f160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f160) {
            ctx->pc = 0x15F1A4u;
            goto label_15f1a4;
        }
    }
    ctx->pc = 0x15F168u;
label_15f168:
    // 0x15f168: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x15f168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f16c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15f170: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f178: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15f178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f17c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15f180: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x15f184: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f188: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x15f188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x15f18c: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x15f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f190: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f194: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f198: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F198u;
    SET_GPR_U32(ctx, 31, 0x15F1A0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F198u, 0x15F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1A0u;
label_15f1a0:
    // 0x15f1a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15f1a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15f1a4:
    // 0x15f1a4: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x15f1a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x15f1a8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15F1A8u;
    {
        const bool branch_taken_0x15f1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f1a8) {
            ctx->pc = 0x15F168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f168;
        }
    }
    ctx->pc = 0x15F1B0u;
    // 0x15f1b0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x15F1B0u;
    {
        const bool branch_taken_0x15f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f1b0) {
            ctx->pc = 0x15F348u;
            goto label_15f348;
        }
    }
    ctx->pc = 0x15F1B8u;
label_15f1b8:
    // 0x15f1b8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15f1bc: 0x18600062  blez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x15F1BCu;
    {
        const bool branch_taken_0x15f1bc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x15f1bc) {
            ctx->pc = 0x15F348u;
            goto label_15f348;
        }
    }
    ctx->pc = 0x15F1C4u;
    // 0x15f1c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f1c8: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15f1cc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x15f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15f1d0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F1D0u;
    SET_GPR_U32(ctx, 31, 0x15F1D8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F1D0u, 0x15F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1D8u;
label_15f1d8:
    // 0x15f1d8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f1dc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15f1e0: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x15f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x15f1e4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15F1E4u;
    {
        const bool branch_taken_0x15f1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f1e4) {
            ctx->pc = 0x15F224u;
            goto label_15f224;
        }
    }
    ctx->pc = 0x15F1ECu;
    // 0x15f1ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f1f0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15f1f4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x15f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15f1f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F1F8u;
    SET_GPR_U32(ctx, 31, 0x15F200u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F1F8u, 0x15F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F200u;
label_15f200:
    // 0x15f200: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x15f200u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f204: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F204u;
    {
        const bool branch_taken_0x15f204 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f204) {
            ctx->pc = 0x15F224u;
            goto label_15f224;
        }
    }
    ctx->pc = 0x15F20Cu;
    // 0x15f20c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f210: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15f210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15f214: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x15f214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15f218: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F218u;
    SET_GPR_U32(ctx, 31, 0x15F220u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F218u, 0x15F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F220u;
label_15f220:
    // 0x15f220: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x15f220u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15f224:
    // 0x15f224: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f228: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15f228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f22c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15f230: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15f230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f234: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f238: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x15f238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x15f23c: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x15f23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f244: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f248: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F248u;
    SET_GPR_U32(ctx, 31, 0x15F250u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F248u, 0x15F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F250u;
label_15f250:
    // 0x15f250: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f254: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f258: 0x24640074  addiu       $a0, $v1, 0x74
    ctx->pc = 0x15f258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x15f25c: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15f260: 0xc057944  jal         func_15E510
    ctx->pc = 0x15F260u;
    SET_GPR_U32(ctx, 31, 0x15F268u);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15F260u, 0x15F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F268u;
label_15f268:
    // 0x15f268: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15f268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f26c: 0xc058880  jal         func_162200
    ctx->pc = 0x15F26Cu;
    SET_GPR_U32(ctx, 31, 0x15F274u);
    ctx->pc = 0x162200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162200u, 0x15F26Cu, 0x15F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F274u;
label_15f274:
    // 0x15f274: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15f274u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f278: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f27c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15F27Cu;
    {
        const bool branch_taken_0x15f27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f27c) {
            ctx->pc = 0x15F2DCu;
            goto label_15f2dc;
        }
    }
    ctx->pc = 0x15F284u;
label_15f284:
    // 0x15f284: 0x16160005  bne         $s0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F284u;
    {
        const bool branch_taken_0x15f284 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        if (branch_taken_0x15f284) {
            ctx->pc = 0x15F29Cu;
            goto label_15f29c;
        }
    }
    ctx->pc = 0x15F28Cu;
    // 0x15f28c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f290: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x15f290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F294u;
    {
        const bool branch_taken_0x15f294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f294) {
            ctx->pc = 0x15F2A0u;
            goto label_15f2a0;
        }
    }
    ctx->pc = 0x15F29Cu;
label_15f29c:
    // 0x15f29c: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x15f29cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
label_15f2a0:
    // 0x15f2a0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x15f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f2a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15f2a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f2b0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15f2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f2b4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15f2b8: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x15f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x15f2bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f2c0: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x15f2c4: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x15f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f2c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f2ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2d0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F2D0u;
    SET_GPR_U32(ctx, 31, 0x15F2D8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F2D0u, 0x15F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F2D8u;
label_15f2d8:
    // 0x15f2d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f2dc:
    // 0x15f2dc: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x15f2dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x15f2e0: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x15F2E0u;
    {
        const bool branch_taken_0x15f2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f2e0) {
            ctx->pc = 0x15F284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f284;
        }
    }
    ctx->pc = 0x15F2E8u;
    // 0x15f2e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15F2E8u;
    {
        const bool branch_taken_0x15f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2e8) {
            ctx->pc = 0x15F348u;
            goto label_15f348;
        }
    }
    ctx->pc = 0x15F2F0u;
label_15f2f0:
    // 0x15f2f0: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x15f2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f2f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15f2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15F2F8u;
    {
        const bool branch_taken_0x15f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2f8) {
            ctx->pc = 0x15F33Cu;
            goto label_15f33c;
        }
    }
    ctx->pc = 0x15F300u;
label_15f300:
    // 0x15f300: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x15f300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f304: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15f304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15f308: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f310: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15f310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f314: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15f318: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x15f318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x15f31c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f320: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x15f324: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x15f324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f32c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f32cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f330: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F330u;
    SET_GPR_U32(ctx, 31, 0x15F338u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F330u, 0x15F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F338u;
label_15f338:
    // 0x15f338: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15f33c:
    // 0x15f33c: 0x2e430005  sltiu       $v1, $s2, 0x5
    ctx->pc = 0x15f33cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x15f340: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15F340u;
    {
        const bool branch_taken_0x15f340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f340) {
            ctx->pc = 0x15F300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f300;
        }
    }
    ctx->pc = 0x15F348u;
label_15f348:
    // 0x15f348: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15f348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15f34c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15f34cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f350: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15f350u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15f354: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15f354u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15f358: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15f358u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15f35c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15f35cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f36c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f370: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x15f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15f374: 0x3e00008  jr          $ra
    ctx->pc = 0x15F374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F37Cu;
    // 0x15f37c: 0x0  nop
    ctx->pc = 0x15f37cu;
    // NOP
    ctx->pc = 0x15f380u;
}
