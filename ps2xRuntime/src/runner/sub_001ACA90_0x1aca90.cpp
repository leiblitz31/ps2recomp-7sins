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

// Function: sub_001ACA90
// Address: 0x1aca90 - 0x1ad680
void sub_001ACA90_0x1aca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACA90_0x1aca90");
#endif

    switch (ctx->pc) {
        case 0x1acae4u: goto label_1acae4;
        case 0x1acb08u: goto label_1acb08;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb64u: goto label_1acb64;
        case 0x1acb84u: goto label_1acb84;
        case 0x1acba0u: goto label_1acba0;
        case 0x1acbb0u: goto label_1acbb0;
        case 0x1acbd0u: goto label_1acbd0;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc28u: goto label_1acc28;
        case 0x1acc44u: goto label_1acc44;
        case 0x1acc54u: goto label_1acc54;
        case 0x1acc74u: goto label_1acc74;
        case 0x1acc94u: goto label_1acc94;
        case 0x1acca0u: goto label_1acca0;
        case 0x1accbcu: goto label_1accbc;
        case 0x1accd8u: goto label_1accd8;
        case 0x1acce4u: goto label_1acce4;
        case 0x1acd00u: goto label_1acd00;
        case 0x1acd20u: goto label_1acd20;
        case 0x1acd2cu: goto label_1acd2c;
        case 0x1acd48u: goto label_1acd48;
        case 0x1acd64u: goto label_1acd64;
        case 0x1acd74u: goto label_1acd74;
        case 0x1acd90u: goto label_1acd90;
        case 0x1acdb0u: goto label_1acdb0;
        case 0x1acdbcu: goto label_1acdbc;
        case 0x1acde0u: goto label_1acde0;
        case 0x1acdfcu: goto label_1acdfc;
        case 0x1ace08u: goto label_1ace08;
        case 0x1ace24u: goto label_1ace24;
        case 0x1ace44u: goto label_1ace44;
        case 0x1ace50u: goto label_1ace50;
        case 0x1ace6cu: goto label_1ace6c;
        case 0x1ace88u: goto label_1ace88;
        case 0x1ace94u: goto label_1ace94;
        case 0x1aceb0u: goto label_1aceb0;
        case 0x1aced0u: goto label_1aced0;
        case 0x1acedcu: goto label_1acedc;
        case 0x1acef8u: goto label_1acef8;
        case 0x1acf14u: goto label_1acf14;
        case 0x1acf20u: goto label_1acf20;
        case 0x1acf3cu: goto label_1acf3c;
        case 0x1acf5cu: goto label_1acf5c;
        case 0x1acf68u: goto label_1acf68;
        case 0x1acf84u: goto label_1acf84;
        case 0x1acfa0u: goto label_1acfa0;
        case 0x1acfacu: goto label_1acfac;
        case 0x1acfc8u: goto label_1acfc8;
        case 0x1acfe8u: goto label_1acfe8;
        case 0x1acff4u: goto label_1acff4;
        case 0x1ad010u: goto label_1ad010;
        case 0x1ad02cu: goto label_1ad02c;
        case 0x1ad038u: goto label_1ad038;
        case 0x1ad054u: goto label_1ad054;
        case 0x1ad074u: goto label_1ad074;
        case 0x1ad080u: goto label_1ad080;
        case 0x1ad09cu: goto label_1ad09c;
        case 0x1ad0b8u: goto label_1ad0b8;
        case 0x1ad0c4u: goto label_1ad0c4;
        case 0x1ad0e0u: goto label_1ad0e0;
        case 0x1ad100u: goto label_1ad100;
        case 0x1ad10cu: goto label_1ad10c;
        case 0x1ad128u: goto label_1ad128;
        case 0x1ad144u: goto label_1ad144;
        case 0x1ad154u: goto label_1ad154;
        case 0x1ad178u: goto label_1ad178;
        case 0x1ad1a0u: goto label_1ad1a0;
        case 0x1ad1acu: goto label_1ad1ac;
        case 0x1ad1ccu: goto label_1ad1cc;
        case 0x1ad1ecu: goto label_1ad1ec;
        case 0x1ad200u: goto label_1ad200;
        case 0x1ad220u: goto label_1ad220;
        case 0x1ad244u: goto label_1ad244;
        case 0x1ad258u: goto label_1ad258;
        case 0x1ad278u: goto label_1ad278;
        case 0x1ad298u: goto label_1ad298;
        case 0x1ad2acu: goto label_1ad2ac;
        case 0x1ad2ccu: goto label_1ad2cc;
        case 0x1ad2f0u: goto label_1ad2f0;
        case 0x1ad318u: goto label_1ad318;
        case 0x1ad390u: goto label_1ad390;
        case 0x1ad464u: goto label_1ad464;
        case 0x1ad488u: goto label_1ad488;
        case 0x1ad4bcu: goto label_1ad4bc;
        case 0x1ad4e0u: goto label_1ad4e0;
        case 0x1ad548u: goto label_1ad548;
        case 0x1ad564u: goto label_1ad564;
        case 0x1ad574u: goto label_1ad574;
        case 0x1ad5fcu: goto label_1ad5fc;
        case 0x1ad664u: goto label_1ad664;
        default: break;
    }

    ctx->pc = 0x1aca90u;

    // 0x1aca90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aca94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aca98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aca9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1acaa0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1acaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1acaa4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acaa8: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x1acaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x1acaac: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x1acaacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acab0: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x1acab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x1acab4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acab8: 0x8c4400e0  lw          $a0, 0xE0($v0)
    ctx->pc = 0x1acab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1acabc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1acabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acac0: 0x1085001c  beq         $a0, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1ACAC0u;
    {
        const bool branch_taken_0x1acac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1acac0) {
            ctx->pc = 0x1ACB34u;
            goto label_1acb34;
        }
    }
    ctx->pc = 0x1ACAC8u;
    // 0x1acac8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1acac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acacc: 0x0  nop
    ctx->pc = 0x1acaccu;
    // NOP
    // 0x1acad0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1acad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1acad4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1acad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acadc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACADCu;
    SET_GPR_U32(ctx, 31, 0x1ACAE4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACADCu, 0x1ACAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACAE4u;
label_1acae4:
    // 0x1acae4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1acae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acae8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acaec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1acaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acaf0: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1acaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1acaf4: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x1acaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1acaf8: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x1acaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1acafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb00: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1ACB00u;
    SET_GPR_U32(ctx, 31, 0x1ACB08u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1ACB00u, 0x1ACB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB08u;
label_1acb08:
    // 0x1acb08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1acb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1acb0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1acb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1acb10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1acb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1acb14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1acb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1acb18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1acb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1acb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acb20: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x1acb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1acb24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1acb24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1acb28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb2c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1ACB2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB34u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1ACB2Cu, 0x1ACB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB34u;
label_1acb34:
    // 0x1acb34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acb38: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x1acb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1acb3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACB3Cu;
    {
        const bool branch_taken_0x1acb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acb3c) {
            ctx->pc = 0x1ACB58u;
            goto label_1acb58;
        }
    }
    ctx->pc = 0x1ACB44u;
    // 0x1acb44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acb48: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x1acb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1acb4c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1acb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1acb50: 0x1491002a  bne         $a0, $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1ACB50u;
    {
        const bool branch_taken_0x1acb50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x1acb50) {
            ctx->pc = 0x1ACBFCu;
            goto label_1acbfc;
        }
    }
    ctx->pc = 0x1ACB58u;
label_1acb58:
    // 0x1acb58: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acb5c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACB5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB64u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACB5Cu, 0x1ACB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB64u;
label_1acb64:
    // 0x1acb64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb68: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1acb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acb6c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1acb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1acb70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1acb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb74: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acb78: 0x24a567b0  addiu       $a1, $a1, 0x67B0
    ctx->pc = 0x1acb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26544));
    // 0x1acb7c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACB7Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB84u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACB7Cu, 0x1ACB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB84u;
label_1acb84:
    // 0x1acb84: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1acb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acb88: 0x8cc300a8  lw          $v1, 0xA8($a2)
    ctx->pc = 0x1acb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1acb8c: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1acb8cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb98: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACB98u;
    SET_GPR_U32(ctx, 31, 0x1ACBA0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACB98u, 0x1ACBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBA0u;
label_1acba0:
    // 0x1acba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1acba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acba4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acba8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACBA8u;
    SET_GPR_U32(ctx, 31, 0x1ACBB0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACBA8u, 0x1ACBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBB0u;
label_1acbb0:
    // 0x1acbb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbb4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1acbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acbb8: 0x8ca70030  lw          $a3, 0x30($a1)
    ctx->pc = 0x1acbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1acbbc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1acbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbc0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acbc4: 0x24a568c8  addiu       $a1, $a1, 0x68C8
    ctx->pc = 0x1acbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26824));
    // 0x1acbc8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACBC8u;
    SET_GPR_U32(ctx, 31, 0x1ACBD0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACBC8u, 0x1ACBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBD0u;
label_1acbd0:
    // 0x1acbd0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acbd4: 0x8c6600a8  lw          $a2, 0xA8($v1)
    ctx->pc = 0x1acbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1acbd8: 0x6182b  sltu        $v1, $zero, $a2
    ctx->pc = 0x1acbd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1acbdc: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1acbdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1acbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbe8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACBE8u;
    SET_GPR_U32(ctx, 31, 0x1ACBF0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACBE8u, 0x1ACBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBF0u;
label_1acbf0:
    // 0x1acbf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1acbf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbf4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1ACBF4u;
    {
        const bool branch_taken_0x1acbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acbf4) {
            ctx->pc = 0x1ACC94u;
            goto label_1acc94;
        }
    }
    ctx->pc = 0x1ACBFCu;
label_1acbfc:
    // 0x1acbfc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acc00: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACC00u;
    SET_GPR_U32(ctx, 31, 0x1ACC08u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACC00u, 0x1ACC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC08u;
label_1acc08:
    // 0x1acc08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc0c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1acc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acc10: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1acc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1acc14: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1acc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc18: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acc18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acc1c: 0x24a567c0  addiu       $a1, $a1, 0x67C0
    ctx->pc = 0x1acc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26560));
    // 0x1acc20: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACC20u;
    SET_GPR_U32(ctx, 31, 0x1ACC28u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACC20u, 0x1ACC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC28u;
label_1acc28:
    // 0x1acc28: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1acc28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acc2c: 0x8cc300a8  lw          $v1, 0xA8($a2)
    ctx->pc = 0x1acc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1acc30: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1acc30u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc3c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACC3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC44u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACC3Cu, 0x1ACC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC44u;
label_1acc44:
    // 0x1acc44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1acc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acc4c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACC4Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC54u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACC4Cu, 0x1ACC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC54u;
label_1acc54:
    // 0x1acc54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc58: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1acc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acc5c: 0x8ca70030  lw          $a3, 0x30($a1)
    ctx->pc = 0x1acc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1acc60: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1acc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc64: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acc68: 0x24a568d8  addiu       $a1, $a1, 0x68D8
    ctx->pc = 0x1acc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26840));
    // 0x1acc6c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACC6Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC74u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACC6Cu, 0x1ACC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC74u;
label_1acc74:
    // 0x1acc74: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acc78: 0x8c6600a8  lw          $a2, 0xA8($v1)
    ctx->pc = 0x1acc78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1acc7c: 0x6182b  sltu        $v1, $zero, $a2
    ctx->pc = 0x1acc7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1acc80: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1acc80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1acc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc8c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACC8Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC94u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACC8Cu, 0x1ACC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC94u;
label_1acc94:
    // 0x1acc94: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acc98: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACC98u;
    SET_GPR_U32(ctx, 31, 0x1ACCA0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACC98u, 0x1ACCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCA0u;
label_1acca0:
    // 0x1acca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acca4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acca8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1acca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1accac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1accacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1accb0: 0x24a568e8  addiu       $a1, $a1, 0x68E8
    ctx->pc = 0x1accb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26856));
    // 0x1accb4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACCB4u;
    SET_GPR_U32(ctx, 31, 0x1ACCBCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACCB4u, 0x1ACCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCBCu;
label_1accbc:
    // 0x1accbc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1accbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1accc0: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x1accc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1accc4: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1accc4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1accc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1accc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1accccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accd0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACCD0u;
    SET_GPR_U32(ctx, 31, 0x1ACCD8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACCD0u, 0x1ACCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCD8u;
label_1accd8:
    // 0x1accd8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1accd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1accdc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACCDCu;
    SET_GPR_U32(ctx, 31, 0x1ACCE4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACCDCu, 0x1ACCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCE4u;
label_1acce4:
    // 0x1acce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acce8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1accec: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1accecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1accf0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1accf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1accf4: 0x24a568f8  addiu       $a1, $a1, 0x68F8
    ctx->pc = 0x1accf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26872));
    // 0x1accf8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACCF8u;
    SET_GPR_U32(ctx, 31, 0x1ACD00u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACCF8u, 0x1ACD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD00u;
label_1acd00:
    // 0x1acd00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acd04: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1acd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1acd08: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1acd08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acd0c: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1acd0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1acd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd18: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACD18u;
    SET_GPR_U32(ctx, 31, 0x1ACD20u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACD18u, 0x1ACD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD20u;
label_1acd20:
    // 0x1acd20: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acd24: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACD24u;
    SET_GPR_U32(ctx, 31, 0x1ACD2Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACD24u, 0x1ACD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD2Cu;
label_1acd2c:
    // 0x1acd2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acd34: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1acd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1acd38: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acd3c: 0x24a56908  addiu       $a1, $a1, 0x6908
    ctx->pc = 0x1acd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26888));
    // 0x1acd40: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACD40u;
    SET_GPR_U32(ctx, 31, 0x1ACD48u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACD40u, 0x1ACD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD48u;
label_1acd48:
    // 0x1acd48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acd4c: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x1acd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1acd50: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1acd50u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd5c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACD5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD64u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACD5Cu, 0x1ACD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD64u;
label_1acd64:
    // 0x1acd64: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1acd64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acd68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1acd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd6c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACD6Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD74u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACD6Cu, 0x1ACD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD74u;
label_1acd74:
    // 0x1acd74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acd7c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1acd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1acd80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acd84: 0x24a56948  addiu       $a1, $a1, 0x6948
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26952));
    // 0x1acd88: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACD88u;
    SET_GPR_U32(ctx, 31, 0x1ACD90u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACD88u, 0x1ACD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD90u;
label_1acd90:
    // 0x1acd90: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acd94: 0x8c6500a8  lw          $a1, 0xA8($v1)
    ctx->pc = 0x1acd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1acd98: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x1acd98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1acd9c: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1acd9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1acda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acda4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acda8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACDA8u;
    SET_GPR_U32(ctx, 31, 0x1ACDB0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACDA8u, 0x1ACDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDB0u;
label_1acdb0:
    // 0x1acdb0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acdb4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACDB4u;
    SET_GPR_U32(ctx, 31, 0x1ACDBCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACDB4u, 0x1ACDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDBCu;
label_1acdbc:
    // 0x1acdbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdc0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acdc4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1acdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1acdc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1acdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdcc: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x1acdccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x1acdd0: 0x24e76818  addiu       $a3, $a3, 0x6818
    ctx->pc = 0x1acdd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26648));
    // 0x1acdd4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1acdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdd8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACDD8u;
    SET_GPR_U32(ctx, 31, 0x1ACDE0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACDD8u, 0x1ACDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDE0u;
label_1acde0:
    // 0x1acde0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acde4: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1acde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1acde8: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1acde8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdf4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACDF4u;
    SET_GPR_U32(ctx, 31, 0x1ACDFCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACDF4u, 0x1ACDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDFCu;
label_1acdfc:
    // 0x1acdfc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace00: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACE00u;
    SET_GPR_U32(ctx, 31, 0x1ACE08u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACE00u, 0x1ACE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE08u;
label_1ace08:
    // 0x1ace08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ace08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ace0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace10: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ace10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ace14: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ace14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ace18: 0x24a56828  addiu       $a1, $a1, 0x6828
    ctx->pc = 0x1ace18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26664));
    // 0x1ace1c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACE1Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE24u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACE1Cu, 0x1ACE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE24u;
label_1ace24:
    // 0x1ace24: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ace24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace28: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1ace28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1ace2c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1ace2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ace30: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1ace30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ace34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ace34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ace38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace3c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACE3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE44u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACE3Cu, 0x1ACE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE44u;
label_1ace44:
    // 0x1ace44: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ace44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace48: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACE48u;
    SET_GPR_U32(ctx, 31, 0x1ACE50u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACE48u, 0x1ACE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE50u;
label_1ace50:
    // 0x1ace50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ace50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ace54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace58: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ace58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ace5c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ace5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ace60: 0x24a56918  addiu       $a1, $a1, 0x6918
    ctx->pc = 0x1ace60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26904));
    // 0x1ace64: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACE64u;
    SET_GPR_U32(ctx, 31, 0x1ACE6Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACE64u, 0x1ACE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE6Cu;
label_1ace6c:
    // 0x1ace6c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ace6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace70: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1ace70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1ace74: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1ace74u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ace78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ace78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ace7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace80: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACE80u;
    SET_GPR_U32(ctx, 31, 0x1ACE88u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACE80u, 0x1ACE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE88u;
label_1ace88:
    // 0x1ace88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ace88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace8c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACE8Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE94u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACE8Cu, 0x1ACE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE94u;
label_1ace94:
    // 0x1ace94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ace94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ace98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace9c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ace9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1acea0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acea4: 0x24a56958  addiu       $a1, $a1, 0x6958
    ctx->pc = 0x1acea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26968));
    // 0x1acea8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACEA8u;
    SET_GPR_U32(ctx, 31, 0x1ACEB0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACEA8u, 0x1ACEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEB0u;
label_1aceb0:
    // 0x1aceb0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1aceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aceb4: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1aceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1aceb8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1aceb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acebc: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1acebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1acec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acec8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACEC8u;
    SET_GPR_U32(ctx, 31, 0x1ACED0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACEC8u, 0x1ACED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACED0u;
label_1aced0:
    // 0x1aced0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1aced0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aced4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACED4u;
    SET_GPR_U32(ctx, 31, 0x1ACEDCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACED4u, 0x1ACEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEDCu;
label_1acedc:
    // 0x1acedc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acee0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acee4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1acee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1acee8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1aceec: 0x24a56928  addiu       $a1, $a1, 0x6928
    ctx->pc = 0x1aceecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26920));
    // 0x1acef0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACEF0u;
    SET_GPR_U32(ctx, 31, 0x1ACEF8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACEF0u, 0x1ACEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEF8u;
label_1acef8:
    // 0x1acef8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acefc: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1acefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1acf00: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1acf00u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acf04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf0c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACF0Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF14u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACF0Cu, 0x1ACF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF14u;
label_1acf14:
    // 0x1acf14: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acf18: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACF18u;
    SET_GPR_U32(ctx, 31, 0x1ACF20u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACF18u, 0x1ACF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF20u;
label_1acf20:
    // 0x1acf20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acf28: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1acf2c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acf30: 0x24a56968  addiu       $a1, $a1, 0x6968
    ctx->pc = 0x1acf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26984));
    // 0x1acf34: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACF34u;
    SET_GPR_U32(ctx, 31, 0x1ACF3Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACF34u, 0x1ACF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF3Cu;
label_1acf3c:
    // 0x1acf3c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acf40: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1acf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1acf44: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1acf44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acf48: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1acf48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1acf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf54: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACF54u;
    SET_GPR_U32(ctx, 31, 0x1ACF5Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACF54u, 0x1ACF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF5Cu;
label_1acf5c:
    // 0x1acf5c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acf60: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACF60u;
    SET_GPR_U32(ctx, 31, 0x1ACF68u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACF60u, 0x1ACF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF68u;
label_1acf68:
    // 0x1acf68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acf70: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1acf74: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acf78: 0x24a56808  addiu       $a1, $a1, 0x6808
    ctx->pc = 0x1acf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26632));
    // 0x1acf7c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACF7Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF84u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACF7Cu, 0x1ACF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF84u;
label_1acf84:
    // 0x1acf84: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acf88: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1acf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1acf8c: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1acf8cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acf90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf98: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACF98u;
    SET_GPR_U32(ctx, 31, 0x1ACFA0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACF98u, 0x1ACFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFA0u;
label_1acfa0:
    // 0x1acfa0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acfa4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACFA4u;
    SET_GPR_U32(ctx, 31, 0x1ACFACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACFA4u, 0x1ACFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFACu;
label_1acfac:
    // 0x1acfac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acfacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfb0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acfb4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1acfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1acfb8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1acfbc: 0x24a56878  addiu       $a1, $a1, 0x6878
    ctx->pc = 0x1acfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26744));
    // 0x1acfc0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1ACFC0u;
    SET_GPR_U32(ctx, 31, 0x1ACFC8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1ACFC0u, 0x1ACFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFC8u;
label_1acfc8:
    // 0x1acfc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acfcc: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1acfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1acfd0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1acfd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1acfd4: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1acfd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1acfd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfe0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1ACFE0u;
    SET_GPR_U32(ctx, 31, 0x1ACFE8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1ACFE0u, 0x1ACFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFE8u;
label_1acfe8:
    // 0x1acfe8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acfec: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ACFECu;
    SET_GPR_U32(ctx, 31, 0x1ACFF4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ACFECu, 0x1ACFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFF4u;
label_1acff4:
    // 0x1acff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acff8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acffc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1acffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad000: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ad000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ad004: 0x24a56838  addiu       $a1, $a1, 0x6838
    ctx->pc = 0x1ad004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26680));
    // 0x1ad008: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD008u;
    SET_GPR_U32(ctx, 31, 0x1AD010u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD008u, 0x1AD010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD010u;
label_1ad010:
    // 0x1ad010: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ad010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad014: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1ad014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1ad018: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1ad018u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad020: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad024: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD024u;
    SET_GPR_U32(ctx, 31, 0x1AD02Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD024u, 0x1AD02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD02Cu;
label_1ad02c:
    // 0x1ad02c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad030: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD030u;
    SET_GPR_U32(ctx, 31, 0x1AD038u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD030u, 0x1AD038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD038u;
label_1ad038:
    // 0x1ad038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad03c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad040: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ad040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad044: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ad044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ad048: 0x24a56888  addiu       $a1, $a1, 0x6888
    ctx->pc = 0x1ad048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26760));
    // 0x1ad04c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD04Cu;
    SET_GPR_U32(ctx, 31, 0x1AD054u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD04Cu, 0x1AD054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD054u;
label_1ad054:
    // 0x1ad054: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ad054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad058: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1ad058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1ad05c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1ad05cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad060: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1ad060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ad064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad06c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD06Cu;
    SET_GPR_U32(ctx, 31, 0x1AD074u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD06Cu, 0x1AD074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD074u;
label_1ad074:
    // 0x1ad074: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad078: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD078u;
    SET_GPR_U32(ctx, 31, 0x1AD080u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD078u, 0x1AD080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD080u;
label_1ad080:
    // 0x1ad080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad084: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad088: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ad088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad08c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ad08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ad090: 0x24a56848  addiu       $a1, $a1, 0x6848
    ctx->pc = 0x1ad090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26696));
    // 0x1ad094: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD094u;
    SET_GPR_U32(ctx, 31, 0x1AD09Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD094u, 0x1AD09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD09Cu;
label_1ad09c:
    // 0x1ad09c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ad09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad0a0: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1ad0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1ad0a4: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1ad0a4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0b0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD0B0u;
    SET_GPR_U32(ctx, 31, 0x1AD0B8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD0B0u, 0x1AD0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0B8u;
label_1ad0b8:
    // 0x1ad0b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad0bc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD0BCu;
    SET_GPR_U32(ctx, 31, 0x1AD0C4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD0BCu, 0x1AD0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0C4u;
label_1ad0c4:
    // 0x1ad0c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad0cc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ad0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad0d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ad0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ad0d4: 0x24a56898  addiu       $a1, $a1, 0x6898
    ctx->pc = 0x1ad0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26776));
    // 0x1ad0d8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD0D8u;
    SET_GPR_U32(ctx, 31, 0x1AD0E0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD0D8u, 0x1AD0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0E0u;
label_1ad0e0:
    // 0x1ad0e0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ad0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad0e4: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x1ad0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1ad0e8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1ad0e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad0ec: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1ad0ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ad0f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0f8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD0F8u;
    SET_GPR_U32(ctx, 31, 0x1AD100u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD0F8u, 0x1AD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD100u;
label_1ad100:
    // 0x1ad100: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad104: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD104u;
    SET_GPR_U32(ctx, 31, 0x1AD10Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD104u, 0x1AD10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD10Cu;
label_1ad10c:
    // 0x1ad10c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad110: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad114: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ad114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad118: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ad118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ad11c: 0x24a56858  addiu       $a1, $a1, 0x6858
    ctx->pc = 0x1ad11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26712));
    // 0x1ad120: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD120u;
    SET_GPR_U32(ctx, 31, 0x1AD128u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD120u, 0x1AD128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD128u;
label_1ad128:
    // 0x1ad128: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1ad128u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad12c: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x1ad12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x1ad130: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1ad130u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad13c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD13Cu;
    SET_GPR_U32(ctx, 31, 0x1AD144u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD13Cu, 0x1AD144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD144u;
label_1ad144:
    // 0x1ad144: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1ad144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad148: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ad148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad14c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD14Cu;
    SET_GPR_U32(ctx, 31, 0x1AD154u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD14Cu, 0x1AD154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD154u;
label_1ad154:
    // 0x1ad154: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad158: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad15c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1ad15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad160: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ad160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad164: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ad164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ad168: 0x244268a8  addiu       $v0, $v0, 0x68A8
    ctx->pc = 0x1ad168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26792));
    // 0x1ad16c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad170: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD170u;
    SET_GPR_U32(ctx, 31, 0x1AD178u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD170u, 0x1AD178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD178u;
label_1ad178:
    // 0x1ad178: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ad178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad17c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1ad17cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad180: 0x8ce200a8  lw          $v0, 0xA8($a3)
    ctx->pc = 0x1ad180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 168)));
    // 0x1ad184: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ad188: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ad188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ad18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad190: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ad190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad194: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ad194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad198: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD198u;
    SET_GPR_U32(ctx, 31, 0x1AD1A0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD198u, 0x1AD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1A0u;
label_1ad1a0:
    // 0x1ad1a0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad1a4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD1A4u;
    SET_GPR_U32(ctx, 31, 0x1AD1ACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD1A4u, 0x1AD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1ACu;
label_1ad1ac:
    // 0x1ad1ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ad1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1b0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad1b4: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x1ad1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ad1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ad1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ad1c0: 0x24a56868  addiu       $a1, $a1, 0x6868
    ctx->pc = 0x1ad1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26728));
    // 0x1ad1c4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD1C4u;
    SET_GPR_U32(ctx, 31, 0x1AD1CCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD1C4u, 0x1AD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1CCu;
label_1ad1cc:
    // 0x1ad1cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1d0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1ad1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad1d4: 0x8ca200a8  lw          $v0, 0xA8($a1)
    ctx->pc = 0x1ad1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x1ad1d8: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1ad1d8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ad1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ad1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1e4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD1E4u;
    SET_GPR_U32(ctx, 31, 0x1AD1ECu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD1E4u, 0x1AD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1ECu;
label_1ad1ec:
    // 0x1ad1ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad1ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1f0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1ad1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad1f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ad1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD1F8u;
    SET_GPR_U32(ctx, 31, 0x1AD200u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD1F8u, 0x1AD200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD200u;
label_1ad200:
    // 0x1ad200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ad200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad204: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad208: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x1ad208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ad20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad210: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ad210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ad214: 0x24a568b8  addiu       $a1, $a1, 0x68B8
    ctx->pc = 0x1ad214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26808));
    // 0x1ad218: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD218u;
    SET_GPR_U32(ctx, 31, 0x1AD220u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD218u, 0x1AD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD220u;
label_1ad220:
    // 0x1ad220: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ad220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad224: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1ad224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad228: 0x8ca200a8  lw          $v0, 0xA8($a1)
    ctx->pc = 0x1ad228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x1ad22c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1ad22cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ad230: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1ad230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ad234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad238: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ad238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad23c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD23Cu;
    SET_GPR_U32(ctx, 31, 0x1AD244u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD23Cu, 0x1AD244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD244u;
label_1ad244:
    // 0x1ad244: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad248: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1ad248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad24c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ad24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad250: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD250u;
    SET_GPR_U32(ctx, 31, 0x1AD258u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD250u, 0x1AD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD258u;
label_1ad258:
    // 0x1ad258: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ad258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad25c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad260: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x1ad260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ad264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad268: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ad268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ad26c: 0x24a56938  addiu       $a1, $a1, 0x6938
    ctx->pc = 0x1ad26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26936));
    // 0x1ad270: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD270u;
    SET_GPR_U32(ctx, 31, 0x1AD278u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD270u, 0x1AD278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD278u;
label_1ad278:
    // 0x1ad278: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad27c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1ad27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad280: 0x8ca200a8  lw          $v0, 0xA8($a1)
    ctx->pc = 0x1ad280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x1ad284: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1ad284u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ad288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad28c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ad28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad290: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD290u;
    SET_GPR_U32(ctx, 31, 0x1AD298u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD290u, 0x1AD298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD298u;
label_1ad298:
    // 0x1ad298: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad29c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1ad29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad2a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ad2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2a4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD2A4u;
    SET_GPR_U32(ctx, 31, 0x1AD2ACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD2A4u, 0x1AD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2ACu;
label_1ad2ac:
    // 0x1ad2ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ad2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2b0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad2b4: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x1ad2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ad2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ad2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ad2c0: 0x24a56978  addiu       $a1, $a1, 0x6978
    ctx->pc = 0x1ad2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27000));
    // 0x1ad2c4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1AD2C4u;
    SET_GPR_U32(ctx, 31, 0x1AD2CCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1AD2C4u, 0x1AD2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2CCu;
label_1ad2cc:
    // 0x1ad2cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ad2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2d0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1ad2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad2d4: 0x8ca200a8  lw          $v0, 0xA8($a1)
    ctx->pc = 0x1ad2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x1ad2d8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1ad2d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ad2dc: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1ad2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ad2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2e4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ad2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2e8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1AD2E8u;
    SET_GPR_U32(ctx, 31, 0x1AD2F0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1AD2E8u, 0x1AD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2F0u;
label_1ad2f0:
    // 0x1ad2f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad2f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2f4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1ad2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad2f8: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1ad2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1ad2fc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1ad2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad300: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1ad300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad304: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ad304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ad308: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad30c: 0xac8200a8  sw          $v0, 0xA8($a0)
    ctx->pc = 0x1ad30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
    // 0x1ad310: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1AD310u;
    SET_GPR_U32(ctx, 31, 0x1AD318u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1AD310u, 0x1AD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD318u;
label_1ad318:
    // 0x1ad318: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD318u;
    {
        const bool branch_taken_0x1ad318 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ad318) {
            ctx->pc = 0x1AD334u;
            goto label_1ad334;
        }
    }
    ctx->pc = 0x1AD320u;
    // 0x1ad320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad324: 0x0  nop
    ctx->pc = 0x1ad324u;
    // NOP
    // 0x1ad328: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ad328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ad32c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD32Cu;
    {
        const bool branch_taken_0x1ad32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad32c) {
            ctx->pc = 0x1AD350u;
            goto label_1ad350;
        }
    }
    ctx->pc = 0x1AD334u;
label_1ad334:
    // 0x1ad334: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1ad334u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ad338: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ad338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ad33c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ad33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ad340: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ad340u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad344: 0x0  nop
    ctx->pc = 0x1ad344u;
    // NOP
    // 0x1ad348: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ad348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ad34c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ad34cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ad350:
    // 0x1ad350: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1ad350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1ad354: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ad354u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad358: 0x0  nop
    ctx->pc = 0x1ad358u;
    // NOP
    // 0x1ad35c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ad35cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ad360: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad364: 0xc44000c0  lwc1        $f0, 0xC0($v0)
    ctx->pc = 0x1ad364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ad368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad36c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ad36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad370: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ad370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad374: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD374u;
    {
        const bool branch_taken_0x1ad374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad374) {
            ctx->pc = 0x1AD380u;
            goto label_1ad380;
        }
    }
    ctx->pc = 0x1AD37Cu;
    // 0x1ad37c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad380:
    // 0x1ad380: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x1ad380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad384: 0xa2050128  sb          $a1, 0x128($s0)
    ctx->pc = 0x1ad384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 296), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ad388: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1AD388u;
    SET_GPR_U32(ctx, 31, 0x1AD390u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1AD388u, 0x1AD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD390u;
label_1ad390:
    // 0x1ad390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad394: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD394u;
    {
        const bool branch_taken_0x1ad394 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1ad394) {
            ctx->pc = 0x1AD3B0u;
            goto label_1ad3b0;
        }
    }
    ctx->pc = 0x1AD39Cu;
    // 0x1ad39c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ad39cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad3a0: 0x0  nop
    ctx->pc = 0x1ad3a0u;
    // NOP
    // 0x1ad3a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ad3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ad3a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD3A8u;
    {
        const bool branch_taken_0x1ad3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad3a8) {
            ctx->pc = 0x1AD3CCu;
            goto label_1ad3cc;
        }
    }
    ctx->pc = 0x1AD3B0u;
label_1ad3b0:
    // 0x1ad3b0: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x1ad3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1ad3b4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ad3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ad3b8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ad3b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1ad3bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ad3bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad3c0: 0x0  nop
    ctx->pc = 0x1ad3c0u;
    // NOP
    // 0x1ad3c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ad3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ad3c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ad3c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ad3cc:
    // 0x1ad3cc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ad3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1ad3d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ad3d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad3d4: 0x0  nop
    ctx->pc = 0x1ad3d4u;
    // NOP
    // 0x1ad3d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ad3d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ad3dc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ad3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad3e0: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1ad3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad3e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ad3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad3e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad3ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD3ECu;
    {
        const bool branch_taken_0x1ad3ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad3ec) {
            ctx->pc = 0x1AD3F8u;
            goto label_1ad3f8;
        }
    }
    ctx->pc = 0x1AD3F4u;
    // 0x1ad3f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ad3f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad3f8:
    // 0x1ad3f8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1ad3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad3fc: 0xa0c30129  sb          $v1, 0x129($a2)
    ctx->pc = 0x1ad3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 297), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad400: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad404: 0xa040012a  sb          $zero, 0x12A($v0)
    ctx->pc = 0x1ad404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 298), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad408: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad40c: 0x8c9000e0  lw          $s0, 0xE0($a0)
    ctx->pc = 0x1ad40cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1ad410: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad414: 0xac5000ac  sw          $s0, 0xAC($v0)
    ctx->pc = 0x1ad414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 16));
    // 0x1ad418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ad418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad41c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ad41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad420: 0xe4800118  swc1        $f0, 0x118($a0)
    ctx->pc = 0x1ad420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 280), bits); }
    // 0x1ad424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ad424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad428: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1ad428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad42c: 0xe4a00104  swc1        $f0, 0x104($a1)
    ctx->pc = 0x1ad42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 260), bits); }
    // 0x1ad430: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad434: 0x8c4400e0  lw          $a0, 0xE0($v0)
    ctx->pc = 0x1ad434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1ad438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad43c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AD43Cu;
    {
        const bool branch_taken_0x1ad43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ad43c) {
            ctx->pc = 0x1AD4C0u;
            goto label_1ad4c0;
        }
    }
    ctx->pc = 0x1AD444u;
    // 0x1ad444: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1ad444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad448: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ad448u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad44c: 0x0  nop
    ctx->pc = 0x1ad44cu;
    // NOP
    // 0x1ad450: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ad450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ad454: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad45c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1AD45Cu;
    SET_GPR_U32(ctx, 31, 0x1AD464u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1AD45Cu, 0x1AD464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD464u;
label_1ad464:
    // 0x1ad464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ad464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad468: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x1ad468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad46c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ad46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad470: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1ad470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1ad474: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x1ad474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1ad478: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1ad478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ad47c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad480: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1AD480u;
    SET_GPR_U32(ctx, 31, 0x1AD488u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1AD480u, 0x1AD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD488u;
label_1ad488:
    // 0x1ad488: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad48c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ad48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad490: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ad490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ad494: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ad494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1ad498: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1ad498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ad49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ad4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad4a4: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x1ad4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1ad4a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ad4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ad4acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ad4b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4b4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1AD4B4u;
    SET_GPR_U32(ctx, 31, 0x1AD4BCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1AD4B4u, 0x1AD4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4BCu;
label_1ad4bc:
    // 0x1ad4bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad4c0:
    // 0x1ad4c0: 0x3c103f80  lui         $s0, 0x3F80
    ctx->pc = 0x1ad4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad4c4: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1ad4c4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ad4c8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ad4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1ad4cc: 0x27859460  addiu       $a1, $gp, -0x6BA0
    ctx->pc = 0x1ad4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939744));
    // 0x1ad4d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ad4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad4d8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1AD4D8u;
    SET_GPR_U32(ctx, 31, 0x1AD4E0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1AD4D8u, 0x1AD4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4E0u;
label_1ad4e0:
    // 0x1ad4e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ad4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad4e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad4e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ad4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad4ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ad4ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ad4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD4F8u;
    // 0x1ad4f8: 0x0  nop
    ctx->pc = 0x1ad4f8u;
    // NOP
    // 0x1ad4fc: 0x0  nop
    ctx->pc = 0x1ad4fcu;
    // NOP
    // 0x1ad500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ad500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ad504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ad504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ad508: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ad508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ad50c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ad50cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ad510: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1ad510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1ad514: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ad514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad518: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad51c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AD51Cu;
    {
        const bool branch_taken_0x1ad51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad51c) {
            ctx->pc = 0x1AD57Cu;
            goto label_1ad57c;
        }
    }
    ctx->pc = 0x1AD524u;
    // 0x1ad524: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1ad524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1ad528: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad52c: 0x10030013  beq         $zero, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AD52Cu;
    {
        const bool branch_taken_0x1ad52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ad52c) {
            ctx->pc = 0x1AD57Cu;
            goto label_1ad57c;
        }
    }
    ctx->pc = 0x1AD534u;
    // 0x1ad534: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1ad534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1ad538: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ad538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad53c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1ad53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ad540: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1AD540u;
    SET_GPR_U32(ctx, 31, 0x1AD548u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1AD540u, 0x1AD548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD548u;
label_1ad548:
    // 0x1ad548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad54c: 0x1010000b  beq         $zero, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD54Cu;
    {
        const bool branch_taken_0x1ad54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1ad54c) {
            ctx->pc = 0x1AD57Cu;
            goto label_1ad57c;
        }
    }
    ctx->pc = 0x1AD554u;
    // 0x1ad554: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ad554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ad558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad55c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1AD55Cu;
    SET_GPR_U32(ctx, 31, 0x1AD564u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1AD55Cu, 0x1AD564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD564u;
label_1ad564:
    // 0x1ad564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad568: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ad568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad56c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1AD56Cu;
    SET_GPR_U32(ctx, 31, 0x1AD574u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1AD56Cu, 0x1AD574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD574u;
label_1ad574:
    // 0x1ad574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ad574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad578: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x1ad578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ad57c:
    // 0x1ad57c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ad57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad580: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ad580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad584: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ad584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ad588: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ad588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ad58c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD594u;
    // 0x1ad594: 0x0  nop
    ctx->pc = 0x1ad594u;
    // NOP
    // 0x1ad598: 0x0  nop
    ctx->pc = 0x1ad598u;
    // NOP
    // 0x1ad59c: 0x0  nop
    ctx->pc = 0x1ad59cu;
    // NOP
    // 0x1ad5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad5a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ad5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ad5ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ad5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ad5b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ad5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad5b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ad5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad5b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad5bc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD5BCu;
    {
        const bool branch_taken_0x1ad5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad5bc) {
            ctx->pc = 0x1AD5ECu;
            goto label_1ad5ec;
        }
    }
    ctx->pc = 0x1AD5C4u;
    // 0x1ad5c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad5c8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD5C8u;
    {
        const bool branch_taken_0x1ad5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad5c8) {
            ctx->pc = 0x1AD5ECu;
            goto label_1ad5ec;
        }
    }
    ctx->pc = 0x1AD5D0u;
    // 0x1ad5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad5d4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD5D4u;
    {
        const bool branch_taken_0x1ad5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad5d4) {
            ctx->pc = 0x1AD5ECu;
            goto label_1ad5ec;
        }
    }
    ctx->pc = 0x1AD5DCu;
    // 0x1ad5dc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD5DCu;
    {
        const bool branch_taken_0x1ad5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5dc) {
            ctx->pc = 0x1AD604u;
            goto label_1ad604;
        }
    }
    ctx->pc = 0x1AD5E4u;
    // 0x1ad5e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD5E4u;
    {
        const bool branch_taken_0x1ad5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5e4) {
            ctx->pc = 0x1AD604u;
            goto label_1ad604;
        }
    }
    ctx->pc = 0x1AD5ECu;
label_1ad5ec:
    // 0x1ad5ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ad5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad5f0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ad5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad5f4: 0xc064e74  jal         func_1939D0
    ctx->pc = 0x1AD5F4u;
    SET_GPR_U32(ctx, 31, 0x1AD5FCu);
    ctx->pc = 0x1939D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1939D0u, 0x1AD5F4u, 0x1AD5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD5FCu;
label_1ad5fc:
    // 0x1ad5fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AD5FCu;
    {
        const bool branch_taken_0x1ad5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5fc) {
            ctx->pc = 0x1AD664u;
            goto label_1ad664;
        }
    }
    ctx->pc = 0x1AD604u;
label_1ad604:
    // 0x1ad604: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad608: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ad608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ad60c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1ad60cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ad610: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AD610u;
    {
        const bool branch_taken_0x1ad610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad610) {
            ctx->pc = 0x1AD654u;
            goto label_1ad654;
        }
    }
    ctx->pc = 0x1AD618u;
    // 0x1ad618: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ad618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ad61c: 0x246386c0  addiu       $v1, $v1, -0x7940
    ctx->pc = 0x1ad61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936256));
    // 0x1ad620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad628: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad62c: 0x400008  jr          $v0
    ctx->pc = 0x1AD62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD634u: goto label_1ad634;
            case 0x1AD654u: goto label_1ad654;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD62Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AD634u;
label_1ad634:
    // 0x1ad634: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad638: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x1ad638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1ad63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad640: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD640u;
    {
        const bool branch_taken_0x1ad640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad640) {
            ctx->pc = 0x1AD654u;
            goto label_1ad654;
        }
    }
    ctx->pc = 0x1AD648u;
    // 0x1ad648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ad648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad64c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ad64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ad650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1ad654:
    // 0x1ad654: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ad654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad658: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ad658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad65c: 0xc064e74  jal         func_1939D0
    ctx->pc = 0x1AD65Cu;
    SET_GPR_U32(ctx, 31, 0x1AD664u);
    ctx->pc = 0x1939D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1939D0u, 0x1AD65Cu, 0x1AD664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD664u;
label_1ad664:
    // 0x1ad664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad668: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ad668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ad66c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD674u;
    // 0x1ad674: 0x0  nop
    ctx->pc = 0x1ad674u;
    // NOP
    // 0x1ad678: 0x0  nop
    ctx->pc = 0x1ad678u;
    // NOP
    // 0x1ad67c: 0x0  nop
    ctx->pc = 0x1ad67cu;
    // NOP
    ctx->pc = 0x1ad680u;
}
